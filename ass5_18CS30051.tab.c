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
#line 1 "ass5_18CS30051.y"


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
#include "ass5_18CS30051_translator.h"

//yylex for lexer, yyerror for error recovery, var_type for last encountered type
extern int yylex();
void yyerror(string s);
extern string var_type;
using namespace std;

#line 98 "ass5_18CS30051.tab.c"

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
#ifndef YY_YY_ASS5_18CS30051_TAB_H_INCLUDED
# define YY_YY_ASS5_18CS30051_TAB_H_INCLUDED
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
    AUTO = 258,
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
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    _BOOL = 292,
    _COMPLEX = 293,
    _IMAGINARY = 294,
    IDENTIFIER = 295,
    INTEGER_CONSTANT = 296,
    FLOATING_CONSTANT = 297,
    CHARACTER_CONSTANT = 298,
    STRING_LITERAL = 299,
    SQUARE_BRACKET_OPEN = 300,
    SQUARE_BRACKET_CLOSE = 301,
    ROUND_BRACKET_OPEN = 302,
    ROUND_BRACKET_CLOSE = 303,
    CURLY_BRACKET_OPEN = 304,
    CURLY_BRACKET_CLOSE = 305,
    DOT = 306,
    IMPLIES = 307,
    INC = 308,
    DEC = 309,
    BITWISE_AND = 310,
    MUL = 311,
    ADD = 312,
    SUB = 313,
    BITWISE_NOT = 314,
    EXCLAIM = 315,
    DIV = 316,
    MOD = 317,
    SHIFT_LEFT = 318,
    SHIFT_RIGHT = 319,
    BIT_SL = 320,
    BIT_SR = 321,
    ELLIPSIS = 322,
    LTE = 323,
    GTE = 324,
    EQ = 325,
    NEQ = 326,
    BITWISE_XOR = 327,
    BITWISE_OR = 328,
    AND = 329,
    OR = 330,
    QUESTION = 331,
    COLON = 332,
    SEMICOLON = 333,
    DOTS = 334,
    ASSIGN = 335,
    STAR_EQ = 336,
    DIV_EQ = 337,
    MOD_EQ = 338,
    ADD_EQ = 339,
    SUB_EQ = 340,
    SL_EQ = 341,
    SR_EQ = 342,
    BITWISE_AND_EQ = 343,
    BITWISE_XOR_EQ = 344,
    BITWISE_OR_EQ = 345,
    COMMA = 346,
    HASH = 347
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "ass5_18CS30051.y"
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

#line 256 "ass5_18CS30051.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASS5_18CS30051_TAB_H_INCLUDED  */



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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  224
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

#define YYUNDEFTOK  2
#define YYMAXUTOK   348


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
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   123,   123,   133,   139,   145,   151,   167,   183,   199,
     205,   212,   218,   224,   230,   237,   244,   267,   275,   276,
     277,   284,   291,   292,   295,   299,   305,   310,   317,   321,
     327,   333,   366,   367,   370,   372,   374,   376,   378,   380,
     384,   385,   392,   409,   421,   435,   449,   450,   462,   476,
     477,   488,   503,   504,   520,   537,   553,   571,   572,   590,
     611,   612,   630,   631,   649,   650,   669,   670,   683,   684,
     697,   698,   720,   721,   743,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   756,   757,   760,   763,   764,
     767,   768,   769,   770,   771,   772,   773,   774,   777,   778,
     781,   782,   789,   790,   791,   792,   795,   796,   797,   798,
     799,   800,   801,   802,   803,   804,   805,   806,   807,   810,
     811,   814,   815,   818,   819,   820,   823,   824,   827,   828,
     831,   832,   835,   836,   837,   840,   843,   850,   853,   858,
     859,   860,   861,   882,   902,   903,   904,   905,   906,   919,
     920,   935,   936,   939,   943,   949,   950,   953,   954,   957,
     958,   961,   962,   965,   966,   969,   972,   973,   974,   977,
     978,   981,   982,   985,   988,   989,   992,   993,   998,   999,
    1000,  1005,  1006,  1007,  1010,  1011,  1016,  1017,  1018,  1021,
    1022,  1023,  1026,  1033,  1034,  1037,  1038,  1045,  1046,  1049,
    1050,  1053,  1062,  1072,  1075,  1089,  1102,  1111,  1124,  1137,
    1150,  1165,  1166,  1167,  1168,  1173,  1182,  1183,  1186,  1187,
    1190,  1199,  1200,  1203,  1204
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "_BOOL",
  "_COMPLEX", "_IMAGINARY", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "STRING_LITERAL",
  "SQUARE_BRACKET_OPEN", "SQUARE_BRACKET_CLOSE", "ROUND_BRACKET_OPEN",
  "ROUND_BRACKET_CLOSE", "CURLY_BRACKET_OPEN", "CURLY_BRACKET_CLOSE",
  "DOT", "IMPLIES", "INC", "DEC", "BITWISE_AND", "MUL", "ADD", "SUB",
  "BITWISE_NOT", "EXCLAIM", "DIV", "MOD", "SHIFT_LEFT", "SHIFT_RIGHT",
  "BIT_SL", "BIT_SR", "ELLIPSIS", "LTE", "GTE", "EQ", "NEQ", "BITWISE_XOR",
  "BITWISE_OR", "AND", "OR", "QUESTION", "COLON", "SEMICOLON", "DOTS",
  "ASSIGN", "STAR_EQ", "DIV_EQ", "MOD_EQ", "ADD_EQ", "SUB_EQ", "SL_EQ",
  "SR_EQ", "BITWISE_AND_EQ", "BITWISE_XOR_EQ", "BITWISE_OR_EQ", "COMMA",
  "HASH", "\"then\"", "$accept", "M", "F", "W", "D", "X", "N",
  "changetable", "primary_expression", "postfix_expression",
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
     345,   346,   347,   348
};
# endif

#define YYPACT_NINF (-300)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-224)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     987,  -300,  -300,  -300,  -300,    -8,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,   131,   987,   987,  -300,   987,   987,   950,
    -300,  -300,     5,    22,  -300,   145,    18,  -300,    35,  -300,
     281,    29,    67,  -300,  -300,  -300,  -300,  -300,  -300,    72,
      58,  -300,   -32,    18,  -300,   145,   989,  -300,   131,   987,
    -300,   714,    78,    29,    61,   -35,  -300,  -300,  -300,  -300,
    -300,    76,  1066,  -300,  -300,  -300,  -300,  -300,   676,     1,
    1087,  1087,  -300,  -300,  -300,  -300,  -300,  -300,  -300,   146,
     798,  1108,  -300,   159,    93,   143,   209,   166,    83,   101,
      92,   130,   154,  -300,  -300,  -300,  -300,   161,   790,  -300,
     171,   176,   752,  -300,   910,   -30,  1108,  -300,    -2,   676,
    -300,  -300,   -25,  1044,  -300,  1044,   184,  1108,   204,   -14,
     989,  -300,    60,  -300,   676,  -300,  -300,  1108,  1108,   207,
     212,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  1108,  -300,  -300,  1108,  1108,  1108,
    1108,  1108,  1108,  1108,  1108,  1108,  1108,  1108,  1108,  1108,
    1108,  1108,  1108,   182,   175,   332,   216,   790,  -300,  -300,
    -300,   226,   230,  -300,   145,   231,   192,  -300,  -300,   245,
    -300,  -300,  -300,  -300,   243,  -300,  1108,  -300,  -300,  -300,
    1045,   247,  -300,  -300,   -24,  -300,  -300,  -300,   257,   -36,
     260,   219,  -300,  -300,  -300,  -300,  -300,  -300,  -300,   159,
     159,    93,    93,   143,   143,   143,   143,   209,   209,   166,
      83,   101,  -300,  -300,  -300,   233,  1108,   234,   236,  -300,
    -300,   277,   278,   811,   279,  -300,   250,  -300,  -300,    66,
    -300,  -300,  -300,  -300,   282,   283,  -300,  -300,  -300,  -300,
    -300,  -300,   285,  -300,  -300,  -300,  -300,   220,  -300,   280,
    -300,     1,  -300,  -300,  -300,   989,   280,  -300,  -300,  1108,
    1108,  1108,  1108,  -300,   251,  -300,   449,  -300,   297,   286,
    1108,  -300,   111,  1108,   316,   449,  -300,  -300,  -300,   332,
    -300,  -300,  -300,   -13,  -300,  -300,    92,   130,   287,   449,
    -300,   449,  -300,  -300,   287,  -300,    -9,  -300,  -300,   332,
    -300,  -300,   174,   300,  -300,  -300,  -300,   334,   449,  -300,
     330,  -300,  -300,   347,   392,  -300,  -300,  -300,  -300,  1108,
     337,  -300,  -300,   449,  1108,  -300,  1108,   850,   850,  -300,
      -5,    17,  -300,  -300,   381,   345,   318,  1108,  1108,  -300,
    -300,   620,  -300,   287,   287,   449,   332,  -300,  -300,  -300,
    -300,  -300,  -300,   349,   352,  -300,   351,  -300,  -300,  -300,
     506,   563,   332,  -300,   332,  -300,   354,   358,  -300,  -300
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   104,   107,   132,   112,   126,   102,   111,   135,   109,
     110,   105,   133,   108,   113,   103,   114,   106,   134,   115,
     116,   117,   219,     0,    91,    93,   118,    95,    97,     0,
     216,   218,   125,     0,   138,     0,   151,    89,     0,    98,
     100,   137,     0,    90,    92,    94,    96,     1,   217,     0,
       0,   155,   153,   152,    88,     0,     0,   221,     0,   224,
       8,     0,     8,   136,   130,     0,   128,   139,   154,   156,
      99,   100,     0,     9,    10,    11,    12,    13,     0,   171,
       0,     0,    34,    35,    36,    37,    38,    39,    15,    28,
      40,     0,    42,    46,    49,    52,    57,    60,    62,    64,
      66,    68,    70,    72,   166,   101,   222,     0,     0,   143,
      35,     0,     0,   163,     0,     0,     0,   123,     0,     0,
      32,    85,     0,   121,   165,   121,     0,     0,     0,     0,
       0,   172,     0,   174,     0,    29,    30,     0,    25,     0,
       0,    20,    21,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,     0,    40,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,     0,     0,   147,   142,
     141,    35,     0,   150,   162,     0,   157,   159,   149,     0,
      87,   131,   124,   129,     0,    14,     0,   122,   119,   120,
       0,     0,   177,   167,   171,   169,   173,   175,     0,     0,
       0,    24,    26,    18,    19,    73,    43,    44,    45,    47,
      48,    50,    51,    53,    54,    55,    56,    58,    59,    61,
      63,    65,     2,     2,     2,     0,     0,     0,     0,     5,
       3,     0,     0,     0,     0,     4,     9,     6,   200,     0,
     197,   198,   178,   179,     0,     2,   195,   180,   181,   182,
     183,   145,     0,   146,   140,   161,   148,     0,   164,    33,
      86,   171,    41,   176,   168,     0,     0,    16,    17,     0,
       0,     0,     0,   213,     0,   212,     0,     2,     0,     0,
       0,   215,     0,     0,     0,     0,     8,   199,   220,     0,
     144,   158,   160,     0,   170,    27,    67,    69,     7,     0,
     191,     0,     6,   211,     7,   214,     0,     6,   189,   193,
     196,    22,   171,     0,   190,     2,     8,     0,     0,     8,
       0,    23,     2,     0,     0,     2,   203,     2,   192,     0,
       0,     2,     2,     0,     0,    71,     0,     0,     0,     7,
       0,     0,     2,     2,   201,     2,     0,     0,     0,     2,
       2,     0,   206,     7,     7,     0,   193,   204,   184,   185,
     186,   187,   188,     0,     0,   202,     0,     2,     2,   205,
       0,     0,   193,   207,   193,   208,     0,     0,   209,   210
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,  -183,  -300,  -300,  -300,  -268,  -100,   -58,  -300,  -300,
    -300,  -300,   -69,  -300,   -78,   100,   103,   157,   121,   232,
     238,   244,   141,   142,  -300,  -111,     7,  -300,   -77,  -113,
       0,     6,  -300,   367,  -300,   -50,    65,   299,  -300,  -300,
    -300,   310,     9,  -300,   -16,   395,  -300,   386,   -44,  -300,
    -300,   173,  -300,   -10,  -122,   170,  -195,  -300,  -300,   311,
    -147,   -83,  -251,  -300,  -299,  -300,   156,  -201,  -245,  -206,
    -198,  -300,   413,  -300,  -300,  -300
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   280,   288,   294,   287,   296,   173,   107,    88,    89,
     210,   211,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   121,   154,   249,   191,
     250,    58,    38,    39,    24,    25,   124,   198,    26,    33,
      65,    66,    27,    28,    71,    41,    52,    42,    53,   185,
     186,   187,   115,   126,   105,   129,   130,   131,   132,   133,
     251,   367,   252,   253,   254,   255,   256,   257,   258,   259,
     260,    29,    30,    31,    59,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   122,   174,   120,   114,   190,    23,    40,   205,   275,
     277,   135,   136,   156,   201,   117,   190,   112,   188,    50,
     330,   127,   155,   195,    36,     3,   274,   128,   123,    22,
      43,    44,    32,    45,    46,    23,   203,   321,    64,   328,
      57,    12,   122,   355,   326,    51,   127,   155,   192,   329,
     281,   282,   128,    18,  -127,   196,   118,   122,   155,   106,
     209,   189,    69,   104,   177,   356,   196,   376,   111,   123,
      51,    49,   299,   123,    61,   123,    62,   204,   322,   216,
     217,   218,   196,   386,   123,   387,   196,   125,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   311,   127,    67,    34,   196,   194,
     368,   128,    64,    54,    35,   176,   370,    51,   113,   182,
     184,    69,   272,   284,   208,   190,    55,   275,   125,   368,
     368,   155,   125,   342,   125,   370,   370,   104,   170,   310,
     206,   116,   333,   125,   297,   212,   352,   353,   318,   339,
     160,   161,   343,   304,   344,   371,    56,   196,   347,   348,
     369,   215,   324,   372,   325,   172,   292,   155,   265,   357,
     358,    34,   361,   171,   371,   371,   365,   366,    35,   369,
     369,   336,   372,   372,   262,    34,    69,    36,   197,   315,
     197,   137,    35,   138,   380,   381,   349,   139,   140,   141,
     142,    36,   196,   270,    -7,   308,   162,   163,   323,    37,
     175,   155,   155,   314,   327,   157,   316,   178,   375,   127,
     158,   159,   179,     1,   331,   128,     2,     3,   345,    -7,
      -7,     4,   200,     5,     6,     7,   168,   169,   319,     8,
       9,    10,    11,    12,   202,    13,    14,   213,    15,   354,
     233,   234,   214,    16,    17,    18,   232,    19,    20,    21,
     219,   220,   261,   373,   374,   221,   222,   350,   334,   351,
     155,   337,   263,   184,   164,   165,   264,   166,   167,   266,
     363,   364,   104,   267,     1,   268,   305,     2,     3,   227,
     228,   269,     4,   273,     5,     6,     7,   383,   385,   301,
       8,     9,    10,    11,    12,   276,    13,    14,   278,    15,
     279,   283,   285,   286,    16,    17,    18,   289,    19,    20,
      21,   223,   224,   225,   226,   290,   293,   295,   309,   271,
    -223,   300,   298,  -194,   341,     1,   235,   236,     2,     3,
     237,   238,   239,     4,   312,     5,     6,     7,   240,   241,
     242,     8,     9,    10,    11,    12,   243,    13,    14,    72,
      15,    56,   244,   317,   313,    16,    17,    18,   245,    19,
      20,    21,   246,    74,    75,    76,    77,   332,   196,    78,
     338,   247,   335,   340,   346,    80,    81,    82,    83,    84,
      85,    86,    87,   359,   360,     1,   362,   377,     2,     3,
     378,   379,   229,     4,   388,     5,     6,     7,   389,   230,
     248,     8,     9,    10,    11,    12,   231,    13,    14,    72,
      15,   306,    70,   307,   199,    16,    17,    18,   193,    19,
      20,    21,    73,    74,    75,    76,    77,    63,    68,    78,
     302,   303,    48,   207,     0,    80,    81,    82,    83,    84,
      85,    86,    87,   235,   236,   320,     0,   237,   238,   239,
       0,     0,     0,     0,     0,   240,   241,   242,     0,     0,
     248,     0,     0,   243,     0,     0,    72,     0,     0,   244,
       0,     0,     0,     0,     0,   245,     0,     0,     0,   246,
      74,    75,    76,    77,     0,     0,    78,     0,   247,     0,
       0,     0,    80,    81,    82,    83,    84,    85,    86,    87,
     235,   236,     0,     0,   237,   238,   239,     0,     0,     0,
       0,     0,   240,   241,   242,     0,     0,   248,     0,     0,
     243,     0,     0,    72,     0,     0,   244,     0,     0,     0,
       0,     0,   245,     0,     0,     0,   246,    74,    75,    76,
      77,     0,     0,    78,     0,   382,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,   235,   236,     0,
       0,   237,   238,   239,     0,     0,     0,     0,     0,   240,
     241,   242,     0,     0,   248,     0,     0,   243,     0,     0,
      72,     0,     0,   244,     0,     0,     0,     0,     0,   245,
       0,     0,     0,   246,    74,    75,    76,    77,     0,     0,
      78,     0,   384,     0,     0,     0,    80,    81,    82,    83,
      84,    85,    86,    87,   235,   236,     0,     0,   237,   238,
     239,     0,     0,     0,     0,     0,   240,   241,   242,     0,
       0,   248,     0,     0,   243,     0,     0,    72,     0,     0,
     244,     0,     0,     0,     0,     0,   245,     0,     0,     0,
     246,    74,    75,    76,    77,     0,     0,    78,     0,     0,
       0,     0,     0,    80,    81,    82,    83,    84,    85,    86,
      87,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     0,     0,     9,    10,   248,    12,
       0,    13,    14,    72,     0,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,    73,    74,    75,    76,
      77,     3,     0,    78,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,    12,     0,     0,
       0,    72,   108,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,    73,    74,    75,    76,    77,     3,
     109,    78,     0,     0,     0,     0,     0,    80,    81,    82,
     110,    84,    85,    86,    87,    12,     0,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       0,     0,    73,    74,    75,    76,    77,     3,   180,    78,
       0,     0,     0,     0,     0,    80,    81,    82,   181,    84,
      85,    86,    87,    12,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
      73,    74,    75,    76,    77,     0,     0,    78,    72,     0,
       0,     0,     0,    80,    81,    82,    83,    84,    85,    86,
      87,    73,    74,    75,    76,    77,     0,     0,    78,     0,
       0,     0,     0,     0,    80,    81,    82,    83,    84,    85,
      86,    87,     0,     0,     0,     0,     0,    72,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   291,
      73,    74,    75,    76,    77,     0,     0,    78,     0,     0,
       0,     0,     0,    80,    81,    82,    83,    84,    85,    86,
      87,     0,     0,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,   248,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21,
      47,     0,     0,     1,     0,     0,     2,     3,   183,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,    72,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     0,     0,    73,
      74,    75,    76,    77,     0,     0,    78,     0,    79,     0,
       0,     0,    80,    81,    82,    83,    84,    85,    86,    87,
       2,     3,     0,     0,     0,     4,     0,     5,     0,     7,
       0,     0,     0,     0,     9,    10,     0,    12,     0,    13,
      14,     0,    72,     0,     0,     0,     0,    16,    17,    18,
       0,    19,    20,    21,     0,    73,    74,    75,    76,    77,
       0,     0,    78,    72,   271,     0,     0,     0,    80,    81,
      82,    83,    84,    85,    86,    87,    73,    74,    75,    76,
      77,     0,     0,   119,    72,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,    73,    74,    75,
      76,    77,     0,     0,   134,    72,     0,     0,     0,     0,
      80,    81,    82,    83,    84,    85,    86,    87,    73,    74,
      75,    76,    77,     0,     0,    78,     0,     0,     0,     0,
       0,    80,    81,    82,    83,    84,    85,    86,    87
};

static const yytype_int16 yycheck[] =
{
       0,    78,   102,    72,    62,   116,     0,    23,   130,   204,
      46,    80,    81,    91,   127,    50,   127,    61,    48,    35,
     319,    45,    91,    48,    56,     7,    50,    51,    78,    29,
      24,    25,    40,    27,    28,    29,    50,    50,    40,    48,
      40,    23,   119,    48,   312,    36,    45,   116,    50,   317,
     233,   234,    51,    35,    49,    91,    91,   134,   127,    59,
     137,    91,    53,    56,   108,    48,    91,   366,    61,   119,
      61,    49,   255,   123,    45,   125,    47,    91,    91,   157,
     158,   159,    91,   382,   134,   384,    91,    78,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   287,    45,    48,    40,    91,   119,
     361,    51,    40,    78,    47,   108,   361,   108,    40,   112,
     114,   112,   200,   236,   134,   236,    91,   322,   119,   380,
     381,   200,   123,   334,   125,   380,   381,   130,    55,   286,
      80,    80,   325,   134,    78,   138,   347,   348,   295,   332,
      57,    58,   335,   275,   337,   361,    80,    91,   341,   342,
     361,   154,   309,   361,   311,    73,   243,   236,   184,   352,
     353,    40,   355,    72,   380,   381,   359,   360,    47,   380,
     381,   328,   380,   381,   177,    40,   177,    56,   123,    78,
     125,    45,    47,    47,   377,   378,   343,    51,    52,    53,
      54,    56,    91,   196,    74,   282,    63,    64,   308,    78,
      49,   280,   281,   290,   314,    56,   293,    46,   365,    45,
      61,    62,    46,     3,    50,    51,     6,     7,   339,    75,
      76,    11,    48,    13,    14,    15,    70,    71,   296,    19,
      20,    21,    22,    23,    40,    25,    26,    40,    28,   349,
      75,    76,    40,    33,    34,    35,    74,    37,    38,    39,
     160,   161,    46,   363,   364,   162,   163,   344,   326,   346,
     339,   329,    46,   267,    65,    66,    46,    68,    69,    48,
     357,   358,   275,    91,     3,    40,   279,     6,     7,   168,
     169,    48,    11,    46,    13,    14,    15,   380,   381,    79,
      19,    20,    21,    22,    23,    48,    25,    26,    48,    28,
      91,    78,    78,    77,    33,    34,    35,    40,    37,    38,
      39,   164,   165,   166,   167,    47,    47,    77,    77,    49,
      49,    46,    50,    50,   334,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    47,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    80,    30,    47,    78,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    77,    91,    47,
      50,    49,    48,    36,    47,    53,    54,    55,    56,    57,
      58,    59,    60,    12,    49,     3,    78,    48,     6,     7,
      48,    50,   170,    11,    50,    13,    14,    15,    50,   171,
      78,    19,    20,    21,    22,    23,   172,    25,    26,    27,
      28,   280,    55,   281,   125,    33,    34,    35,   118,    37,
      38,    39,    40,    41,    42,    43,    44,    42,    52,    47,
     267,   271,    29,   132,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,     4,     5,   299,    -1,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,
      78,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    -1,    -1,    47,    -1,    49,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
       4,     5,    -1,    -1,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    78,    -1,    -1,
      24,    -1,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,     4,     5,    -1,
      -1,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    -1,    -1,    78,    -1,    -1,    24,    -1,    -1,
      27,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      47,    -1,    49,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,     4,     5,    -1,    -1,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,
      -1,    78,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    -1,    20,    21,    78,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,     7,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    23,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,     7,
      46,    47,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    23,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,     7,    46,    47,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    23,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    -1,    -1,    47,    27,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    40,    41,    42,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    27,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    78,
      40,    41,    42,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    78,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,    39,
       0,    -1,    -1,     3,    -1,    -1,     6,     7,    48,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,    39,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    27,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    -1,    -1,    40,
      41,    42,    43,    44,    -1,    -1,    47,    -1,    49,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    -1,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    -1,    27,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,    -1,    40,    41,    42,    43,    44,
      -1,    -1,    47,    27,    49,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    40,    41,    42,    43,
      44,    -1,    -1,    47,    27,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    40,    41,    42,
      43,    44,    -1,    -1,    47,    27,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    40,    41,
      42,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   124,   125,   128,   129,   132,   136,   137,   165,
     166,   167,    40,   133,    40,    47,    56,    78,   126,   127,
     138,   139,   141,   125,   125,   125,   125,     0,   166,    49,
     138,   136,   140,   142,    78,    91,    80,   124,   125,   168,
     169,    45,    47,   139,    40,   134,   135,    48,   141,   136,
     127,   138,    27,    40,    41,    42,    43,    44,    47,    49,
      53,    54,    55,    56,    57,    58,    59,    60,   102,   103,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   148,   124,   101,    28,    46,
      56,   120,   142,    40,   101,   146,    80,    50,    91,    47,
     106,   120,   122,   129,   130,   136,   147,    45,    51,   149,
     150,   151,   152,   153,    47,   106,   106,    45,    47,    51,
      52,    53,    54,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   121,   106,   108,    56,    61,    62,
      57,    58,    63,    64,    65,    66,    68,    69,    70,    71,
      55,    72,    73,   100,   100,    49,   120,   142,    46,    46,
      46,    56,   120,    48,   125,   143,   144,   145,    48,    91,
     119,   123,    50,   135,   147,    48,    91,   130,   131,   131,
      48,   123,    40,    50,    91,   148,    80,   153,   147,   122,
     104,   105,   120,    40,    40,   120,   108,   108,   108,   109,
     109,   110,   110,   111,   111,   111,   111,   112,   112,   113,
     114,   115,    74,    75,    76,     4,     5,     8,     9,    10,
      16,    17,    18,    24,    30,    36,    40,    49,    78,   122,
     124,   154,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    46,   120,    46,    46,   138,    48,    91,    40,    48,
     120,    49,   108,    46,    50,   150,    48,    46,    48,    91,
      95,    95,    95,    78,   123,    78,    77,    98,    96,    40,
      47,    78,   122,    47,    97,    77,    99,    78,    50,    95,
      46,    79,   145,   149,   148,   120,   116,   117,   122,    77,
     154,    95,    47,    78,   122,    78,   122,    47,   154,   101,
     160,    50,    91,   100,   154,   154,    99,   100,    48,    99,
     158,    50,    77,    95,   101,    48,   154,   101,    50,    95,
      36,   124,   161,    95,    95,   119,    47,    95,    95,   154,
     122,   122,   161,   161,   100,    48,    48,    95,    95,    12,
      49,    95,    78,   122,   122,    95,    95,   155,   156,   161,
     162,   163,   164,   100,   100,   154,   158,    48,    48,    50,
      95,    95,    49,   155,    49,   155,   158,   158,    50,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     102,   102,   102,   102,   102,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   104,   104,   105,   105,   106,   106,
     106,   106,   106,   106,   107,   107,   107,   107,   107,   107,
     108,   108,   109,   109,   109,   109,   110,   110,   110,   111,
     111,   111,   112,   112,   112,   112,   112,   113,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   119,   120,   120,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   122,   122,   123,   124,   124,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   127,   128,   128,   128,   128,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   130,
     130,   131,   131,   132,   132,   132,   133,   133,   134,   134,
     135,   135,   136,   136,   136,   137,   138,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   140,   140,   141,   141,   142,   142,   143,   143,   144,
     144,   145,   145,   146,   146,   147,   148,   148,   148,   149,
     149,   150,   150,   151,   152,   152,   153,   153,   154,   154,
     154,   154,   154,   154,   155,   155,   155,   155,   155,   156,
     156,   156,   157,   158,   158,   159,   159,   160,   160,   161,
     161,   162,   162,   162,   163,   163,   163,   163,   163,   163,
     163,   164,   164,   164,   164,   164,   165,   165,   166,   166,
     167,   168,   168,   169,   169
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
       1,     3,     1,     3,     1,     3,     1,     5,     1,     5,
       1,     9,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     0,     1,     5,     6,     2,     0,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     3,
       5,     4,     4,     3,     6,     5,     5,     4,     5,     4,
       4,     0,     1,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     3,     4,     2,
       4,     0,     1,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     5,     0,     1,     1,     3,     1,     1,     2,
       1,     8,    11,     5,    10,    12,    10,    14,    14,    16,
      16,     3,     2,     2,     3,     2,     1,     2,     1,     1,
       7,     1,     2,     0,     1
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
#line 124 "ass5_18CS30051.y"
        {
		/**
		  * backpatching,stores the index of the next quad to be generated
		  * Used in various control statements
		  */
		(yyval.instr_number) = nextinstr();
	}
#line 1905 "ass5_18CS30051.tab.c"
    break;

  case 3:
#line 134 "ass5_18CS30051.y"
        {
		loop_name = "FOR";
	}
#line 1913 "ass5_18CS30051.tab.c"
    break;

  case 4:
#line 140 "ass5_18CS30051.y"
        {
		loop_name = "WHILE";
	}
#line 1921 "ass5_18CS30051.tab.c"
    break;

  case 5:
#line 146 "ass5_18CS30051.y"
        {
		loop_name = "DO_WHILE";
	}
#line 1929 "ass5_18CS30051.tab.c"
    break;

  case 6:
#line 152 "ass5_18CS30051.y"
        {
		/**
		  * change the current symbol pointer
		  */
		string name = ST->name+"."+loop_name+"$"+to_string(table_count);
		table_count++;
		sym* s = ST->lookup(name);
		s->nested = new symtable(name);
		s->nested->parent = ST;
		s->name = name;
		s->type = new symboltype("block");
		currSymbolPtr = s;
	}
#line 1947 "ass5_18CS30051.tab.c"
    break;

  case 7:
#line 168 "ass5_18CS30051.y"
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
#line 1964 "ass5_18CS30051.tab.c"
    break;

  case 8:
#line 184 "ass5_18CS30051.y"
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
#line 1981 "ass5_18CS30051.tab.c"
    break;

  case 9:
#line 200 "ass5_18CS30051.y"
        {
	    (yyval.expr)=new Expression();                                                  // create new expression and store pointer to ST entry in the location			
	    (yyval.expr)->loc=(yyvsp[0].symp);
	    (yyval.expr)->type="not-boolean";
	}
#line 1991 "ass5_18CS30051.tab.c"
    break;

  case 10:
#line 206 "ass5_18CS30051.y"
        { 
		(yyval.expr)=new Expression();	
		string p=convertIntToString((yyvsp[0].intval));
		(yyval.expr)->loc=gentemp(new symboltype("int"),p);
		emit("=",(yyval.expr)->loc->name,p);
	}
#line 2002 "ass5_18CS30051.tab.c"
    break;

  case 11:
#line 213 "ass5_18CS30051.y"
        {                                                                         // create new expression and store the value of the constant in a temporary
		(yyval.expr)=new Expression();
		(yyval.expr)->loc=gentemp(new symboltype("float"),(yyvsp[0].char_value));
		emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_value)));
	}
#line 2012 "ass5_18CS30051.tab.c"
    break;

  case 12:
#line 219 "ass5_18CS30051.y"
        {                                                                         // create new expression and store the value of the constant in a temporary
		(yyval.expr)=new Expression();
		(yyval.expr)->loc=gentemp(new symboltype("char"),(yyvsp[0].char_value));
		emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_value)));
	}
#line 2022 "ass5_18CS30051.tab.c"
    break;

  case 13:
#line 225 "ass5_18CS30051.y"
        {                                                                          // create new expression and store the value of the constant in a temporary
		(yyval.expr)=new Expression();
		(yyval.expr)->loc=gentemp(new symboltype("ptr"),(yyvsp[0].char_value));
		(yyval.expr)->loc->type->arrtype=new symboltype("char");
	}
#line 2032 "ass5_18CS30051.tab.c"
    break;

  case 14:
#line 231 "ass5_18CS30051.y"
        {                                                                          // simply equal to expression
		(yyval.expr)=(yyvsp[-1].expr);
	}
#line 2040 "ass5_18CS30051.tab.c"
    break;

  case 15:
#line 238 "ass5_18CS30051.y"
        {
		(yyval.A)=new Array();	
		(yyval.A)->Array=(yyvsp[0].expr)->loc;	
		(yyval.A)->type=(yyvsp[0].expr)->loc->type;	
		(yyval.A)->loc=(yyval.A)->Array;
	}
#line 2051 "ass5_18CS30051.tab.c"
    break;

  case 16:
#line 245 "ass5_18CS30051.y"
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
#line 2078 "ass5_18CS30051.tab.c"
    break;

  case 17:
#line 268 "ass5_18CS30051.y"
        {
		//call the function with number of parameters from argument_expression_list_opt
		(yyval.A)=new Array();	
		(yyval.A)->Array=gentemp((yyvsp[-3].A)->type);
		string str=convertIntToString((yyvsp[-1].num_params));
		emit("call",(yyval.A)->Array->name,(yyvsp[-3].A)->Array->name,str);
	}
#line 2090 "ass5_18CS30051.tab.c"
    break;

  case 18:
#line 275 "ass5_18CS30051.y"
                                            {  }
#line 2096 "ass5_18CS30051.tab.c"
    break;

  case 19:
#line 276 "ass5_18CS30051.y"
                                                 {  }
#line 2102 "ass5_18CS30051.tab.c"
    break;

  case 20:
#line 278 "ass5_18CS30051.y"
        { 
		(yyval.A)=new Array();	
		(yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
		emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
		emit("+",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");
	}
#line 2113 "ass5_18CS30051.tab.c"
    break;

  case 21:
#line 285 "ass5_18CS30051.y"
        {
		(yyval.A)=new Array();	
		(yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
		emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
		emit("-",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");	
	}
#line 2124 "ass5_18CS30051.tab.c"
    break;

  case 22:
#line 291 "ass5_18CS30051.y"
                                                                                                                   {  }
#line 2130 "ass5_18CS30051.tab.c"
    break;

  case 23:
#line 292 "ass5_18CS30051.y"
                                                                                                                         {  }
#line 2136 "ass5_18CS30051.tab.c"
    break;

  case 24:
#line 296 "ass5_18CS30051.y"
        { 
		(yyval.num_params)=(yyvsp[0].num_params); // Equate $$ and $1
	}
#line 2144 "ass5_18CS30051.tab.c"
    break;

  case 25:
#line 300 "ass5_18CS30051.y"
        { 
		(yyval.num_params)=0; // No arguments
	}
#line 2152 "ass5_18CS30051.tab.c"
    break;

  case 26:
#line 306 "ass5_18CS30051.y"
        {
		(yyval.num_params)=1;                                      //one argument and emit param
		emit("param",(yyvsp[0].expr)->loc->name);	
	}
#line 2161 "ass5_18CS30051.tab.c"
    break;

  case 27:
#line 311 "ass5_18CS30051.y"
        {
		(yyval.num_params)=(yyvsp[-2].num_params)+1;                                  //one more argument and emit param		 
		emit("param",(yyvsp[0].expr)->loc->name);
	}
#line 2170 "ass5_18CS30051.tab.c"
    break;

  case 28:
#line 318 "ass5_18CS30051.y"
        { 
		(yyval.A)=(yyvsp[0].A); // Equate $$ and $1
	}
#line 2178 "ass5_18CS30051.tab.c"
    break;

  case 29:
#line 322 "ass5_18CS30051.y"
        {  	
		//simply add 1
		emit("+",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");		
		(yyval.A)=(yyvsp[0].A);
	}
#line 2188 "ass5_18CS30051.tab.c"
    break;

  case 30:
#line 328 "ass5_18CS30051.y"
        {
		//simply subtract 1
		emit("-",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");
		(yyval.A)=(yyvsp[0].A);
	}
#line 2198 "ass5_18CS30051.tab.c"
    break;

  case 31:
#line 334 "ass5_18CS30051.y"
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
#line 2235 "ass5_18CS30051.tab.c"
    break;

  case 32:
#line 366 "ass5_18CS30051.y"
                                   {  }
#line 2241 "ass5_18CS30051.tab.c"
    break;

  case 33:
#line 367 "ass5_18CS30051.y"
                                                                    {  }
#line 2247 "ass5_18CS30051.tab.c"
    break;

  case 34:
#line 371 "ass5_18CS30051.y"
        { (yyval.unaryOp)='&'; }
#line 2253 "ass5_18CS30051.tab.c"
    break;

  case 35:
#line 373 "ass5_18CS30051.y"
        {(yyval.unaryOp)='*'; }
#line 2259 "ass5_18CS30051.tab.c"
    break;

  case 36:
#line 375 "ass5_18CS30051.y"
        { (yyval.unaryOp)='+'; }
#line 2265 "ass5_18CS30051.tab.c"
    break;

  case 37:
#line 377 "ass5_18CS30051.y"
        { (yyval.unaryOp)='-'; }
#line 2271 "ass5_18CS30051.tab.c"
    break;

  case 38:
#line 379 "ass5_18CS30051.y"
        { (yyval.unaryOp)='~'; }
#line 2277 "ass5_18CS30051.tab.c"
    break;

  case 39:
#line 381 "ass5_18CS30051.y"
        {(yyval.unaryOp)='!'; }
#line 2283 "ass5_18CS30051.tab.c"
    break;

  case 40:
#line 384 "ass5_18CS30051.y"
                                   { (yyval.A)=(yyvsp[0].A); }
#line 2289 "ass5_18CS30051.tab.c"
    break;

  case 41:
#line 386 "ass5_18CS30051.y"
        { 
		(yyval.A)=new Array();	
		(yyval.A)->Array=convertType((yyvsp[0].A)->Array,var_type);             //generate a new symbol of the given type	
	}
#line 2298 "ass5_18CS30051.tab.c"
    break;

  case 42:
#line 393 "ass5_18CS30051.y"
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
#line 2319 "ass5_18CS30051.tab.c"
    break;

  case 43:
#line 410 "ass5_18CS30051.y"
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
#line 2335 "ass5_18CS30051.tab.c"
    break;

  case 44:
#line 422 "ass5_18CS30051.y"
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
#line 2353 "ass5_18CS30051.tab.c"
    break;

  case 45:
#line 436 "ass5_18CS30051.y"
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
#line 2369 "ass5_18CS30051.tab.c"
    break;

  case 46:
#line 449 "ass5_18CS30051.y"
                                                 { (yyval.expr)=(yyvsp[0].expr); }
#line 2375 "ass5_18CS30051.tab.c"
    break;

  case 47:
#line 451 "ass5_18CS30051.y"
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
#line 2391 "ass5_18CS30051.tab.c"
    break;

  case 48:
#line 463 "ass5_18CS30051.y"
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
#line 2407 "ass5_18CS30051.tab.c"
    break;

  case 49:
#line 476 "ass5_18CS30051.y"
                                        { (yyval.expr)=(yyvsp[0].expr); }
#line 2413 "ass5_18CS30051.tab.c"
    break;

  case 50:
#line 478 "ass5_18CS30051.y"
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
#line 2428 "ass5_18CS30051.tab.c"
    break;

  case 51:
#line 489 "ass5_18CS30051.y"
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
#line 2445 "ass5_18CS30051.tab.c"
    break;

  case 52:
#line 503 "ass5_18CS30051.y"
                                          { (yyval.expr)=(yyvsp[0].expr); }
#line 2451 "ass5_18CS30051.tab.c"
    break;

  case 53:
#line 505 "ass5_18CS30051.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
		{
			cout << "Type Error in Program"<< endl;
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
#line 2471 "ass5_18CS30051.tab.c"
    break;

  case 54:
#line 521 "ass5_18CS30051.y"
        {
		// similar to above, check compatible types,make new lists and emit
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
			emit(">", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			emit("goto", "");
		}	
	}
#line 2492 "ass5_18CS30051.tab.c"
    break;

  case 55:
#line 538 "ass5_18CS30051.y"
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
#line 2512 "ass5_18CS30051.tab.c"
    break;

  case 56:
#line 554 "ass5_18CS30051.y"
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
#line 2532 "ass5_18CS30051.tab.c"
    break;

  case 57:
#line 571 "ass5_18CS30051.y"
                                            { (yyval.expr)=(yyvsp[0].expr); }
#line 2538 "ass5_18CS30051.tab.c"
    break;

  case 58:
#line 573 "ass5_18CS30051.y"
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
#line 2560 "ass5_18CS30051.tab.c"
    break;

  case 59:
#line 591 "ass5_18CS30051.y"
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
#line 2583 "ass5_18CS30051.tab.c"
    break;

  case 60:
#line 611 "ass5_18CS30051.y"
                                     { (yyval.expr)=(yyvsp[0].expr); }
#line 2589 "ass5_18CS30051.tab.c"
    break;

  case 61:
#line 613 "ass5_18CS30051.y"
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
#line 2609 "ass5_18CS30051.tab.c"
    break;

  case 62:
#line 630 "ass5_18CS30051.y"
                                         { (yyval.expr)=(yyvsp[0].expr); }
#line 2615 "ass5_18CS30051.tab.c"
    break;

  case 63:
#line 632 "ass5_18CS30051.y"
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
#line 2635 "ass5_18CS30051.tab.c"
    break;

  case 64:
#line 649 "ass5_18CS30051.y"
                                                 { (yyval.expr)=(yyvsp[0].expr); }
#line 2641 "ass5_18CS30051.tab.c"
    break;

  case 65:
#line 651 "ass5_18CS30051.y"
        { 
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))   //same as and_expression: check compatible types, make non-boolean expression and convert bool to int and emit
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
			emit("|", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
		} 
	}
#line 2662 "ass5_18CS30051.tab.c"
    break;

  case 66:
#line 669 "ass5_18CS30051.y"
                                                 { (yyval.expr)=(yyvsp[0].expr); }
#line 2668 "ass5_18CS30051.tab.c"
    break;

  case 67:
#line 671 "ass5_18CS30051.y"
        { 
		convertIntToBool((yyvsp[0].expr));         //convert inclusive_or_expression int to bool	
		backpatch((yyvsp[-3].stat)->nextlist, nextinstr());        //$2->nextlist goes to next instruction
		convertIntToBool((yyvsp[-4].expr));                  //convert logical_and_expression to bool
		(yyval.expr) = new Expression();     //make new boolean expression 
		(yyval.expr)->type = "bool";
		backpatch((yyvsp[-4].expr)->truelist, (yyvsp[-1].instr_number));        //if $1 is true, we move to $5
		(yyval.expr)->truelist = (yyvsp[0].expr)->truelist;        //if $5 is also true, we get truelist for $$
		(yyval.expr)->falselist = merge((yyvsp[-4].expr)->falselist, (yyvsp[0].expr)->falselist);    //merge their falselists
	}
#line 2683 "ass5_18CS30051.tab.c"
    break;

  case 68:
#line 683 "ass5_18CS30051.y"
                                                { (yyval.expr)=(yyvsp[0].expr); }
#line 2689 "ass5_18CS30051.tab.c"
    break;

  case 69:
#line 685 "ass5_18CS30051.y"
        { 
		convertIntToBool((yyvsp[0].expr));			 //convert logical_and_expression int to bool	
		backpatch((yyvsp[-3].stat)->nextlist, nextinstr());	//$2->nextlist goes to next instruction
		convertIntToBool((yyvsp[-4].expr));			//convert logical_or_expression to bool
		(yyval.expr) = new Expression();			//make new boolean expression
		(yyval.expr)->type = "bool";
		backpatch((yyvsp[-4].expr)->falselist, (yyvsp[-1].instr_number));		//if $1 is true, we move to $5
		(yyval.expr)->truelist = merge((yyvsp[-4].expr)->truelist, (yyvsp[0].expr)->truelist);		//merge their truelists
		(yyval.expr)->falselist = (yyvsp[0].expr)->falselist;		 	//if $5 is also false, we get falselist for $$
	}
#line 2704 "ass5_18CS30051.tab.c"
    break;

  case 70:
#line 697 "ass5_18CS30051.y"
                                              {(yyval.expr)=(yyvsp[0].expr);}
#line 2710 "ass5_18CS30051.tab.c"
    break;

  case 71:
#line 699 "ass5_18CS30051.y"
        {
		//normal conversion method to get conditional expressions
		cout<<"HOLA"<<endl;
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
#line 2734 "ass5_18CS30051.tab.c"
    break;

  case 72:
#line 720 "ass5_18CS30051.y"
                                              {(yyval.expr)=(yyvsp[0].expr);}
#line 2740 "ass5_18CS30051.tab.c"
    break;

  case 73:
#line 722 "ass5_18CS30051.y"
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
#line 2763 "ass5_18CS30051.tab.c"
    break;

  case 74:
#line 743 "ass5_18CS30051.y"
                              {  }
#line 2769 "ass5_18CS30051.tab.c"
    break;

  case 75:
#line 744 "ass5_18CS30051.y"
                     {  }
#line 2775 "ass5_18CS30051.tab.c"
    break;

  case 76:
#line 745 "ass5_18CS30051.y"
                    {  }
#line 2781 "ass5_18CS30051.tab.c"
    break;

  case 77:
#line 746 "ass5_18CS30051.y"
                    {  }
#line 2787 "ass5_18CS30051.tab.c"
    break;

  case 78:
#line 747 "ass5_18CS30051.y"
                    {  }
#line 2793 "ass5_18CS30051.tab.c"
    break;

  case 79:
#line 748 "ass5_18CS30051.y"
                    {  }
#line 2799 "ass5_18CS30051.tab.c"
    break;

  case 80:
#line 749 "ass5_18CS30051.y"
                   {  }
#line 2805 "ass5_18CS30051.tab.c"
    break;

  case 81:
#line 750 "ass5_18CS30051.y"
                   {  }
#line 2811 "ass5_18CS30051.tab.c"
    break;

  case 82:
#line 751 "ass5_18CS30051.y"
                            {  }
#line 2817 "ass5_18CS30051.tab.c"
    break;

  case 83:
#line 752 "ass5_18CS30051.y"
                            {  }
#line 2823 "ass5_18CS30051.tab.c"
    break;

  case 84:
#line 753 "ass5_18CS30051.y"
                           { }
#line 2829 "ass5_18CS30051.tab.c"
    break;

  case 85:
#line 756 "ass5_18CS30051.y"
                                  {  (yyval.expr)=(yyvsp[0].expr);  }
#line 2835 "ass5_18CS30051.tab.c"
    break;

  case 86:
#line 757 "ass5_18CS30051.y"
                                                 {   }
#line 2841 "ass5_18CS30051.tab.c"
    break;

  case 87:
#line 760 "ass5_18CS30051.y"
                                            {   }
#line 2847 "ass5_18CS30051.tab.c"
    break;

  case 88:
#line 763 "ass5_18CS30051.y"
                                                                   {	}
#line 2853 "ass5_18CS30051.tab.c"
    break;

  case 89:
#line 764 "ass5_18CS30051.y"
                                           {  	}
#line 2859 "ass5_18CS30051.tab.c"
    break;

  case 90:
#line 767 "ass5_18CS30051.y"
                                                                       {	}
#line 2865 "ass5_18CS30051.tab.c"
    break;

  case 91:
#line 768 "ass5_18CS30051.y"
                                  {	}
#line 2871 "ass5_18CS30051.tab.c"
    break;

  case 92:
#line 769 "ass5_18CS30051.y"
                                                {	}
#line 2877 "ass5_18CS30051.tab.c"
    break;

  case 93:
#line 770 "ass5_18CS30051.y"
                         {	}
#line 2883 "ass5_18CS30051.tab.c"
    break;

  case 94:
#line 771 "ass5_18CS30051.y"
                                                {	}
#line 2889 "ass5_18CS30051.tab.c"
    break;

  case 95:
#line 772 "ass5_18CS30051.y"
                         {	}
#line 2895 "ass5_18CS30051.tab.c"
    break;

  case 96:
#line 773 "ass5_18CS30051.y"
                                                    {	}
#line 2901 "ass5_18CS30051.tab.c"
    break;

  case 97:
#line 774 "ass5_18CS30051.y"
                             {	}
#line 2907 "ass5_18CS30051.tab.c"
    break;

  case 98:
#line 777 "ass5_18CS30051.y"
                                      {	}
#line 2913 "ass5_18CS30051.tab.c"
    break;

  case 99:
#line 778 "ass5_18CS30051.y"
                                                     {	}
#line 2919 "ass5_18CS30051.tab.c"
    break;

  case 100:
#line 781 "ass5_18CS30051.y"
                            {(yyval.symp)=(yyvsp[0].symp);}
#line 2925 "ass5_18CS30051.tab.c"
    break;

  case 101:
#line 783 "ass5_18CS30051.y"
        {
		if((yyvsp[0].symp)->val!="") (yyvsp[-2].symp)->val=(yyvsp[0].symp)->val;        //get the initial value and  emit it
		emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);	
	}
#line 2934 "ass5_18CS30051.tab.c"
    break;

  case 102:
#line 789 "ass5_18CS30051.y"
                                 { }
#line 2940 "ass5_18CS30051.tab.c"
    break;

  case 103:
#line 790 "ass5_18CS30051.y"
                  { }
#line 2946 "ass5_18CS30051.tab.c"
    break;

  case 104:
#line 791 "ass5_18CS30051.y"
                 { }
#line 2952 "ass5_18CS30051.tab.c"
    break;

  case 105:
#line 792 "ass5_18CS30051.y"
                     { }
#line 2958 "ass5_18CS30051.tab.c"
    break;

  case 106:
#line 795 "ass5_18CS30051.y"
                       { var_type="void"; }
#line 2964 "ass5_18CS30051.tab.c"
    break;

  case 107:
#line 796 "ass5_18CS30051.y"
                 { var_type="char"; }
#line 2970 "ass5_18CS30051.tab.c"
    break;

  case 108:
#line 797 "ass5_18CS30051.y"
                 { }
#line 2976 "ass5_18CS30051.tab.c"
    break;

  case 109:
#line 798 "ass5_18CS30051.y"
                { var_type="int"; }
#line 2982 "ass5_18CS30051.tab.c"
    break;

  case 110:
#line 799 "ass5_18CS30051.y"
                 {  }
#line 2988 "ass5_18CS30051.tab.c"
    break;

  case 111:
#line 800 "ass5_18CS30051.y"
                  { var_type="float"; }
#line 2994 "ass5_18CS30051.tab.c"
    break;

  case 112:
#line 801 "ass5_18CS30051.y"
                   { }
#line 3000 "ass5_18CS30051.tab.c"
    break;

  case 113:
#line 802 "ass5_18CS30051.y"
                   {  }
#line 3006 "ass5_18CS30051.tab.c"
    break;

  case 114:
#line 803 "ass5_18CS30051.y"
                     { }
#line 3012 "ass5_18CS30051.tab.c"
    break;

  case 115:
#line 804 "ass5_18CS30051.y"
                  {  }
#line 3018 "ass5_18CS30051.tab.c"
    break;

  case 116:
#line 805 "ass5_18CS30051.y"
                     {  }
#line 3024 "ass5_18CS30051.tab.c"
    break;

  case 117:
#line 806 "ass5_18CS30051.y"
                       {  }
#line 3030 "ass5_18CS30051.tab.c"
    break;

  case 118:
#line 807 "ass5_18CS30051.y"
                           {  }
#line 3036 "ass5_18CS30051.tab.c"
    break;

  case 119:
#line 810 "ass5_18CS30051.y"
                                                                        {  }
#line 3042 "ass5_18CS30051.tab.c"
    break;

  case 120:
#line 811 "ass5_18CS30051.y"
                                                       {  }
#line 3048 "ass5_18CS30051.tab.c"
    break;

  case 121:
#line 814 "ass5_18CS30051.y"
                                     {  }
#line 3054 "ass5_18CS30051.tab.c"
    break;

  case 122:
#line 815 "ass5_18CS30051.y"
                                    {  }
#line 3060 "ass5_18CS30051.tab.c"
    break;

  case 123:
#line 818 "ass5_18CS30051.y"
                                                                                             {  }
#line 3066 "ass5_18CS30051.tab.c"
    break;

  case 124:
#line 819 "ass5_18CS30051.y"
                                                                                             {  }
#line 3072 "ass5_18CS30051.tab.c"
    break;

  case 125:
#line 820 "ass5_18CS30051.y"
                          {  }
#line 3078 "ass5_18CS30051.tab.c"
    break;

  case 126:
#line 823 "ass5_18CS30051.y"
                        {  }
#line 3084 "ass5_18CS30051.tab.c"
    break;

  case 127:
#line 824 "ass5_18CS30051.y"
                       {  }
#line 3090 "ass5_18CS30051.tab.c"
    break;

  case 128:
#line 827 "ass5_18CS30051.y"
                              {  }
#line 3096 "ass5_18CS30051.tab.c"
    break;

  case 129:
#line 828 "ass5_18CS30051.y"
                                             {  }
#line 3102 "ass5_18CS30051.tab.c"
    break;

  case 130:
#line 831 "ass5_18CS30051.y"
                         {  }
#line 3108 "ass5_18CS30051.tab.c"
    break;

  case 131:
#line 832 "ass5_18CS30051.y"
                                                  {  }
#line 3114 "ass5_18CS30051.tab.c"
    break;

  case 132:
#line 835 "ass5_18CS30051.y"
                        {  }
#line 3120 "ass5_18CS30051.tab.c"
    break;

  case 133:
#line 836 "ass5_18CS30051.y"
                     {  }
#line 3126 "ass5_18CS30051.tab.c"
    break;

  case 134:
#line 837 "ass5_18CS30051.y"
                     {  }
#line 3132 "ass5_18CS30051.tab.c"
    break;

  case 135:
#line 840 "ass5_18CS30051.y"
                             {  }
#line 3138 "ass5_18CS30051.tab.c"
    break;

  case 136:
#line 844 "ass5_18CS30051.y"
        {
		symboltype *t = (yyvsp[-1].sym_type);
		while(t->arrtype!=NULL) t = t->arrtype;           //for multidimensional arr1s, move in depth till you get the base type
		t->arrtype = (yyvsp[0].symp)->type;                //add the base type 
		(yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].sym_type));                  //update
	}
#line 3149 "ass5_18CS30051.tab.c"
    break;

  case 137:
#line 850 "ass5_18CS30051.y"
                            {   }
#line 3155 "ass5_18CS30051.tab.c"
    break;

  case 138:
#line 854 "ass5_18CS30051.y"
        {
		(yyval.symp) = (yyvsp[0].symp)->update(new symboltype(var_type));
		currSymbolPtr = (yyval.symp);	
	}
#line 3164 "ass5_18CS30051.tab.c"
    break;

  case 139:
#line 858 "ass5_18CS30051.y"
                                                            {(yyval.symp)=(yyvsp[-1].symp);}
#line 3170 "ass5_18CS30051.tab.c"
    break;

  case 140:
#line 859 "ass5_18CS30051.y"
                                                                                                               {	}
#line 3176 "ass5_18CS30051.tab.c"
    break;

  case 141:
#line 860 "ass5_18CS30051.y"
                                                                                         {	}
#line 3182 "ass5_18CS30051.tab.c"
    break;

  case 142:
#line 862 "ass5_18CS30051.y"
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
#line 3207 "ass5_18CS30051.tab.c"
    break;

  case 143:
#line 883 "ass5_18CS30051.y"
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
#line 3231 "ass5_18CS30051.tab.c"
    break;

  case 144:
#line 902 "ass5_18CS30051.y"
                                                                                                                      {	}
#line 3237 "ass5_18CS30051.tab.c"
    break;

  case 145:
#line 903 "ass5_18CS30051.y"
                                                                                                  {	}
#line 3243 "ass5_18CS30051.tab.c"
    break;

  case 146:
#line 904 "ass5_18CS30051.y"
                                                                                             {	}
#line 3249 "ass5_18CS30051.tab.c"
    break;

  case 147:
#line 905 "ass5_18CS30051.y"
                                                                         {	}
#line 3255 "ass5_18CS30051.tab.c"
    break;

  case 148:
#line 907 "ass5_18CS30051.y"
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
#line 3272 "ass5_18CS30051.tab.c"
    break;

  case 149:
#line 919 "ass5_18CS30051.y"
                                                                                   {	}
#line 3278 "ass5_18CS30051.tab.c"
    break;

  case 150:
#line 921 "ass5_18CS30051.y"
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
#line 3295 "ass5_18CS30051.tab.c"
    break;

  case 151:
#line 935 "ass5_18CS30051.y"
                                  {  }
#line 3301 "ass5_18CS30051.tab.c"
    break;

  case 152:
#line 936 "ass5_18CS30051.y"
                                   {  }
#line 3307 "ass5_18CS30051.tab.c"
    break;

  case 153:
#line 940 "ass5_18CS30051.y"
        { 
		(yyval.sym_type) = new symboltype("ptr");   //create new pointer
	}
#line 3315 "ass5_18CS30051.tab.c"
    break;

  case 154:
#line 944 "ass5_18CS30051.y"
        { 
		(yyval.sym_type) = new symboltype("ptr",(yyvsp[0].sym_type));
	}
#line 3323 "ass5_18CS30051.tab.c"
    break;

  case 155:
#line 949 "ass5_18CS30051.y"
                                      {  }
#line 3329 "ass5_18CS30051.tab.c"
    break;

  case 156:
#line 950 "ass5_18CS30051.y"
                                               {  }
#line 3335 "ass5_18CS30051.tab.c"
    break;

  case 157:
#line 953 "ass5_18CS30051.y"
                                      {  }
#line 3341 "ass5_18CS30051.tab.c"
    break;

  case 158:
#line 954 "ass5_18CS30051.y"
                                      {  }
#line 3347 "ass5_18CS30051.tab.c"
    break;

  case 159:
#line 957 "ass5_18CS30051.y"
                                        {  }
#line 3353 "ass5_18CS30051.tab.c"
    break;

  case 160:
#line 958 "ass5_18CS30051.y"
                                                        {  }
#line 3359 "ass5_18CS30051.tab.c"
    break;

  case 161:
#line 961 "ass5_18CS30051.y"
                                                           {  }
#line 3365 "ass5_18CS30051.tab.c"
    break;

  case 162:
#line 962 "ass5_18CS30051.y"
                                    {  }
#line 3371 "ass5_18CS30051.tab.c"
    break;

  case 163:
#line 965 "ass5_18CS30051.y"
                                {  }
#line 3377 "ass5_18CS30051.tab.c"
    break;

  case 164:
#line 966 "ass5_18CS30051.y"
                                             {  }
#line 3383 "ass5_18CS30051.tab.c"
    break;

  case 165:
#line 969 "ass5_18CS30051.y"
                                      {  }
#line 3389 "ass5_18CS30051.tab.c"
    break;

  case 166:
#line 972 "ass5_18CS30051.y"
                                     { (yyval.symp)=(yyvsp[0].expr)->loc; }
#line 3395 "ass5_18CS30051.tab.c"
    break;

  case 167:
#line 973 "ass5_18CS30051.y"
                                                                   {  }
#line 3401 "ass5_18CS30051.tab.c"
    break;

  case 168:
#line 974 "ass5_18CS30051.y"
                                                                         {  }
#line 3407 "ass5_18CS30051.tab.c"
    break;

  case 169:
#line 977 "ass5_18CS30051.y"
                                               {  }
#line 3413 "ass5_18CS30051.tab.c"
    break;

  case 170:
#line 978 "ass5_18CS30051.y"
                                                               {  }
#line 3419 "ass5_18CS30051.tab.c"
    break;

  case 171:
#line 981 "ass5_18CS30051.y"
                          {  }
#line 3425 "ass5_18CS30051.tab.c"
    break;

  case 172:
#line 982 "ass5_18CS30051.y"
                        {  }
#line 3431 "ass5_18CS30051.tab.c"
    break;

  case 173:
#line 985 "ass5_18CS30051.y"
                                      {  }
#line 3437 "ass5_18CS30051.tab.c"
    break;

  case 174:
#line 988 "ass5_18CS30051.y"
                               {  }
#line 3443 "ass5_18CS30051.tab.c"
    break;

  case 175:
#line 989 "ass5_18CS30051.y"
                                       {  }
#line 3449 "ass5_18CS30051.tab.c"
    break;

  case 176:
#line 992 "ass5_18CS30051.y"
                                                                           {  }
#line 3455 "ass5_18CS30051.tab.c"
    break;

  case 177:
#line 993 "ass5_18CS30051.y"
                         {  }
#line 3461 "ass5_18CS30051.tab.c"
    break;

  case 178:
#line 998 "ass5_18CS30051.y"
                               {  }
#line 3467 "ass5_18CS30051.tab.c"
    break;

  case 179:
#line 999 "ass5_18CS30051.y"
                               { (yyval.stat)=(yyvsp[0].stat); }
#line 3473 "ass5_18CS30051.tab.c"
    break;

  case 180:
#line 1001 "ass5_18CS30051.y"
        { 
		(yyval.stat)=new Statement();              //create new statement with same nextlist
		(yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
	}
#line 3482 "ass5_18CS30051.tab.c"
    break;

  case 181:
#line 1005 "ass5_18CS30051.y"
                                { (yyval.stat)=(yyvsp[0].stat); }
#line 3488 "ass5_18CS30051.tab.c"
    break;

  case 182:
#line 1006 "ass5_18CS30051.y"
                                { (yyval.stat)=(yyvsp[0].stat); }
#line 3494 "ass5_18CS30051.tab.c"
    break;

  case 183:
#line 1007 "ass5_18CS30051.y"
                           { (yyval.stat)=(yyvsp[0].stat); }
#line 3500 "ass5_18CS30051.tab.c"
    break;

  case 184:
#line 1010 "ass5_18CS30051.y"
                                    {  }
#line 3506 "ass5_18CS30051.tab.c"
    break;

  case 185:
#line 1012 "ass5_18CS30051.y"
        { 
		(yyval.stat)=new Statement();              //create new statement with same nextlist
		(yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
	}
#line 3515 "ass5_18CS30051.tab.c"
    break;

  case 186:
#line 1016 "ass5_18CS30051.y"
                                { (yyval.stat)=(yyvsp[0].stat); }
#line 3521 "ass5_18CS30051.tab.c"
    break;

  case 187:
#line 1017 "ass5_18CS30051.y"
                                { (yyval.stat)=(yyvsp[0].stat); }
#line 3527 "ass5_18CS30051.tab.c"
    break;

  case 188:
#line 1018 "ass5_18CS30051.y"
                           { (yyval.stat)=(yyvsp[0].stat); }
#line 3533 "ass5_18CS30051.tab.c"
    break;

  case 189:
#line 1021 "ass5_18CS30051.y"
                                                {  }
#line 3539 "ass5_18CS30051.tab.c"
    break;

  case 190:
#line 1022 "ass5_18CS30051.y"
                                                     {  }
#line 3545 "ass5_18CS30051.tab.c"
    break;

  case 191:
#line 1023 "ass5_18CS30051.y"
                                    {  }
#line 3551 "ass5_18CS30051.tab.c"
    break;

  case 192:
#line 1027 "ass5_18CS30051.y"
        { 
		(yyval.stat)=(yyvsp[-1].stat);
		changeTable(ST->parent); 
	}
#line 3560 "ass5_18CS30051.tab.c"
    break;

  case 193:
#line 1033 "ass5_18CS30051.y"
                             { (yyval.stat)=new Statement(); }
#line 3566 "ass5_18CS30051.tab.c"
    break;

  case 194:
#line 1034 "ass5_18CS30051.y"
                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3572 "ass5_18CS30051.tab.c"
    break;

  case 195:
#line 1037 "ass5_18CS30051.y"
                              { (yyval.stat)=(yyvsp[0].stat); }
#line 3578 "ass5_18CS30051.tab.c"
    break;

  case 196:
#line 1039 "ass5_18CS30051.y"
        { 
		(yyval.stat)=(yyvsp[0].stat);
		backpatch((yyvsp[-2].stat)->nextlist,(yyvsp[-1].instr_number));     //after $1, move to block_item via $2
	}
#line 3587 "ass5_18CS30051.tab.c"
    break;

  case 197:
#line 1045 "ass5_18CS30051.y"
                          { (yyval.stat)=new Statement(); }
#line 3593 "ass5_18CS30051.tab.c"
    break;

  case 198:
#line 1046 "ass5_18CS30051.y"
                      { (yyval.stat)=(yyvsp[0].stat); }
#line 3599 "ass5_18CS30051.tab.c"
    break;

  case 199:
#line 1049 "ass5_18CS30051.y"
                                           {(yyval.expr)=(yyvsp[-1].expr);}
#line 3605 "ass5_18CS30051.tab.c"
    break;

  case 200:
#line 1050 "ass5_18CS30051.y"
                    {(yyval.expr) = new Expression();}
#line 3611 "ass5_18CS30051.tab.c"
    break;

  case 201:
#line 1054 "ass5_18CS30051.y"
        {
		backpatch((yyvsp[-4].stat)->nextlist, nextinstr());        //nextlist of N goes to nextinstr
		convertIntToBool((yyvsp[-5].expr));         //convert expression to bool
		(yyval.stat) = new Statement();        //make new statement
		backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));        //is expression is true, go to M i.e just before statement body
		list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stat)->nextlist);   //merge falselist of expression, nextlist of statement and second N
		(yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist, temp);
	}
#line 3624 "ass5_18CS30051.tab.c"
    break;

  case 202:
#line 1063 "ass5_18CS30051.y"
        {
		backpatch((yyvsp[-7].stat)->nextlist, nextinstr());		//nextlist of N goes to nextinstr
		convertIntToBool((yyvsp[-8].expr));        //convert expression to bool
		(yyval.stat) = new Statement();       //make new statement
		backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_number));    //when expression is true, go to M1 else go to M2
		backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_number));
		list<int> temp = merge((yyvsp[-4].stat)->nextlist, (yyvsp[-3].stat)->nextlist);       //merge the nextlists of the statements and second N
		(yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist,temp);	
	}
#line 3638 "ass5_18CS30051.tab.c"
    break;

  case 203:
#line 1072 "ass5_18CS30051.y"
                                                                             {	}
#line 3644 "ass5_18CS30051.tab.c"
    break;

  case 204:
#line 1076 "ass5_18CS30051.y"
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
#line 3661 "ass5_18CS30051.tab.c"
    break;

  case 205:
#line 1090 "ass5_18CS30051.y"
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
#line 3678 "ass5_18CS30051.tab.c"
    break;

  case 206:
#line 1103 "ass5_18CS30051.y"
        {
		(yyval.stat) = new Statement();     //create statement	
		convertIntToBool((yyvsp[-2].expr));      //convert to bool
		backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr_number));						// M1 to go back to statement if expression is true
		backpatch((yyvsp[-6].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
		(yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       //move out if statement is false
		loop_name = "";
	}
#line 3691 "ass5_18CS30051.tab.c"
    break;

  case 207:
#line 1112 "ass5_18CS30051.y"
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
#line 3708 "ass5_18CS30051.tab.c"
    break;

  case 208:
#line 1125 "ass5_18CS30051.y"
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
#line 3725 "ass5_18CS30051.tab.c"
    break;

  case 209:
#line 1138 "ass5_18CS30051.y"
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
#line 3742 "ass5_18CS30051.tab.c"
    break;

  case 210:
#line 1151 "ass5_18CS30051.y"
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
#line 3759 "ass5_18CS30051.tab.c"
    break;

  case 211:
#line 1165 "ass5_18CS30051.y"
                                          { (yyval.stat) = new Statement(); }
#line 3765 "ass5_18CS30051.tab.c"
    break;

  case 212:
#line 1166 "ass5_18CS30051.y"
                             { (yyval.stat) = new Statement(); }
#line 3771 "ass5_18CS30051.tab.c"
    break;

  case 213:
#line 1167 "ass5_18CS30051.y"
                          { (yyval.stat) = new Statement(); }
#line 3777 "ass5_18CS30051.tab.c"
    break;

  case 214:
#line 1169 "ass5_18CS30051.y"
        {
		(yyval.stat) = new Statement();	
		emit("return",(yyvsp[-1].expr)->loc->name);               //emit return with the name of the return value
	}
#line 3786 "ass5_18CS30051.tab.c"
    break;

  case 215:
#line 1174 "ass5_18CS30051.y"
        {
		(yyval.stat) = new Statement();	
		emit("return","");                         //simply emit return
	}
#line 3795 "ass5_18CS30051.tab.c"
    break;

  case 216:
#line 1182 "ass5_18CS30051.y"
                                       { }
#line 3801 "ass5_18CS30051.tab.c"
    break;

  case 217:
#line 1183 "ass5_18CS30051.y"
                                                { }
#line 3807 "ass5_18CS30051.tab.c"
    break;

  case 218:
#line 1186 "ass5_18CS30051.y"
                                          {  }
#line 3813 "ass5_18CS30051.tab.c"
    break;

  case 219:
#line 1187 "ass5_18CS30051.y"
                        {  }
#line 3819 "ass5_18CS30051.tab.c"
    break;

  case 220:
#line 1191 "ass5_18CS30051.y"
        {
		int next_instr=0;	 	
		ST->parent=globalST;
		table_count = 0;
		changeTable(globalST);                     //once we come back to this at the end, change the table to global Symbol table
	}
#line 3830 "ass5_18CS30051.tab.c"
    break;

  case 221:
#line 1199 "ass5_18CS30051.y"
                                {  }
#line 3836 "ass5_18CS30051.tab.c"
    break;

  case 222:
#line 1200 "ass5_18CS30051.y"
                                          {  }
#line 3842 "ass5_18CS30051.tab.c"
    break;

  case 223:
#line 1203 "ass5_18CS30051.y"
                             {  }
#line 3848 "ass5_18CS30051.tab.c"
    break;

  case 224:
#line 1204 "ass5_18CS30051.y"
                             {  }
#line 3854 "ass5_18CS30051.tab.c"
    break;


#line 3858 "ass5_18CS30051.tab.c"

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
#line 1207 "ass5_18CS30051.y"


void yyerror(string s) {        //print syntax error
    cout<<s<<endl;
}
