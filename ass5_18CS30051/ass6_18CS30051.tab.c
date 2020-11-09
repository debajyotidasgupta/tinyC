/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ass6_18CS30051.y"


/**
 * Authors  : Debajyoti Dasgupta (18CS30051) [debajyotidasgupta6@gmail.com]
 *            Siba Smarak Panigrahi (18CS10069) [sibasmarak.p@gmail.com]
 * Language : C++14
 * Desc     : header file for the translation statements
 * Date     : 24.10.2020
 * Project  : TinyC
 * Course   : CS39003 Compilers Laboratory
 */


//Header Files Needed

#include <bits/stdc++.h>
#include <sstream>

//Translator file
#include "ass6_18CS30051_translator.h"

//yylex for lexer, yyerror for error recovery, var_type for last encountered type
extern int yylex();
void yyerror(string s);
extern string var_type;
extern vector<label> label_table;
using namespace std;

#line 99 "ass6_18CS30051.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_ASS6_18CS30051_TAB_H_INCLUDED
# define YY_YY_ASS6_18CS30051_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    RESTRICT = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    RETURN = 277,
    SHORT = 278,
    SIGNED = 279,
    SIZEOF = 280,
    STATIC = 281,
    STRUCT = 282,
    SWITCH = 283,
    TYPEDEF = 284,
    UNION = 285,
    UNSIGNED = 286,
    VOID = 287,
    VOLATILE = 288,
    WHILE = 289,
    _BOOL = 290,
    _COMPLEX = 291,
    _IMAGINARY = 292,
    IDENTIFIER = 293,
    INTEGER_CONSTANT = 294,
    FLOATING_CONSTANT = 295,
    CHARACTER_CONSTANT = 296,
    STRING_LITERAL = 297,
    SQUARE_BRACKET_OPEN = 298,
    SQUARE_BRACKET_CLOSE = 299,
    ROUND_BRACKET_OPEN = 300,
    ROUND_BRACKET_CLOSE = 301,
    CURLY_BRACKET_OPEN = 302,
    CURLY_BRACKET_CLOSE = 303,
    DOT = 304,
    IMPLIES = 305,
    INC = 306,
    DEC = 307,
    BITWISE_AND = 308,
    MUL = 309,
    ADD = 310,
    SUB = 311,
    BITWISE_NOT = 312,
    EXCLAIM = 313,
    DIV = 314,
    MOD = 315,
    SHIFT_LEFT = 316,
    SHIFT_RIGHT = 317,
    BIT_SL = 318,
    BIT_SR = 319,
    LTE = 320,
    GTE = 321,
    EQ = 322,
    NEQ = 323,
    BITWISE_XOR = 324,
    BITWISE_OR = 325,
    AND = 326,
    OR = 327,
    QUESTION = 328,
    COLON = 329,
    SEMICOLON = 330,
    DOTS = 331,
    ASSIGN = 332,
    STAR_EQ = 333,
    DIV_EQ = 334,
    MOD_EQ = 335,
    ADD_EQ = 336,
    SUB_EQ = 337,
    SL_EQ = 338,
    SR_EQ = 339,
    BITWISE_AND_EQ = 340,
    BITWISE_XOR_EQ = 341,
    BITWISE_OR_EQ = 342,
    COMMA = 343,
    HASH = 344
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "ass6_18CS30051.y"
                                                     // yylval is a union of all these types
    char unaryOp;                                            // unaryoperator		
    char* char_value;                                        // char value
    int instr_number;                                        // instruction number: for backpatching
    int intval;                                              // integer value	
    int num_params;                                          // number of parameters
    Expression* expr;                                        // expression
    Statement* stat;                                         // statement		
    symboltype* sym_type;                                    // symbol type  
    sym* symp;                                               // symbol
    Array* A;                                                // Array type

#line 254 "ass6_18CS30051.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASS6_18CS30051_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1188

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  223
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  398

#define YYUNDEFTOK  2
#define YYMAXUTOK   345


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
       0,   124,   124,   134,   141,   148,   155,   172,   188,   204,
     210,   217,   223,   229,   235,   242,   249,   272,   280,   281,
     282,   289,   296,   297,   300,   304,   310,   315,   322,   323,
     329,   335,   368,   369,   372,   374,   376,   378,   380,   382,
     386,   387,   394,   411,   423,   437,   451,   452,   464,   478,
     479,   490,   505,   506,   522,   539,   555,   573,   574,   592,
     613,   614,   632,   633,   651,   652,   668,   669,   681,   682,
     694,   695,   716,   717,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   752,   753,   756,   759,   760,
     763,   764,   765,   766,   767,   768,   769,   770,   773,   774,
     777,   778,   785,   786,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   804,   805,   808,
     809,   812,   813,   814,   817,   818,   821,   822,   825,   826,
     829,   830,   831,   834,   837,   844,   847,   852,   853,   854,
     855,   876,   896,   897,   898,   899,   900,   913,   914,   929,
     930,   933,   937,   943,   944,   947,   948,   951,   952,   955,
     956,   959,   960,   963,   966,   967,   968,   971,   972,   975,
     976,   979,   982,   983,   986,   987,   992,   993,   994,   999,
    1000,  1001,  1004,  1005,  1010,  1011,  1012,  1015,  1029,  1030,
    1033,  1040,  1041,  1044,  1045,  1052,  1053,  1056,  1057,  1060,
    1069,  1079,  1082,  1096,  1109,  1118,  1127,  1140,  1153,  1166,
    1181,  1197,  1198,  1199,  1204,  1213,  1214,  1217,  1218,  1221,
    1231,  1232,  1235,  1236
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RESTRICT", "BREAK", "CASE", "CHAR",
  "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN",
  "FLOAT", "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "RETURN", "SHORT",
  "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION",
  "UNSIGNED", "VOID", "VOLATILE", "WHILE", "_BOOL", "_COMPLEX",
  "_IMAGINARY", "IDENTIFIER", "INTEGER_CONSTANT", "FLOATING_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "SQUARE_BRACKET_OPEN",
  "SQUARE_BRACKET_CLOSE", "ROUND_BRACKET_OPEN", "ROUND_BRACKET_CLOSE",
  "CURLY_BRACKET_OPEN", "CURLY_BRACKET_CLOSE", "DOT", "IMPLIES", "INC",
  "DEC", "BITWISE_AND", "MUL", "ADD", "SUB", "BITWISE_NOT", "EXCLAIM",
  "DIV", "MOD", "SHIFT_LEFT", "SHIFT_RIGHT", "BIT_SL", "BIT_SR", "LTE",
  "GTE", "EQ", "NEQ", "BITWISE_XOR", "BITWISE_OR", "AND", "OR", "QUESTION",
  "COLON", "SEMICOLON", "DOTS", "ASSIGN", "STAR_EQ", "DIV_EQ", "MOD_EQ",
  "ADD_EQ", "SUB_EQ", "SL_EQ", "SR_EQ", "BITWISE_AND_EQ", "BITWISE_XOR_EQ",
  "BITWISE_OR_EQ", "COMMA", "HASH", "\"then\"", "$accept", "M", "F", "W",
  "D", "X", "N", "changetable", "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "type_qualifier_list_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation_opt", "designation", "designator_list",
  "designator", "statement", "loop_statement", "labeled_statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list",
  "declaration_list_opt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345
};
# endif

#define YYPACT_NINF (-323)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-223)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     999,  -323,  -323,  -323,  -323,   -21,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,   122,   999,   999,  -323,   999,   999,   964,  -323,  -323,
       1,    37,  -323,   132,   116,  -323,   -42,  -323,   289,    92,
     -22,  -323,  -323,  -323,  -323,  -323,  -323,    -2,     5,  -323,
      49,   116,  -323,   132,  1035,  -323,   122,   999,  -323,   743,
      75,    92,    50,   -16,  -323,  -323,  -323,  -323,  -323,    62,
    1077,  -323,  -323,  -323,  -323,  -323,   703,   135,  1098,  1098,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,   176,  1101,  1119,
    -323,   121,   118,   151,   166,   149,    93,    88,   115,   128,
     178,  -323,  -323,  -323,  -323,   156,   823,  -323,   164,   170,
     783,  -323,   926,   -25,  1119,  -323,     4,   703,  -323,  -323,
     -15,  1034,  -323,  1034,   188,  1119,   184,    22,  1035,  -323,
      65,  -323,   703,  -323,  -323,  1119,  1119,   198,   200,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  1119,  -323,  -323,  1119,  1119,  1119,  1119,  1119,
    1119,  1119,  1119,  1119,  1119,  1119,  1119,  1119,  1119,  1119,
    1119,  -323,  -323,   168,   370,   199,   823,  -323,  -323,  -323,
     208,   212,  -323,   132,   213,   179,  -323,  -323,   230,  -323,
    -323,  -323,  -323,   225,  -323,  1119,  -323,  -323,  -323,  1056,
     228,  -323,  -323,   153,  -323,  -323,  -323,   227,   -26,   233,
     195,  -323,  -323,  -323,  -323,  -323,  -323,  -323,   121,   121,
     118,   118,   151,   151,   151,   151,   166,   166,   149,    93,
      88,  1119,  1119,  -323,   209,  1119,   210,   214,  -323,  -323,
     248,   242,   844,   244,  -323,   216,  -323,  -323,    63,  -323,
    -323,  -323,  -323,   249,   250,  -323,  -323,  -323,  -323,  -323,
    -323,   255,  -323,  -323,  -323,  -323,   324,  -323,   254,  -323,
     135,  -323,  -323,  -323,  1035,   254,  -323,  -323,  1119,   115,
     128,  1119,  -323,   231,  -323,   482,   259,   262,   236,  1119,
    -323,   104,  1119,   269,  -323,  -323,  -323,  -323,   370,  -323,
    -323,  -323,    57,  -323,  -323,   229,   482,  -323,  -323,   647,
    -323,  -323,   229,  -323,   -11,  -323,   482,   370,  -323,  -323,
     162,   245,  -323,   370,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,   270,   482,  -323,  -323,   275,  -323,  -323,   280,   284,
     427,  -323,  -323,  -323,  -323,  1119,  -323,   287,  -323,  -323,
     482,  1119,  -323,   295,  1119,   869,   869,  -323,    -7,   288,
      -6,  -323,  -323,   322,   294,  1119,   267,  1119,  1119,  -323,
    -323,   647,    -5,  -323,   229,   229,   482,   370,  -323,   271,
     303,   305,  -323,   304,  -323,  -323,  -323,  -323,   537,   592,
     370,  -323,   370,  -323,   306,   310,  -323,  -323
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   131,   105,   130,   110,   124,   102,   109,   133,   107,
     108,   106,   111,   103,   112,   104,   132,   113,   114,   115,
     218,     0,    91,    93,   116,    95,    97,     0,   215,   217,
     123,     0,   136,     0,   149,    89,     0,    98,   100,   135,
       0,    90,    92,    94,    96,     1,   216,     0,     0,   153,
     151,   150,    88,     0,     0,   220,     0,   223,     8,     0,
       8,   134,   128,     0,   126,   137,   152,   154,    99,   100,
       0,     9,    10,    11,    12,    13,     0,   169,     0,     0,
      34,    35,    36,    37,    38,    39,    15,    28,    40,     0,
      42,    46,    49,    52,    57,    60,    62,    64,    66,    68,
      70,    72,   164,   101,   221,     0,     0,   141,    35,     0,
       0,   161,     0,     0,     0,   121,     0,     0,    32,    85,
       0,   119,   163,   119,     0,     0,     0,     0,     0,   170,
       0,   172,     0,    29,    30,     0,    25,     0,     0,    20,
      21,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,     0,    40,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     2,     0,   191,     0,     0,   145,   140,   139,
      35,     0,   148,   160,     0,   155,   157,   147,     0,    87,
     129,   122,   127,     0,    14,     0,   120,   117,   118,     0,
       0,   175,   165,   169,   167,   171,   173,     0,     0,     0,
      24,    26,    18,    19,    73,    43,    44,    45,    47,    48,
      50,    51,    53,    54,    55,    56,    58,    59,    61,    63,
      65,     0,     0,     2,     0,     0,     0,     0,     5,     3,
       0,     0,     0,     0,     4,     9,     6,   198,     0,   195,
     196,   176,   177,     0,     2,   193,   178,   179,   180,   181,
     143,     0,   144,   138,   159,   146,     0,   162,    33,    86,
     169,    41,   174,   166,     0,     0,    16,    17,     0,    67,
      69,     0,   212,     0,   211,     0,     2,     0,     0,     0,
     214,     0,     0,     0,     2,     8,   197,   219,     0,   142,
     156,   158,     0,   168,    27,     7,     0,   189,     2,     0,
       6,   210,     7,   213,     0,     6,     0,   191,   194,    22,
     169,     0,   188,   191,     2,   182,   183,   184,   185,   186,
       8,     0,     0,     8,   187,     0,    23,     2,     0,     0,
       0,     2,   201,     2,   190,     0,     2,     0,     2,     2,
       0,     0,    71,     0,     0,     0,     0,     7,     0,     0,
       0,     2,     2,   199,     2,     0,     0,     0,     0,     2,
       2,     0,     0,   204,     7,     7,     0,   191,   202,     0,
       0,     0,   200,     0,   205,     2,     2,   203,     0,     0,
     191,   206,   191,   207,     0,     0,   208,   209
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -323,  -104,  -323,  -323,  -323,  -198,  -151,   -55,  -323,  -323,
    -323,  -323,   -69,  -323,   -81,    96,   101,    84,    97,   185,
     193,   194,   134,   131,  -323,  -110,    -4,  -323,   -74,  -114,
       0,     3,  -323,   314,  -323,   -52,    72,   246,  -323,  -323,
    -323,   252,    77,  -323,   -14,   330,  -323,   321,   -47,  -323,
    -323,   106,  -323,   -95,  -122,   112,  -189,  -323,  -323,   283,
    -272,  -322,  -255,  -323,  -270,  -323,    99,  -200,  -245,  -230,
    -224,  -323,   372,  -323,  -323,  -323
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   231,   287,   293,   286,   295,   173,   105,    86,    87,
     209,   210,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   119,   152,   248,   190,
     249,    56,    36,    37,    22,    23,   122,   197,    24,    31,
      63,    64,    25,    26,    69,    39,    50,    40,    51,   184,
     185,   186,   113,   124,   103,   127,   128,   129,   130,   131,
     250,   324,   251,   252,   253,   254,   255,   256,   257,   258,
     259,    27,    28,    29,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,   118,   120,    21,   189,   112,   204,    38,   154,   133,
     134,   200,   110,   307,   274,   189,    32,    30,   276,    48,
     153,   187,   193,    33,   121,    41,    42,    20,    43,    44,
      21,   194,   115,    52,   322,   332,    62,   207,    55,   364,
     366,   379,    62,   120,   334,   153,    53,   335,  -125,   378,
     102,    65,   191,   338,   325,   109,   153,   104,   120,   176,
     342,   208,   195,   188,   327,   121,   391,   393,   232,   121,
     202,   121,   116,   195,   215,   216,   217,   195,   357,   328,
     121,   195,   195,   195,    47,   329,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   175,    34,   382,   319,   181,   383,   125,   326,
     203,    49,   330,   111,   126,   183,   325,   333,   271,     1,
     394,   283,   395,     3,   102,   189,   327,   114,    67,   281,
     153,   274,   211,   325,   325,    59,    49,    60,   296,    54,
     349,   328,   205,   327,   327,   320,   168,   329,   214,    16,
     298,   195,   303,   123,   321,   361,   362,   169,   328,   328,
      32,   331,   153,   153,   329,   329,   153,    33,   291,   264,
      32,   326,   261,   158,   159,   155,    34,    33,   125,   313,
     156,   157,   309,    49,   126,   170,    34,    67,   326,   326,
     316,   269,   195,   196,   123,   196,   125,    35,   123,   171,
     123,   273,   126,   174,   323,   125,   363,   305,   177,   123,
     336,   126,   160,   161,   178,   312,   166,   167,   314,   135,
     339,   136,   201,   380,   381,   137,   138,   139,   140,   162,
     163,   164,   165,   345,   199,   352,   212,   350,   213,   351,
     317,   233,   353,   260,   355,   356,   222,   223,   224,   225,
     172,    -7,   262,    67,   218,   219,   263,   367,   368,   265,
     371,   220,   221,   226,   227,   376,   377,   266,   267,   183,
     102,   268,   272,   275,   304,   340,   153,   358,   343,   277,
     360,   388,   389,   278,   282,   284,   288,   289,   285,   292,
     294,   372,     1,   374,   375,     2,     3,   297,  -192,   299,
       4,   270,     5,     6,     7,   306,   308,   310,     8,     9,
      10,   311,    11,    12,   315,    13,   341,   195,   347,   337,
      14,    15,    16,   344,    17,    18,    19,     1,   346,   359,
       2,     3,   354,   365,   369,     4,  -222,     5,     6,     7,
     348,   370,   373,     8,     9,    10,   384,    11,    12,   385,
      13,   386,   387,   228,   396,    14,    15,    16,   397,    17,
      18,    19,   229,   280,   230,   279,    54,    68,   192,   198,
      61,    66,   301,     1,   234,   235,     2,     3,   236,   237,
     238,     4,   302,     5,     6,     7,   239,   240,   241,     8,
       9,    10,   242,    11,    12,    70,    13,   318,   243,    46,
     300,    14,    15,    16,   244,    17,    18,    19,   245,    72,
      73,    74,    75,   206,     0,    76,     0,   246,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    84,    85,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,   247,     8,     9,    10,     0,
      11,    12,    70,    13,     0,     0,     0,     0,    14,    15,
      16,     0,    17,    18,    19,    71,    72,    73,    74,    75,
       0,     0,    76,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,    85,   234,   235,     0,     0,
     236,   237,   238,     0,     0,     0,     0,     0,   239,   240,
     241,     0,   247,     0,   242,     0,     0,    70,     0,     0,
     243,     0,     0,     0,     0,     0,   244,     0,     0,     0,
     245,    72,    73,    74,    75,     0,     0,    76,     0,   246,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
      85,   234,   235,     0,     0,   236,   237,   238,     0,     0,
       0,     0,     0,   239,   240,   241,     0,   247,     0,   242,
       0,     0,    70,     0,     0,   243,     0,     0,     0,     0,
       0,   244,     0,     0,     0,   245,    72,    73,    74,    75,
       0,     0,    76,     0,   390,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,    85,   234,   235,     0,     0,
     236,   237,   238,     0,     0,     0,     0,     0,   239,   240,
     241,     0,   247,     0,   242,     0,     0,    70,     0,     0,
     243,     0,     0,     0,     0,     0,   244,     0,     0,     0,
     245,    72,    73,    74,    75,     0,     0,    76,     0,   392,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
      85,   234,   235,     0,     0,   236,   237,   238,     0,     0,
       0,     0,     0,   239,   240,   241,     0,   247,     0,   242,
       0,     0,    70,     0,     0,   243,     0,     0,     0,     0,
       0,   244,     0,     0,     0,   245,    72,    73,    74,    75,
       0,     0,    76,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,    85,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     0,     7,     0,
       0,     0,   247,     9,    10,     0,    11,    12,    70,     0,
       0,     0,     0,     0,    14,    15,    16,     0,    17,    18,
      19,    71,    72,    73,    74,    75,     1,     0,    76,     0,
       3,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,     0,     0,     0,     0,     0,     0,    70,   106,
       0,     0,     0,     0,     0,     0,    16,     0,     0,     0,
       0,    71,    72,    73,    74,    75,     1,   107,    76,     0,
       3,     0,     0,     0,    78,    79,    80,   108,    82,    83,
      84,    85,     0,     0,     0,     0,     0,     0,    70,     0,
       0,     0,     0,     0,     0,     0,    16,     0,     0,     0,
       0,    71,    72,    73,    74,    75,     1,   179,    76,     0,
       3,     0,     0,     0,    78,    79,    80,   180,    82,    83,
      84,    85,     0,     0,     0,     0,     0,     0,    70,     0,
       0,     0,     0,     0,     0,     0,    16,     0,     0,     0,
       0,    71,    72,    73,    74,    75,     0,     0,    76,    70,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    71,    72,    73,    74,    75,     0,     0,    76,
       0,     0,     0,     0,    70,    78,    79,    80,    81,    82,
      83,    84,    85,     0,     0,     0,     0,    71,    72,    73,
      74,    75,     0,     0,    76,     0,     0,     0,     0,   290,
      78,    79,    80,    81,    82,    83,    84,    85,     0,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,   247,     8,     9,    10,     0,    11,
      12,     0,    13,     0,     0,     0,     0,    14,    15,    16,
       0,    17,    18,    19,    45,     0,     0,     1,     0,     0,
       2,     3,   182,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,     0,    11,    12,     0,
      13,     0,     0,     0,     0,    14,    15,    16,     0,    17,
      18,    19,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,     0,    11,    12,     0,    13,     0,     0,     0,     0,
      14,    15,    16,     0,    17,    18,    19,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     0,     7,
       0,     0,     0,     0,     9,    10,     0,    11,    12,     0,
      70,     0,     0,     0,     0,    14,    15,    16,     0,    17,
      18,    19,     0,    71,    72,    73,    74,    75,     0,     0,
      76,    70,    77,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,    85,    71,    72,    73,    74,    75,     0,
       0,    76,    70,   270,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,    85,    71,    72,    73,    74,    75,
       0,     0,   117,    70,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    84,    85,    71,    72,    73,    74,
      75,     0,     0,   132,    70,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    84,    85,    71,    72,    73,
      74,    75,     0,     0,    76,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,    85,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151
};

static const yytype_int16 yycheck[] =
{
       0,    70,    76,     0,   114,    60,   128,    21,    89,    78,
      79,   125,    59,   285,   203,   125,    38,    38,    44,    33,
      89,    46,   117,    45,    76,    22,    23,    27,    25,    26,
      27,    46,    48,    75,   306,    46,    38,   132,    38,    46,
      46,    46,    38,   117,   316,   114,    88,   317,    47,   371,
      54,    46,    48,   323,   309,    59,   125,    57,   132,   106,
     332,   135,    88,    88,   309,   117,   388,   389,   172,   121,
      48,   123,    88,    88,   155,   156,   157,    88,   350,   309,
     132,    88,    88,    88,    47,   309,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   106,    54,   376,    48,   110,   377,    43,   309,
      88,    34,   310,    38,    49,   112,   371,   315,   199,     3,
     390,   235,   392,     7,   128,   235,   371,    77,    51,   233,
     199,   320,   136,   388,   389,    43,    59,    45,    75,    77,
     340,   371,    77,   388,   389,    88,    53,   371,   152,    33,
     254,    88,   274,    76,   305,   355,   356,    69,   388,   389,
      38,   312,   231,   232,   388,   389,   235,    45,   242,   183,
      38,   371,   176,    55,    56,    54,    54,    45,    43,    75,
      59,    60,   286,   106,    49,    70,    54,   110,   388,   389,
     294,   195,    88,   121,   117,   123,    43,    75,   121,    71,
     123,    48,    49,    47,   308,    43,   357,   281,    44,   132,
      48,    49,    61,    62,    44,   289,    67,    68,   292,    43,
     324,    45,    38,   374,   375,    49,    50,    51,    52,    63,
      64,    65,    66,   337,    46,   345,    38,   341,    38,   343,
     295,    73,   346,    44,   348,   349,   162,   163,   164,   165,
      72,    73,    44,   176,   158,   159,    44,   361,   362,    46,
     364,   160,   161,   166,   167,   369,   370,    88,    38,   266,
     274,    46,    44,    46,   278,   330,   345,   351,   333,    46,
     354,   385,   386,    88,    75,    75,    38,    45,    74,    45,
      74,   365,     3,   367,   368,     6,     7,    48,    48,    44,
      11,    47,    13,    14,    15,    74,    47,    45,    19,    20,
      21,    75,    23,    24,    45,    26,    46,    88,    34,    74,
      31,    32,    33,    48,    35,    36,    37,     3,    48,    34,
       6,     7,    45,    45,    12,    11,    47,    13,    14,    15,
     340,    47,    75,    19,    20,    21,    75,    23,    24,    46,
      26,    46,    48,   168,    48,    31,    32,    33,    48,    35,
      36,    37,   169,   232,   170,   231,    77,    53,   116,   123,
      40,    50,   266,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   270,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   298,    28,    27,
      76,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,   130,    -1,    45,    -1,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    75,    19,    20,    21,    -1,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,     4,     5,    -1,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    -1,    75,    -1,    22,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    -1,    -1,    45,    -1,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,     4,     5,    -1,    -1,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    -1,    75,    -1,    22,
      -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    45,    -1,    47,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,     4,     5,    -1,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    -1,    75,    -1,    22,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    -1,    -1,    45,    -1,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,     4,     5,    -1,    -1,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    -1,    75,    -1,    22,
      -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    -1,    15,    -1,
      -1,    -1,    75,    20,    21,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,     3,    -1,    45,    -1,
       7,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,     3,    44,    45,    -1,
       7,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,     3,    44,    45,    -1,
       7,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    45,    25,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    38,    39,    40,    41,    42,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    25,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,    75,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    75,    19,    20,    21,    -1,    23,
      24,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,     0,    -1,    -1,     3,    -1,    -1,
       6,     7,    46,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    37,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    -1,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,    -1,
      25,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,    -1,    38,    39,    40,    41,    42,    -1,    -1,
      45,    25,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    38,    39,    40,    41,    42,    -1,
      -1,    45,    25,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    38,    39,    40,    41,    42,
      -1,    -1,    45,    25,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    38,    39,    40,    41,
      42,    -1,    -1,    45,    25,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    38,    39,    40,
      41,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    31,    32,    33,    35,    36,    37,
     121,   122,   125,   126,   129,   133,   134,   162,   163,   164,
      38,   130,    38,    45,    54,    75,   123,   124,   135,   136,
     138,   122,   122,   122,   122,     0,   163,    47,   135,   133,
     137,   139,    75,    88,    77,   121,   122,   165,   166,    43,
      45,   136,    38,   131,   132,    46,   138,   133,   124,   135,
      25,    38,    39,    40,    41,    42,    45,    47,    51,    52,
      53,    54,    55,    56,    57,    58,    99,   100,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   145,   121,    98,    26,    44,    54,   117,
     139,    38,    98,   143,    77,    48,    88,    45,   103,   117,
     119,   126,   127,   133,   144,    43,    49,   146,   147,   148,
     149,   150,    45,   103,   103,    43,    45,    49,    50,    51,
      52,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,   118,   103,   105,    54,    59,    60,    55,    56,
      61,    62,    63,    64,    65,    66,    67,    68,    53,    69,
      70,    71,    72,    97,    47,   117,   139,    44,    44,    44,
      54,   117,    46,   122,   140,   141,   142,    46,    88,   116,
     120,    48,   132,   144,    46,    88,   127,   128,   128,    46,
     120,    38,    48,    88,   145,    77,   150,   144,   119,   101,
     102,   117,    38,    38,   117,   105,   105,   105,   106,   106,
     107,   107,   108,   108,   108,   108,   109,   109,   110,   111,
     112,    92,    92,    73,     4,     5,     8,     9,    10,    16,
      17,    18,    22,    28,    34,    38,    47,    75,   119,   121,
     151,   153,   154,   155,   156,   157,   158,   159,   160,   161,
      44,   117,    44,    44,   135,    46,    88,    38,    46,   117,
      47,   105,    44,    48,   147,    46,    44,    46,    88,   113,
     114,    92,    75,   120,    75,    74,    95,    93,    38,    45,
      75,   119,    45,    94,    74,    96,    75,    48,    92,    44,
      76,   142,   146,   145,   117,   119,    74,   151,    47,    92,
      45,    75,   119,    75,   119,    45,    92,    98,   157,    48,
      88,    97,   151,    92,   152,   153,   158,   159,   160,   161,
      96,    97,    46,    96,   151,   155,    48,    74,   155,    92,
      98,    46,   151,    98,    48,    92,    48,    34,   121,   158,
      92,    92,   116,    92,    45,    92,    92,   151,   119,    34,
     119,   158,   158,    97,    46,    45,    46,    92,    92,    12,
      47,    92,   119,    75,   119,   119,    92,    92,   152,    46,
      97,    97,   151,   155,    75,    46,    46,    48,    92,    92,
      47,   152,    47,   152,   155,   155,    48,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      99,    99,    99,    99,    99,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   101,   101,   102,   102,   103,   103,
     103,   103,   103,   103,   104,   104,   104,   104,   104,   104,
     105,   105,   106,   106,   106,   106,   107,   107,   107,   108,
     108,   108,   109,   109,   109,   109,   109,   110,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   119,   119,   120,   121,   121,
     122,   122,   122,   122,   122,   122,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   127,   127,   128,
     128,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   133,   134,   135,   135,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     142,   143,   143,   144,   145,   145,   145,   146,   146,   147,
     147,   148,   149,   149,   150,   150,   151,   151,   151,   151,
     151,   151,   152,   152,   152,   152,   152,   153,   153,   153,
     154,   155,   155,   156,   156,   157,   157,   158,   158,   159,
     159,   159,   160,   160,   160,   160,   160,   160,   160,   160,
     161,   161,   161,   161,   161,   162,   162,   163,   163,   164,
     165,   165,   166,   166
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,     0,     0,     0,     1,
       1,     1,     1,     1,     3,     1,     4,     4,     3,     3,
       2,     2,     6,     7,     1,     0,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     4,     1,     4,
       1,     9,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     0,
       1,     5,     6,     2,     0,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     2,     1,     1,     3,     5,     4,
       4,     3,     6,     5,     5,     4,     5,     4,     4,     0,
       1,     2,     3,     1,     2,     1,     3,     1,     3,     2,
       1,     1,     3,     1,     1,     3,     4,     2,     4,     0,
       1,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       5,     0,     1,     1,     3,     1,     1,     2,     1,     8,
      11,     5,    10,    12,    10,    12,    14,    14,    16,    16,
       3,     2,     2,     3,     2,     1,     2,     1,     1,     7,
       1,     2,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 125 "ass6_18CS30051.y"
        {
		/**
		  * backpatching,stores the index of the next quad to be generated
		  * Used in various control statements
		  */
		(yyval.instr_number) = nextinstr();
	}
#line 1909 "ass6_18CS30051.tab.c"
    break;

  case 3:
#line 135 "ass6_18CS30051.y"
        {
		// rule for identifying the start of the for statement
		loop_name = "FOR";
	}
#line 1918 "ass6_18CS30051.tab.c"
    break;

  case 4:
#line 142 "ass6_18CS30051.y"
        {
		// rule for identifying the start of a while loop
		loop_name = "WHILE";
	}
#line 1927 "ass6_18CS30051.tab.c"
    break;

  case 5:
#line 149 "ass6_18CS30051.y"
        {
		// rule for identifyiong the start of the do while statement
		loop_name = "DO_WHILE";
	}
#line 1936 "ass6_18CS30051.tab.c"
    break;

  case 6:
#line 156 "ass6_18CS30051.y"
        {
		/**
		  * change the current symbol pointer
		  * This will be used for nested block statements
		  */
		string name = ST->name+"."+loop_name+"$"+to_string(table_count); // give name for nested table
		table_count++; // increment the table count
		sym* s = ST->lookup(name); // lookup the table for new entry
		s->nested = new symtable(name);
		s->nested->parent = ST;
		s->name = name;
		s->type = new symboltype("block");
		currSymbolPtr = s;
	}
#line 1955 "ass6_18CS30051.tab.c"
    break;

  case 7:
#line 173 "ass6_18CS30051.y"
        {
		/** 
		  * For backpatching, which inserts a goto 
		  * and stores the index of the next goto 
		  * statement to guard against fallthrough

		  * N->nextlist = makelist(nextinstr) we have defined nextlist for Statements
		  */
		(yyval.stat) = new Statement();
		(yyval.stat)->nextlist=makelist(nextinstr());
		emit("goto","");
	}
#line 1972 "ass6_18CS30051.tab.c"
    break;

  case 8:
#line 189 "ass6_18CS30051.y"
        {    
		parST = ST;                                                               // Used for changing to symbol table for a function
		if(currSymbolPtr->nested==NULL) 
		{
			changeTable(new symtable(""));	                                           // Function symbol table doesn't already exist	
		}
		else 
		{
			changeTable(currSymbolPtr ->nested);						               // Function symbol table already exists	
			emit("label", ST->name);
		}
	}
#line 1989 "ass6_18CS30051.tab.c"
    break;

  case 9:
#line 205 "ass6_18CS30051.y"
        {
	    (yyval.expr)=new Expression();                                                  // create new expression and store pointer to ST entry in the location			
	    (yyval.expr)->loc=(yyvsp[0].symp);
	    (yyval.expr)->type="not-boolean";
	}
#line 1999 "ass6_18CS30051.tab.c"
    break;

  case 10:
#line 211 "ass6_18CS30051.y"
        { 
		(yyval.expr)=new Expression();	
		string p=convertIntToString((yyvsp[0].intval));
		(yyval.expr)->loc=gentemp(new symboltype("int"),p);
		emit("=",(yyval.expr)->loc->name,p);
	}
#line 2010 "ass6_18CS30051.tab.c"
    break;

  case 11:
#line 218 "ass6_18CS30051.y"
        {                                                                         // create new expression and store the value of the constant in a temporary
		(yyval.expr)=new Expression();
		(yyval.expr)->loc=gentemp(new symboltype("float"),(yyvsp[0].char_value));
		emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_value)));
	}
#line 2020 "ass6_18CS30051.tab.c"
    break;

  case 12:
#line 224 "ass6_18CS30051.y"
        {                                                                         // create new expression and store the value of the constant in a temporary
		(yyval.expr)=new Expression();
		(yyval.expr)->loc=gentemp(new symboltype("char"),(yyvsp[0].char_value));
		emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_value)));
	}
#line 2030 "ass6_18CS30051.tab.c"
    break;

  case 13:
#line 230 "ass6_18CS30051.y"
        {                                                                          // create new expression and store the value of the constant in a temporary
		(yyval.expr)=new Expression();
		(yyval.expr)->loc=gentemp(new symboltype("ptr"),(yyvsp[0].char_value));
		(yyval.expr)->loc->type->arrtype=new symboltype("char");
	}
#line 2040 "ass6_18CS30051.tab.c"
    break;

  case 14:
#line 236 "ass6_18CS30051.y"
        {                                                                          // simply equal to expression
		(yyval.expr)=(yyvsp[-1].expr);
	}
#line 2048 "ass6_18CS30051.tab.c"
    break;

  case 15:
#line 243 "ass6_18CS30051.y"
        {
		(yyval.A)=new Array();	
		(yyval.A)->Array=(yyvsp[0].expr)->loc;	
		(yyval.A)->type=(yyvsp[0].expr)->loc->type;	
		(yyval.A)->loc=(yyval.A)->Array;
	}
#line 2059 "ass6_18CS30051.tab.c"
    break;

  case 16:
#line 250 "ass6_18CS30051.y"
        { 	
		
		(yyval.A)=new Array();
		(yyval.A)->type=(yyvsp[-3].A)->type->arrtype;                 // type=type of element	
		(yyval.A)->Array=(yyvsp[-3].A)->Array;                        // copy the base
		(yyval.A)->loc=gentemp(new symboltype("int"));     // store computed address
		(yyval.A)->atype="arr";                            //atype is arr.
		if((yyvsp[-3].A)->atype=="arr") 
		{			                               // if already arr, multiply the size of the sub-type of Array with the expression value and add
			sym* t=gentemp(new symboltype("int"));
			int p=computeSize((yyval.A)->type);
			string str=convertIntToString(p);
			emit("*",t->name,(yyvsp[-1].expr)->loc->name,str);
			emit("+",(yyval.A)->loc->name,(yyvsp[-3].A)->loc->name,t->name);
		}
		else 
		{                        //if a 1D Array, simply calculate size
			int p=computeSize((yyval.A)->type);	
			string str=convertIntToString(p);
			emit("*",(yyval.A)->loc->name,(yyvsp[-1].expr)->loc->name,str);
		}
	}
#line 2086 "ass6_18CS30051.tab.c"
    break;

  case 17:
#line 273 "ass6_18CS30051.y"
        {
		//call the function with number of parameters from argument_expression_list_opt
		(yyval.A)=new Array();	
		(yyval.A)->Array=gentemp((yyvsp[-3].A)->type);
		string str=convertIntToString((yyvsp[-1].num_params));
		emit("call",(yyval.A)->Array->name,(yyvsp[-3].A)->Array->name,str);
	}
#line 2098 "ass6_18CS30051.tab.c"
    break;

  case 18:
#line 280 "ass6_18CS30051.y"
                                            {  }
#line 2104 "ass6_18CS30051.tab.c"
    break;

  case 19:
#line 281 "ass6_18CS30051.y"
                                                 {  }
#line 2110 "ass6_18CS30051.tab.c"
    break;

  case 20:
#line 283 "ass6_18CS30051.y"
        { 
		(yyval.A)=new Array();	
		(yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
		emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
		emit("+",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");
	}
#line 2121 "ass6_18CS30051.tab.c"
    break;

  case 21:
#line 290 "ass6_18CS30051.y"
        {
		(yyval.A)=new Array();	
		(yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
		emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
		emit("-",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");	
	}
#line 2132 "ass6_18CS30051.tab.c"
    break;

  case 22:
#line 296 "ass6_18CS30051.y"
                                                                                                                   {  }
#line 2138 "ass6_18CS30051.tab.c"
    break;

  case 23:
#line 297 "ass6_18CS30051.y"
                                                                                                                         {  }
#line 2144 "ass6_18CS30051.tab.c"
    break;

  case 24:
#line 301 "ass6_18CS30051.y"
        { 
		(yyval.num_params)=(yyvsp[0].num_params); // Equate $$ and $1
	}
#line 2152 "ass6_18CS30051.tab.c"
    break;

  case 25:
#line 305 "ass6_18CS30051.y"
        { 
		(yyval.num_params)=0; // No arguments
	}
#line 2160 "ass6_18CS30051.tab.c"
    break;

  case 26:
#line 311 "ass6_18CS30051.y"
        {
		(yyval.num_params)=1;                                      //one argument and emit param
		emit("param",(yyvsp[0].expr)->loc->name);	
	}
#line 2169 "ass6_18CS30051.tab.c"
    break;

  case 27:
#line 316 "ass6_18CS30051.y"
        {
		(yyval.num_params)=(yyvsp[-2].num_params)+1;                                  //one more argument and emit param		 
		emit("param",(yyvsp[0].expr)->loc->name);
	}
#line 2178 "ass6_18CS30051.tab.c"
    break;

  case 28:
#line 322 "ass6_18CS30051.y"
                                     { (yyval.A)=(yyvsp[0].A); /*Equate $$ and $1*/}
#line 2184 "ass6_18CS30051.tab.c"
    break;

  case 29:
#line 324 "ass6_18CS30051.y"
        {  	
		//simply add 1
		emit("+",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");		
		(yyval.A)=(yyvsp[0].A);
	}
#line 2194 "ass6_18CS30051.tab.c"
    break;

  case 30:
#line 330 "ass6_18CS30051.y"
        {
		//simply subtract 1
		emit("-",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");
		(yyval.A)=(yyvsp[0].A);
	}
#line 2204 "ass6_18CS30051.tab.c"
    break;

  case 31:
#line 336 "ass6_18CS30051.y"
        {   //if it is of this type, where unary operator is involved
		(yyval.A)=new Array();
		switch((yyvsp[-1].unaryOp))
		{	  
			case '&':                                                  //address of something, then generate a pointer temporary and emit the quad
				(yyval.A)->Array=gentemp(new symboltype("ptr"));
				(yyval.A)->Array->type->arrtype=(yyvsp[0].A)->Array->type; 
				emit("=&",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
				break;
			case '*':                                                   // value of something, then generate a temporary of the corresponding type and emit the quad	
				(yyval.A)->atype="ptr";
				(yyval.A)->loc=gentemp((yyvsp[0].A)->Array->type->arrtype);
				(yyval.A)->Array=(yyvsp[0].A)->Array;
				emit("=*",(yyval.A)->loc->name,(yyvsp[0].A)->Array->name);
				break;
			case '+':  
				(yyval.A)=(yyvsp[0].A);
				break;                 //unary plus, do nothing
			case '-':				   //unary minus, generate new temporary of the same base type and make it negative of current one
				(yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
				emit("uminus",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
				break;
			case '~':                   //bitwise not, generate new temporary of the same base type and make it negative of current one
				(yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
				emit("~",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
				break;
			case '!':				//logical not, generate new temporary of the same base type and make it negative of current one
				(yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
				emit("!",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
				break;
		}
	}
#line 2241 "ass6_18CS30051.tab.c"
    break;

  case 32:
#line 368 "ass6_18CS30051.y"
                                   {  }
#line 2247 "ass6_18CS30051.tab.c"
    break;

  case 33:
#line 369 "ass6_18CS30051.y"
                                                                    {  }
#line 2253 "ass6_18CS30051.tab.c"
    break;

  case 34:
#line 373 "ass6_18CS30051.y"
        { (yyval.unaryOp)='&'; }
#line 2259 "ass6_18CS30051.tab.c"
    break;

  case 35:
#line 375 "ass6_18CS30051.y"
        {(yyval.unaryOp)='*'; }
#line 2265 "ass6_18CS30051.tab.c"
    break;

  case 36:
#line 377 "ass6_18CS30051.y"
        { (yyval.unaryOp)='+'; }
#line 2271 "ass6_18CS30051.tab.c"
    break;

  case 37:
#line 379 "ass6_18CS30051.y"
        { (yyval.unaryOp)='-'; }
#line 2277 "ass6_18CS30051.tab.c"
    break;

  case 38:
#line 381 "ass6_18CS30051.y"
        { (yyval.unaryOp)='~'; }
#line 2283 "ass6_18CS30051.tab.c"
    break;

  case 39:
#line 383 "ass6_18CS30051.y"
        {(yyval.unaryOp)='!'; }
#line 2289 "ass6_18CS30051.tab.c"
    break;

  case 40:
#line 386 "ass6_18CS30051.y"
                                   { (yyval.A)=(yyvsp[0].A); }
#line 2295 "ass6_18CS30051.tab.c"
    break;

  case 41:
#line 388 "ass6_18CS30051.y"
        { 
		(yyval.A)=new Array();	
		(yyval.A)->Array=convertType((yyvsp[0].A)->Array,var_type);             //generate a new symbol of the given type	
	}
#line 2304 "ass6_18CS30051.tab.c"
    break;

  case 42:
#line 395 "ass6_18CS30051.y"
        {
		(yyval.expr) = new Expression();             //generate new expression							    
		if((yyvsp[0].A)->atype=="arr") 			   //if it is of type arr
		{
			(yyval.expr)->loc = gentemp((yyvsp[0].A)->loc->type);	
			emit("=[]", (yyval.expr)->loc->name, (yyvsp[0].A)->Array->name, (yyvsp[0].A)->loc->name);     //emit with Array right
		}
		else if((yyvsp[0].A)->atype=="ptr")         //if it is of type ptr
		{ 
			(yyval.expr)->loc = (yyvsp[0].A)->loc;        //equate the locs
		}
		else
		{
			(yyval.expr)->loc = (yyvsp[0].A)->Array;
		}
	}
#line 2325 "ass6_18CS30051.tab.c"
    break;

  case 43:
#line 412 "ass6_18CS30051.y"
        { 
		//if we have multiplication
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array))         
			cout<<"Type Error in Program"<< endl;	// error
		else 								 //if types are compatible, generate new temporary and equate to the product
		{
			(yyval.expr) = new Expression();	
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			emit("*", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);
		}
	}
#line 2341 "ass6_18CS30051.tab.c"
    break;

  case 44:
#line 424 "ass6_18CS30051.y"
        {
		//if we have division
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array)){ 
			cout << "Type Error in Program"<< endl;
		}
		else   
		{
			//if types are compatible, generate new temporary and equate to the quotient
			(yyval.expr) = new Expression();
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			emit("/", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);
		}
	}
#line 2359 "ass6_18CS30051.tab.c"
    break;

  case 45:
#line 438 "ass6_18CS30051.y"
        {
		
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array)) cout << "Type Error in Program"<< endl;		
		else 		 
		{
			//if types are compatible, generate new temporary and equate to the quotient
			(yyval.expr) = new Expression();
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			emit("%", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);	
		}
	}
#line 2375 "ass6_18CS30051.tab.c"
    break;

  case 46:
#line 451 "ass6_18CS30051.y"
                                                 { (yyval.expr)=(yyvsp[0].expr); }
#line 2381 "ass6_18CS30051.tab.c"
    break;

  case 47:
#line 453 "ass6_18CS30051.y"
        {
		
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
			cout << "Type Error in Program"<< endl;
		else    	//if types are compatible, generate new temporary and equate to the sum
		{
			(yyval.expr) = new Expression();	
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			emit("+", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
		}
	}
#line 2397 "ass6_18CS30051.tab.c"
    break;

  case 48:
#line 465 "ass6_18CS30051.y"
        {
		
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
			cout << "Type Error in Program"<< endl;		
		else        //if types are compatible, generate new temporary and equate to the difference
		{	
			(yyval.expr) = new Expression();	
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			emit("-", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
		}
	}
#line 2413 "ass6_18CS30051.tab.c"
    break;

  case 49:
#line 478 "ass6_18CS30051.y"
                                        { (yyval.expr)=(yyvsp[0].expr); }
#line 2419 "ass6_18CS30051.tab.c"
    break;

  case 50:
#line 480 "ass6_18CS30051.y"
        { 
		if(!((yyvsp[0].expr)->loc->type->type == "int"))
			cout << "Type Error in Program"<< endl; 		
		else            //if base type is int, generate new temporary and equate to the shifted value
		{		
			(yyval.expr) = new Expression();		
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			emit("<<", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);		
		}
	}
#line 2434 "ass6_18CS30051.tab.c"
    break;

  case 51:
#line 491 "ass6_18CS30051.y"
        { 	
		if(!((yyvsp[0].expr)->loc->type->type == "int"))
		{
			cout << "Type Error in Program"<< endl; 		
		}
		else  		//if base type is int, generate new temporary and equate to the shifted value
		{			
			(yyval.expr) = new Expression();	
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			emit(">>", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);			
		}
	}
#line 2451 "ass6_18CS30051.tab.c"
    break;

  case 52:
#line 505 "ass6_18CS30051.y"
                                          { (yyval.expr)=(yyvsp[0].expr); }
#line 2457 "ass6_18CS30051.tab.c"
    break;

  case 53:
#line 507 "ass6_18CS30051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
		{
			yyerror("Type Error in Program");
		}
		else 
		{      //check compatible types									
			(yyval.expr) = new Expression();
			(yyval.expr)->type = "bool";                         //new type is boolean
			(yyval.expr)->truelist = makelist(nextinstr());     //makelist for truelist and falselist
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			emit("<", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);     //emit statement if a<b goto .. 
			emit("goto", "");	//emit statement goto ..
		}
	}
#line 2477 "ass6_18CS30051.tab.c"
    break;

  case 54:
#line 523 "ass6_18CS30051.y"
        {
		// similar to above, check compatible types,make new lists and emit
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
		{
			yyerror("Type Error in Program");
		}
		else 
		{	
			(yyval.expr) = new Expression();		
			(yyval.expr)->type = "bool";
			(yyval.expr)->truelist = makelist(nextinstr());
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			emit(">", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			emit("goto", "");
		}	
	}
#line 2498 "ass6_18CS30051.tab.c"
    break;

  case 55:
#line 540 "ass6_18CS30051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{			
			(yyval.expr) = new Expression();		
			(yyval.expr)->type = "bool";
			(yyval.expr)->truelist = makelist(nextinstr());
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			emit("<=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			emit("goto", "");
		}		
	}
#line 2518 "ass6_18CS30051.tab.c"
    break;

  case 56:
#line 556 "ass6_18CS30051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{	
			(yyval.expr) = new Expression();	
			(yyval.expr)->type = "bool";
			(yyval.expr)->truelist = makelist(nextinstr());
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			emit(">=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			emit("goto", "");
		}
	}
#line 2538 "ass6_18CS30051.tab.c"
    break;

  case 57:
#line 573 "ass6_18CS30051.y"
                                            { (yyval.expr)=(yyvsp[0].expr); }
#line 2544 "ass6_18CS30051.tab.c"
    break;

  case 58:
#line 575 "ass6_18CS30051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))                //check compatible types
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			convertBoolToInt((yyvsp[-2].expr));                  //convert bool to int		
			convertBoolToInt((yyvsp[0].expr));
			(yyval.expr) = new Expression();
			(yyval.expr)->type = "bool";
			(yyval.expr)->truelist = makelist(nextinstr());            //make lists for new expression
			(yyval.expr)->falselist = makelist(nextinstr()+1); 
			emit("==", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);      //emit if a==b goto ..
			emit("goto", "");				//emit goto ..
		}
	}
#line 2566 "ass6_18CS30051.tab.c"
    break;

  case 59:
#line 593 "ass6_18CS30051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
		{
			
			cout << "Type Error in Program"<< endl;
		}
		else 
		{			
			convertBoolToInt((yyvsp[-2].expr));
			convertBoolToInt((yyvsp[0].expr));
			(yyval.expr) = new Expression();                 //result is boolean
			(yyval.expr)->type = "bool";
			(yyval.expr)->truelist = makelist(nextinstr());
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			emit("!=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			emit("goto", "");
		}
	}
#line 2589 "ass6_18CS30051.tab.c"
    break;

  case 60:
#line 613 "ass6_18CS30051.y"
                                     { (yyval.expr)=(yyvsp[0].expr); }
#line 2595 "ass6_18CS30051.tab.c"
    break;

  case 61:
#line 615 "ass6_18CS30051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))         //check compatible types 
		{		
			cout << "Type Error in Program"<< endl;
		}
		else 
		{              
			convertBoolToInt((yyvsp[-2].expr));                             //convert bool to int	
			convertBoolToInt((yyvsp[0].expr));			
			(yyval.expr) = new Expression();
			(yyval.expr)->type = "not-boolean";                   //result is not boolean
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			emit("&", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);               //emit the quad
		}
	}
#line 2615 "ass6_18CS30051.tab.c"
    break;

  case 62:
#line 632 "ass6_18CS30051.y"
                                         { (yyval.expr)=(yyvsp[0].expr); }
#line 2621 "ass6_18CS30051.tab.c"
    break;

  case 63:
#line 634 "ass6_18CS30051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))    //same as and_expression: check compatible types, make non-boolean expression and convert bool to int and emit
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			convertBoolToInt((yyvsp[-2].expr));
			convertBoolToInt((yyvsp[0].expr));
			(yyval.expr) = new Expression();
			(yyval.expr)->type = "not-boolean";
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			emit("^", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
		}
	}
#line 2641 "ass6_18CS30051.tab.c"
    break;

  case 64:
#line 651 "ass6_18CS30051.y"
                                                 { (yyval.expr)=(yyvsp[0].expr); }
#line 2647 "ass6_18CS30051.tab.c"
    break;

  case 65:
#line 653 "ass6_18CS30051.y"
        { 
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))   //same as and_expression: check compatible types, make non-boolean expression and convert bool to int and emit
		{ yyerror("Type Error in Program"); }
		else 
		{
			convertBoolToInt((yyvsp[-2].expr));		
			convertBoolToInt((yyvsp[0].expr));
			(yyval.expr) = new Expression();
			(yyval.expr)->type = "not-boolean";
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			emit("|", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
		} 
	}
#line 2665 "ass6_18CS30051.tab.c"
    break;

  case 66:
#line 668 "ass6_18CS30051.y"
                                                 { (yyval.expr)=(yyvsp[0].expr); }
#line 2671 "ass6_18CS30051.tab.c"
    break;

  case 67:
#line 670 "ass6_18CS30051.y"
        { 
		convertIntToBool((yyvsp[0].expr));                                  //convert inclusive_or_expression int to bool	
		convertIntToBool((yyvsp[-3].expr));                                  //convert logical_and_expression to bool
		(yyval.expr) = new Expression();                                 //make new boolean expression 
		(yyval.expr)->type = "bool";
		backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_number));                           //if $1 is true, we move to $5
		(yyval.expr)->truelist = (yyvsp[0].expr)->truelist;                           //if $5 is also true, we get truelist for $$
		(yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);   //merge their falselists
	}
#line 2685 "ass6_18CS30051.tab.c"
    break;

  case 68:
#line 681 "ass6_18CS30051.y"
                                                { (yyval.expr)=(yyvsp[0].expr); }
#line 2691 "ass6_18CS30051.tab.c"
    break;

  case 69:
#line 683 "ass6_18CS30051.y"
        { 
		convertIntToBool((yyvsp[0].expr));			 //convert logical_and_expression int to bool	
		convertIntToBool((yyvsp[-3].expr));			 //convert logical_or_expression to bool
		(yyval.expr) = new Expression();			 //make new boolean expression
		(yyval.expr)->type = "bool";
		backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr_number));		//if $1 is true, we move to $5
		(yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);		//merge their truelists
		(yyval.expr)->falselist = (yyvsp[0].expr)->falselist;		 	//if $5 is also false, we get falselist for $$
	}
#line 2705 "ass6_18CS30051.tab.c"
    break;

  case 70:
#line 694 "ass6_18CS30051.y"
                                              {(yyval.expr)=(yyvsp[0].expr);}
#line 2711 "ass6_18CS30051.tab.c"
    break;

  case 71:
#line 696 "ass6_18CS30051.y"
        {
		//normal conversion method to get conditional expressions
		(yyval.expr)->loc = gentemp((yyvsp[-4].expr)->loc->type);       //generate temporary for expression
		(yyval.expr)->loc->update((yyvsp[-4].expr)->loc->type);
		emit("=", (yyval.expr)->loc->name, (yyvsp[0].expr)->loc->name);      //make it equal to sconditional_expression
		list<int> l = makelist(nextinstr());        //makelist next instruction
		emit("goto", "");              //prevent fallthrough
		backpatch((yyvsp[-3].stat)->nextlist, nextinstr());        //after N, go to next instruction
		emit("=", (yyval.expr)->loc->name, (yyvsp[-4].expr)->loc->name);
		list<int> m = makelist(nextinstr());         //makelist next instruction
		l = merge(l, m);						//merge the two lists
		emit("goto", "");						//prevent fallthrough
		backpatch((yyvsp[-7].stat)->nextlist, nextinstr());   //backpatching
		convertIntToBool((yyvsp[-8].expr));                   //convert expression to boolean
		backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_number));           //$1 true goes to expression
		backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_number));          //$1 false goes to conditional_expression
		backpatch(l, nextinstr());
	}
#line 2734 "ass6_18CS30051.tab.c"
    break;

  case 72:
#line 716 "ass6_18CS30051.y"
                                              {(yyval.expr)=(yyvsp[0].expr);}
#line 2740 "ass6_18CS30051.tab.c"
    break;

  case 73:
#line 718 "ass6_18CS30051.y"
         {
		if((yyvsp[-2].A)->atype=="arr")          // if type is arr, simply check if we need to convert and emit
		{
			(yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->type->type);
			emit("[]=", (yyvsp[-2].A)->Array->name, (yyvsp[-2].A)->loc->name, (yyvsp[0].expr)->loc->name);		
		}
		else if((yyvsp[-2].A)->atype=="ptr")     // if type is ptr, simply emit
		{
			emit("*=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);	
		}
		else                              //otherwise assignment
		{
			(yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->Array->type->type);
			emit("=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);
		}
		
		(yyval.expr) = (yyvsp[0].expr);
	}
#line 2763 "ass6_18CS30051.tab.c"
    break;

  case 74:
#line 739 "ass6_18CS30051.y"
                              {  }
#line 2769 "ass6_18CS30051.tab.c"
    break;

  case 75:
#line 740 "ass6_18CS30051.y"
                     {  }
#line 2775 "ass6_18CS30051.tab.c"
    break;

  case 76:
#line 741 "ass6_18CS30051.y"
                    {  }
#line 2781 "ass6_18CS30051.tab.c"
    break;

  case 77:
#line 742 "ass6_18CS30051.y"
                    {  }
#line 2787 "ass6_18CS30051.tab.c"
    break;

  case 78:
#line 743 "ass6_18CS30051.y"
                    {  }
#line 2793 "ass6_18CS30051.tab.c"
    break;

  case 79:
#line 744 "ass6_18CS30051.y"
                    {  }
#line 2799 "ass6_18CS30051.tab.c"
    break;

  case 80:
#line 745 "ass6_18CS30051.y"
                   {  }
#line 2805 "ass6_18CS30051.tab.c"
    break;

  case 81:
#line 746 "ass6_18CS30051.y"
                   {  }
#line 2811 "ass6_18CS30051.tab.c"
    break;

  case 82:
#line 747 "ass6_18CS30051.y"
                            {  }
#line 2817 "ass6_18CS30051.tab.c"
    break;

  case 83:
#line 748 "ass6_18CS30051.y"
                            {  }
#line 2823 "ass6_18CS30051.tab.c"
    break;

  case 84:
#line 749 "ass6_18CS30051.y"
                           { }
#line 2829 "ass6_18CS30051.tab.c"
    break;

  case 85:
#line 752 "ass6_18CS30051.y"
                                  {  (yyval.expr)=(yyvsp[0].expr);  }
#line 2835 "ass6_18CS30051.tab.c"
    break;

  case 86:
#line 753 "ass6_18CS30051.y"
                                                 {   }
#line 2841 "ass6_18CS30051.tab.c"
    break;

  case 87:
#line 756 "ass6_18CS30051.y"
                                            {   }
#line 2847 "ass6_18CS30051.tab.c"
    break;

  case 88:
#line 759 "ass6_18CS30051.y"
                                                                   {	}
#line 2853 "ass6_18CS30051.tab.c"
    break;

  case 89:
#line 760 "ass6_18CS30051.y"
                                           {  	}
#line 2859 "ass6_18CS30051.tab.c"
    break;

  case 90:
#line 763 "ass6_18CS30051.y"
                                                                       {	}
#line 2865 "ass6_18CS30051.tab.c"
    break;

  case 91:
#line 764 "ass6_18CS30051.y"
                                  {	}
#line 2871 "ass6_18CS30051.tab.c"
    break;

  case 92:
#line 765 "ass6_18CS30051.y"
                                                {	}
#line 2877 "ass6_18CS30051.tab.c"
    break;

  case 93:
#line 766 "ass6_18CS30051.y"
                         {	}
#line 2883 "ass6_18CS30051.tab.c"
    break;

  case 94:
#line 767 "ass6_18CS30051.y"
                                                {	}
#line 2889 "ass6_18CS30051.tab.c"
    break;

  case 95:
#line 768 "ass6_18CS30051.y"
                         {	}
#line 2895 "ass6_18CS30051.tab.c"
    break;

  case 96:
#line 769 "ass6_18CS30051.y"
                                                    {	}
#line 2901 "ass6_18CS30051.tab.c"
    break;

  case 97:
#line 770 "ass6_18CS30051.y"
                             {	}
#line 2907 "ass6_18CS30051.tab.c"
    break;

  case 98:
#line 773 "ass6_18CS30051.y"
                                      {	}
#line 2913 "ass6_18CS30051.tab.c"
    break;

  case 99:
#line 774 "ass6_18CS30051.y"
                                                     {	}
#line 2919 "ass6_18CS30051.tab.c"
    break;

  case 100:
#line 777 "ass6_18CS30051.y"
                            {(yyval.symp)=(yyvsp[0].symp);}
#line 2925 "ass6_18CS30051.tab.c"
    break;

  case 101:
#line 779 "ass6_18CS30051.y"
        {
		if((yyvsp[0].symp)->val!="") (yyvsp[-2].symp)->val=(yyvsp[0].symp)->val;        //get the initial value and  emit it
		emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);	
	}
#line 2934 "ass6_18CS30051.tab.c"
    break;

  case 102:
#line 785 "ass6_18CS30051.y"
                                 { }
#line 2940 "ass6_18CS30051.tab.c"
    break;

  case 103:
#line 786 "ass6_18CS30051.y"
                  { }
#line 2946 "ass6_18CS30051.tab.c"
    break;

  case 104:
#line 789 "ass6_18CS30051.y"
                       { var_type="void"; }
#line 2952 "ass6_18CS30051.tab.c"
    break;

  case 105:
#line 790 "ass6_18CS30051.y"
                 { var_type="char"; }
#line 2958 "ass6_18CS30051.tab.c"
    break;

  case 106:
#line 791 "ass6_18CS30051.y"
                 { }
#line 2964 "ass6_18CS30051.tab.c"
    break;

  case 107:
#line 792 "ass6_18CS30051.y"
                { var_type="int"; }
#line 2970 "ass6_18CS30051.tab.c"
    break;

  case 108:
#line 793 "ass6_18CS30051.y"
                 {  }
#line 2976 "ass6_18CS30051.tab.c"
    break;

  case 109:
#line 794 "ass6_18CS30051.y"
                  { var_type="float"; }
#line 2982 "ass6_18CS30051.tab.c"
    break;

  case 110:
#line 795 "ass6_18CS30051.y"
                   { }
#line 2988 "ass6_18CS30051.tab.c"
    break;

  case 111:
#line 796 "ass6_18CS30051.y"
                   {  }
#line 2994 "ass6_18CS30051.tab.c"
    break;

  case 112:
#line 797 "ass6_18CS30051.y"
                     { }
#line 3000 "ass6_18CS30051.tab.c"
    break;

  case 113:
#line 798 "ass6_18CS30051.y"
                  {  }
#line 3006 "ass6_18CS30051.tab.c"
    break;

  case 114:
#line 799 "ass6_18CS30051.y"
                     {  }
#line 3012 "ass6_18CS30051.tab.c"
    break;

  case 115:
#line 800 "ass6_18CS30051.y"
                       {  }
#line 3018 "ass6_18CS30051.tab.c"
    break;

  case 116:
#line 801 "ass6_18CS30051.y"
                           {  }
#line 3024 "ass6_18CS30051.tab.c"
    break;

  case 117:
#line 804 "ass6_18CS30051.y"
                                                                        {  }
#line 3030 "ass6_18CS30051.tab.c"
    break;

  case 118:
#line 805 "ass6_18CS30051.y"
                                                       {  }
#line 3036 "ass6_18CS30051.tab.c"
    break;

  case 119:
#line 808 "ass6_18CS30051.y"
                                     {  }
#line 3042 "ass6_18CS30051.tab.c"
    break;

  case 120:
#line 809 "ass6_18CS30051.y"
                                    {  }
#line 3048 "ass6_18CS30051.tab.c"
    break;

  case 121:
#line 812 "ass6_18CS30051.y"
                                                                                             {  }
#line 3054 "ass6_18CS30051.tab.c"
    break;

  case 122:
#line 813 "ass6_18CS30051.y"
                                                                                             {  }
#line 3060 "ass6_18CS30051.tab.c"
    break;

  case 123:
#line 814 "ass6_18CS30051.y"
                          {  }
#line 3066 "ass6_18CS30051.tab.c"
    break;

  case 124:
#line 817 "ass6_18CS30051.y"
                        {  }
#line 3072 "ass6_18CS30051.tab.c"
    break;

  case 125:
#line 818 "ass6_18CS30051.y"
                       {  }
#line 3078 "ass6_18CS30051.tab.c"
    break;

  case 126:
#line 821 "ass6_18CS30051.y"
                              {  }
#line 3084 "ass6_18CS30051.tab.c"
    break;

  case 127:
#line 822 "ass6_18CS30051.y"
                                             {  }
#line 3090 "ass6_18CS30051.tab.c"
    break;

  case 128:
#line 825 "ass6_18CS30051.y"
                         {  }
#line 3096 "ass6_18CS30051.tab.c"
    break;

  case 129:
#line 826 "ass6_18CS30051.y"
                                                  {  }
#line 3102 "ass6_18CS30051.tab.c"
    break;

  case 130:
#line 829 "ass6_18CS30051.y"
                        {  }
#line 3108 "ass6_18CS30051.tab.c"
    break;

  case 131:
#line 830 "ass6_18CS30051.y"
                     {  }
#line 3114 "ass6_18CS30051.tab.c"
    break;

  case 132:
#line 831 "ass6_18CS30051.y"
                     {  }
#line 3120 "ass6_18CS30051.tab.c"
    break;

  case 133:
#line 834 "ass6_18CS30051.y"
                             {  }
#line 3126 "ass6_18CS30051.tab.c"
    break;

  case 134:
#line 838 "ass6_18CS30051.y"
        {
		symboltype *t = (yyvsp[-1].sym_type);
		while(t->arrtype!=NULL) t = t->arrtype;           //for multidimensional arr1s, move in depth till you get the base type
		t->arrtype = (yyvsp[0].symp)->type;                //add the base type 
		(yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].sym_type));                  //update
	}
#line 3137 "ass6_18CS30051.tab.c"
    break;

  case 135:
#line 844 "ass6_18CS30051.y"
                            {   }
#line 3143 "ass6_18CS30051.tab.c"
    break;

  case 136:
#line 848 "ass6_18CS30051.y"
        {
		(yyval.symp) = (yyvsp[0].symp)->update(new symboltype(var_type));
		currSymbolPtr = (yyval.symp);	
	}
#line 3152 "ass6_18CS30051.tab.c"
    break;

  case 137:
#line 852 "ass6_18CS30051.y"
                                                            {(yyval.symp)=(yyvsp[-1].symp);}
#line 3158 "ass6_18CS30051.tab.c"
    break;

  case 138:
#line 853 "ass6_18CS30051.y"
                                                                                                               {	}
#line 3164 "ass6_18CS30051.tab.c"
    break;

  case 139:
#line 854 "ass6_18CS30051.y"
                                                                                         {	}
#line 3170 "ass6_18CS30051.tab.c"
    break;

  case 140:
#line 856 "ass6_18CS30051.y"
        {
		symboltype *t = (yyvsp[-3].symp) -> type;
		symboltype *prev = NULL;
		while(t->type == "arr") 
		{
			prev = t;	
			t = t->arrtype;      //keep moving recursively to get basetype
		}
		if(prev==NULL) 
		{
			int temp = atoi((yyvsp[-1].expr)->loc->val.c_str());      //get initial value
			symboltype* s = new symboltype("arr", (yyvsp[-3].symp)->type, temp);        //create new symbol with that initial value
			(yyval.symp) = (yyvsp[-3].symp)->update(s);   //update the symbol table
		}
		else 
		{
			prev->arrtype =  new symboltype("arr", t, atoi((yyvsp[-1].expr)->loc->val.c_str()));     //similar arguments as above		
			(yyval.symp) = (yyvsp[-3].symp)->update((yyvsp[-3].symp)->type);
		}
	}
#line 3195 "ass6_18CS30051.tab.c"
    break;

  case 141:
#line 877 "ass6_18CS30051.y"
        {
		symboltype *t = (yyvsp[-2].symp) -> type;
		symboltype *prev = NULL;
		while(t->type == "arr") 
		{
			prev = t;	
			t = t->arrtype;         //keep moving recursively to base type
		}
		if(prev==NULL) 
		{
			symboltype* s = new symboltype("arr", (yyvsp[-2].symp)->type, 0);    //no initial values, simply keep 0
			(yyval.symp) = (yyvsp[-2].symp)->update(s);
		}
		else 
		{
			prev->arrtype =  new symboltype("arr", t, 0);
			(yyval.symp) = (yyvsp[-2].symp)->update((yyvsp[-2].symp)->type);
		}
	}
#line 3219 "ass6_18CS30051.tab.c"
    break;

  case 142:
#line 896 "ass6_18CS30051.y"
                                                                                                                      {	}
#line 3225 "ass6_18CS30051.tab.c"
    break;

  case 143:
#line 897 "ass6_18CS30051.y"
                                                                                                  {	}
#line 3231 "ass6_18CS30051.tab.c"
    break;

  case 144:
#line 898 "ass6_18CS30051.y"
                                                                                             {	}
#line 3237 "ass6_18CS30051.tab.c"
    break;

  case 145:
#line 899 "ass6_18CS30051.y"
                                                                         {	}
#line 3243 "ass6_18CS30051.tab.c"
    break;

  case 146:
#line 901 "ass6_18CS30051.y"
        {
		ST->name = (yyvsp[-4].symp)->name;	
		if((yyvsp[-4].symp)->type->type !="void") 
		{
			sym *s = ST->lookup("return");         //lookup for return value	
			s->update((yyvsp[-4].symp)->type);		
		}
		(yyvsp[-4].symp)->nested=ST;       
		ST->parent = globalST;
		changeTable(globalST);				// Come back to globalsymbol table
		currSymbolPtr = (yyval.symp);
	}
#line 3260 "ass6_18CS30051.tab.c"
    break;

  case 147:
#line 913 "ass6_18CS30051.y"
                                                                                   {	}
#line 3266 "ass6_18CS30051.tab.c"
    break;

  case 148:
#line 915 "ass6_18CS30051.y"
        {        //similar as above
		ST->name = (yyvsp[-3].symp)->name;
		if((yyvsp[-3].symp)->type->type !="void") 
		{
			sym *s = ST->lookup("return");
			s->update((yyvsp[-3].symp)->type);
		}
		(yyvsp[-3].symp)->nested=ST;
		ST->parent = globalST;
		changeTable(globalST);				// Come back to globalsymbol table
		currSymbolPtr = (yyval.symp);
	}
#line 3283 "ass6_18CS30051.tab.c"
    break;

  case 149:
#line 929 "ass6_18CS30051.y"
                                  {  }
#line 3289 "ass6_18CS30051.tab.c"
    break;

  case 150:
#line 930 "ass6_18CS30051.y"
                                   {  }
#line 3295 "ass6_18CS30051.tab.c"
    break;

  case 151:
#line 934 "ass6_18CS30051.y"
        { 
		(yyval.sym_type) = new symboltype("ptr");   //create new pointer
	}
#line 3303 "ass6_18CS30051.tab.c"
    break;

  case 152:
#line 938 "ass6_18CS30051.y"
        { 
		(yyval.sym_type) = new symboltype("ptr",(yyvsp[0].sym_type));
	}
#line 3311 "ass6_18CS30051.tab.c"
    break;

  case 153:
#line 943 "ass6_18CS30051.y"
                                      {  }
#line 3317 "ass6_18CS30051.tab.c"
    break;

  case 154:
#line 944 "ass6_18CS30051.y"
                                               {  }
#line 3323 "ass6_18CS30051.tab.c"
    break;

  case 155:
#line 947 "ass6_18CS30051.y"
                                      {  }
#line 3329 "ass6_18CS30051.tab.c"
    break;

  case 156:
#line 948 "ass6_18CS30051.y"
                                      {  }
#line 3335 "ass6_18CS30051.tab.c"
    break;

  case 157:
#line 951 "ass6_18CS30051.y"
                                        {  }
#line 3341 "ass6_18CS30051.tab.c"
    break;

  case 158:
#line 952 "ass6_18CS30051.y"
                                                        {  }
#line 3347 "ass6_18CS30051.tab.c"
    break;

  case 159:
#line 955 "ass6_18CS30051.y"
                                                           {  }
#line 3353 "ass6_18CS30051.tab.c"
    break;

  case 160:
#line 956 "ass6_18CS30051.y"
                                    {  }
#line 3359 "ass6_18CS30051.tab.c"
    break;

  case 161:
#line 959 "ass6_18CS30051.y"
                                {  }
#line 3365 "ass6_18CS30051.tab.c"
    break;

  case 162:
#line 960 "ass6_18CS30051.y"
                                             {  }
#line 3371 "ass6_18CS30051.tab.c"
    break;

  case 163:
#line 963 "ass6_18CS30051.y"
                                      {  }
#line 3377 "ass6_18CS30051.tab.c"
    break;

  case 164:
#line 966 "ass6_18CS30051.y"
                                     { (yyval.symp)=(yyvsp[0].expr)->loc; }
#line 3383 "ass6_18CS30051.tab.c"
    break;

  case 165:
#line 967 "ass6_18CS30051.y"
                                                                   {  }
#line 3389 "ass6_18CS30051.tab.c"
    break;

  case 166:
#line 968 "ass6_18CS30051.y"
                                                                         {  }
#line 3395 "ass6_18CS30051.tab.c"
    break;

  case 167:
#line 971 "ass6_18CS30051.y"
                                               {  }
#line 3401 "ass6_18CS30051.tab.c"
    break;

  case 168:
#line 972 "ass6_18CS30051.y"
                                                               {  }
#line 3407 "ass6_18CS30051.tab.c"
    break;

  case 169:
#line 975 "ass6_18CS30051.y"
                          {  }
#line 3413 "ass6_18CS30051.tab.c"
    break;

  case 170:
#line 976 "ass6_18CS30051.y"
                        {  }
#line 3419 "ass6_18CS30051.tab.c"
    break;

  case 171:
#line 979 "ass6_18CS30051.y"
                                      {  }
#line 3425 "ass6_18CS30051.tab.c"
    break;

  case 172:
#line 982 "ass6_18CS30051.y"
                               {  }
#line 3431 "ass6_18CS30051.tab.c"
    break;

  case 173:
#line 983 "ass6_18CS30051.y"
                                       {  }
#line 3437 "ass6_18CS30051.tab.c"
    break;

  case 174:
#line 986 "ass6_18CS30051.y"
                                                                           {  }
#line 3443 "ass6_18CS30051.tab.c"
    break;

  case 175:
#line 987 "ass6_18CS30051.y"
                         {  }
#line 3449 "ass6_18CS30051.tab.c"
    break;

  case 176:
#line 992 "ass6_18CS30051.y"
                               {  }
#line 3455 "ass6_18CS30051.tab.c"
    break;

  case 177:
#line 993 "ass6_18CS30051.y"
                               { (yyval.stat)=(yyvsp[0].stat); }
#line 3461 "ass6_18CS30051.tab.c"
    break;

  case 178:
#line 995 "ass6_18CS30051.y"
        { 
		(yyval.stat)=new Statement();              //create new statement with same nextlist
		(yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
	}
#line 3470 "ass6_18CS30051.tab.c"
    break;

  case 179:
#line 999 "ass6_18CS30051.y"
                                { (yyval.stat)=(yyvsp[0].stat); }
#line 3476 "ass6_18CS30051.tab.c"
    break;

  case 180:
#line 1000 "ass6_18CS30051.y"
                                { (yyval.stat)=(yyvsp[0].stat); }
#line 3482 "ass6_18CS30051.tab.c"
    break;

  case 181:
#line 1001 "ass6_18CS30051.y"
                           { (yyval.stat)=(yyvsp[0].stat); }
#line 3488 "ass6_18CS30051.tab.c"
    break;

  case 182:
#line 1004 "ass6_18CS30051.y"
                                    {  }
#line 3494 "ass6_18CS30051.tab.c"
    break;

  case 183:
#line 1006 "ass6_18CS30051.y"
        { 
		(yyval.stat)=new Statement();              //create new statement with same nextlist
		(yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
	}
#line 3503 "ass6_18CS30051.tab.c"
    break;

  case 184:
#line 1010 "ass6_18CS30051.y"
                                { (yyval.stat)=(yyvsp[0].stat); }
#line 3509 "ass6_18CS30051.tab.c"
    break;

  case 185:
#line 1011 "ass6_18CS30051.y"
                                { (yyval.stat)=(yyvsp[0].stat); }
#line 3515 "ass6_18CS30051.tab.c"
    break;

  case 186:
#line 1012 "ass6_18CS30051.y"
                           { (yyval.stat)=(yyvsp[0].stat); }
#line 3521 "ass6_18CS30051.tab.c"
    break;

  case 187:
#line 1016 "ass6_18CS30051.y"
        {  
		(yyval.stat) = (yyvsp[0].stat);
		label *s = find_label((yyvsp[-3].symp)->name);
		if(s!=nullptr){
			s->addr = (yyvsp[-1].instr_number);
			backpatch(s->nextlist,s->addr);
		}else{
			s = new label((yyvsp[-3].symp)->name);
			s->addr = nextinstr();
			s->nextlist = makelist((yyvsp[-1].instr_number));
			label_table.push_back(*s);
		}
	}
#line 3539 "ass6_18CS30051.tab.c"
    break;

  case 188:
#line 1029 "ass6_18CS30051.y"
                                                     {  }
#line 3545 "ass6_18CS30051.tab.c"
    break;

  case 189:
#line 1030 "ass6_18CS30051.y"
                                    {  }
#line 3551 "ass6_18CS30051.tab.c"
    break;

  case 190:
#line 1034 "ass6_18CS30051.y"
        { 
		(yyval.stat)=(yyvsp[-1].stat);
		changeTable(ST->parent); 
	}
#line 3560 "ass6_18CS30051.tab.c"
    break;

  case 191:
#line 1040 "ass6_18CS30051.y"
                             { (yyval.stat)=new Statement(); }
#line 3566 "ass6_18CS30051.tab.c"
    break;

  case 192:
#line 1041 "ass6_18CS30051.y"
                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3572 "ass6_18CS30051.tab.c"
    break;

  case 193:
#line 1044 "ass6_18CS30051.y"
                              { (yyval.stat)=(yyvsp[0].stat); }
#line 3578 "ass6_18CS30051.tab.c"
    break;

  case 194:
#line 1046 "ass6_18CS30051.y"
        { 
		(yyval.stat)=(yyvsp[0].stat);
		backpatch((yyvsp[-2].stat)->nextlist,(yyvsp[-1].instr_number));     //after $1, move to block_item via $2
	}
#line 3587 "ass6_18CS30051.tab.c"
    break;

  case 195:
#line 1052 "ass6_18CS30051.y"
                          { (yyval.stat)=new Statement(); }
#line 3593 "ass6_18CS30051.tab.c"
    break;

  case 196:
#line 1053 "ass6_18CS30051.y"
                      { (yyval.stat)=(yyvsp[0].stat); }
#line 3599 "ass6_18CS30051.tab.c"
    break;

  case 197:
#line 1056 "ass6_18CS30051.y"
                                           {(yyval.expr)=(yyvsp[-1].expr);}
#line 3605 "ass6_18CS30051.tab.c"
    break;

  case 198:
#line 1057 "ass6_18CS30051.y"
                    {(yyval.expr) = new Expression();}
#line 3611 "ass6_18CS30051.tab.c"
    break;

  case 199:
#line 1061 "ass6_18CS30051.y"
        {
		backpatch((yyvsp[-4].stat)->nextlist, nextinstr());        //nextlist of N goes to nextinstr
		convertIntToBool((yyvsp[-5].expr));         //convert expression to bool
		(yyval.stat) = new Statement();        //make new statement
		backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));        //is expression is true, go to M i.e just before statement body
		list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stat)->nextlist);   //merge falselist of expression, nextlist of statement and second N
		(yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist, temp);
	}
#line 3624 "ass6_18CS30051.tab.c"
    break;

  case 200:
#line 1070 "ass6_18CS30051.y"
        {
		backpatch((yyvsp[-7].stat)->nextlist, nextinstr());		//nextlist of N goes to nextinstr
		convertIntToBool((yyvsp[-8].expr));        //convert expression to bool
		(yyval.stat) = new Statement();       //make new statement
		backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_number));    //when expression is true, go to M1 else go to M2
		backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_number));
		list<int> temp = merge((yyvsp[-4].stat)->nextlist, (yyvsp[-3].stat)->nextlist);       //merge the nextlists of the statements and second N
		(yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist,temp);	
	}
#line 3638 "ass6_18CS30051.tab.c"
    break;

  case 201:
#line 1079 "ass6_18CS30051.y"
                                                                             {	}
#line 3644 "ass6_18CS30051.tab.c"
    break;

  case 202:
#line 1083 "ass6_18CS30051.y"
        {	
		(yyval.stat) = new Statement();    //create statement
		convertIntToBool((yyvsp[-3].expr));     //convert expression to bool
		backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-4].instr_number));	// M1 to go back to expression again
		backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_number));	// M2 to go to statement if the expression is true
		(yyval.stat)->nextlist = (yyvsp[-3].expr)->falselist;   //when expression is false, move out of loop
		// Emit to prevent fallthrough
		string str=convertIntToString((yyvsp[-4].instr_number));		
		emit("goto",str);	
		loop_name = "";
		changeTable(ST->parent);
	}
#line 3661 "ass6_18CS30051.tab.c"
    break;

  case 203:
#line 1097 "ass6_18CS30051.y"
        {	
		(yyval.stat) = new Statement();    //create statement
		convertIntToBool((yyvsp[-5].expr));     //convert expression to bool
		backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-6].instr_number));	// M1 to go back to expression again
		backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));	// M2 to go to statement if the expression is true
		(yyval.stat)->nextlist = (yyvsp[-5].expr)->falselist;   //when expression is false, move out of loop
		// Emit to prevent fallthrough
		string str=convertIntToString((yyvsp[-6].instr_number));		
		emit("goto",str);	
		loop_name = "";
		changeTable(ST->parent);
	}
#line 3678 "ass6_18CS30051.tab.c"
    break;

  case 204:
#line 1110 "ass6_18CS30051.y"
        {
		(yyval.stat) = new Statement();     //create statement	
		convertIntToBool((yyvsp[-2].expr));      //convert to bool
		backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr_number));						// M1 to go back to statement if expression is true
		backpatch((yyvsp[-6].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
		(yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       //move out if statement is false
		loop_name = "";
	}
#line 3691 "ass6_18CS30051.tab.c"
    break;

  case 205:
#line 1119 "ass6_18CS30051.y"
        {
		(yyval.stat) = new Statement();     //create statement	
		convertIntToBool((yyvsp[-2].expr));      //convert to bool
		backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-8].instr_number));						// M1 to go back to statement if expression is true
		backpatch((yyvsp[-7].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
		(yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       //move out if statement is false
		loop_name = "";
	}
#line 3704 "ass6_18CS30051.tab.c"
    break;

  case 206:
#line 1128 "ass6_18CS30051.y"
        {
		(yyval.stat) = new Statement();		 //create new statement
		convertIntToBool((yyvsp[-6].expr));  //convert check expression to boolean
		backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr_number));	//if expression is true, go to M2
		backpatch((yyvsp[-3].stat)->nextlist, (yyvsp[-7].instr_number));	//after N, go back to M1
		backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));	//statement go back to expression
		string str=convertIntToString((yyvsp[-5].instr_number));
		emit("goto", str);				//prevent fallthrough
		(yyval.stat)->nextlist = (yyvsp[-6].expr)->falselist;	//move out if statement is false
		loop_name = "";
		changeTable(ST->parent);
	}
#line 3721 "ass6_18CS30051.tab.c"
    break;

  case 207:
#line 1141 "ass6_18CS30051.y"
        {
		(yyval.stat) = new Statement();		 //create new statement
		convertIntToBool((yyvsp[-6].expr));  //convert check expression to boolean
		backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr_number));	//if expression is true, go to M2
		backpatch((yyvsp[-3].stat)->nextlist, (yyvsp[-7].instr_number));	//after N, go back to M1
		backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));	//statement go back to expression
		string str=convertIntToString((yyvsp[-5].instr_number));
		emit("goto", str);				//prevent fallthrough
		(yyval.stat)->nextlist = (yyvsp[-6].expr)->falselist;	//move out if statement is false
		loop_name = "";
		changeTable(ST->parent);
	}
#line 3738 "ass6_18CS30051.tab.c"
    break;

  case 208:
#line 1154 "ass6_18CS30051.y"
        {
		(yyval.stat) = new Statement();		 //create new statement
		convertIntToBool((yyvsp[-8].expr));  //convert check expression to boolean
		backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr_number));	//if expression is true, go to M2
		backpatch((yyvsp[-5].stat)->nextlist, (yyvsp[-9].instr_number));	//after N, go back to M1
		backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-7].instr_number));	//statement go back to expression
		string str=convertIntToString((yyvsp[-7].instr_number));
		emit("goto", str);				//prevent fallthrough
		(yyval.stat)->nextlist = (yyvsp[-8].expr)->falselist;	//move out if statement is false
		loop_name = "";
		changeTable(ST->parent);
	}
#line 3755 "ass6_18CS30051.tab.c"
    break;

  case 209:
#line 1167 "ass6_18CS30051.y"
        {	
		(yyval.stat) = new Statement();		 //create new statement
		convertIntToBool((yyvsp[-8].expr));  //convert check expression to boolean
		backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr_number));	//if expression is true, go to M2
		backpatch((yyvsp[-5].stat)->nextlist, (yyvsp[-9].instr_number));	//after N, go back to M1
		backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-7].instr_number));	//statement go back to expression
		string str=convertIntToString((yyvsp[-7].instr_number));
		emit("goto", str);				//prevent fallthrough
		(yyval.stat)->nextlist = (yyvsp[-8].expr)->falselist;	//move out if statement is false
		loop_name = "";
		changeTable(ST->parent);
	}
#line 3772 "ass6_18CS30051.tab.c"
    break;

  case 210:
#line 1181 "ass6_18CS30051.y"
                                          { 
		(yyval.stat) = new Statement();
		label *l = find_label((yyvsp[-1].symp)->name);
		if(l){
			emit("goto","");
			list<int>lst = makelist(nextinstr());
			l->nextlist = merge(l->nextlist,lst);
			if(l->addr!=-1)
				backpatch(l->nextlist,l->addr);
		} else {
			l = new label((yyvsp[-1].symp)->name);
			l->nextlist = makelist(nextinstr());
			emit("goto","");
			label_table.push_back(*l);
		}
	}
#line 3793 "ass6_18CS30051.tab.c"
    break;

  case 211:
#line 1197 "ass6_18CS30051.y"
                             { (yyval.stat) = new Statement(); }
#line 3799 "ass6_18CS30051.tab.c"
    break;

  case 212:
#line 1198 "ass6_18CS30051.y"
                          { (yyval.stat) = new Statement(); }
#line 3805 "ass6_18CS30051.tab.c"
    break;

  case 213:
#line 1200 "ass6_18CS30051.y"
        {
		(yyval.stat) = new Statement();	
		emit("return",(yyvsp[-1].expr)->loc->name);               //emit return with the name of the return value
	}
#line 3814 "ass6_18CS30051.tab.c"
    break;

  case 214:
#line 1205 "ass6_18CS30051.y"
        {
		(yyval.stat) = new Statement();	
		emit("return","");                         //simply emit return
	}
#line 3823 "ass6_18CS30051.tab.c"
    break;

  case 215:
#line 1213 "ass6_18CS30051.y"
                                       { }
#line 3829 "ass6_18CS30051.tab.c"
    break;

  case 216:
#line 1214 "ass6_18CS30051.y"
                                                { }
#line 3835 "ass6_18CS30051.tab.c"
    break;

  case 217:
#line 1217 "ass6_18CS30051.y"
                                          {  }
#line 3841 "ass6_18CS30051.tab.c"
    break;

  case 218:
#line 1218 "ass6_18CS30051.y"
                        {  }
#line 3847 "ass6_18CS30051.tab.c"
    break;

  case 219:
#line 1222 "ass6_18CS30051.y"
        {
		int next_instr=0;	 	
		ST->parent=globalST;
		table_count = 0;
		label_table.clear();
		changeTable(globalST);                     //once we come back to this at the end, change the table to global Symbol table
	}
#line 3859 "ass6_18CS30051.tab.c"
    break;

  case 220:
#line 1231 "ass6_18CS30051.y"
                                {  }
#line 3865 "ass6_18CS30051.tab.c"
    break;

  case 221:
#line 1232 "ass6_18CS30051.y"
                                          {  }
#line 3871 "ass6_18CS30051.tab.c"
    break;

  case 222:
#line 1235 "ass6_18CS30051.y"
                             {  }
#line 3877 "ass6_18CS30051.tab.c"
    break;

  case 223:
#line 1236 "ass6_18CS30051.y"
                             {  }
#line 3883 "ass6_18CS30051.tab.c"
    break;


#line 3887 "ass6_18CS30051.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1239 "ass6_18CS30051.y"


void yyerror(string s) {        //print syntax error
    cout<<s<<endl;
}
