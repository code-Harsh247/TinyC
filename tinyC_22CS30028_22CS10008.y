%{
#include <stdio.h>
#include <stdlib.h>
#include "tinyC_22CS30028_22CS10008.h"
void yyerror(const char *s);
int yylex();
%}

%union {
    char* string;
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
%token ID CONST SL

%start translation_unit

%type <node> primary_expression postfix_expression expression assignment_expression compound_statement block_item_list_opt

%%

primary_expression
    : ID    {$$ = createNode($1);}
    | CONST {$$ = createNode($1);}
    | SL    {$$ = createNode($1);}
    | LPAREN expression RPAREN  {
        $$ = createNode("primary_expression");
        addChild($$, "(");
        addChild($$, $2);
        addChild($$, ")");
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
        addChild($$, "[");
        addChild($$, $3);
        addChild($$, "]");
    }
    | postfix_expression LPAREN argument_expression_list_opt RPAREN {
        $$ = createNode("postfix_expression");
        addChild($$, $1);
        addChild($$, "(");
        addChild($$, $3);
        addChild($$, ")");
    }
    | postfix_expression DOT ID {
        $$ = createNode("postfix_expression");
        addChild($$, $1);
        addChild($$, ".");
        addChild($$, $3);
    }
    | postfix_expression ARROW ID {
        $$ = createNode("postfix_expression");
        addChild($$, $1);
        addChild($$, "->");
        addChild($$, $3);
    }
    | postfix_expression INCREMENT {
        $$ = createNode("postfix_expression");
        addChild($$, $1);
        addChild($$, "++");
    }
    | postfix_expression DECREMENT {
        $$ = createNode("postfix_expression");
        addChild($$, $1);
        addChild($$, "--");
    }
    | LPAREN type_name RPAREN LBRACE initializer_list RBRACE {
        $$ = createNode("postfix_expression");
        addChild($$, "(");
        addChild($$, $2);
        addChild($$, "{");
        addChild($$, $4);
        addChild($$, "}");
    }
    | LPAREN type_name RPAREN LBRACE initializer_list COMMA RBRACE {
        $$ = createNode("postfix_expression");
        addChild($$, "(");
        addChild($$, $2);
        addChild($$, "{");
        addChild($$, $4);
        addChild($$, ",");
        addChild($$, "}");
    }
    ;

argument_expression_list_opt
    : argument_expression_list {
        $$ = createNode("argument_expression_list");
        addChild($$, $1);
    }
    | /* empty */
    ;

argument_expression_list
    : assignment_expression {
        $$ = createNode("argument_expression_list");
        addChild($$, $1);
    }
    | argument_expression_list COMMA assignment_expression {
        $$ = createNode("argument_expression_list");
        addChild($$, $1);
        addChild($$, ",");
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
        addChild($$, "++");
        addChild($$, $2);
    }
    | DECREMENT unary_expression {
        $$ = createNode("unary_expression");
        addChild($$, "--");
        addChild($$, $2);
    }
    | unary_operator cast_expression {
        $$ = createNode("unary_expression");
        addChild($$, $1);
        addChild($$, $2);
    }
    | SIZEOF unary_expression {
        $$ = createNode("unary_expression");
        addChild($$, "sizeof");
        addChild($$, $2);
    }
    | SIZEOF LPAREN type_name RPAREN {
        $$ = createNode("unary_expression");
        addChild($$, "sizeof");
        addChild($$, "(");
        addChild($$, $3);
        addChild($$, ")");
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
        addChild($$, "(");
        addChild($$, $2);
        addChild($$, ")");
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
        addChild($$, "*");
        addChild($$, $3);
    }
    | multiplicative_expression SLASH cast_expression {
        $$ = createNode("multiplicative_expression");
        addChild($$, $1);
        addChild($$, "/");
        addChild($$, $3);
    }
    | multiplicative_expression PERCENT cast_expression {
        $$ = createNode("multiplicative_expression");
        addChild($$, $1);
        addChild($$, "%");
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
        addChild($$, "+");
        addChild($$, $3);
    }
    | additive_expression MINUS multiplicative_expression {
        $$ = createNode("additive_expression");
        addChild($$, $1);
        addChild($$, "-");
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
        addChild($$, "<<");
        addChild($$, $3);
    }
    | shift_expression RIGHT_SHIFT additive_expression {
        $$ = createNode("shift_expression");
        addChild($$, $1);
        addChild($$, ">>");
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
        addChild($$, "<");
        addChild($$, $3);
    }
    | relational_expression GREATER shift_expression {
        $$ = createNode("relational_expression");
        addChild($$, $1);
        addChild($$, ">");
        addChild($$, $3);
    }
    | relational_expression LESS_EQUAL shift_expression {
        $$ = createNode("relational_expression");
        addChild($$, $1);
        addChild($$, "<=");
        addChild($$, $3);
    }
    | relational_expression GREATER_EQUAL shift_expression {
        $$ = createNode("relational_expression");
        addChild($$, $1);
        addChild($$, ">=");
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
        addChild($$, "==");
        addChild($$, $3);
    }
    | equality_expression NOT_EQUAL relational_expression {
        $$ = createNode("equality_expression");
        addChild($$, $1);
        addChild($$, "!=");
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
        addChild($$, "&");
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
        addChild($$, "^");
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
        addChild($$, "|");
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
        addChild($$, "&&");
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
        addChild($$, "||");
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
        addChild($$, "?");
        addChild($$, $3);
        addChild($$, ":");
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
        addChild($$, ",");
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
        addChild($$, ";");
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
    | /* empty */
    ;

init_declarator_list
    : init_declarator {
        $$ = createNode("init_declarator_list");
        addChild($$, $1);
    }
    | init_declarator_list COMMA init_declarator {
        $$ = createNode("init_declarator_list");
        addChild($$, $1);
        addChild($$, ",");
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
        addChild($$, "=");
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
    | /* empty */
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
        addChild($$, "(");
        addChild($$, $2);
        addChild($$, ")");
    }
    | direct_declarator LBRACKET type_qualifier_list_opt assignment_expression_opt RBRACKET {
        $$ = createNode("direct_declarator");
        addChild($$, $1);
        addChild($$, "[");
        addChild($$, $3);
        addChild($$, $4);
        addChild($$, "]");
    }
    | direct_declarator LBRACKET STATIC type_qualifier_list_opt assignment_expression RBRACKET {
        $$ = createNode("direct_declarator");
        addChild($$, $1);
        addChild($$, "[");
        addChild($$, "static");
        addChild($$, $4);
        addChild($$, $5);
        addChild($$, "]");
    }
    | direct_declarator LBRACKET type_qualifier_list STATIC assignment_expression RBRACKET {
        $$ = createNode("direct_declarator");
        addChild($$, $1);
        addChild($$, "[");
        addChild($$, $3);
        addChild($$, "static");
        addChild($$, $5);
        addChild($$, "]");
    }
    | direct_declarator LBRACKET type_qualifier_list_opt ASTERISK RBRACKET {
        $$ = createNode("direct_declarator");
        addChild($$, $1);
        addChild($$, "[");
        addChild($$, $3);
        addChild($$, "*");
        addChild($$, "]");
    }
    | direct_declarator LPAREN parameter_type_list RPAREN {
        $$ = createNode("direct_declarator");
        addChild($$, $1);
        addChild($$, "(");
        addChild($$, $3);
        addChild($$, ")");
    }
    | direct_declarator LPAREN identifier_list_opt RPAREN {
        $$ = createNode("direct_declarator");
        addChild($$, $1);
        addChild($$, "(");
        addChild($$, $3);
        addChild($$, ")");
    }
    ;

pointer
    : ASTERISK type_qualifier_list_opt pointer {
        $$ = createNode("pointer");
        addChild($$, "*");
        addChild($$, $2);
        addChild($$, $3);
    }
    | ASTERISK type_qualifier_list_opt pointer {
        $$ = createNode("pointer");
        addChild($$, "*");
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
        addChild($$, ",");
        addChild($$, "...");
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
        addChild($$, ",");
        addChild($$, $3);
    }
    ;

parameter_declaration
    : declaration_specifiers declarator {
        $$ = createNode("parameter_declaration");
        addChild($$, $1);
        addChild($$, $2);
    }
    | declaration_specifiers abstract_declarator {
        $$ = createNode("parameter_declaration");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

identifier_list
    : ID {
        $$ = createNode($1);
    }
    | identifier_list COMMA ID {
        $$ = createNode("identifier_list");
        addChild($$, $1);
        addChild($$, ",");
        addChild($$, $3);
    }
    ;

type_name
    : specifier_qualifier_list abstract_declarator_opt {
        $$ = createNode("type_name");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

initializer
    : assignment_expression {
        $$ = createNode("initializer");
        addChild($$, $1);
    } 
    | LBRACE initializer_list RBRACE {
        $$ = createNode("initializer");
        addChild($$, "{");
        addChild($$, $2);
        addChild($$, "}");
    }
    | LBRACE initializer_list COMMA RBRACE {
        $$ = createNode("initializer");
        addChild($$, "{");
        addChild($$, $2);
        addChild($$, ",");
        addChild($$, "}");
    }
    ;

initializer_list
    : designation_opt initializer
    | initializer_list COMMA designation_opt initializer
    ;

designation
    : designator_list ASSIGN
    ;

designator_list
    : designator
    | designator_list designator
    ;

designator
    : LBRACKET constant_expression RBRACKET
    | DOT ID
    ;

statement
    : labeled_statement
    | compound_statement
    | expression_statement
    | selection_statement
    | iteration_statement
    | jump_statement
    ;

labeled_statement
    : ID COLON statement
    | CASE constant_expression COLON statement
    | DEFAULT COLON statement
    ;

compound_statement
    : LBRACE block_item_list_opt RBRACE
    ;

block_item_list
    : block_item
    | block_item_list block_item
    ;

block_item
    : declaration
    | statement
    ;

expression_statement
    : expression_opt SEMICOLON
    ;

selection_statement
    : IF LPAREN expression RPAREN statement
    | IF LPAREN expression RPAREN statement ELSE statement
    | SWITCH LPAREN expression RPAREN statement
    ;

iteration_statement
    : WHILE LPAREN expression RPAREN statement
    | DO statement WHILE LPAREN expression RPAREN SEMICOLON
    | FOR LPAREN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RPAREN statement
    | FOR LPAREN declaration expression_opt SEMICOLON expression_opt RPAREN statement
    ;

jump_statement
    : GOTO ID SEMICOLON
    | CONTINUE SEMICOLON
    | BREAK SEMICOLON
    | RETURN expression_opt SEMICOLON
    ;

translation_unit
    : external_declaration
    | translation_unit external_declaration
    ;

external_declaration
    : function_definition
    | declaration
    ;

function_definition
    : declaration_specifiers declarator declaration_list_opt compound_statement
    ;

declaration_list
    : declaration
    | declaration_list declaration
    ;

pointer_opt
    : pointer
    | /* empty */
    ;

type_qualifier_list_opt
    : type_qualifier_list
    | /* empty */
    ;

assignment_expression_opt
    : assignment_expression
    | /* empty */
    ;

identifier_list_opt
    : identifier_list
    | /* empty */
    ;

designation_opt
    : designation
    | /* empty */
    ;

block_item_list_opt
    : block_item_list
    | /* empty */
    ;

expression_opt
    : expression
    | /* empty */
    ;

declaration_list_opt
    : declaration_list
    | /* empty */
    ;

declaration_specifiers_opt
    : declaration_specifiers
    | /* empty */
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Parser error: %s\n", s);
}

int main() {
    yyparse();
    return 0;
}