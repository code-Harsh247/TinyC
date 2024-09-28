%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tinyC2_22CS30028_22CS10008.h"

void yyerror(const char *s);
int yylex();  

%}

%code requires {
    #ifndef TINYC_22CS30028_22CS10008_H
    #define TINYC_22CS30028_22CS10008_H

    struct TreeNode {
        char *data;
        struct TreeNode* siblings;
        struct TreeNode* children;
    }typedef TreeNode;

    #endif
}


%union {
    char* stringVal;
    TreeNode* node;
}

%token AUTO ENUM RESTRICT UNSIGNED BREAK EXTERN RETURN VOID CASE FLOAT SHORT VOLATILE CHAR
%token FOR SIGNED WHILE CONST GOTO SIZEOF BOOL CONTINUE IF STATIC COMPLEX DEFAULT
%token INLINE STRUCT IMAGINARY DO INT SWITCH DOUBLE LONG TYPEDEF ELSE REGISTER UNION
%token ARROW INCREMENT DECREMENT LEFT_SHIFT RIGHT_SHIFT LESS_EQUAL GREATER_EQUAL
%token EQUAL NOT_EQUAL LOGICAL_AND LOGICAL_OR ELLIPSIS STAR_ASSIGN SLASH_ASSIGN
%token PERCENT_ASSIGN PLUS_ASSIGN MINUS_ASSIGN LEFT_SHIFT_ASSIGN RIGHT_SHIFT_ASSIGN
%token AMPERSAND_ASSIGN CARET_ASSIGN VERTICAL_BAR_ASSIGN COMMA HASH LBRACKET RBRACKET
%token LPAREN RPAREN LBRACE RBRACE DOT AMPERSAND ASTERISK PLUS MINUS TILDE BANG SLASH
%token PERCENT LESS GREATER CARET VERTICAL_BAR QUESTION COLON SEMICOLON ASSIGN
%token <stringVal> ID CONSTANT SL

%start translation_unit

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%type <node> primary_expression postfix_expression argument_expression_list_opt argument_expression_list unary_expression unary_operator cast_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression assignment_operator expression constant_expression declaration declaration_specifiers init_declarator_list_opt init_declarator_list init_declarator storage_class_specifier type_specifier specifier_qualifier_list specifier_qualifier_list_opt type_qualifier function_specifier declarator direct_declarator pointer type_qualifier_list parameter_type_list parameter_list parameter_declaration identifier_list type_name initializer initializer_list designation designator_list designator statement labeled_statement compound_statement block_item_list block_item expression_statement selection_statement iteration_statement jump_statement translation_unit external_declaration function_definition declaration_list pointer_opt type_qualifier_list_opt assignment_expression_opt identifier_list_opt designation_opt block_item_list_opt expression_opt declaration_list_opt declaration_specifiers_opt


%%

primary_expression
    : ID    {$$ = createNode($1);}
    | CONSTANT {$$ = createNode($1);}
    | SL    {$$ = createNode($1);}
    | LPAREN expression RPAREN  {
        $$ = createNode("primary_expression");
        addChild($$, createNode("("));
        addChild($$, $2);
        addChild($$, createNode(")"));
    }
    ;

postfix_expression
    : primary_expression {
        $$ = createNode("postfix_expression");
        addChild($$, $1);
    }
    | postfix_expression LBRACKET expression RBRACKET {
        $$ = createNode("postfix_expression");
        addChild($$, $1);
        addChild($$, createNode("["));
        addChild($$, $3);
        addChild($$, createNode("]"));
    }
    | postfix_expression LPAREN argument_expression_list_opt RPAREN {
        $$ = createNode("postfix_expression");
        addChild($$, $1);
        addChild($$, createNode("("));
        addChild($$, $3);
        addChild($$, createNode(")"));
    }
    | postfix_expression DOT ID {
        $$ = createNode("postfix_expression");
        addChild($$, $1);
        addChild($$, createNode("."));
        addChild($$, createNode($3));
    }
    | postfix_expression ARROW ID {
        $$ = createNode("postfix_expression");
        addChild($$, $1);
        addChild($$, createNode("->"));
        addChild($$, createNode($3));
    }
    | postfix_expression INCREMENT {
        $$ = createNode("postfix_expression");
        addChild($$, $1);
        addChild($$, createNode("++"));
    }
    | postfix_expression DECREMENT {
        $$ = createNode("postfix_expression");
        addChild($$, $1);
        addChild($$, createNode("--"));
    }
    | LPAREN type_name RPAREN LBRACE initializer_list RBRACE {
        $$ = createNode("postfix_expression");
        addChild($$, createNode("("));
        addChild($$, $2);
        addChild($$, createNode(")"));
        addChild($$, createNode("{"));
        addChild($$, $5);
        addChild($$, createNode("}"));
    }
    | LPAREN type_name RPAREN LBRACE initializer_list COMMA RBRACE {
        $$ = createNode("postfix_expression");
        addChild($$, createNode("("));
        addChild($$, $2);
        addChild($$, createNode(")"));
        addChild($$, createNode("{"));
        addChild($$, $5);
        addChild($$, createNode(","));
        addChild($$, createNode("}"));
    }
    ;

argument_expression_list_opt
    : argument_expression_list {
        $$ = createNode("argument_expression_list");
        addChild($$, $1);
    }
    | {$$ = createNode("ε");}
    ;

argument_expression_list
    : assignment_expression {
        $$ = createNode("argument_expression_list");
        addChild($$, $1);
    }
    | argument_expression_list COMMA assignment_expression {
        $$ = createNode("argument_expression_list");
        addChild($$, $1);
        addChild($$, createNode(","));
        addChild($$, $3);
    }
    ;

unary_expression 
    : postfix_expression {
        $$ = createNode("unary_expression");
        addChild($$, $1);
    }
    | INCREMENT unary_expression {
        $$ = createNode("unary_expression");
        addChild($$, createNode("++"));
        addChild($$, $2);
    }
    | DECREMENT unary_expression {
        $$ = createNode("unary_expression");
        addChild($$, createNode("--"));
        addChild($$, $2);
    }
    | unary_operator cast_expression {
        $$ = createNode("unary_expression");
        addChild($$, $1);
        addChild($$, $2);
    }
    | SIZEOF unary_expression {
        $$ = createNode("unary_expression");
        addChild($$, createNode("sizeof"));
        addChild($$, $2);
    }
    | SIZEOF LPAREN type_name RPAREN {
        $$ = createNode("unary_expression");
        addChild($$, createNode("sizeof"));
        addChild($$, createNode("("));
        addChild($$, $3);
        addChild($$, createNode(")"));
    }
    ;

unary_operator
    : AMPERSAND {
        $$ = createNode("&");
    }
    | ASTERISK {
        $$ = createNode("*");
    }
    | PLUS {
        $$ = createNode("+");
    }
    | MINUS {
        $$ = createNode("-");
    }
    | TILDE {
        $$ = createNode("~");
    }
    | BANG {
        $$ = createNode("!");
    }
    ;

cast_expression
    : unary_expression {
        $$ = createNode("cast_expression");
        addChild($$, $1);
    }
    | LPAREN type_name RPAREN cast_expression {
        $$ = createNode("cast_expression");
        addChild($$, createNode("("));
        addChild($$, $2);
        addChild($$, createNode(")"));
        addChild($$, $4);
    }
    ;

multiplicative_expression
    : cast_expression {
        $$ = createNode("multiplicative_expression");
        addChild($$, $1);
    }
    | multiplicative_expression ASTERISK cast_expression {
        $$ = createNode("multiplicative_expression");
        addChild($$, $1);
        addChild($$, createNode("*"));
        addChild($$, $3);
    }
    | multiplicative_expression SLASH cast_expression {
        $$ = createNode("multiplicative_expression");
        addChild($$, $1);
        addChild($$, createNode("/"));
        addChild($$, $3);
    }
    | multiplicative_expression PERCENT cast_expression {
        $$ = createNode("multiplicative_expression");
        addChild($$, $1);
        addChild($$, createNode("%"));
        addChild($$, $3);
    }
    ;

additive_expression
    : multiplicative_expression {
        $$ = createNode("additive_expression");
        addChild($$, $1);
    }
    | additive_expression PLUS multiplicative_expression {
        $$ = createNode("additive_expression");
        addChild($$, $1);
        addChild($$, createNode("+"));
        addChild($$, $3);
    }
    | additive_expression MINUS multiplicative_expression {
        $$ = createNode("additive_expression");
        addChild($$, $1);
        addChild($$, createNode("-"));
        addChild($$, $3);
    }
    ;

shift_expression
    : additive_expression {
        $$ = createNode("shift_expression");
        addChild($$, $1);
    }
    | shift_expression LEFT_SHIFT additive_expression {
        $$ = createNode("shift_expression");
        addChild($$, $1);
        addChild($$, createNode("<<"));
        addChild($$, $3);
    }
    | shift_expression RIGHT_SHIFT additive_expression {
        $$ = createNode("shift_expression");
        addChild($$, $1);
        addChild($$, createNode(">>"));
        addChild($$, $3);
    }
    ;

relational_expression
    : shift_expression {
        $$ = createNode("relational_expression");
        addChild($$, $1);
    }
    | relational_expression LESS shift_expression {
        $$ = createNode("relational_expression");
        addChild($$, $1);
        addChild($$, createNode("<"));
        addChild($$, $3);
    }
    | relational_expression GREATER shift_expression {
        $$ = createNode("relational_expression");
        addChild($$, $1);
        addChild($$, createNode(">"));
        addChild($$, $3);
    }
    | relational_expression LESS_EQUAL shift_expression {
        $$ = createNode("relational_expression");
        addChild($$, $1);
        addChild($$, createNode("<="));
        addChild($$, $3);
    }
    | relational_expression GREATER_EQUAL shift_expression {
        $$ = createNode("relational_expression");
        addChild($$, $1);
        addChild($$, createNode(">="));
        addChild($$, $3);
    }
    ;

equality_expression
    : relational_expression {
        $$ = createNode("equality_expression");
        addChild($$, $1);
    }
    | equality_expression EQUAL relational_expression {
        $$ = createNode("equality_expression");
        addChild($$, $1);
        addChild($$, createNode("=="));
        addChild($$, $3);
    }
    | equality_expression NOT_EQUAL relational_expression {
        $$ = createNode("equality_expression");
        addChild($$, $1);
        addChild($$, createNode("!="));
        addChild($$, $3);
    }
    ;

and_expression
    : equality_expression {
        $$ = createNode("and_expression");
        addChild($$, $1);
    }
    | and_expression AMPERSAND equality_expression {
        $$ = createNode("and_expression");
        addChild($$, $1);
        addChild($$, createNode("&"));
        addChild($$, $3);
    }
    ;

exclusive_or_expression
    : and_expression {
        $$ = createNode("exclusive_or_expression");
        addChild($$, $1);
    }
    | exclusive_or_expression CARET and_expression {
        $$ = createNode("exclusive_or_expression");
        addChild($$, $1);
        addChild($$, createNode("^"));
        addChild($$, $3);
    }
    ;

inclusive_or_expression
    : exclusive_or_expression {
        $$ = createNode("inclusive_or_expression");
        addChild($$, $1);
    }
    | inclusive_or_expression VERTICAL_BAR exclusive_or_expression {
        $$ = createNode("inclusive_or_expression");
        addChild($$, $1);
        addChild($$, createNode("|"));
        addChild($$, $3);
    }
    ;

logical_and_expression
    : inclusive_or_expression {
        $$ = createNode("logical_and_expression");
        addChild($$, $1);
    }
    | logical_and_expression LOGICAL_AND inclusive_or_expression {
        $$ = createNode("logical_and_expression");
        addChild($$, $1);
        addChild($$, createNode("&&"));
        addChild($$, $3);
    }
    ;

logical_or_expression
    : logical_and_expression {
        $$ = createNode("logical_or_expression");
        addChild($$, $1);
    }
    | logical_or_expression LOGICAL_OR logical_and_expression {
        $$ = createNode("logical_or_expression");
        addChild($$, $1);
        addChild($$, createNode("||"));
        addChild($$, $3);
    }
    ;

conditional_expression
    : logical_or_expression {
        $$ = createNode("conditional_expression");
        addChild($$, $1);
    }
    | logical_or_expression QUESTION expression COLON conditional_expression {
        $$ = createNode("conditional_expression");
        addChild($$, $1);
        addChild($$, createNode("?"));
        addChild($$, $3);
        addChild($$, createNode(":"));
        addChild($$, $5);
    }
    ;

assignment_expression
    : conditional_expression {
        $$ = createNode("assignment_expression");
        addChild($$, $1);
    }
    | unary_expression assignment_operator assignment_expression {
        $$ = createNode("assignment_expression");
        addChild($$, $1);
        addChild($$, $2);
        addChild($$, $3);
    }
    ;

assignment_operator
    : ASSIGN {
        $$ = createNode("=");
    }
    | STAR_ASSIGN {
        $$ = createNode("*=");
    }
    | SLASH_ASSIGN {
        $$ = createNode("/=");
    }
    | PERCENT_ASSIGN {
        $$ = createNode("%=");
    }
    | PLUS_ASSIGN {
        $$ = createNode("+=");
    }
    | MINUS_ASSIGN {
        $$ = createNode("-=");
    }
    | LEFT_SHIFT_ASSIGN {
        $$ = createNode("<<=");
    }
    | RIGHT_SHIFT_ASSIGN {
        $$ = createNode(">>=");
    }
    | AMPERSAND_ASSIGN {
        $$ = createNode("&=");
    }
    | CARET_ASSIGN {
        $$ = createNode("^=");
    }
    | VERTICAL_BAR_ASSIGN {
        $$ = createNode("|=");
    }
    ;

expression
    : assignment_expression {
        $$ = createNode("expression");
        addChild($$, $1);
    }
    | expression COMMA assignment_expression {
        $$ = createNode("expression");
        addChild($$, $1);
        addChild($$, createNode(","));
        addChild($$, $3);
    }
    ;

constant_expression
    : conditional_expression {
        $$ = createNode("constant_expression");
        addChild($$, $1);
    }
    ;

declaration
    : declaration_specifiers init_declarator_list_opt SEMICOLON {
        $$ = createNode("declaration");
        addChild($$, $1);
        addChild($$, $2);
        addChild($$, createNode(";"));  
    }
    ;

declaration_specifiers
    : storage_class_specifier declaration_specifiers_opt {
        $$ = createNode("declaration_specifiers");
        addChild($$, $1);
        addChild($$, $2);
    }
    | type_specifier declaration_specifiers_opt {
        $$ = createNode("declaration_specifiers");
        addChild($$, $1);
        addChild($$, $2);
    }
    | type_qualifier declaration_specifiers_opt     {
        $$ = createNode("declaration_specifiers");
        addChild($$, $1);
        addChild($$, $2);
    }
    | function_specifier declaration_specifiers_opt {
        $$ = createNode("declaration_specifiers");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

init_declarator_list_opt
    : init_declarator_list {
        $$ = createNode("init_declarator_list");
        addChild($$, $1);
    }
    | {$$ = createNode("ε");}
    ;

init_declarator_list
    : init_declarator {
        $$ = createNode("init_declarator_list");
        addChild($$, $1);
    }
    | init_declarator_list COMMA init_declarator {
        $$ = createNode("init_declarator_list");
        addChild($$, $1);
        addChild($$, createNode(","));
        addChild($$, $3);
    }
    ;

init_declarator
    : declarator {
        $$ = createNode("init_declarator");
        addChild($$, $1);
    }
    | declarator ASSIGN initializer {
        $$ = createNode("init_declarator");
        addChild($$, $1);
        addChild($$, createNode("="));
        addChild($$, $3);
    }
    ;

storage_class_specifier
    : EXTERN {
        $$ = createNode("extern");
    }
    | STATIC {
        $$ = createNode("static");
    }
    | AUTO {
        $$ = createNode("auto");
    }
    | REGISTER {
        $$ = createNode("register");
    }
    ;

type_specifier
    : VOID {
        $$ = createNode("void");
    }
    | CHAR {
        $$ = createNode("char");
    }
    | SHORT {
        $$ = createNode("short");
    }
    | INT {
        $$ = createNode("int");
    }
    | LONG {
        $$ = createNode("long");
    }
    | FLOAT {
        $$ = createNode("float");
    }
    | DOUBLE {
        $$ = createNode("double");
    }
    | SIGNED {
        $$ = createNode("signed");
    }
    | UNSIGNED {
        $$ = createNode("unsigned");
    }
    | BOOL {
        $$ = createNode("_Bool");
    }
    | COMPLEX {
        $$ = createNode("_Complex");
    }
    | IMAGINARY {
        $$ = createNode("_Imaginary");
    }
    ;

specifier_qualifier_list
    : type_specifier specifier_qualifier_list_opt {
        $$ = createNode("specifier_qualifier_list");
        addChild($$, $1);
        addChild($$, $2);
    }
    | type_qualifier specifier_qualifier_list_opt {
        $$ = createNode("specifier_qualifier_list");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

specifier_qualifier_list_opt
    : specifier_qualifier_list {
        $$ = createNode("specifier_qualifier_list");
        addChild($$, $1);
    }
    | {$$=createNode("ε");}
    ;

type_qualifier
    : CONST {
        $$ = createNode("const");
    }
    | RESTRICT {
        $$ = createNode("restrict");
    }
    | VOLATILE {
        $$ = createNode("volatile");
    }
    ;

function_specifier
    : INLINE {
        $$ = createNode("inline");
    }
    ;

declarator
    : pointer_opt direct_declarator {
        $$ = createNode("declarator");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

direct_declarator
    : ID {
        $$ = createNode($1);
    }
    | LPAREN declarator RPAREN {
        $$ = createNode("direct_declarator");
        addChild($$, createNode("("));
        addChild($$, $2);
        addChild($$, createNode(")"));
    }
    | direct_declarator LBRACKET type_qualifier_list_opt assignment_expression_opt RBRACKET {
        $$ = createNode("direct_declarator");
        addChild($$, $1);
        addChild($$, createNode("["));
        addChild($$, $3);
        addChild($$, $4);
        addChild($$, createNode("]"));
    }
    | direct_declarator LBRACKET STATIC type_qualifier_list_opt assignment_expression RBRACKET {
        $$ = createNode("direct_declarator");
        addChild($$, $1);
        addChild($$, createNode("["));
        addChild($$, createNode("static"));
        addChild($$, $4);
        addChild($$, $5);
        addChild($$, createNode("]"));
    }
    | direct_declarator LBRACKET type_qualifier_list STATIC assignment_expression RBRACKET {
        $$ = createNode("direct_declarator");
        addChild($$, $1);
        addChild($$, createNode("["));
        addChild($$, $3);
        addChild($$, createNode("static"));
        addChild($$, $5);
        addChild($$, createNode("]"));
    }
    | direct_declarator LBRACKET type_qualifier_list_opt ASTERISK RBRACKET {
        $$ = createNode("direct_declarator");
        addChild($$, $1);
        addChild($$, createNode("["));
        addChild($$, $3);
        addChild($$, createNode("*"));
        addChild($$, createNode("]"));
    }
    | direct_declarator LPAREN parameter_type_list RPAREN {
        $$ = createNode("direct_declarator");
        addChild($$, $1);
        addChild($$, createNode("("));
        addChild($$, $3);
        addChild($$, createNode(")"));
    }
    | direct_declarator LPAREN identifier_list_opt RPAREN {
        $$ = createNode("direct_declarator");
        addChild($$, $1);
        addChild($$, createNode("("));
        addChild($$, $3);
        addChild($$, createNode(")"));
    }
    ;

pointer
    : ASTERISK type_qualifier_list_opt {
        $$ = createNode("pointer");
        addChild($$, createNode("*"));
        addChild($$, $2);
    }
    | ASTERISK type_qualifier_list_opt pointer {
        $$ = createNode("pointer");
        addChild($$, createNode("*"));
        addChild($$, $2);
        addChild($$, $3);
    }
    ;

type_qualifier_list
    : type_qualifier {
        $$ = createNode("type_qualifier_list");
        addChild($$, $1);
    }
    | type_qualifier_list type_qualifier {
        $$ = createNode("type_qualifier_list");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

parameter_type_list
    : parameter_list {
        $$ = createNode("parameter_type_list");
        addChild($$, $1);
    }
    | parameter_list COMMA ELLIPSIS {
        $$ = createNode("parameter_type_list");
        addChild($$, $1);
        addChild($$, createNode(","));
        addChild($$, createNode("..."));
    }
    ;

parameter_list
    : parameter_declaration {
        $$ = createNode("parameter_list");
        addChild($$, $1);
    }
    | parameter_list COMMA parameter_declaration {
        $$ = createNode("parameter_list");
        addChild($$, $1);
        addChild($$, createNode(","));
        addChild($$, $3);
    }
    ;

parameter_declaration
    : declaration_specifiers declarator {
        $$ = createNode("parameter_declaration");
        addChild($$, $1);
        addChild($$, $2);
    }
    | declaration_specifiers {
        $$ = createNode("parameter_declaration");
        addChild($$, $1);
    }
    ;

identifier_list
    : ID {
        $$ = createNode($1);
    }
    | identifier_list COMMA ID {
        $$ = createNode("identifier_list");
        addChild($$, $1);
        addChild($$, createNode(","));
        addChild($$, createNode($3));
    }
    ;

type_name
    : specifier_qualifier_list {
        $$ = createNode("type_name");
        addChild($$, $1);
    }
    ;

initializer
    : assignment_expression {
        $$ = createNode("initializer");
        addChild($$, $1);
    } 
    | LBRACE initializer_list RBRACE {
        $$ = createNode("initializer");
        addChild($$, createNode("{"));
        addChild($$, $2);
        addChild($$, createNode("}"));
    }
    | LBRACE initializer_list COMMA RBRACE {
        $$ = createNode("initializer");
        addChild($$, createNode("{"));
        addChild($$, $2);
        addChild($$, createNode(","));
        addChild($$, createNode("}"));
    }
    ;

initializer_list
    : designation_opt initializer {$$ = createNode("initializer_list"); addChild($$, $1); addChild($$, $2);}
    | initializer_list COMMA designation_opt initializer {
        $$ = createNode("initializer_list");
        addChild($$, $1);
        addChild($$, createNode(","));
        addChild($$, $3);
        addChild($$, $4);
    }
    ;

designation
    : designator_list ASSIGN {
        $$ = createNode("designation");
        addChild($$, $1);
        addChild($$, createNode("="));
    }
    ;

designator_list
    : designator { $$ = createNode("designator_list"); addChild($$, $1); }
    | designator_list designator {
        $$ = createNode("designator_list");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

designator
    : LBRACKET constant_expression RBRACKET {
        $$ = createNode("designator");
        addChild($$, createNode("["));
        addChild($$, $2);
        addChild($$, createNode("]"));
    }
    | DOT ID {
        $$ = createNode("designator");
        addChild($$, createNode("."));
        addChild($$, createNode($2));   
    }
    ;

statement
    : labeled_statement { $$ = createNode("statement");  addChild($$, $1); }
    | compound_statement { $$ = createNode("statement"); addChild($$, $1); }
    | expression_statement { $$ = createNode("statement");  addChild($$, $1); }
    | selection_statement { $$ = createNode("statement"); addChild($$, $1); }
    | iteration_statement { $$ = createNode("statement"); addChild($$, $1); }
    | jump_statement { $$ = createNode("statement"); addChild($$, $1); }
    ;

labeled_statement
    : ID COLON statement { $$ = createNode("labeled_statement"); 
        addChild($$, createNode($1));
        addChild($$, createNode(":"));
        addChild($$, $3);
    }
    | CASE constant_expression COLON statement { $$ = createNode("labeled_statement"); 
        addChild($$, createNode("case"));
        addChild($$, $2);
        addChild($$, createNode(":"));
        addChild($$, $4);
    }
    | DEFAULT COLON statement { $$ = createNode("labeled_statement"); 
        addChild($$, createNode("default"));
        addChild($$, createNode(":"));
        addChild($$, $3);
    }
    ;

compound_statement
    : LBRACE block_item_list_opt RBRACE {
        $$ = createNode("compound_statement");
        addChild($$, createNode("{"));
        addChild($$, $2);
        addChild($$, createNode("}"));
    }
    ;

block_item_list
    : block_item { $$ = createNode("block_item_list"); }
    | block_item_list block_item {
        $$ = createNode("block_item_list");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

block_item
    : declaration { $$ = createNode("block_item"); 
        addChild($$, $1);}
    | statement { $$ = createNode("block_item"); addChild($$, $1);}
    ;

expression_statement
    : expression_opt SEMICOLON {$$ = createNode("expression_statement"); 
        addChild($$, $1);
        addChild($$, createNode(";"));
    }
    ; 

selection_statement
    : IF LPAREN expression RPAREN statement %prec LOWER_THAN_ELSE {
        $$ = createNode("selection_statement");
        addChild($$, createNode("if"));
        addChild($$, createNode("("));
        addChild($$, $3);
        addChild($$, createNode(")"));
        addChild($$, $5);
    }
    | IF LPAREN expression RPAREN statement ELSE statement {
        $$ = createNode("selection_statement");
        addChild($$, createNode("if"));
        addChild($$, createNode("("));
        addChild($$, $3);
        addChild($$, createNode(")"));
        addChild($$, $5);
        addChild($$, createNode("else"));
        addChild($$, $7);
    }
    | SWITCH LPAREN expression RPAREN statement {
        $$ = createNode("selection_statement");
        addChild($$, createNode("switch"));
        addChild($$, createNode("("));
        addChild($$, $3);
        addChild($$, createNode(")"));
        addChild($$, $5);
    }
    ;

iteration_statement
    : WHILE LPAREN expression RPAREN statement {
        $$ = createNode("iteration_statement");
        addChild($$, createNode("while"));  
        addChild($$, createNode("("));
        addChild($$, $3);
        addChild($$, createNode(")"));
        addChild($$, $5);   
    }
    | DO statement WHILE LPAREN expression RPAREN SEMICOLON {
        $$ = createNode("iteration_statement");
        addChild($$, createNode("do"));
        addChild($$, $2);
        addChild($$, createNode("while"));
        addChild($$, createNode("("));
        addChild($$, $5);
        addChild($$, createNode(")"));
        addChild($$, createNode(";"));
    }
    | FOR LPAREN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RPAREN statement {
        $$ = createNode("iteration_statement");
        addChild($$, createNode("for"));
        addChild($$, createNode("("));
        addChild($$, $3);
        addChild($$, createNode(";"));
        addChild($$, $5);
        addChild($$, createNode(";"));
        addChild($$, $7);
        addChild($$, createNode(")"));
        addChild($$, $9);
    }
    | FOR LPAREN declaration expression_opt SEMICOLON expression_opt RPAREN statement{
        $$ = createNode("iteration_statement");
        addChild($$, createNode("for"));
        addChild($$, createNode("("));
        addChild($$, $3);
        addChild($$, $4);
        addChild($$, createNode(";"));
        addChild($$, $6);
        addChild($$, createNode(")"));
        addChild($$, $8);
    }
    ;

jump_statement
    : GOTO ID SEMICOLON {
        $$ = createNode("jump_statement");
        addChild($$, createNode("goto"));
        addChild($$, createNode($2));
        addChild($$, createNode(";"));
    }
    | CONTINUE SEMICOLON {
        $$ = createNode("jump_statement");
        addChild($$, createNode("continue"));
        addChild($$, createNode(";"));
    }
    | BREAK SEMICOLON {
        $$ = createNode("jump_statement");
        addChild($$, createNode("break"));
        addChild($$, createNode(";"));
    }
    | RETURN expression_opt SEMICOLON {
        $$ = createNode("jump_statement");
        addChild($$, createNode("return"));
        addChild($$, $2);
        addChild($$, createNode(";"));
    }
    ;

translation_unit
    : external_declaration {
        $$ = createNode("translation_unit");
        addChild($$, $1);
        printTree($$,0);
    }
    | translation_unit external_declaration {
        $$ = createNode("translation_unit");
        addChild($$, $1);
        addChild($$, $2);
        printTree($$,0);
    }
    ;

external_declaration
    : function_definition {
        $$ = createNode("external_declaration");
        addChild($$, $1);
    }
    | declaration {
        $$ = createNode("external_declaration");
        addChild($$, $1);
    }
    ;

function_definition
    : declaration_specifiers declarator declaration_list_opt compound_statement {
        $$ = createNode("function_definition");
        addChild($$, $1);
        addChild($$, $2);
        addChild($$, $3);
        addChild($$, $4);
    }
    ;

declaration_list
    : declaration {$$ = createNode("declaration_list"); addChild($$, $1);}
    | declaration_list declaration{
        $$ = createNode("declaration_list");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

pointer_opt
    : pointer {$$ = createNode("pointer");addChild($$, $1);}
    | {$$=createNode("ε");}
    ;

type_qualifier_list_opt
    : type_qualifier_list {$$ = createNode("type_qualifier_list");addChild($$, $1);}
    | {$$=createNode("ε");}
    ;

assignment_expression_opt
    : assignment_expression {$$ = createNode("assignment_expression");addChild($$, $1);}
    | {$$=createNode("ε");}
    ;

identifier_list_opt
    : identifier_list {$$ = createNode("identifier_list");addChild($$, $1);}
    | {$$=createNode("ε");}
    ;

designation_opt
    : designation {$$ = createNode("designation");addChild($$, $1);}
    | {$$=createNode("ε");}
    ;

block_item_list_opt
    : block_item_list{$$ = createNode("block_item_list");addChild($$, $1);}
    | {$$=createNode("ε");}
    ;

expression_opt
    : expression {$$ = createNode("expression");addChild($$, $1);}
    | {$$=createNode("ε");}
    ;

declaration_list_opt
    : declaration_list{$$ = createNode("declaration_list");addChild($$, $1);}
    | {$$=createNode("ε");}
    ;

declaration_specifiers_opt
    : declaration_specifiers{$$ = createNode("declaration_specifiers");
    addChild($$, $1);
    }
    | {$$=createNode("ε");}
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Parser error: %s\n", s);
}
