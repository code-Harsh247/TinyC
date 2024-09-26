%{
#include "y.tab.h"  // Ensure this file contains token declarations for your keywords
%}

/* Identifier Definition */
IDENT_START  [a-zA-Z_]
NUMBER   [0-9]
IDENT  {IDENT_START}({IDENT_START}|{NUMBER})*

/* Constant Definition */
INTEGER_CONST   {NUMBER}+
NUMBER_SEQ     {NUMBER}+|\'{CHARACTER_SEQ}\'
FRACTIONAL_PART    {NUMBER_SEQ}?\.{NUMBER_SEQ}|{NUMBER_SEQ}\.
EXPONENT_PART    [eE][+-]?{NUMBER_SEQ}
FLOATING_CONST {FRACTIONAL_PART}{EXPONENT_PART}?|{NUMBER_SEQ}{EXPONENT_PART}
ESCAPE_CHAR  \'|\"|\?|\[abfnrtv]|\\
C_CHAR  [^'\\\n]|{ESCAPE_CHAR}
CHARACTER_SEQ  {C_CHAR}+ 
CHARACTER_CONST  \'{CHARACTER_SEQ}\'
CONSTANT   {INTEGER_CONST}|{FLOATING_CONST}|{CHARACTER_CONST}

/* String Literal */
STRING_CHAR  [^"\\\n]|{ESCAPE_CHAR}
STRING_SEQ  {STRING_CHAR}+
STRING_LITERAL  \"{STRING_SEQ}?\"


/* Comments */
MULTILINE_SEQUENCE    [^*]|[*][^/]
MULTILINE_COMMENT  "/*"({MULTILINE_SEQUENCE})*"/"
SINGLELINE_COMMENT "//".*
COMMENTS {MULTILINE_COMMENT}|{SINGLELINE_COMMENT}

%%

"auto"       { return AUTO; }
"enum"       { return ENUM; }
"restrict"   { return RESTRICT; }
"unsigned"   { return UNSIGNED; }
"break"      { return BREAK; }
"extern"     { return EXTERN; }
"return"     { return RETURN; }
"void"       { return VOID; }
"case"       { return CASE; }
"float"      { return FLOAT; }
"short"      { return SHORT; }
"volatile"   { return VOLATILE; }
"char"       { return CHAR; }
"for"        { return FOR; }
"signed"     { return SIGNED; }
"while"      { return WHILE; }
"const"      { return CONST; }
"goto"       { return GOTO; }
"sizeof"     { return SIZEOF; }
"_Bool"      { return BOOL; }
"continue"   { return CONTINUE; }
"if"         { return IF; }
"static"     { return STATIC; }
"_Complex"   { return COMPLEX; }
"default"    { return DEFAULT; }
"inline"     { return INLINE; }
"struct"     { return STRUCT; }
"_Imaginary" { return IMAGINARY; }
"do"         { return DO; }
"int"        { return INT; }
"switch"     { return SWITCH; }
"double"     { return DOUBLE; }
"long"       { return LONG; }
"typedef"    { return TYPEDEF; }
"else"       { return ELSE; }
"register"   { return REGISTER; }
"union"      { return UNION; }



"->"  { return ARROW; }
"++"  { return INCREMENT; }
"--"  { return DECREMENT; }
"<<"  { return LEFT_SHIFT; }
">>"  { return RIGHT_SHIFT; }
"<="  { return LESS_EQUAL; }
">="  { return GREATER_EQUAL; }
"=="  { return EQUAL; }
"!="  { return NOT_EQUAL; }
"&&"  { return LOGICAL_AND; }
"||"  { return LOGICAL_OR; }
"..." { return ELLIPSIS; }
"*="  { return STAR_ASSIGN; }
"/="  { return SLASH_ASSIGN; }
"%="  { return PERCENT_ASSIGN; }
"+="  { return PLUS_ASSIGN; }
"-="  { return MINUS_ASSIGN; }
"<<=" { return LEFT_SHIFT_ASSIGN; }
">>=" { return RIGHT_SHIFT_ASSIGN; }
"&="  { return AMPERSAND_ASSIGN; }
"^="  { return CARET_ASSIGN; }
"|="  { return VERTICAL_BAR_ASSIGN; }
","   { return COMMA; }
"#"   { return HASH; }
"["   { return LBRACKET; }
"]"   { return RBRACKET; }
"("   { return LPAREN; }
")"   { return RPAREN; }
"{"   { return LBRACE; }
"}"   { return RBRACE; }
"."   { return DOT; }
"&"   { return AMPERSAND; }
"*"   { return ASTERISK; }
"+"   { return PLUS; }
"-"   { return MINUS; }
"~"   { return TILDE; }
"!"   { return BANG; }
"/"   { return SLASH; }
"%"   { return PERCENT; }
"<"   { return LESS; }
">"   { return GREATER; }
"^"   { return CARET; }
"|"   { return VERTICAL_BAR; }
"?"   { return QUESTION; }
":"   { return COLON; }
";"   { return SEMICOLON; }
"="   { return ASSIGN; }



{IDENT}  { return ID; }
{CONSTANT} { return CONST; }
{STRING_LITERAL} { return SL; }


{COMMENTS} {}
[ \t\n]+ {}

. {}

%%

int yywrap(void) {
    return 1;
}
