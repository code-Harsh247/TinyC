#ifndef tinyC_22CS30028_22CS10008_H
#define tinyC_22CS30028_22CS10008_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lex.yy.c"
#include "y.tab.c"


//structure for Token
typedef struct {
    int entry_num;
    char token_type[255];
    char lexeme[255];
} Token;

//structure for symbol table node
typedef struct symbol_Table {
    Token *token;
    struct symbol_Table *next;
} symbol_Table;


// Function prototypes
Token *create_token(int token_type, const char *lexeme);
symbol_Table *addToken(symbol_Table *table, Token *token);
void freeTable(symbol_Table *table);


#endif 