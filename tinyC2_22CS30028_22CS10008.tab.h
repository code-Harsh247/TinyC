/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_TINYC2_22CS30028_22CS10008_TAB_H_INCLUDED
# define YY_YY_TINYC2_22CS30028_22CS10008_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 12 "tinyC2_22CS30028_22CS10008.y"

    #ifndef TINYC_22CS30028_22CS10008_H
    #define TINYC_22CS30028_22CS10008_H

    struct TreeNode {
        char *data;
        struct TreeNode* siblings;
        struct TreeNode* children;
    }typedef TreeNode;

    #endif

#line 62 "tinyC2_22CS30028_22CS10008.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AUTO = 258,                    /* AUTO  */
    ENUM = 259,                    /* ENUM  */
    RESTRICT = 260,                /* RESTRICT  */
    UNSIGNED = 261,                /* UNSIGNED  */
    BREAK = 262,                   /* BREAK  */
    EXTERN = 263,                  /* EXTERN  */
    RETURN = 264,                  /* RETURN  */
    VOID = 265,                    /* VOID  */
    CASE = 266,                    /* CASE  */
    FLOAT = 267,                   /* FLOAT  */
    SHORT = 268,                   /* SHORT  */
    VOLATILE = 269,                /* VOLATILE  */
    CHAR = 270,                    /* CHAR  */
    FOR = 271,                     /* FOR  */
    SIGNED = 272,                  /* SIGNED  */
    WHILE = 273,                   /* WHILE  */
    CONST = 274,                   /* CONST  */
    GOTO = 275,                    /* GOTO  */
    SIZEOF = 276,                  /* SIZEOF  */
    BOOL = 277,                    /* BOOL  */
    CONTINUE = 278,                /* CONTINUE  */
    IF = 279,                      /* IF  */
    STATIC = 280,                  /* STATIC  */
    COMPLEX = 281,                 /* COMPLEX  */
    DEFAULT = 282,                 /* DEFAULT  */
    INLINE = 283,                  /* INLINE  */
    STRUCT = 284,                  /* STRUCT  */
    IMAGINARY = 285,               /* IMAGINARY  */
    DO = 286,                      /* DO  */
    INT = 287,                     /* INT  */
    SWITCH = 288,                  /* SWITCH  */
    DOUBLE = 289,                  /* DOUBLE  */
    LONG = 290,                    /* LONG  */
    TYPEDEF = 291,                 /* TYPEDEF  */
    ELSE = 292,                    /* ELSE  */
    REGISTER = 293,                /* REGISTER  */
    UNION = 294,                   /* UNION  */
    ARROW = 295,                   /* ARROW  */
    INCREMENT = 296,               /* INCREMENT  */
    DECREMENT = 297,               /* DECREMENT  */
    LEFT_SHIFT = 298,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 299,             /* RIGHT_SHIFT  */
    LESS_EQUAL = 300,              /* LESS_EQUAL  */
    GREATER_EQUAL = 301,           /* GREATER_EQUAL  */
    EQUAL = 302,                   /* EQUAL  */
    NOT_EQUAL = 303,               /* NOT_EQUAL  */
    LOGICAL_AND = 304,             /* LOGICAL_AND  */
    LOGICAL_OR = 305,              /* LOGICAL_OR  */
    ELLIPSIS = 306,                /* ELLIPSIS  */
    STAR_ASSIGN = 307,             /* STAR_ASSIGN  */
    SLASH_ASSIGN = 308,            /* SLASH_ASSIGN  */
    PERCENT_ASSIGN = 309,          /* PERCENT_ASSIGN  */
    PLUS_ASSIGN = 310,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 311,            /* MINUS_ASSIGN  */
    LEFT_SHIFT_ASSIGN = 312,       /* LEFT_SHIFT_ASSIGN  */
    RIGHT_SHIFT_ASSIGN = 313,      /* RIGHT_SHIFT_ASSIGN  */
    AMPERSAND_ASSIGN = 314,        /* AMPERSAND_ASSIGN  */
    CARET_ASSIGN = 315,            /* CARET_ASSIGN  */
    VERTICAL_BAR_ASSIGN = 316,     /* VERTICAL_BAR_ASSIGN  */
    COMMA = 317,                   /* COMMA  */
    HASH = 318,                    /* HASH  */
    LBRACKET = 319,                /* LBRACKET  */
    RBRACKET = 320,                /* RBRACKET  */
    LPAREN = 321,                  /* LPAREN  */
    RPAREN = 322,                  /* RPAREN  */
    LBRACE = 323,                  /* LBRACE  */
    RBRACE = 324,                  /* RBRACE  */
    DOT = 325,                     /* DOT  */
    AMPERSAND = 326,               /* AMPERSAND  */
    ASTERISK = 327,                /* ASTERISK  */
    PLUS = 328,                    /* PLUS  */
    MINUS = 329,                   /* MINUS  */
    TILDE = 330,                   /* TILDE  */
    BANG = 331,                    /* BANG  */
    SLASH = 332,                   /* SLASH  */
    PERCENT = 333,                 /* PERCENT  */
    LESS = 334,                    /* LESS  */
    GREATER = 335,                 /* GREATER  */
    CARET = 336,                   /* CARET  */
    VERTICAL_BAR = 337,            /* VERTICAL_BAR  */
    QUESTION = 338,                /* QUESTION  */
    COLON = 339,                   /* COLON  */
    SEMICOLON = 340,               /* SEMICOLON  */
    ASSIGN = 341,                  /* ASSIGN  */
    ID = 342,                      /* ID  */
    CONSTANT = 343,                /* CONSTANT  */
    SL = 344,                      /* SL  */
    LOWER_THAN_ELSE = 345          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "tinyC2_22CS30028_22CS10008.y"

    char* stringVal;
    TreeNode* node;

#line 174 "tinyC2_22CS30028_22CS10008.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TINYC2_22CS30028_22CS10008_TAB_H_INCLUDED  */
