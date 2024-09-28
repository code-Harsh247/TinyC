/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "tinyC2_22CS30028_22CS10008.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tinyC2_22CS30028_22CS10008.h"

void yyerror(const char *s);
int yylex();  


#line 82 "tinyC2_22CS30028_22CS10008.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "tinyC2_22CS30028_22CS10008.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AUTO = 3,                       /* AUTO  */
  YYSYMBOL_ENUM = 4,                       /* ENUM  */
  YYSYMBOL_RESTRICT = 5,                   /* RESTRICT  */
  YYSYMBOL_UNSIGNED = 6,                   /* UNSIGNED  */
  YYSYMBOL_BREAK = 7,                      /* BREAK  */
  YYSYMBOL_EXTERN = 8,                     /* EXTERN  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_VOID = 10,                      /* VOID  */
  YYSYMBOL_CASE = 11,                      /* CASE  */
  YYSYMBOL_FLOAT = 12,                     /* FLOAT  */
  YYSYMBOL_SHORT = 13,                     /* SHORT  */
  YYSYMBOL_VOLATILE = 14,                  /* VOLATILE  */
  YYSYMBOL_CHAR = 15,                      /* CHAR  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_SIGNED = 17,                    /* SIGNED  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_CONST = 19,                     /* CONST  */
  YYSYMBOL_GOTO = 20,                      /* GOTO  */
  YYSYMBOL_SIZEOF = 21,                    /* SIZEOF  */
  YYSYMBOL_BOOL = 22,                      /* BOOL  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_STATIC = 25,                    /* STATIC  */
  YYSYMBOL_COMPLEX = 26,                   /* COMPLEX  */
  YYSYMBOL_DEFAULT = 27,                   /* DEFAULT  */
  YYSYMBOL_INLINE = 28,                    /* INLINE  */
  YYSYMBOL_STRUCT = 29,                    /* STRUCT  */
  YYSYMBOL_IMAGINARY = 30,                 /* IMAGINARY  */
  YYSYMBOL_DO = 31,                        /* DO  */
  YYSYMBOL_INT = 32,                       /* INT  */
  YYSYMBOL_SWITCH = 33,                    /* SWITCH  */
  YYSYMBOL_DOUBLE = 34,                    /* DOUBLE  */
  YYSYMBOL_LONG = 35,                      /* LONG  */
  YYSYMBOL_TYPEDEF = 36,                   /* TYPEDEF  */
  YYSYMBOL_ELSE = 37,                      /* ELSE  */
  YYSYMBOL_REGISTER = 38,                  /* REGISTER  */
  YYSYMBOL_UNION = 39,                     /* UNION  */
  YYSYMBOL_ARROW = 40,                     /* ARROW  */
  YYSYMBOL_INCREMENT = 41,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 42,                 /* DECREMENT  */
  YYSYMBOL_LEFT_SHIFT = 43,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 44,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_EQUAL = 45,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 46,             /* GREATER_EQUAL  */
  YYSYMBOL_EQUAL = 47,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 48,                 /* NOT_EQUAL  */
  YYSYMBOL_LOGICAL_AND = 49,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 50,                /* LOGICAL_OR  */
  YYSYMBOL_ELLIPSIS = 51,                  /* ELLIPSIS  */
  YYSYMBOL_STAR_ASSIGN = 52,               /* STAR_ASSIGN  */
  YYSYMBOL_SLASH_ASSIGN = 53,              /* SLASH_ASSIGN  */
  YYSYMBOL_PERCENT_ASSIGN = 54,            /* PERCENT_ASSIGN  */
  YYSYMBOL_PLUS_ASSIGN = 55,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 56,              /* MINUS_ASSIGN  */
  YYSYMBOL_LEFT_SHIFT_ASSIGN = 57,         /* LEFT_SHIFT_ASSIGN  */
  YYSYMBOL_RIGHT_SHIFT_ASSIGN = 58,        /* RIGHT_SHIFT_ASSIGN  */
  YYSYMBOL_AMPERSAND_ASSIGN = 59,          /* AMPERSAND_ASSIGN  */
  YYSYMBOL_CARET_ASSIGN = 60,              /* CARET_ASSIGN  */
  YYSYMBOL_VERTICAL_BAR_ASSIGN = 61,       /* VERTICAL_BAR_ASSIGN  */
  YYSYMBOL_COMMA = 62,                     /* COMMA  */
  YYSYMBOL_HASH = 63,                      /* HASH  */
  YYSYMBOL_LBRACKET = 64,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 65,                  /* RBRACKET  */
  YYSYMBOL_LPAREN = 66,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 67,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 68,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 69,                    /* RBRACE  */
  YYSYMBOL_DOT = 70,                       /* DOT  */
  YYSYMBOL_AMPERSAND = 71,                 /* AMPERSAND  */
  YYSYMBOL_ASTERISK = 72,                  /* ASTERISK  */
  YYSYMBOL_PLUS = 73,                      /* PLUS  */
  YYSYMBOL_MINUS = 74,                     /* MINUS  */
  YYSYMBOL_TILDE = 75,                     /* TILDE  */
  YYSYMBOL_BANG = 76,                      /* BANG  */
  YYSYMBOL_SLASH = 77,                     /* SLASH  */
  YYSYMBOL_PERCENT = 78,                   /* PERCENT  */
  YYSYMBOL_LESS = 79,                      /* LESS  */
  YYSYMBOL_GREATER = 80,                   /* GREATER  */
  YYSYMBOL_CARET = 81,                     /* CARET  */
  YYSYMBOL_VERTICAL_BAR = 82,              /* VERTICAL_BAR  */
  YYSYMBOL_QUESTION = 83,                  /* QUESTION  */
  YYSYMBOL_COLON = 84,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 85,                 /* SEMICOLON  */
  YYSYMBOL_ASSIGN = 86,                    /* ASSIGN  */
  YYSYMBOL_ID = 87,                        /* ID  */
  YYSYMBOL_CONSTANT = 88,                  /* CONSTANT  */
  YYSYMBOL_SL = 89,                        /* SL  */
  YYSYMBOL_LOWER_THAN_ELSE = 90,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 91,                  /* $accept  */
  YYSYMBOL_primary_expression = 92,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 93,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 94, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 95,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 96,          /* unary_expression  */
  YYSYMBOL_unary_operator = 97,            /* unary_operator  */
  YYSYMBOL_cast_expression = 98,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 99, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 100,      /* additive_expression  */
  YYSYMBOL_shift_expression = 101,         /* shift_expression  */
  YYSYMBOL_relational_expression = 102,    /* relational_expression  */
  YYSYMBOL_equality_expression = 103,      /* equality_expression  */
  YYSYMBOL_and_expression = 104,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 105,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 106,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 107,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 108,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 109,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 110,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 111,      /* assignment_operator  */
  YYSYMBOL_expression = 112,               /* expression  */
  YYSYMBOL_constant_expression = 113,      /* constant_expression  */
  YYSYMBOL_declaration = 114,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 115,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list_opt = 116, /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 117,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 118,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 119,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 120,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 121, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 122, /* specifier_qualifier_list_opt  */
  YYSYMBOL_type_qualifier = 123,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 124,       /* function_specifier  */
  YYSYMBOL_declarator = 125,               /* declarator  */
  YYSYMBOL_direct_declarator = 126,        /* direct_declarator  */
  YYSYMBOL_pointer = 127,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 128,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 129,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 130,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 131,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 132,          /* identifier_list  */
  YYSYMBOL_type_name = 133,                /* type_name  */
  YYSYMBOL_initializer = 134,              /* initializer  */
  YYSYMBOL_initializer_list = 135,         /* initializer_list  */
  YYSYMBOL_designation = 136,              /* designation  */
  YYSYMBOL_designator_list = 137,          /* designator_list  */
  YYSYMBOL_designator = 138,               /* designator  */
  YYSYMBOL_statement = 139,                /* statement  */
  YYSYMBOL_labeled_statement = 140,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 141,       /* compound_statement  */
  YYSYMBOL_block_item_list = 142,          /* block_item_list  */
  YYSYMBOL_block_item = 143,               /* block_item  */
  YYSYMBOL_expression_statement = 144,     /* expression_statement  */
  YYSYMBOL_selection_statement = 145,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 146,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 147,           /* jump_statement  */
  YYSYMBOL_translation_unit = 148,         /* translation_unit  */
  YYSYMBOL_external_declaration = 149,     /* external_declaration  */
  YYSYMBOL_function_definition = 150,      /* function_definition  */
  YYSYMBOL_declaration_list = 151,         /* declaration_list  */
  YYSYMBOL_pointer_opt = 152,              /* pointer_opt  */
  YYSYMBOL_type_qualifier_list_opt = 153,  /* type_qualifier_list_opt  */
  YYSYMBOL_assignment_expression_opt = 154, /* assignment_expression_opt  */
  YYSYMBOL_identifier_list_opt = 155,      /* identifier_list_opt  */
  YYSYMBOL_designation_opt = 156,          /* designation_opt  */
  YYSYMBOL_block_item_list_opt = 157,      /* block_item_list_opt  */
  YYSYMBOL_expression_opt = 158,           /* expression_opt  */
  YYSYMBOL_declaration_list_opt = 159,     /* declaration_list_opt  */
  YYSYMBOL_declaration_specifiers_opt = 160 /* declaration_specifiers_opt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   885

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  196
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  322

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   345


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    57,    61,    65,    74,    78,    85,    92,
      98,   104,   109,   114,   123,   136,   140,   144,   148,   157,
     161,   166,   171,   176,   181,   191,   194,   197,   200,   203,
     206,   212,   216,   226,   230,   236,   242,   251,   255,   261,
     270,   274,   280,   289,   293,   299,   305,   311,   320,   324,
     330,   339,   343,   352,   356,   365,   369,   378,   382,   391,
     395,   404,   408,   419,   423,   432,   435,   438,   441,   444,
     447,   450,   453,   456,   459,   462,   468,   472,   481,   488,
     497,   502,   507,   512,   520,   524,   528,   532,   541,   545,
     554,   557,   560,   563,   569,   572,   575,   578,   581,   584,
     587,   590,   593,   596,   599,   602,   608,   613,   621,   625,
     629,   632,   635,   641,   647,   655,   658,   664,   672,   681,
     690,   698,   705,   715,   720,   729,   733,   741,   745,   754,
     758,   767,   772,   779,   782,   791,   798,   802,   808,   818,
     819,   829,   837,   838,   846,   852,   860,   861,   862,   863,
     864,   865,   869,   874,   880,   888,   897,   898,   906,   908,
     912,   919,   927,   937,   948,   956,   966,   978,   992,   998,
    1003,  1008,  1017,  1022,  1031,  1035,  1042,  1052,  1053,  1061,
    1062,  1066,  1067,  1071,  1072,  1076,  1077,  1081,  1082,  1086,
    1087,  1091,  1092,  1096,  1097,  1101,  1104
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "AUTO", "ENUM",
  "RESTRICT", "UNSIGNED", "BREAK", "EXTERN", "RETURN", "VOID", "CASE",
  "FLOAT", "SHORT", "VOLATILE", "CHAR", "FOR", "SIGNED", "WHILE", "CONST",
  "GOTO", "SIZEOF", "BOOL", "CONTINUE", "IF", "STATIC", "COMPLEX",
  "DEFAULT", "INLINE", "STRUCT", "IMAGINARY", "DO", "INT", "SWITCH",
  "DOUBLE", "LONG", "TYPEDEF", "ELSE", "REGISTER", "UNION", "ARROW",
  "INCREMENT", "DECREMENT", "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_EQUAL",
  "GREATER_EQUAL", "EQUAL", "NOT_EQUAL", "LOGICAL_AND", "LOGICAL_OR",
  "ELLIPSIS", "STAR_ASSIGN", "SLASH_ASSIGN", "PERCENT_ASSIGN",
  "PLUS_ASSIGN", "MINUS_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN",
  "AMPERSAND_ASSIGN", "CARET_ASSIGN", "VERTICAL_BAR_ASSIGN", "COMMA",
  "HASH", "LBRACKET", "RBRACKET", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "DOT", "AMPERSAND", "ASTERISK", "PLUS", "MINUS", "TILDE", "BANG",
  "SLASH", "PERCENT", "LESS", "GREATER", "CARET", "VERTICAL_BAR",
  "QUESTION", "COLON", "SEMICOLON", "ASSIGN", "ID", "CONSTANT", "SL",
  "LOWER_THAN_ELSE", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list",
  "pointer_opt", "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "designation_opt", "block_item_list_opt",
  "expression_opt", "declaration_list_opt", "declaration_specifiers_opt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-173)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-195)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     847,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,   -50,   847,   847,   847,   847,   813,  -173,  -173,
     121,   -70,   -43,  -173,   540,  -173,   -46,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,   121,    55,  -173,    55,   155,
    -173,   -50,   847,   -29,    55,  -173,     2,  -173,  -173,  -173,
      52,   602,   630,   630,   419,    75,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,    -8,   130,   658,  -173,
      24,    17,   127,   -32,   132,   -16,    50,    95,    97,   -40,
    -173,  -173,  -173,  -173,   252,  -173,    85,    45,   506,   419,
    -173,   419,  -173,  -173,  -173,   -51,   452,  -173,   452,   107,
     658,   114,   -20,  -173,   -10,  -173,   155,   122,  -173,  -173,
     658,   658,   125,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,   658,  -173,  -173,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   128,   658,   658,   148,
     149,   133,   139,   159,   150,   574,   166,   152,   171,  -173,
    -173,  -173,  -173,   252,  -173,  -173,  -173,  -173,  -173,   169,
     154,  -173,   121,    70,   686,  -173,    -5,   173,   179,  -173,
     183,   180,   181,   182,   658,  -173,  -173,  -173,  -173,   546,
    -173,   185,  -173,    59,  -173,  -173,  -173,  -173,  -173,    38,
     184,   190,  -173,  -173,  -173,  -173,  -173,  -173,    24,    24,
      17,    17,   127,   127,   127,   127,   -32,   -32,   132,   -16,
      50,    95,    97,   -44,  -173,   161,   170,   339,   658,   168,
    -173,   658,   574,   263,   658,   574,  -173,  -173,  -173,   658,
     658,   223,  -173,   224,  -173,  -173,   773,   204,  -173,   227,
     227,  -173,    75,  -173,  -173,  -173,   155,  -173,  -173,   658,
     658,  -173,   574,   658,   207,    21,  -173,    92,  -173,   230,
      96,  -173,   232,   233,  -173,  -173,  -173,  -173,  -173,    16,
    -173,  -173,  -173,  -173,   214,   658,   574,   574,   658,   574,
    -173,  -173,    86,  -173,   658,   215,  -173,   264,   106,  -173,
    -173,   235,   658,   574,   218,   574,   237,  -173,  -173,  -173,
     574,  -173
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    92,   111,   102,    90,    94,    99,    96,   112,    95,
     101,   110,   103,    91,   104,   113,   105,    97,   100,    98,
      93,   175,   180,   196,   196,   196,   196,     0,   172,   174,
     182,     0,    84,    86,    88,   179,     0,   195,    80,    81,
      82,    83,     1,   173,   125,   181,   123,    79,   180,     0,
     177,   180,   193,     0,   180,   115,   114,   126,   124,    87,
      88,     0,     0,     0,     0,   188,    25,    26,    27,    28,
      29,    30,     2,     3,     4,     6,    19,    31,     0,    33,
      37,    40,    43,    48,    51,    53,    55,    57,    59,    61,
      63,   136,    89,   178,   190,   176,     0,   182,   186,     0,
      23,     0,    20,    21,    76,     0,   109,   135,   109,     0,
       0,     0,     0,   187,     0,   142,     0,     0,    11,    12,
       0,    16,     0,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    65,     0,    31,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,     0,     0,
       0,     0,     0,     0,     0,   192,     0,     2,   191,   158,
     159,   146,   147,   189,   156,   148,   149,   150,   151,     0,
       0,   116,   182,   181,   184,   133,   132,     0,   127,   129,
     185,     0,     0,     0,     0,     5,   108,   106,   107,     0,
      78,     0,   145,   188,   137,   141,   143,   139,    10,     0,
       0,    15,    17,     9,    64,    34,    35,    36,    38,    39,
      41,    42,    46,    47,    44,    45,    49,    50,    52,    54,
      56,    58,    60,     0,   170,     0,     0,   192,     0,     0,
     169,     0,   192,     0,     0,   192,   157,   155,   160,     0,
       0,    26,   183,     0,   131,   121,     0,     0,   122,    24,
       0,    77,   188,    32,   144,   138,     0,     7,     8,     0,
       0,   171,   192,   192,     0,     0,   168,     0,   154,     0,
       0,   152,     0,     0,   120,   117,   128,   130,   134,     0,
     140,    18,    62,   153,     0,   192,   192,   192,     0,   192,
     118,   119,   188,    13,   192,     0,   164,   161,     0,   163,
      14,     0,   192,   192,     0,   192,     0,   162,   165,   167,
     192,   166
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -173,  -173,  -173,  -173,  -173,   -33,  -173,   -66,    64,    65,
      48,    62,   156,   157,   153,   158,   160,  -173,  -106,   -47,
    -173,   -63,   151,   -31,     0,  -173,  -173,   259,  -173,   -55,
     -27,   202,    35,  -173,   -17,  -173,   266,   216,  -173,  -173,
      60,  -173,    61,  -109,    53,  -173,  -173,   203,  -148,  -173,
     268,  -173,   146,  -173,  -173,  -173,  -173,  -173,   295,  -173,
    -173,  -173,   -89,  -173,  -173,  -172,  -173,  -151,  -173,   174
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    75,    76,   210,   211,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   104,
     134,   168,   201,    21,    51,    31,    32,    33,    23,    24,
     107,   197,    25,    26,    60,    56,    35,    45,   187,   188,
     189,   190,   109,    92,   112,   113,   114,   115,   170,   171,
     172,   173,   174,   175,   176,   177,   178,    27,    28,    29,
      52,    36,    46,   253,   191,   116,   179,   180,    53,    38
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   105,    91,    50,   200,    34,   235,   207,   184,   106,
     154,   194,   136,   144,   145,    47,   195,   243,   194,    48,
      54,    93,    30,    37,    37,    37,    37,    22,   100,   102,
     103,   266,   117,   118,   119,   -85,   105,    96,   105,    94,
     270,    55,   203,   155,   106,   135,   106,   146,   147,   204,
       2,   106,   200,   106,   110,   150,   120,   209,   121,     8,
     111,  -180,   122,   169,    11,    44,    97,    30,    98,    91,
     182,   215,   216,   217,   212,     2,   205,   135,   302,   196,
      57,   196,  -180,   194,     8,   303,   274,   214,   296,    11,
     140,   141,   233,   249,   278,   250,   137,   281,   186,   108,
     194,   138,   139,   267,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   294,   110,   293,   135,     2,    30,   265,   111,
     266,   151,    44,   263,   108,     8,   108,   252,    49,   110,
      11,   108,   169,   108,   305,   111,   153,   261,   306,   307,
     110,   309,   181,   311,   194,   310,   111,   290,   194,   297,
     192,   316,   193,   299,   292,   317,   135,   319,   194,   254,
     142,   143,   321,   314,   199,   275,    61,   152,   277,   148,
     149,   280,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   222,   223,   224,   225,    62,    63,    39,    40,
      41,   202,   282,   283,   218,   219,   273,   220,   221,   208,
     226,   227,   213,   234,   237,   238,   133,    44,    57,    91,
     239,    64,   291,    65,   240,   241,    66,    67,    68,    69,
      70,    71,   244,   194,   242,   308,   245,   135,   247,   248,
     255,   256,    72,    73,    74,   257,   271,   258,   259,   260,
     264,   268,   269,   276,   272,     1,   186,     2,     3,   156,
       4,   157,     5,   158,     6,     7,     8,     9,   159,    10,
     160,    11,   161,    61,    12,   162,   163,    13,    14,   164,
      15,   279,    16,   165,    17,   166,    18,    19,   284,   285,
      20,   288,   295,    62,    63,   262,   298,   300,   301,   304,
     312,   313,   315,   318,   320,   230,   228,    59,   229,   236,
     198,   231,    58,   183,   232,   289,   287,   206,    64,   246,
      94,    95,    43,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,  -192,     0,   167,
      73,    74,     1,     0,     2,     3,     0,     4,     0,     5,
       0,     6,     7,     8,     9,     0,    10,     0,    11,     0,
      61,    12,     0,     0,    13,    14,     0,    15,     0,    16,
       0,    17,     0,    18,    19,     0,     0,    20,     0,     0,
      62,    63,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    64,     0,     0,     0,     0,
      66,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     3,    72,    73,    74,     5,
       0,     6,     7,     8,     9,     0,    10,     0,    11,     0,
      61,    12,     0,     0,     0,    14,     0,     0,     0,    16,
       0,    17,     0,    18,    19,     0,     0,     2,     3,     0,
      62,    63,     5,     0,     6,     7,     8,     9,     0,    10,
       0,    11,     0,     0,    12,     0,     0,     0,    14,     0,
       0,     0,    16,     0,    17,    64,    18,    19,     0,     0,
      66,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,     1,
       0,     2,     3,     0,     4,     0,     5,     0,     6,     7,
       8,     9,     0,    10,     0,    11,     0,     0,    12,     0,
       0,    13,    14,     0,    15,     0,    16,     0,    17,     0,
      18,    19,     0,     1,    20,     2,     3,     0,     4,     0,
       5,     0,     6,     7,     8,     9,     0,    10,     0,    11,
       0,     0,    12,     0,     0,    13,    14,    61,    15,     0,
      16,     0,    17,     0,    18,    19,     0,     0,    20,     0,
       0,   156,     0,   157,     0,   158,     0,    62,    63,     0,
     159,     0,   160,   185,   161,    61,     0,   162,   163,     0,
       0,   164,     0,     0,     0,   165,     0,   166,  -194,     0,
       0,     0,    64,     0,   262,    62,    63,    66,    67,    68,
      69,    70,    71,    61,     0,     0,    49,     0,     0,     0,
       0,     0,     0,    72,    73,    74,     0,     0,     0,     0,
      64,     0,    94,    62,    63,    66,    67,    68,    69,    70,
      71,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,    73,    74,     0,     0,     0,     0,    99,     0,
       0,    62,    63,    66,    67,    68,    69,    70,    71,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,     0,     0,     0,     0,   101,     0,     0,    62,
      63,    66,    67,    68,    69,    70,    71,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
       0,     0,     0,     0,    64,     0,     0,    62,    63,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,     0,     0,
       0,     0,    64,     0,     0,     0,     0,    66,   251,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,     1,     0,     2,     3,
       0,     4,     0,     5,     0,     6,     7,     8,     9,     0,
      10,     0,    11,     0,     0,    12,     0,     0,    13,    14,
       0,    15,     0,    16,     0,    17,     0,    18,    19,     0,
       0,    20,     0,    42,     0,     0,     1,     0,     2,     3,
       0,     4,     0,     5,   286,     6,     7,     8,     9,     0,
      10,     0,    11,     0,     0,    12,     0,     0,    13,    14,
       0,    15,     0,    16,     0,    17,     0,    18,    19,     0,
       1,    20,     2,     3,     0,     4,     0,     5,     0,     6,
       7,     8,     9,     0,    10,     0,    11,     0,     0,    12,
       0,     0,    13,    14,     0,    15,     0,    16,     0,    17,
       0,    18,    19,     0,     0,    20
};

static const yytype_int16 yycheck[] =
{
       0,    64,    49,    34,   110,    22,   157,   116,    97,    64,
      50,    62,    78,    45,    46,    85,    67,   165,    62,    62,
      66,    52,    72,    23,    24,    25,    26,    27,    61,    62,
      63,   203,    40,    41,    42,    85,    99,    54,   101,    68,
      84,    87,    62,    83,    99,    78,   101,    79,    80,    69,
       5,   106,   158,   108,    64,    71,    64,   120,    66,    14,
      70,    66,    70,    94,    19,    30,    64,    72,    66,   116,
      25,   137,   138,   139,   121,     5,    86,   110,    62,   106,
      45,   108,    87,    62,    14,    69,   237,   134,    67,    19,
      73,    74,   155,   182,   242,    25,    72,   245,    98,    64,
      62,    77,    78,    65,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   273,    64,   272,   158,     5,    72,    69,    70,
     302,    81,    97,   199,    99,    14,   101,   184,    86,    64,
      19,   106,   173,   108,   295,    70,    49,   194,   296,   297,
      64,   299,    67,   304,    62,    69,    70,   266,    62,    67,
      99,   312,   101,    67,   270,   313,   199,   315,    62,   186,
      43,    44,   320,    67,    67,   238,    21,    82,   241,    47,
      48,   244,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,   144,   145,   146,   147,    41,    42,    24,    25,
      26,    87,   249,   250,   140,   141,   237,   142,   143,    87,
     148,   149,    87,    85,    66,    66,    86,   182,   183,   266,
      87,    66,   269,    68,    85,    66,    71,    72,    73,    74,
      75,    76,    66,    62,    84,   298,    84,   270,    69,    85,
      67,    62,    87,    88,    89,    62,    85,    67,    67,    67,
      65,    67,    62,    85,    84,     3,   256,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    18,    30,    31,    32,    33,    34,    35,    65,    65,
      38,    87,    85,    41,    42,    68,    66,    65,    65,    85,
      85,    37,    67,    85,    67,   152,   150,    48,   151,   158,
     108,   153,    46,    97,   154,   262,   256,   114,    66,   173,
      68,    53,    27,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,     3,    -1,     5,     6,    -1,     8,    -1,    10,
      -1,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      21,    22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    -1,    -1,    38,    -1,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,    87,    88,    89,    10,
      -1,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      21,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    34,    35,    -1,    -1,     5,     6,    -1,
      41,    42,    10,    -1,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    30,    -1,    32,    66,    34,    35,    -1,    -1,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,     3,
      -1,     5,     6,    -1,     8,    -1,    10,    -1,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    -1,     3,    38,     5,     6,    -1,     8,    -1,
      10,    -1,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    -1,    -1,    25,    26,    21,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    -1,    -1,    38,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    41,    42,    -1,
      16,    -1,    18,    87,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    31,    -1,    33,    68,    -1,
      -1,    -1,    66,    -1,    68,    41,    42,    71,    72,    73,
      74,    75,    76,    21,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    -1,    -1,    -1,    -1,
      66,    -1,    68,    41,    42,    71,    72,    73,    74,    75,
      76,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    41,    42,    71,    72,    73,    74,    75,    76,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    -1,    -1,    -1,    -1,    66,    -1,    -1,    41,
      42,    71,    72,    73,    74,    75,    76,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    41,    42,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,     3,    -1,     5,     6,
      -1,     8,    -1,    10,    -1,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,    26,
      -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,    -1,
      -1,    38,    -1,     0,    -1,    -1,     3,    -1,     5,     6,
      -1,     8,    -1,    10,    51,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,    26,
      -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,    -1,
       3,    38,     5,     6,    -1,     8,    -1,    10,    -1,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      -1,    -1,    25,    26,    -1,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    -1,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     8,    10,    12,    13,    14,    15,
      17,    19,    22,    25,    26,    28,    30,    32,    34,    35,
      38,   114,   115,   119,   120,   123,   124,   148,   149,   150,
      72,   116,   117,   118,   125,   127,   152,   115,   160,   160,
     160,   160,     0,   149,   123,   128,   153,    85,    62,    86,
     114,   115,   151,   159,    66,    87,   126,   123,   127,   118,
     125,    21,    41,    42,    66,    68,    71,    72,    73,    74,
      75,    76,    87,    88,    89,    92,    93,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   134,   114,    68,   141,   125,    64,    66,    66,
      96,    66,    96,    96,   110,   112,   120,   121,   123,   133,
      64,    70,   135,   136,   137,   138,   156,    40,    41,    42,
      64,    66,    70,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    86,   111,    96,    98,    72,    77,    78,
      73,    74,    43,    44,    45,    46,    79,    80,    47,    48,
      71,    81,    82,    49,    50,    83,     7,     9,    11,    16,
      18,    20,    23,    24,    27,    31,    33,    87,   112,   114,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   157,
     158,    67,    25,   128,   153,    87,   115,   129,   130,   131,
     132,   155,   133,   133,    62,    67,   121,   122,   122,    67,
     109,   113,    87,    62,    69,    86,   138,   134,    87,   112,
      94,    95,   110,    87,   110,    98,    98,    98,    99,    99,
     100,   100,   101,   101,   101,   101,   102,   102,   103,   104,
     105,   106,   107,   112,    85,   158,   113,    66,    66,    87,
      85,    66,    84,   139,    66,    84,   143,    69,    85,   153,
      25,    72,   110,   154,   125,    67,    62,    62,    67,    67,
      67,   110,    68,    98,    65,    69,   156,    65,    67,    62,
      84,    85,    84,   114,   158,   112,    85,   112,   139,    18,
     112,   139,   110,   110,    65,    65,    51,   131,    87,   135,
     134,   110,   109,   139,   158,    85,    67,    67,    66,    67,
      65,    65,    62,    69,    85,   158,   139,   139,   112,   139,
      69,   158,    85,    37,    67,    67,   158,   139,    85,   139,
      67,   139
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    96,
      96,    96,    96,    96,    96,    97,    97,    97,    97,    97,
      97,    98,    98,    99,    99,    99,    99,   100,   100,   100,
     101,   101,   101,   102,   102,   102,   102,   102,   103,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   110,   110,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   114,
     115,   115,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   119,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   121,   121,   122,   122,
     123,   123,   123,   124,   125,   126,   126,   126,   126,   126,
     126,   126,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   134,   134,   134,   135,
     135,   136,   137,   137,   138,   138,   139,   139,   139,   139,
     139,   139,   140,   140,   140,   141,   142,   142,   143,   143,
     144,   145,   145,   145,   146,   146,   146,   146,   147,   147,
     147,   147,   148,   148,   149,   149,   150,   151,   151,   152,
     152,   153,   153,   154,   154,   155,   155,   156,   156,   157,
     157,   158,   158,   159,   159,   160,   160
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     4,     3,
       3,     2,     2,     6,     7,     1,     0,     1,     3,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       2,     2,     2,     2,     1,     0,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     0,
       1,     1,     1,     1,     2,     1,     3,     5,     6,     6,
       5,     4,     4,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     3,     4,     2,
       4,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     3,     1,     2,     1,     1,
       2,     5,     7,     5,     5,     7,     9,     8,     3,     2,
       2,     3,     1,     2,     1,     1,     4,     1,     2,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: ID  */
#line 53 "tinyC2_22CS30028_22CS10008.y"
            {
        (yyval.node) = createNode("primary_expression");
        addChild((yyval.node), createNode((yyvsp[0].stringVal)));
    }
#line 1605 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 3: /* primary_expression: CONSTANT  */
#line 57 "tinyC2_22CS30028_22CS10008.y"
               {
        (yyval.node) = createNode("primary_expression");
        addChild((yyval.node), createNode((yyvsp[0].stringVal)));
    }
#line 1614 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 4: /* primary_expression: SL  */
#line 61 "tinyC2_22CS30028_22CS10008.y"
            {
        (yyval.node) = createNode("primary_expression");
        addChild((yyval.node), createNode((yyvsp[0].stringVal)));
    }
#line 1623 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 5: /* primary_expression: LPAREN expression RPAREN  */
#line 65 "tinyC2_22CS30028_22CS10008.y"
                                {
        (yyval.node) = createNode("primary_expression");
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode(")"));
    }
#line 1634 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 6: /* postfix_expression: primary_expression  */
#line 74 "tinyC2_22CS30028_22CS10008.y"
                         {
        (yyval.node) = createNode("postfix_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1643 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 7: /* postfix_expression: postfix_expression LBRACKET expression RBRACKET  */
#line 78 "tinyC2_22CS30028_22CS10008.y"
                                                      {
        (yyval.node) = createNode("postfix_expression");
        addChild((yyval.node), (yyvsp[-3].node));
        addChild((yyval.node), createNode("["));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode("]"));
    }
#line 1655 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression LPAREN argument_expression_list_opt RPAREN  */
#line 85 "tinyC2_22CS30028_22CS10008.y"
                                                                    {
        (yyval.node) = createNode("postfix_expression");
        addChild((yyval.node), (yyvsp[-3].node));
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode(")"));
    }
#line 1667 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression DOT ID  */
#line 92 "tinyC2_22CS30028_22CS10008.y"
                                {
        (yyval.node) = createNode("postfix_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("."));
        addChild((yyval.node), createNode((yyvsp[0].stringVal)));
    }
#line 1678 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression ARROW ID  */
#line 98 "tinyC2_22CS30028_22CS10008.y"
                                  {
        (yyval.node) = createNode("postfix_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("->"));
        addChild((yyval.node), createNode((yyvsp[0].stringVal)));
    }
#line 1689 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression INCREMENT  */
#line 104 "tinyC2_22CS30028_22CS10008.y"
                                   {
        (yyval.node) = createNode("postfix_expression");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode("++"));
    }
#line 1699 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression DECREMENT  */
#line 109 "tinyC2_22CS30028_22CS10008.y"
                                   {
        (yyval.node) = createNode("postfix_expression");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode("--"));
    }
#line 1709 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 13: /* postfix_expression: LPAREN type_name RPAREN LBRACE initializer_list RBRACE  */
#line 114 "tinyC2_22CS30028_22CS10008.y"
                                                             {
        (yyval.node) = createNode("postfix_expression");
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-4].node));
        addChild((yyval.node), createNode(")"));
        addChild((yyval.node), createNode("{"));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode("}"));
    }
#line 1723 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 14: /* postfix_expression: LPAREN type_name RPAREN LBRACE initializer_list COMMA RBRACE  */
#line 123 "tinyC2_22CS30028_22CS10008.y"
                                                                   {
        (yyval.node) = createNode("postfix_expression");
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-5].node));
        addChild((yyval.node), createNode(")"));
        addChild((yyval.node), createNode("{"));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(","));
        addChild((yyval.node), createNode("}"));
    }
#line 1738 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 15: /* argument_expression_list_opt: argument_expression_list  */
#line 136 "tinyC2_22CS30028_22CS10008.y"
                               {
        (yyval.node) = createNode("argument_expression_list");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1747 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 16: /* argument_expression_list_opt: %empty  */
#line 140 "tinyC2_22CS30028_22CS10008.y"
      {(yyval.node) = createNode("ε");}
#line 1753 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 17: /* argument_expression_list: assignment_expression  */
#line 144 "tinyC2_22CS30028_22CS10008.y"
                            {
        (yyval.node) = createNode("argument_expression_list");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1762 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 18: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 148 "tinyC2_22CS30028_22CS10008.y"
                                                           {
        (yyval.node) = createNode("argument_expression_list");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(","));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1773 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 19: /* unary_expression: postfix_expression  */
#line 157 "tinyC2_22CS30028_22CS10008.y"
                         {
        (yyval.node) = createNode("unary_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1782 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 20: /* unary_expression: INCREMENT unary_expression  */
#line 161 "tinyC2_22CS30028_22CS10008.y"
                                 {
        (yyval.node) = createNode("unary_expression");
        addChild((yyval.node), createNode("++"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1792 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 21: /* unary_expression: DECREMENT unary_expression  */
#line 166 "tinyC2_22CS30028_22CS10008.y"
                                 {
        (yyval.node) = createNode("unary_expression");
        addChild((yyval.node), createNode("--"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1802 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 22: /* unary_expression: unary_operator cast_expression  */
#line 171 "tinyC2_22CS30028_22CS10008.y"
                                     {
        (yyval.node) = createNode("unary_expression");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1812 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 23: /* unary_expression: SIZEOF unary_expression  */
#line 176 "tinyC2_22CS30028_22CS10008.y"
                              {
        (yyval.node) = createNode("unary_expression");
        addChild((yyval.node), createNode("sizeof"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1822 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 24: /* unary_expression: SIZEOF LPAREN type_name RPAREN  */
#line 181 "tinyC2_22CS30028_22CS10008.y"
                                     {
        (yyval.node) = createNode("unary_expression");
        addChild((yyval.node), createNode("sizeof"));
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode(")"));
    }
#line 1834 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 25: /* unary_operator: AMPERSAND  */
#line 191 "tinyC2_22CS30028_22CS10008.y"
                {
        (yyval.node) = createNode("&");
    }
#line 1842 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 26: /* unary_operator: ASTERISK  */
#line 194 "tinyC2_22CS30028_22CS10008.y"
               {
        (yyval.node) = createNode("*");
    }
#line 1850 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 27: /* unary_operator: PLUS  */
#line 197 "tinyC2_22CS30028_22CS10008.y"
           {
        (yyval.node) = createNode("+");
    }
#line 1858 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 28: /* unary_operator: MINUS  */
#line 200 "tinyC2_22CS30028_22CS10008.y"
            {
        (yyval.node) = createNode("-");
    }
#line 1866 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 29: /* unary_operator: TILDE  */
#line 203 "tinyC2_22CS30028_22CS10008.y"
            {
        (yyval.node) = createNode("~");
    }
#line 1874 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 30: /* unary_operator: BANG  */
#line 206 "tinyC2_22CS30028_22CS10008.y"
           {
        (yyval.node) = createNode("!");
    }
#line 1882 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 31: /* cast_expression: unary_expression  */
#line 212 "tinyC2_22CS30028_22CS10008.y"
                       {
        (yyval.node) = createNode("cast_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1891 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 32: /* cast_expression: LPAREN type_name RPAREN cast_expression  */
#line 216 "tinyC2_22CS30028_22CS10008.y"
                                              {
        (yyval.node) = createNode("cast_expression");
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(")"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1903 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 33: /* multiplicative_expression: cast_expression  */
#line 226 "tinyC2_22CS30028_22CS10008.y"
                      {
        (yyval.node) = createNode("multiplicative_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1912 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 34: /* multiplicative_expression: multiplicative_expression ASTERISK cast_expression  */
#line 230 "tinyC2_22CS30028_22CS10008.y"
                                                         {
        (yyval.node) = createNode("multiplicative_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("*"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1923 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 35: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 236 "tinyC2_22CS30028_22CS10008.y"
                                                      {
        (yyval.node) = createNode("multiplicative_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("/"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1934 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 242 "tinyC2_22CS30028_22CS10008.y"
                                                        {
        (yyval.node) = createNode("multiplicative_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("%"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1945 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 37: /* additive_expression: multiplicative_expression  */
#line 251 "tinyC2_22CS30028_22CS10008.y"
                                {
        (yyval.node) = createNode("additive_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1954 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 38: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 255 "tinyC2_22CS30028_22CS10008.y"
                                                         {
        (yyval.node) = createNode("additive_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("+"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1965 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 39: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 261 "tinyC2_22CS30028_22CS10008.y"
                                                          {
        (yyval.node) = createNode("additive_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("-"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1976 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 40: /* shift_expression: additive_expression  */
#line 270 "tinyC2_22CS30028_22CS10008.y"
                          {
        (yyval.node) = createNode("shift_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1985 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 41: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 274 "tinyC2_22CS30028_22CS10008.y"
                                                      {
        (yyval.node) = createNode("shift_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("<<"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1996 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 42: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 280 "tinyC2_22CS30028_22CS10008.y"
                                                       {
        (yyval.node) = createNode("shift_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(">>"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2007 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 43: /* relational_expression: shift_expression  */
#line 289 "tinyC2_22CS30028_22CS10008.y"
                       {
        (yyval.node) = createNode("relational_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2016 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 44: /* relational_expression: relational_expression LESS shift_expression  */
#line 293 "tinyC2_22CS30028_22CS10008.y"
                                                  {
        (yyval.node) = createNode("relational_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("<"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2027 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 45: /* relational_expression: relational_expression GREATER shift_expression  */
#line 299 "tinyC2_22CS30028_22CS10008.y"
                                                     {
        (yyval.node) = createNode("relational_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(">"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2038 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 46: /* relational_expression: relational_expression LESS_EQUAL shift_expression  */
#line 305 "tinyC2_22CS30028_22CS10008.y"
                                                        {
        (yyval.node) = createNode("relational_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("<="));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2049 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 47: /* relational_expression: relational_expression GREATER_EQUAL shift_expression  */
#line 311 "tinyC2_22CS30028_22CS10008.y"
                                                           {
        (yyval.node) = createNode("relational_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(">="));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2060 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 48: /* equality_expression: relational_expression  */
#line 320 "tinyC2_22CS30028_22CS10008.y"
                            {
        (yyval.node) = createNode("equality_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2069 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 49: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 324 "tinyC2_22CS30028_22CS10008.y"
                                                      {
        (yyval.node) = createNode("equality_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("=="));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2080 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 50: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 330 "tinyC2_22CS30028_22CS10008.y"
                                                          {
        (yyval.node) = createNode("equality_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("!="));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2091 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 51: /* and_expression: equality_expression  */
#line 339 "tinyC2_22CS30028_22CS10008.y"
                          {
        (yyval.node) = createNode("and_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2100 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 52: /* and_expression: and_expression AMPERSAND equality_expression  */
#line 343 "tinyC2_22CS30028_22CS10008.y"
                                                   {
        (yyval.node) = createNode("and_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("&"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2111 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 53: /* exclusive_or_expression: and_expression  */
#line 352 "tinyC2_22CS30028_22CS10008.y"
                     {
        (yyval.node) = createNode("exclusive_or_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2120 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 54: /* exclusive_or_expression: exclusive_or_expression CARET and_expression  */
#line 356 "tinyC2_22CS30028_22CS10008.y"
                                                   {
        (yyval.node) = createNode("exclusive_or_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("^"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2131 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 55: /* inclusive_or_expression: exclusive_or_expression  */
#line 365 "tinyC2_22CS30028_22CS10008.y"
                              {
        (yyval.node) = createNode("inclusive_or_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2140 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 56: /* inclusive_or_expression: inclusive_or_expression VERTICAL_BAR exclusive_or_expression  */
#line 369 "tinyC2_22CS30028_22CS10008.y"
                                                                   {
        (yyval.node) = createNode("inclusive_or_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("|"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2151 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 57: /* logical_and_expression: inclusive_or_expression  */
#line 378 "tinyC2_22CS30028_22CS10008.y"
                              {
        (yyval.node) = createNode("logical_and_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2160 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 58: /* logical_and_expression: logical_and_expression LOGICAL_AND inclusive_or_expression  */
#line 382 "tinyC2_22CS30028_22CS10008.y"
                                                                 {
        (yyval.node) = createNode("logical_and_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("&&"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2171 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 59: /* logical_or_expression: logical_and_expression  */
#line 391 "tinyC2_22CS30028_22CS10008.y"
                             {
        (yyval.node) = createNode("logical_or_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2180 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 60: /* logical_or_expression: logical_or_expression LOGICAL_OR logical_and_expression  */
#line 395 "tinyC2_22CS30028_22CS10008.y"
                                                              {
        (yyval.node) = createNode("logical_or_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("||"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2191 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 61: /* conditional_expression: logical_or_expression  */
#line 404 "tinyC2_22CS30028_22CS10008.y"
                            {
        (yyval.node) = createNode("conditional_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2200 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 62: /* conditional_expression: logical_or_expression QUESTION expression COLON conditional_expression  */
#line 408 "tinyC2_22CS30028_22CS10008.y"
                                                                             {
        (yyval.node) = createNode("conditional_expression");
        addChild((yyval.node), (yyvsp[-4].node));
        addChild((yyval.node), createNode("?"));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(":"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2213 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 63: /* assignment_expression: conditional_expression  */
#line 419 "tinyC2_22CS30028_22CS10008.y"
                             {
        (yyval.node) = createNode("assignment_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2222 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 64: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 423 "tinyC2_22CS30028_22CS10008.y"
                                                                 {
        (yyval.node) = createNode("assignment_expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2233 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 65: /* assignment_operator: ASSIGN  */
#line 432 "tinyC2_22CS30028_22CS10008.y"
             {
        (yyval.node) = createNode("=");
    }
#line 2241 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 66: /* assignment_operator: STAR_ASSIGN  */
#line 435 "tinyC2_22CS30028_22CS10008.y"
                  {
        (yyval.node) = createNode("*=");
    }
#line 2249 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 67: /* assignment_operator: SLASH_ASSIGN  */
#line 438 "tinyC2_22CS30028_22CS10008.y"
                   {
        (yyval.node) = createNode("/=");
    }
#line 2257 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 68: /* assignment_operator: PERCENT_ASSIGN  */
#line 441 "tinyC2_22CS30028_22CS10008.y"
                     {
        (yyval.node) = createNode("%=");
    }
#line 2265 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 69: /* assignment_operator: PLUS_ASSIGN  */
#line 444 "tinyC2_22CS30028_22CS10008.y"
                  {
        (yyval.node) = createNode("+=");
    }
#line 2273 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 70: /* assignment_operator: MINUS_ASSIGN  */
#line 447 "tinyC2_22CS30028_22CS10008.y"
                   {
        (yyval.node) = createNode("-=");
    }
#line 2281 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 71: /* assignment_operator: LEFT_SHIFT_ASSIGN  */
#line 450 "tinyC2_22CS30028_22CS10008.y"
                        {
        (yyval.node) = createNode("<<=");
    }
#line 2289 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 72: /* assignment_operator: RIGHT_SHIFT_ASSIGN  */
#line 453 "tinyC2_22CS30028_22CS10008.y"
                         {
        (yyval.node) = createNode(">>=");
    }
#line 2297 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 73: /* assignment_operator: AMPERSAND_ASSIGN  */
#line 456 "tinyC2_22CS30028_22CS10008.y"
                       {
        (yyval.node) = createNode("&=");
    }
#line 2305 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 74: /* assignment_operator: CARET_ASSIGN  */
#line 459 "tinyC2_22CS30028_22CS10008.y"
                   {
        (yyval.node) = createNode("^=");
    }
#line 2313 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 75: /* assignment_operator: VERTICAL_BAR_ASSIGN  */
#line 462 "tinyC2_22CS30028_22CS10008.y"
                          {
        (yyval.node) = createNode("|=");
    }
#line 2321 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 76: /* expression: assignment_expression  */
#line 468 "tinyC2_22CS30028_22CS10008.y"
                            {
        (yyval.node) = createNode("expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2330 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 77: /* expression: expression COMMA assignment_expression  */
#line 472 "tinyC2_22CS30028_22CS10008.y"
                                             {
        (yyval.node) = createNode("expression");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(","));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2341 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 78: /* constant_expression: conditional_expression  */
#line 481 "tinyC2_22CS30028_22CS10008.y"
                             {
        (yyval.node) = createNode("constant_expression");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2350 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 79: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 488 "tinyC2_22CS30028_22CS10008.y"
                                                                {
        (yyval.node) = createNode("declaration");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode(";"));  
    }
#line 2361 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 80: /* declaration_specifiers: storage_class_specifier declaration_specifiers_opt  */
#line 497 "tinyC2_22CS30028_22CS10008.y"
                                                         {
        (yyval.node) = createNode("declaration_specifiers");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2371 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 81: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 502 "tinyC2_22CS30028_22CS10008.y"
                                                {
        (yyval.node) = createNode("declaration_specifiers");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2381 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 82: /* declaration_specifiers: type_qualifier declaration_specifiers_opt  */
#line 507 "tinyC2_22CS30028_22CS10008.y"
                                                    {
        (yyval.node) = createNode("declaration_specifiers");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2391 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 83: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 512 "tinyC2_22CS30028_22CS10008.y"
                                                    {
        (yyval.node) = createNode("declaration_specifiers");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2401 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 84: /* init_declarator_list_opt: init_declarator_list  */
#line 520 "tinyC2_22CS30028_22CS10008.y"
                           {
        (yyval.node) = createNode("init_declarator_list");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2410 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 85: /* init_declarator_list_opt: %empty  */
#line 524 "tinyC2_22CS30028_22CS10008.y"
      {(yyval.node) = createNode("ε");}
#line 2416 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 86: /* init_declarator_list: init_declarator  */
#line 528 "tinyC2_22CS30028_22CS10008.y"
                      {
        (yyval.node) = createNode("init_declarator_list");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2425 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 87: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 532 "tinyC2_22CS30028_22CS10008.y"
                                                 {
        (yyval.node) = createNode("init_declarator_list");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(","));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2436 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 88: /* init_declarator: declarator  */
#line 541 "tinyC2_22CS30028_22CS10008.y"
                 {
        (yyval.node) = createNode("init_declarator");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2445 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 89: /* init_declarator: declarator ASSIGN initializer  */
#line 545 "tinyC2_22CS30028_22CS10008.y"
                                    {
        (yyval.node) = createNode("init_declarator");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("="));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2456 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 90: /* storage_class_specifier: EXTERN  */
#line 554 "tinyC2_22CS30028_22CS10008.y"
             {
        (yyval.node) = createNode("extern");
    }
#line 2464 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 91: /* storage_class_specifier: STATIC  */
#line 557 "tinyC2_22CS30028_22CS10008.y"
             {
        (yyval.node) = createNode("static");
    }
#line 2472 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 92: /* storage_class_specifier: AUTO  */
#line 560 "tinyC2_22CS30028_22CS10008.y"
           {
        (yyval.node) = createNode("auto");
    }
#line 2480 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 93: /* storage_class_specifier: REGISTER  */
#line 563 "tinyC2_22CS30028_22CS10008.y"
               {
        (yyval.node) = createNode("register");
    }
#line 2488 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 94: /* type_specifier: VOID  */
#line 569 "tinyC2_22CS30028_22CS10008.y"
           {
        (yyval.node) = createNode("void");
    }
#line 2496 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 95: /* type_specifier: CHAR  */
#line 572 "tinyC2_22CS30028_22CS10008.y"
           {
        (yyval.node) = createNode("char");
    }
#line 2504 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 96: /* type_specifier: SHORT  */
#line 575 "tinyC2_22CS30028_22CS10008.y"
            {
        (yyval.node) = createNode("short");
    }
#line 2512 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 97: /* type_specifier: INT  */
#line 578 "tinyC2_22CS30028_22CS10008.y"
          {
        (yyval.node) = createNode("int");
    }
#line 2520 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 98: /* type_specifier: LONG  */
#line 581 "tinyC2_22CS30028_22CS10008.y"
           {
        (yyval.node) = createNode("long");
    }
#line 2528 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 99: /* type_specifier: FLOAT  */
#line 584 "tinyC2_22CS30028_22CS10008.y"
            {
        (yyval.node) = createNode("float");
    }
#line 2536 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 100: /* type_specifier: DOUBLE  */
#line 587 "tinyC2_22CS30028_22CS10008.y"
             {
        (yyval.node) = createNode("double");
    }
#line 2544 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 101: /* type_specifier: SIGNED  */
#line 590 "tinyC2_22CS30028_22CS10008.y"
             {
        (yyval.node) = createNode("signed");
    }
#line 2552 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 102: /* type_specifier: UNSIGNED  */
#line 593 "tinyC2_22CS30028_22CS10008.y"
               {
        (yyval.node) = createNode("unsigned");
    }
#line 2560 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 103: /* type_specifier: BOOL  */
#line 596 "tinyC2_22CS30028_22CS10008.y"
           {
        (yyval.node) = createNode("_Bool");
    }
#line 2568 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 104: /* type_specifier: COMPLEX  */
#line 599 "tinyC2_22CS30028_22CS10008.y"
              {
        (yyval.node) = createNode("_Complex");
    }
#line 2576 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 105: /* type_specifier: IMAGINARY  */
#line 602 "tinyC2_22CS30028_22CS10008.y"
                {
        (yyval.node) = createNode("_Imaginary");
    }
#line 2584 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 106: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 608 "tinyC2_22CS30028_22CS10008.y"
                                                  {
        (yyval.node) = createNode("specifier_qualifier_list");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2594 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 107: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 613 "tinyC2_22CS30028_22CS10008.y"
                                                  {
        (yyval.node) = createNode("specifier_qualifier_list");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2604 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 108: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 621 "tinyC2_22CS30028_22CS10008.y"
                               {
        (yyval.node) = createNode("specifier_qualifier_list");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2613 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 109: /* specifier_qualifier_list_opt: %empty  */
#line 625 "tinyC2_22CS30028_22CS10008.y"
      {(yyval.node)=createNode("ε");}
#line 2619 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 110: /* type_qualifier: CONST  */
#line 629 "tinyC2_22CS30028_22CS10008.y"
            {
        (yyval.node) = createNode("const");
    }
#line 2627 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 111: /* type_qualifier: RESTRICT  */
#line 632 "tinyC2_22CS30028_22CS10008.y"
               {
        (yyval.node) = createNode("restrict");
    }
#line 2635 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 112: /* type_qualifier: VOLATILE  */
#line 635 "tinyC2_22CS30028_22CS10008.y"
               {
        (yyval.node) = createNode("volatile");
    }
#line 2643 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 113: /* function_specifier: INLINE  */
#line 641 "tinyC2_22CS30028_22CS10008.y"
             {
        (yyval.node) = createNode("inline");
    }
#line 2651 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 114: /* declarator: pointer_opt direct_declarator  */
#line 647 "tinyC2_22CS30028_22CS10008.y"
                                    {
        (yyval.node) = createNode("declarator");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2661 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 115: /* direct_declarator: ID  */
#line 655 "tinyC2_22CS30028_22CS10008.y"
         {
        (yyval.node) = createNode((yyvsp[0].stringVal));
    }
#line 2669 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 116: /* direct_declarator: LPAREN declarator RPAREN  */
#line 658 "tinyC2_22CS30028_22CS10008.y"
                               {
        (yyval.node) = createNode("direct_declarator");
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode(")"));
    }
#line 2680 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 117: /* direct_declarator: direct_declarator LBRACKET type_qualifier_list_opt assignment_expression_opt RBRACKET  */
#line 664 "tinyC2_22CS30028_22CS10008.y"
                                                                                            {
        (yyval.node) = createNode("direct_declarator");
        addChild((yyval.node), (yyvsp[-4].node));
        addChild((yyval.node), createNode("["));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode("]"));
    }
#line 2693 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 118: /* direct_declarator: direct_declarator LBRACKET STATIC type_qualifier_list_opt assignment_expression RBRACKET  */
#line 672 "tinyC2_22CS30028_22CS10008.y"
                                                                                               {
        (yyval.node) = createNode("direct_declarator");
        addChild((yyval.node), (yyvsp[-5].node));
        addChild((yyval.node), createNode("["));
        addChild((yyval.node), createNode("static"));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode("]"));
    }
#line 2707 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 119: /* direct_declarator: direct_declarator LBRACKET type_qualifier_list STATIC assignment_expression RBRACKET  */
#line 681 "tinyC2_22CS30028_22CS10008.y"
                                                                                           {
        (yyval.node) = createNode("direct_declarator");
        addChild((yyval.node), (yyvsp[-5].node));
        addChild((yyval.node), createNode("["));
        addChild((yyval.node), (yyvsp[-3].node));
        addChild((yyval.node), createNode("static"));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode("]"));
    }
#line 2721 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 120: /* direct_declarator: direct_declarator LBRACKET type_qualifier_list_opt ASTERISK RBRACKET  */
#line 690 "tinyC2_22CS30028_22CS10008.y"
                                                                           {
        (yyval.node) = createNode("direct_declarator");
        addChild((yyval.node), (yyvsp[-4].node));
        addChild((yyval.node), createNode("["));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("*"));
        addChild((yyval.node), createNode("]"));
    }
#line 2734 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 121: /* direct_declarator: direct_declarator LPAREN parameter_type_list RPAREN  */
#line 698 "tinyC2_22CS30028_22CS10008.y"
                                                          {
        (yyval.node) = createNode("direct_declarator");
        addChild((yyval.node), (yyvsp[-3].node));
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode(")"));
    }
#line 2746 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 122: /* direct_declarator: direct_declarator LPAREN identifier_list_opt RPAREN  */
#line 705 "tinyC2_22CS30028_22CS10008.y"
                                                          {
        (yyval.node) = createNode("direct_declarator");
        addChild((yyval.node), (yyvsp[-3].node));
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode(")"));
    }
#line 2758 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 123: /* pointer: ASTERISK type_qualifier_list_opt  */
#line 715 "tinyC2_22CS30028_22CS10008.y"
                                       {
        (yyval.node) = createNode("pointer");
        addChild((yyval.node), createNode("*"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2768 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 124: /* pointer: ASTERISK type_qualifier_list_opt pointer  */
#line 720 "tinyC2_22CS30028_22CS10008.y"
                                               {
        (yyval.node) = createNode("pointer");
        addChild((yyval.node), createNode("*"));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2779 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 125: /* type_qualifier_list: type_qualifier  */
#line 729 "tinyC2_22CS30028_22CS10008.y"
                     {
        (yyval.node) = createNode("type_qualifier_list");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2788 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 126: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 733 "tinyC2_22CS30028_22CS10008.y"
                                         {
        (yyval.node) = createNode("type_qualifier_list");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2798 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 127: /* parameter_type_list: parameter_list  */
#line 741 "tinyC2_22CS30028_22CS10008.y"
                     {
        (yyval.node) = createNode("parameter_type_list");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2807 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 128: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 745 "tinyC2_22CS30028_22CS10008.y"
                                    {
        (yyval.node) = createNode("parameter_type_list");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(","));
        addChild((yyval.node), createNode("..."));
    }
#line 2818 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 129: /* parameter_list: parameter_declaration  */
#line 754 "tinyC2_22CS30028_22CS10008.y"
                            {
        (yyval.node) = createNode("parameter_list");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2827 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 130: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 758 "tinyC2_22CS30028_22CS10008.y"
                                                 {
        (yyval.node) = createNode("parameter_list");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(","));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2838 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 131: /* parameter_declaration: declaration_specifiers declarator  */
#line 767 "tinyC2_22CS30028_22CS10008.y"
                                        {
        (yyval.node) = createNode("parameter_declaration");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2848 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 132: /* parameter_declaration: declaration_specifiers  */
#line 772 "tinyC2_22CS30028_22CS10008.y"
                             {
        (yyval.node) = createNode("parameter_declaration");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2857 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 133: /* identifier_list: ID  */
#line 779 "tinyC2_22CS30028_22CS10008.y"
         {
        (yyval.node) = createNode((yyvsp[0].stringVal));
    }
#line 2865 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 134: /* identifier_list: identifier_list COMMA ID  */
#line 782 "tinyC2_22CS30028_22CS10008.y"
                               {
        (yyval.node) = createNode("identifier_list");
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(","));
        addChild((yyval.node), createNode((yyvsp[0].stringVal)));
    }
#line 2876 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 135: /* type_name: specifier_qualifier_list  */
#line 791 "tinyC2_22CS30028_22CS10008.y"
                               {
        (yyval.node) = createNode("type_name");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2885 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 136: /* initializer: assignment_expression  */
#line 798 "tinyC2_22CS30028_22CS10008.y"
                            {
        (yyval.node) = createNode("initializer");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2894 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 137: /* initializer: LBRACE initializer_list RBRACE  */
#line 802 "tinyC2_22CS30028_22CS10008.y"
                                     {
        (yyval.node) = createNode("initializer");
        addChild((yyval.node), createNode("{"));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode("}"));
    }
#line 2905 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 138: /* initializer: LBRACE initializer_list COMMA RBRACE  */
#line 808 "tinyC2_22CS30028_22CS10008.y"
                                           {
        (yyval.node) = createNode("initializer");
        addChild((yyval.node), createNode("{"));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(","));
        addChild((yyval.node), createNode("}"));
    }
#line 2917 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 139: /* initializer_list: designation_opt initializer  */
#line 818 "tinyC2_22CS30028_22CS10008.y"
                                  {(yyval.node) = createNode("initializer_list"); addChild((yyval.node), (yyvsp[-1].node)); addChild((yyval.node), (yyvsp[0].node));}
#line 2923 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 140: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 819 "tinyC2_22CS30028_22CS10008.y"
                                                         {
        (yyval.node) = createNode("initializer_list");
        addChild((yyval.node), (yyvsp[-3].node));
        addChild((yyval.node), createNode(","));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2935 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 141: /* designation: designator_list ASSIGN  */
#line 829 "tinyC2_22CS30028_22CS10008.y"
                             {
        (yyval.node) = createNode("designation");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode("="));
    }
#line 2945 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 142: /* designator_list: designator  */
#line 837 "tinyC2_22CS30028_22CS10008.y"
                 { (yyval.node) = createNode("designator_list"); addChild((yyval.node), (yyvsp[0].node)); }
#line 2951 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 143: /* designator_list: designator_list designator  */
#line 838 "tinyC2_22CS30028_22CS10008.y"
                                 {
        (yyval.node) = createNode("designator_list");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 2961 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 144: /* designator: LBRACKET constant_expression RBRACKET  */
#line 846 "tinyC2_22CS30028_22CS10008.y"
                                            {
        (yyval.node) = createNode("designator");
        addChild((yyval.node), createNode("["));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode("]"));
    }
#line 2972 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 145: /* designator: DOT ID  */
#line 852 "tinyC2_22CS30028_22CS10008.y"
             {
        (yyval.node) = createNode("designator");
        addChild((yyval.node), createNode("."));
        addChild((yyval.node), createNode((yyvsp[0].stringVal)));   
    }
#line 2982 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 146: /* statement: labeled_statement  */
#line 860 "tinyC2_22CS30028_22CS10008.y"
                        { (yyval.node) = createNode("statement");  addChild((yyval.node), (yyvsp[0].node)); }
#line 2988 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 147: /* statement: compound_statement  */
#line 861 "tinyC2_22CS30028_22CS10008.y"
                         { (yyval.node) = createNode("statement"); addChild((yyval.node), (yyvsp[0].node)); }
#line 2994 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 148: /* statement: expression_statement  */
#line 862 "tinyC2_22CS30028_22CS10008.y"
                           { (yyval.node) = createNode("statement");  addChild((yyval.node), (yyvsp[0].node)); }
#line 3000 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 149: /* statement: selection_statement  */
#line 863 "tinyC2_22CS30028_22CS10008.y"
                          { (yyval.node) = createNode("statement"); addChild((yyval.node), (yyvsp[0].node)); }
#line 3006 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 150: /* statement: iteration_statement  */
#line 864 "tinyC2_22CS30028_22CS10008.y"
                          { (yyval.node) = createNode("statement"); addChild((yyval.node), (yyvsp[0].node)); }
#line 3012 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 151: /* statement: jump_statement  */
#line 865 "tinyC2_22CS30028_22CS10008.y"
                     { (yyval.node) = createNode("statement"); addChild((yyval.node), (yyvsp[0].node)); }
#line 3018 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 152: /* labeled_statement: ID COLON statement  */
#line 869 "tinyC2_22CS30028_22CS10008.y"
                         { (yyval.node) = createNode("labeled_statement"); 
        addChild((yyval.node), createNode((yyvsp[-2].stringVal)));
        addChild((yyval.node), createNode(":"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 3028 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 153: /* labeled_statement: CASE constant_expression COLON statement  */
#line 874 "tinyC2_22CS30028_22CS10008.y"
                                               { (yyval.node) = createNode("labeled_statement"); 
        addChild((yyval.node), createNode("case"));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(":"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 3039 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 154: /* labeled_statement: DEFAULT COLON statement  */
#line 880 "tinyC2_22CS30028_22CS10008.y"
                              { (yyval.node) = createNode("labeled_statement"); 
        addChild((yyval.node), createNode("default"));
        addChild((yyval.node), createNode(":"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 3049 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 155: /* compound_statement: LBRACE block_item_list_opt RBRACE  */
#line 888 "tinyC2_22CS30028_22CS10008.y"
                                        {
        (yyval.node) = createNode("compound_statement");
        addChild((yyval.node), createNode("{"));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode("}"));
    }
#line 3060 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 156: /* block_item_list: block_item  */
#line 897 "tinyC2_22CS30028_22CS10008.y"
                 { (yyval.node) = createNode("block_item_list"); }
#line 3066 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 157: /* block_item_list: block_item_list block_item  */
#line 898 "tinyC2_22CS30028_22CS10008.y"
                                 {
        (yyval.node) = createNode("block_item_list");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 3076 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 158: /* block_item: declaration  */
#line 906 "tinyC2_22CS30028_22CS10008.y"
                  { (yyval.node) = createNode("block_item"); 
        addChild((yyval.node), (yyvsp[0].node));}
#line 3083 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 159: /* block_item: statement  */
#line 908 "tinyC2_22CS30028_22CS10008.y"
                { (yyval.node) = createNode("block_item"); addChild((yyval.node), (yyvsp[0].node));}
#line 3089 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 160: /* expression_statement: expression_opt SEMICOLON  */
#line 912 "tinyC2_22CS30028_22CS10008.y"
                               {(yyval.node) = createNode("expression_statement"); 
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode(";"));
    }
#line 3098 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 161: /* selection_statement: IF LPAREN expression RPAREN statement  */
#line 919 "tinyC2_22CS30028_22CS10008.y"
                                                                  {
        (yyval.node) = createNode("selection_statement");
        addChild((yyval.node), createNode("if"));
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(")"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 3111 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 162: /* selection_statement: IF LPAREN expression RPAREN statement ELSE statement  */
#line 927 "tinyC2_22CS30028_22CS10008.y"
                                                           {
        (yyval.node) = createNode("selection_statement");
        addChild((yyval.node), createNode("if"));
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-4].node));
        addChild((yyval.node), createNode(")"));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode("else"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 3126 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 163: /* selection_statement: SWITCH LPAREN expression RPAREN statement  */
#line 937 "tinyC2_22CS30028_22CS10008.y"
                                                {
        (yyval.node) = createNode("selection_statement");
        addChild((yyval.node), createNode("switch"));
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(")"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 3139 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 164: /* iteration_statement: WHILE LPAREN expression RPAREN statement  */
#line 948 "tinyC2_22CS30028_22CS10008.y"
                                               {
        (yyval.node) = createNode("iteration_statement");
        addChild((yyval.node), createNode("while"));  
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(")"));
        addChild((yyval.node), (yyvsp[0].node));   
    }
#line 3152 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 165: /* iteration_statement: DO statement WHILE LPAREN expression RPAREN SEMICOLON  */
#line 956 "tinyC2_22CS30028_22CS10008.y"
                                                            {
        (yyval.node) = createNode("iteration_statement");
        addChild((yyval.node), createNode("do"));
        addChild((yyval.node), (yyvsp[-5].node));
        addChild((yyval.node), createNode("while"));
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(")"));
        addChild((yyval.node), createNode(";"));
    }
#line 3167 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 166: /* iteration_statement: FOR LPAREN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RPAREN statement  */
#line 966 "tinyC2_22CS30028_22CS10008.y"
                                                                                                   {
        (yyval.node) = createNode("iteration_statement");
        addChild((yyval.node), createNode("for"));
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-6].node));
        addChild((yyval.node), createNode(";"));
        addChild((yyval.node), (yyvsp[-4].node));
        addChild((yyval.node), createNode(";"));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(")"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 3184 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 167: /* iteration_statement: FOR LPAREN declaration expression_opt SEMICOLON expression_opt RPAREN statement  */
#line 978 "tinyC2_22CS30028_22CS10008.y"
                                                                                     {
        (yyval.node) = createNode("iteration_statement");
        addChild((yyval.node), createNode("for"));
        addChild((yyval.node), createNode("("));
        addChild((yyval.node), (yyvsp[-5].node));
        addChild((yyval.node), (yyvsp[-4].node));
        addChild((yyval.node), createNode(";"));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), createNode(")"));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 3200 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 168: /* jump_statement: GOTO ID SEMICOLON  */
#line 992 "tinyC2_22CS30028_22CS10008.y"
                        {
        (yyval.node) = createNode("jump_statement");
        addChild((yyval.node), createNode("goto"));
        addChild((yyval.node), createNode((yyvsp[-1].stringVal)));
        addChild((yyval.node), createNode(";"));
    }
#line 3211 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 169: /* jump_statement: CONTINUE SEMICOLON  */
#line 998 "tinyC2_22CS30028_22CS10008.y"
                         {
        (yyval.node) = createNode("jump_statement");
        addChild((yyval.node), createNode("continue"));
        addChild((yyval.node), createNode(";"));
    }
#line 3221 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 170: /* jump_statement: BREAK SEMICOLON  */
#line 1003 "tinyC2_22CS30028_22CS10008.y"
                      {
        (yyval.node) = createNode("jump_statement");
        addChild((yyval.node), createNode("break"));
        addChild((yyval.node), createNode(";"));
    }
#line 3231 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 171: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 1008 "tinyC2_22CS30028_22CS10008.y"
                                      {
        (yyval.node) = createNode("jump_statement");
        addChild((yyval.node), createNode("return"));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), createNode(";"));
    }
#line 3242 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 172: /* translation_unit: external_declaration  */
#line 1017 "tinyC2_22CS30028_22CS10008.y"
                           {
        (yyval.node) = createNode("translation_unit");
        addChild((yyval.node), (yyvsp[0].node));
        printTree((yyval.node),0);
    }
#line 3252 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 173: /* translation_unit: translation_unit external_declaration  */
#line 1022 "tinyC2_22CS30028_22CS10008.y"
                                            {
        (yyval.node) = createNode("translation_unit");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
        printTree((yyval.node),0);
    }
#line 3263 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 174: /* external_declaration: function_definition  */
#line 1031 "tinyC2_22CS30028_22CS10008.y"
                          {
        (yyval.node) = createNode("external_declaration");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 3272 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 175: /* external_declaration: declaration  */
#line 1035 "tinyC2_22CS30028_22CS10008.y"
                  {
        (yyval.node) = createNode("external_declaration");
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 3281 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 176: /* function_definition: declaration_specifiers declarator declaration_list_opt compound_statement  */
#line 1042 "tinyC2_22CS30028_22CS10008.y"
                                                                                {
        (yyval.node) = createNode("function_definition");
        addChild((yyval.node), (yyvsp[-3].node));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 3293 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 177: /* declaration_list: declaration  */
#line 1052 "tinyC2_22CS30028_22CS10008.y"
                  {(yyval.node) = createNode("declaration_list"); addChild((yyval.node), (yyvsp[0].node));}
#line 3299 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 178: /* declaration_list: declaration_list declaration  */
#line 1053 "tinyC2_22CS30028_22CS10008.y"
                                  {
        (yyval.node) = createNode("declaration_list");
        addChild((yyval.node), (yyvsp[-1].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 3309 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 179: /* pointer_opt: pointer  */
#line 1061 "tinyC2_22CS30028_22CS10008.y"
              {(yyval.node) = createNode("pointer");addChild((yyval.node), (yyvsp[0].node));}
#line 3315 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 180: /* pointer_opt: %empty  */
#line 1062 "tinyC2_22CS30028_22CS10008.y"
      {(yyval.node)=createNode("ε");}
#line 3321 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 181: /* type_qualifier_list_opt: type_qualifier_list  */
#line 1066 "tinyC2_22CS30028_22CS10008.y"
                          {(yyval.node) = createNode("type_qualifier_list");addChild((yyval.node), (yyvsp[0].node));}
#line 3327 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 182: /* type_qualifier_list_opt: %empty  */
#line 1067 "tinyC2_22CS30028_22CS10008.y"
      {(yyval.node)=createNode("ε");}
#line 3333 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 183: /* assignment_expression_opt: assignment_expression  */
#line 1071 "tinyC2_22CS30028_22CS10008.y"
                            {(yyval.node) = createNode("assignment_expression");addChild((yyval.node), (yyvsp[0].node));}
#line 3339 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 184: /* assignment_expression_opt: %empty  */
#line 1072 "tinyC2_22CS30028_22CS10008.y"
      {(yyval.node)=createNode("ε");}
#line 3345 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 185: /* identifier_list_opt: identifier_list  */
#line 1076 "tinyC2_22CS30028_22CS10008.y"
                      {(yyval.node) = createNode("identifier_list");addChild((yyval.node), (yyvsp[0].node));}
#line 3351 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 186: /* identifier_list_opt: %empty  */
#line 1077 "tinyC2_22CS30028_22CS10008.y"
      {(yyval.node)=createNode("ε");}
#line 3357 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 187: /* designation_opt: designation  */
#line 1081 "tinyC2_22CS30028_22CS10008.y"
                  {(yyval.node) = createNode("designation");addChild((yyval.node), (yyvsp[0].node));}
#line 3363 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 188: /* designation_opt: %empty  */
#line 1082 "tinyC2_22CS30028_22CS10008.y"
      {(yyval.node)=createNode("ε");}
#line 3369 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 189: /* block_item_list_opt: block_item_list  */
#line 1086 "tinyC2_22CS30028_22CS10008.y"
                     {(yyval.node) = createNode("block_item_list");addChild((yyval.node), (yyvsp[0].node));}
#line 3375 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 190: /* block_item_list_opt: %empty  */
#line 1087 "tinyC2_22CS30028_22CS10008.y"
      {(yyval.node)=createNode("ε");}
#line 3381 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 191: /* expression_opt: expression  */
#line 1091 "tinyC2_22CS30028_22CS10008.y"
                 {(yyval.node) = createNode("expression");addChild((yyval.node), (yyvsp[0].node));}
#line 3387 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 192: /* expression_opt: %empty  */
#line 1092 "tinyC2_22CS30028_22CS10008.y"
      {(yyval.node)=createNode("ε");}
#line 3393 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 193: /* declaration_list_opt: declaration_list  */
#line 1096 "tinyC2_22CS30028_22CS10008.y"
                      {(yyval.node) = createNode("declaration_list");addChild((yyval.node), (yyvsp[0].node));}
#line 3399 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 194: /* declaration_list_opt: %empty  */
#line 1097 "tinyC2_22CS30028_22CS10008.y"
      {(yyval.node)=createNode("ε");}
#line 3405 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 195: /* declaration_specifiers_opt: declaration_specifiers  */
#line 1101 "tinyC2_22CS30028_22CS10008.y"
                            {(yyval.node) = createNode("declaration_specifiers");
    addChild((yyval.node), (yyvsp[0].node));
    }
#line 3413 "tinyC2_22CS30028_22CS10008.tab.c"
    break;

  case 196: /* declaration_specifiers_opt: %empty  */
#line 1104 "tinyC2_22CS30028_22CS10008.y"
      {(yyval.node)=createNode("ε");}
#line 3419 "tinyC2_22CS30028_22CS10008.tab.c"
    break;


#line 3423 "tinyC2_22CS30028_22CS10008.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1107 "tinyC2_22CS30028_22CS10008.y"


void yyerror(const char *s) {
    fprintf(stderr, "Parser error: %s\n", s);
}
