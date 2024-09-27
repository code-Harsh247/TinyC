%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char *s);
int yylex();
%}

%code_requires{
    struct TreeNode {
        char *data;
        struct TreeNode* siblings;
        struct TreeNode* children;
    }typedef TreeNode;
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

%%

primary_expression
    : ID
    | CONST
    | SL
    | LPAREN expression RPAREN
    ;

postfix_expression
    : primary_expression
    | postfix_expression LBRACKET expression RBRACKET
    | postfix_expression LPAREN argument_expression_list_opt RPAREN
    | postfix_expression DOT ID
    | postfix_expression ARROW ID
    | postfix_expression INCREMENT
    | postfix_expression DECREMENT
    | LPAREN type_name RPAREN LBRACE initializer_list RBRACE
    | LPAREN type_name RPAREN LBRACE initializer_list COMMA RBRACE
    ;

argument_expression_list_opt
    : argument_expression_list
    | /* empty */
    ;

argument_expression_list
    : assignment_expression
    | argument_expression_list COMMA assignment_expression
    ;

unary_expression
    : postfix_expression
    | INCREMENT unary_expression
    | DECREMENT unary_expression
    | unary_operator cast_expression
    | SIZEOF unary_expression
    | SIZEOF LPAREN type_name RPAREN
    ;

unary_operator
    : AMPERSAND
    | ASTERISK
    | PLUS
    | MINUS
    | TILDE
    | BANG
    ;

cast_expression
    : unary_expression
    | LPAREN type_name RPAREN cast_expression
    ;

multiplicative_expression
    : cast_expression
    | multiplicative_expression ASTERISK cast_expression
    | multiplicative_expression SLASH cast_expression
    | multiplicative_expression PERCENT cast_expression
    ;

additive_expression
    : multiplicative_expression
    | additive_expression PLUS multiplicative_expression
    | additive_expression MINUS multiplicative_expression
    ;

shift_expression
    : additive_expression
    | shift_expression LEFT_SHIFT additive_expression
    | shift_expression RIGHT_SHIFT additive_expression
    ;

relational_expression
    : shift_expression
    | relational_expression LESS shift_expression
    | relational_expression GREATER shift_expression
    | relational_expression LESS_EQUAL shift_expression
    | relational_expression GREATER_EQUAL shift_expression
    ;

equality_expression
    : relational_expression
    | equality_expression EQUAL relational_expression
    | equality_expression NOT_EQUAL relational_expression
    ;

and_expression
    : equality_expression
    | and_expression AMPERSAND equality_expression
    ;

exclusive_or_expression
    : and_expression
    | exclusive_or_expression CARET and_expression
    ;

inclusive_or_expression
    : exclusive_or_expression
    | inclusive_or_expression VERTICAL_BAR exclusive_or_expression
    ;

logical_and_expression
    : inclusive_or_expression
    | logical_and_expression LOGICAL_AND inclusive_or_expression
    ;

logical_or_expression
    : logical_and_expression
    | logical_or_expression LOGICAL_OR logical_and_expression
    ;

conditional_expression
    : logical_or_expression
    | logical_or_expression QUESTION expression COLON conditional_expression
    ;

assignment_expression
    : conditional_expression
    | unary_expression assignment_operator assignment_expression
    ;

assignment_operator
    : ASSIGN
    | STAR_ASSIGN
    | SLASH_ASSIGN
    | PERCENT_ASSIGN
    | PLUS_ASSIGN
    | MINUS_ASSIGN
    | LEFT_SHIFT_ASSIGN
    | RIGHT_SHIFT_ASSIGN
    | AMPERSAND_ASSIGN
    | CARET_ASSIGN
    | VERTICAL_BAR_ASSIGN
    ;

expression
    : assignment_expression
    | expression COMMA assignment_expression
    ;

constant_expression
    : conditional_expression
    ;

declaration
    : declaration_specifiers init_declarator_list_opt SEMICOLON
    ;

declaration_specifiers
    : storage_class_specifier declaration_specifiers_opt
    | type_specifier declaration_specifiers_opt
    | type_qualifier declaration_specifiers_opt
    | function_specifier declaration_specifiers_opt
    ;

init_declarator_list_opt
    : init_declarator_list
    | /* empty */
    ;

init_declarator_list
    : init_declarator
    | init_declarator_list COMMA init_declarator
    ;

init_declarator
    : declarator
    | declarator ASSIGN initializer
    ;

storage_class_specifier
    : EXTERN
    | STATIC
    | AUTO
    | REGISTER
    ;

type_specifier
    : VOID
    | CHAR
    | SHORT
    | INT
    | LONG
    | FLOAT
    | DOUBLE
    | SIGNED
    | UNSIGNED
    | BOOL
    | COMPLEX
    | IMAGINARY
    ;

specifier_qualifier_list
    : type_specifier specifier_qualifier_list_opt
    | type_qualifier specifier_qualifier_list_opt
    ;

specifier_qualifier_list_opt
    : specifier_qualifier_list
    | /* empty */
    ;

type_qualifier
    : CONST
    | RESTRICT
    | VOLATILE
    ;

function_specifier
    : INLINE
    ;

declarator
    : pointer_opt direct_declarator
    ;

direct_declarator
    : ID
    | LPAREN declarator RPAREN
    | direct_declarator LBRACKET type_qualifier_list_opt assignment_expression_opt RBRACKET
    | direct_declarator LBRACKET STATIC type_qualifier_list_opt assignment_expression RBRACKET
    | direct_declarator LBRACKET type_qualifier_list STATIC assignment_expression RBRACKET
    | direct_declarator LBRACKET type_qualifier_list_opt ASTERISK RBRACKET
    | direct_declarator LPAREN parameter_type_list RPAREN
    | direct_declarator LPAREN identifier_list_opt RPAREN
    ;

pointer
    : ASTERISK type_qualifier_list_opt
    | ASTERISK type_qualifier_list_opt pointer
    ;

type_qualifier_list
    : type_qualifier
    | type_qualifier_list type_qualifier
    ;

parameter_type_list
    : parameter_list
    | parameter_list COMMA ELLIPSIS
    ;

parameter_list
    : parameter_declaration
    | parameter_list COMMA parameter_declaration
    ;

parameter_declaration
    : declaration_specifiers declarator
    | declaration_specifiers
    ;

identifier_list
    : ID
    | identifier_list COMMA ID
    ;

type_name
    : specifier_qualifier_list
    ;

initializer
    : assignment_expression
    | LBRACE initializer_list RBRACE
    | LBRACE initializer_list COMMA RBRACE
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