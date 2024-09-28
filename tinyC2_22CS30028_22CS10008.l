%{
#include "tinyC2_22CS30028_22CS10008.tab.h"  
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

"auto"       { yylval.stringVal = strdup(yytext); return AUTO; }
"enum"       { yylval.stringVal = strdup(yytext); return ENUM; }
"restrict"   { yylval.stringVal = strdup(yytext); return RESTRICT; }
"unsigned"   { yylval.stringVal = strdup(yytext); return UNSIGNED; }
"break"      { yylval.stringVal = strdup(yytext); return BREAK; }
"extern"     { yylval.stringVal = strdup(yytext); return EXTERN; }
"return"     { yylval.stringVal = strdup(yytext); return RETURN; }
"void"       { yylval.stringVal = strdup(yytext); return VOID; }
"case"       { yylval.stringVal = strdup(yytext); return CASE; }
"float"      { yylval.stringVal = strdup(yytext); return FLOAT; }
"short"      { yylval.stringVal = strdup(yytext); return SHORT; }
"volatile"   { yylval.stringVal = strdup(yytext); return VOLATILE; }
"char"       { yylval.stringVal = strdup(yytext); return CHAR; }
"for"        { yylval.stringVal = strdup(yytext); return FOR; }
"signed"     { yylval.stringVal = strdup(yytext); return SIGNED; }
"while"      { yylval.stringVal = strdup(yytext); return WHILE; }
"const"      { yylval.stringVal = strdup(yytext); return CONST; }
"goto"       { yylval.stringVal = strdup(yytext); return GOTO; }
"sizeof"     { yylval.stringVal = strdup(yytext); return SIZEOF; }
"_Bool"      { yylval.stringVal = strdup(yytext); return BOOL; }
"continue"   { yylval.stringVal = strdup(yytext); return CONTINUE; }
"if"         { yylval.stringVal = strdup(yytext); return IF; }
"static"     { yylval.stringVal = strdup(yytext); return STATIC; }
"_Complex"   { yylval.stringVal = strdup(yytext); return COMPLEX; }
"default"    { yylval.stringVal = strdup(yytext); return DEFAULT; }
"inline"     { yylval.stringVal = strdup(yytext); return INLINE; }
"struct"     { yylval.stringVal = strdup(yytext); return STRUCT; }
"_Imaginary" { yylval.stringVal = strdup(yytext); return IMAGINARY; }
"do"         { yylval.stringVal = strdup(yytext); return DO; }
"int"        { yylval.stringVal = strdup(yytext); return INT; }
"switch"     { yylval.stringVal = strdup(yytext); return SWITCH; }
"double"     { yylval.stringVal = strdup(yytext); return DOUBLE; }
"long"       { yylval.stringVal = strdup(yytext); return LONG; }
"typedef"    { yylval.stringVal = strdup(yytext); return TYPEDEF; }
"else"       { yylval.stringVal = strdup(yytext); return ELSE; }
"register"   { yylval.stringVal = strdup(yytext); return REGISTER; }
"union"      { yylval.stringVal = strdup(yytext); return UNION; }



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



{IDENT}  { yylval.stringVal = strdup(yytext); return ID; }
{CONSTANT} { yylval.stringVal = strdup(yytext); return CONSTANT; }
{STRING_LITERAL} { yylval.stringVal = strdup(yytext); return SL; }
{COMMENTS} {}
[ \t\n]+ {}

. {}

%%

int yywrap(void) {
    return 1;
}
