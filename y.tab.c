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
#line 1 "asgn5_18CS30051.y"
 /* C Declarations and Definitions */
#include <stdio.h>
extern int line;
extern int yylex();
extern char* yytext;
void yyerror(const char*);

#line 78 "y.tab.c"

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INTEGER_CONST = 258,
    FLOAT_CONST = 259,
    CHAR_CONST = 260,
    STRING = 261,
    IF = 262,
    DO = 263,
    FOR = 264,
    INT = 265,
    ELSE = 266,
    CHAR = 267,
    CASE = 268,
    GOTO = 269,
    LONG = 270,
    VOID = 271,
    SHORT = 272,
    BREAK = 273,
    CONST = 274,
    FLOAT = 275,
    UNION = 276,
    WHILE = 277,
    SWITCH = 278,
    INLINE = 279,
    STATIC = 280,
    STRUCT = 281,
    EXTERN = 282,
    SIZEOF = 283,
    DOUBLE = 284,
    RETURN = 285,
    TYPEDEF = 286,
    DEFAULT = 287,
    RESTRICT = 288,
    VOLATILE = 289,
    CONTINUE = 290,
    PP = 291,
    MM = 292,
    RS = 293,
    LS = 294,
    LE = 295,
    GE = 296,
    EE = 297,
    NE = 298,
    AA = 299,
    OO = 300,
    DE = 301,
    PE = 302,
    AE = 303,
    XE = 304,
    OE = 305,
    RSE = 306,
    LSE = 307,
    ARROW = 308,
    MOD_EQ = 309,
    MULT_EQ = 310,
    MINUS_EQ = 311,
    ELLIPSIS = 312,
    IDENTIFIER = 313
  };
#endif
/* Tokens.  */
#define INTEGER_CONST 258
#define FLOAT_CONST 259
#define CHAR_CONST 260
#define STRING 261
#define IF 262
#define DO 263
#define FOR 264
#define INT 265
#define ELSE 266
#define CHAR 267
#define CASE 268
#define GOTO 269
#define LONG 270
#define VOID 271
#define SHORT 272
#define BREAK 273
#define CONST 274
#define FLOAT 275
#define UNION 276
#define WHILE 277
#define SWITCH 278
#define INLINE 279
#define STATIC 280
#define STRUCT 281
#define EXTERN 282
#define SIZEOF 283
#define DOUBLE 284
#define RETURN 285
#define TYPEDEF 286
#define DEFAULT 287
#define RESTRICT 288
#define VOLATILE 289
#define CONTINUE 290
#define PP 291
#define MM 292
#define RS 293
#define LS 294
#define LE 295
#define GE 296
#define EE 297
#define NE 298
#define AA 299
#define OO 300
#define DE 301
#define PE 302
#define AE 303
#define XE 304
#define OE 305
#define RSE 306
#define LSE 307
#define ARROW 308
#define MOD_EQ 309
#define MULT_EQ 310
#define MINUS_EQ 311
#define ELLIPSIS 312
#define IDENTIFIER 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   708

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  318

#define YYUNDEFTOK  2
#define YYMAXUTOK   313


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
       2,     2,     2,    72,     2,     2,     2,    74,    67,     2,
      59,    60,    68,    69,    66,    70,    63,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    82,
      75,    81,    76,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,    78,    65,    71,     2,     2,     2,
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
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    76,    76,    78,    80,    84,    86,    88,    90,    94,
      96,    98,   100,   102,   104,   106,   108,   110,   114,   116,
     120,   122,   126,   128,   130,   132,   134,   136,   140,   142,
     144,   146,   148,   150,   154,   156,   160,   162,   164,   166,
     170,   172,   174,   178,   180,   182,   186,   188,   190,   192,
     194,   198,   200,   202,   206,   208,   212,   214,   218,   220,
     224,   226,   230,   232,   236,   238,   242,   244,   248,   250,
     252,   254,   256,   258,   260,   262,   264,   266,   268,   272,
     274,   278,   282,   286,   288,   292,   294,   296,   298,   302,
     304,   308,   310,   314,   316,   320,   322,   326,   328,   330,
     332,   334,   336,   338,   342,   344,   348,   350,   354,   356,
     358,   362,   366,   370,   372,   376,   378,   380,   382,   384,
     386,   388,   390,   394,   396,   400,   402,   406,   408,   412,
     414,   418,   420,   424,   426,   430,   432,   436,   438,   442,
     444,   448,   452,   454,   456,   460,   462,   466,   468,   472,
     476,   478,   482,   484,   488,   490,   492,   494,   496,   498,
     502,   504,   506,   510,   514,   516,   520,   522,   526,   528,
     532,   536,   538,   542,   544,   546,   550,   552,   554,   556,
     560,   562,   564,   566,   570,   572,   576,   578,   582,   586,
     588,   592,   594
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER_CONST", "FLOAT_CONST",
  "CHAR_CONST", "STRING", "IF", "DO", "FOR", "INT", "ELSE", "CHAR", "CASE",
  "GOTO", "LONG", "VOID", "SHORT", "BREAK", "CONST", "FLOAT", "UNION",
  "WHILE", "SWITCH", "INLINE", "STATIC", "STRUCT", "EXTERN", "SIZEOF",
  "DOUBLE", "RETURN", "TYPEDEF", "DEFAULT", "RESTRICT", "VOLATILE",
  "CONTINUE", "PP", "MM", "RS", "LS", "LE", "GE", "EE", "NE", "AA", "OO",
  "DE", "PE", "AE", "XE", "OE", "RSE", "LSE", "ARROW", "MOD_EQ", "MULT_EQ",
  "MINUS_EQ", "ELLIPSIS", "IDENTIFIER", "'('", "')'", "'['", "']'", "'.'",
  "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "$accept",
  "constant", "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "assignment_expression_opt", "identifier_list_opt", "pointer",
  "type_qualifier_list_opt", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "initializer", "initializer_list", "designation_opt",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list_opt",
  "block_item_list", "block_item", "expression_statement",
  "expression_opt", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list_opt", "declaration_list", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,    40,
      41,    91,    93,    46,   123,   125,    44,    38,    42,    43,
      45,   126,    33,    47,    37,    60,    62,    94,   124,    63,
      58,    61,    59
};
# endif

#define YYPACT_NINF (-175)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-191)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     406,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,   -36,   406,   406,   406,   406,
     649,  -175,  -175,    16,   -60,   -52,  -175,   265,    84,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,   -17,    16,
    -175,   -17,   127,  -175,   -36,    11,   406,  -175,   -17,   -48,
    -175,  -175,  -175,     7,  -175,  -175,  -175,  -175,   485,   523,
     523,  -175,   448,    -3,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,   294,   154,   542,  -175,    83,   152,   188,    98,
     190,    25,    52,    68,   121,   -37,  -175,  -175,  -175,   237,
    -175,  -175,   101,   623,   103,   448,  -175,   448,  -175,  -175,
    -175,     3,   674,  -175,   674,   107,   542,   123,   171,   127,
    -175,   -54,  -175,  -175,  -175,   125,   542,   542,   134,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
     542,  -175,  -175,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   165,   378,   169,   542,   155,   176,   175,   204,
     542,   150,   186,   196,   217,  -175,  -175,  -175,  -175,   223,
     237,  -175,  -175,   209,  -175,  -175,  -175,  -175,  -175,    12,
     233,   240,   231,  -175,   244,    16,   560,   116,   255,   256,
    -175,   542,  -175,  -175,  -175,   466,  -175,   259,  -175,  -175,
     117,  -175,  -175,  -175,  -175,   257,   260,  -175,   -33,  -175,
    -175,  -175,  -175,  -175,    83,    83,   152,   152,   188,   188,
     188,   188,    98,    98,   190,    25,    52,    68,   121,     2,
     542,   300,   308,   254,   258,  -175,   542,   542,   261,   378,
    -175,   378,  -175,  -175,  -175,  -175,  -175,  -175,    28,   280,
     542,   277,  -175,   286,   542,   285,   285,  -175,    -3,  -175,
    -175,  -175,   127,  -175,   542,  -175,   542,    13,   291,   542,
     269,   378,  -175,    57,    74,  -175,  -175,  -175,  -175,  -175,
    -175,   290,  -175,  -175,   292,   173,  -175,  -175,  -175,   378,
     542,   274,   542,  -175,   378,   378,  -175,  -175,  -175,   151,
     347,    93,   542,   278,  -175,  -175,  -175,   378,   279,   299,
     542,  -175,  -175,   378,   302,  -175,   378,  -175
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   100,    98,   101,    97,    99,   108,   102,   111,    96,
      95,   103,   109,   110,   187,   114,    90,    90,    90,    90,
       0,   184,   186,   130,     0,    83,    91,    93,     0,   113,
      89,    85,    86,    87,    88,     1,   185,   131,   127,   129,
      82,   114,     0,   191,   114,     0,   189,   115,   114,   112,
     128,   132,    92,    93,     2,     3,     4,     7,     0,     0,
       0,     5,     0,   148,    28,    29,    30,    31,    32,    33,
       6,     9,    22,    34,     0,    36,    40,    43,    46,    51,
      54,    56,    58,    60,    62,    64,    66,   142,    94,   165,
     188,   192,     0,   126,   130,     0,    26,     0,    23,    24,
      79,     0,   107,   141,   107,     0,     0,     0,     0,     0,
     147,     0,   150,    14,    15,     0,    19,     0,     0,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    68,
       0,    34,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,     0,     0,     0,     0,     0,     0,
     172,     0,     0,     5,   171,   168,   169,   154,   155,     0,
     164,   166,   156,     0,   157,   158,   159,   116,   139,   114,
       0,     0,   133,   135,   125,   130,   124,   129,     0,     0,
       8,     0,   106,   104,   105,     0,    81,     0,   153,   143,
     148,   145,   149,   151,    13,     0,    18,    20,     0,    12,
      67,    37,    38,    39,    41,    42,    45,    44,    49,    50,
      47,    48,    52,    53,    55,    57,    59,    61,    63,     0,
       0,     0,   172,     0,     0,   182,     0,     0,     0,   172,
     181,   172,   163,   167,   170,   137,   122,   121,     0,     0,
       0,    29,   123,     0,     0,    27,     0,    80,   148,    35,
     152,   144,     0,    11,     0,    10,     0,     0,     0,   172,
       0,   172,   180,     0,     0,   183,   162,   160,   134,   136,
     140,     0,   120,   117,     0,     0,   146,    21,    65,   172,
       0,     0,   172,   161,   172,   172,   118,   119,    16,   148,
     173,     0,   172,     0,   176,   175,    17,   172,     0,     0,
     172,   174,   177,   172,     0,   179,   172,   178
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,  -175,  -175,  -175,  -175,   -35,  -175,   -68,   142,
     148,    77,   158,   218,   216,   220,   221,   215,  -175,   -96,
     -39,  -175,   -61,   214,   -25,  -175,     0,   170,  -175,   330,
    -175,   -21,    -7,   268,    -8,  -175,   -11,  -175,  -175,  -175,
    -175,   335,   -66,   295,  -175,  -175,   126,  -175,    29,  -104,
     130,  -174,  -175,  -175,   282,  -123,  -175,   345,  -175,  -175,
     224,  -175,  -148,  -175,  -175,  -175,  -175,   375,  -175,  -175,
    -175
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    70,    71,    72,   205,   206,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
     100,   130,   164,   197,    14,    24,    44,    31,    25,    26,
      16,    17,   103,   193,    18,    19,    53,    28,    49,   253,
     180,    29,    38,    39,   181,   182,   183,   184,   105,    88,
     108,   109,   110,   111,   112,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,    20,    21,    22,    45,
      46
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   101,    43,    87,    27,   201,   132,   106,   150,   107,
     196,    93,   238,    94,    41,    37,    30,    30,    30,    30,
      15,    91,    40,    96,    98,    99,   262,   202,   186,   265,
     231,    51,    23,   191,   101,     6,   101,    92,     1,   131,
       2,   102,   151,     3,     4,     5,   -84,     6,     7,    12,
      13,    23,     8,     9,   104,    10,   208,    11,   106,   196,
     107,    12,    13,   190,   165,   211,   212,   213,   191,   191,
      87,   131,  -138,   289,   102,    89,   102,   207,  -138,   191,
      23,   102,   266,   102,   270,   278,    37,   104,    42,   104,
     229,   210,   146,   179,   104,   192,   104,   192,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   276,   294,   277,   250,
     131,   291,     6,   191,   188,   262,   189,   259,   185,   147,
      54,    55,    56,    57,   295,     6,    12,    13,   140,   141,
     191,   254,    47,    48,   303,   165,   148,   252,   293,    12,
      13,   133,   257,   308,   309,    58,   134,   135,   286,   191,
     131,   177,   314,    59,    60,   149,   300,   195,   245,   267,
     288,   304,   305,   142,   143,   273,   274,    37,   106,    51,
     107,   198,   261,   204,   311,    61,    62,    32,    33,    34,
     315,    63,   209,   317,    64,    65,    66,    67,    68,    69,
     119,   120,   121,   122,   123,   124,   125,   269,   126,   127,
     128,   281,   106,   234,   107,   284,   306,   218,   219,   220,
     221,   136,   137,    87,   230,   287,   138,   139,   232,   301,
     239,   131,   144,   145,   236,   129,   199,   200,   298,   299,
      54,    55,    56,    57,   152,   153,   154,     1,   179,     2,
     155,   156,     3,     4,     5,   157,     6,     7,   235,   158,
     159,     8,     9,   237,    10,    58,    11,   160,   240,   161,
      12,    13,   162,    59,    60,     1,   241,     2,   214,   215,
       3,     4,     5,   191,     6,     7,   216,   217,   242,     8,
       9,   244,    10,   246,    11,   163,    62,   248,    12,    13,
     247,    89,   222,   223,    64,    65,    66,    67,    68,    69,
     249,    54,    55,    56,    57,   255,   256,   263,     1,  -172,
       2,   260,   268,     3,     4,     5,   264,     6,     7,  -190,
     113,   114,     8,     9,   271,    10,    58,    11,   280,   282,
     272,    12,    13,   275,    59,    60,    42,   115,   283,   258,
     290,   292,   296,   116,   297,   117,   302,   118,   307,   313,
     310,   312,   316,   225,   224,   228,    61,    62,   226,   233,
     227,    52,   194,    50,   279,    64,    65,    66,    67,    68,
      69,    54,    55,    56,    57,   152,   153,   154,   285,   187,
      90,   155,   156,   203,   243,    36,   157,     0,     0,     0,
     158,   159,     0,     0,     0,     0,    58,     0,   160,     0,
     161,     0,     0,   162,    59,    60,     1,     0,     2,     0,
       0,     3,     4,     5,     0,     6,     7,     0,     0,     0,
       8,     9,     0,    10,     0,    11,   163,    62,     0,    12,
      13,     0,    89,     0,     0,    64,    65,    66,    67,    68,
      69,    54,    55,    56,    57,     0,     0,     0,     1,     0,
       2,     0,     0,     3,     4,     5,     0,     6,     7,    54,
      55,    56,    57,     0,     0,     0,    58,    11,     0,     0,
       0,    12,    13,     0,    59,    60,     0,     0,    54,    55,
      56,    57,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,    59,    60,     0,     0,    61,    62,     0,     0,
       0,     0,     0,    58,     0,    64,    65,    66,    67,    68,
      69,    59,    60,     0,    61,    62,    54,    55,    56,    57,
     258,     0,     0,    64,    65,    66,    67,    68,    69,     0,
       0,     0,     0,    61,    95,    54,    55,    56,    57,     0,
       0,    58,    64,    65,    66,    67,    68,    69,     0,    59,
      60,     0,     0,    54,    55,    56,    57,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,    59,    60,
       0,    61,    97,     0,     0,     0,     0,     0,    58,     0,
      64,    65,    66,    67,    68,    69,    59,    60,     0,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,    64,
      65,    66,    67,    68,    69,     0,     0,     0,    61,    62,
       0,     0,     0,     0,     0,     0,     0,    64,   251,    66,
      67,    68,    69,     1,     0,     2,     0,     0,     3,     4,
       5,     0,     6,     7,     0,     0,     0,     8,     9,    35,
      10,     0,    11,     0,     0,     0,    12,    13,     0,     1,
       0,     2,     0,     0,     3,     4,     5,     0,     6,     7,
       0,     0,     0,     8,     9,     0,    10,     0,    11,     0,
       0,   178,    12,    13,     1,     0,     2,     0,     0,     3,
       4,     5,     0,     6,     7,     0,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,    12,    13
};

static const yytype_int16 yycheck[] =
{
       0,    62,    27,    42,    15,   109,    74,    61,    45,    63,
     106,    59,   160,    61,    66,    23,    16,    17,    18,    19,
      20,    46,    82,    58,    59,    60,   200,    81,    94,    62,
     153,    39,    68,    66,    95,    19,    97,    48,    10,    74,
      12,    62,    79,    15,    16,    17,    82,    19,    20,    33,
      34,    68,    24,    25,    62,    27,   117,    29,    61,   155,
      63,    33,    34,    60,    89,   133,   134,   135,    66,    66,
     109,   106,    60,    60,    95,    64,    97,   116,    66,    66,
      68,   102,    80,   104,   232,    57,    94,    95,    81,    97,
     151,   130,    67,    93,   102,   102,   104,   104,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   239,    60,   241,   185,
     155,   269,    19,    66,    95,   299,    97,   195,    25,    77,
       3,     4,     5,     6,    60,    19,    33,    34,    40,    41,
      66,    25,    58,    59,   292,   170,    78,   186,   271,    33,
      34,    68,   191,    60,   302,    28,    73,    74,   262,    66,
     195,    60,   310,    36,    37,    44,   289,    60,   179,   230,
     266,   294,   295,    75,    76,   236,   237,   185,    61,   187,
      63,    58,    65,    58,   307,    58,    59,    17,    18,    19,
     313,    64,    58,   316,    67,    68,    69,    70,    71,    72,
      46,    47,    48,    49,    50,    51,    52,   232,    54,    55,
      56,   250,    61,    58,    63,   254,    65,   140,   141,   142,
     143,    69,    70,   262,    59,   264,    38,    39,    59,   290,
      80,   266,    42,    43,    59,    81,    65,    66,    65,    66,
       3,     4,     5,     6,     7,     8,     9,    10,   248,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    82,    22,
      23,    24,    25,    59,    27,    28,    29,    30,    82,    32,
      33,    34,    35,    36,    37,    10,    80,    12,   136,   137,
      15,    16,    17,    66,    19,    20,   138,   139,    65,    24,
      25,    82,    27,    60,    29,    58,    59,    66,    33,    34,
      60,    64,   144,   145,    67,    68,    69,    70,    71,    72,
      66,     3,     4,     5,     6,    60,    60,    60,    10,    82,
      12,    62,    22,    15,    16,    17,    66,    19,    20,    64,
      36,    37,    24,    25,    80,    27,    28,    29,    58,    62,
      82,    33,    34,    82,    36,    37,    81,    53,    62,    64,
      59,    82,    62,    59,    62,    61,    82,    63,    11,    60,
      82,    82,    60,   147,   146,   150,    58,    59,   148,   155,
     149,    41,   104,    38,   248,    67,    68,    69,    70,    71,
      72,     3,     4,     5,     6,     7,     8,     9,   258,    94,
      45,    13,    14,   111,   170,    20,    18,    -1,    -1,    -1,
      22,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,
      32,    -1,    -1,    35,    36,    37,    10,    -1,    12,    -1,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      24,    25,    -1,    27,    -1,    29,    58,    59,    -1,    33,
      34,    -1,    64,    -1,    -1,    67,    68,    69,    70,    71,
      72,     3,     4,     5,     6,    -1,    -1,    -1,    10,    -1,
      12,    -1,    -1,    15,    16,    17,    -1,    19,    20,     3,
       4,     5,     6,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    34,    -1,    36,    37,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    67,    68,    69,    70,    71,
      72,    36,    37,    -1,    58,    59,     3,     4,     5,     6,
      64,    -1,    -1,    67,    68,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    58,    59,     3,     4,     5,     6,    -1,
      -1,    28,    67,    68,    69,    70,    71,    72,    -1,    36,
      37,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      67,    68,    69,    70,    71,    72,    36,    37,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    10,    -1,    12,    -1,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    24,    25,     0,
      27,    -1,    29,    -1,    -1,    -1,    33,    34,    -1,    10,
      -1,    12,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    24,    25,    -1,    27,    -1,    29,    -1,
      -1,    58,    33,    34,    10,    -1,    12,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    12,    15,    16,    17,    19,    20,    24,    25,
      27,    29,    33,    34,   107,   109,   113,   114,   117,   118,
     149,   150,   151,    68,   108,   111,   112,   119,   120,   124,
     109,   110,   110,   110,   110,     0,   150,   117,   125,   126,
      82,    66,    81,   107,   109,   152,   153,    58,    59,   121,
     124,   117,   112,   119,     3,     4,     5,     6,    28,    36,
      37,    58,    59,    64,    67,    68,    69,    70,    71,    72,
      84,    85,    86,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   132,    64,
     140,   107,   119,    59,    61,    59,    89,    59,    89,    89,
     103,   105,   114,   115,   117,   131,    61,    63,   133,   134,
     135,   136,   137,    36,    37,    53,    59,    61,    63,    46,
      47,    48,    49,    50,    51,    52,    54,    55,    56,    81,
     104,    89,    91,    68,    73,    74,    69,    70,    38,    39,
      40,    41,    75,    76,    42,    43,    67,    77,    78,    44,
      45,    79,     7,     8,     9,    13,    14,    18,    22,    23,
      30,    32,    35,    58,   105,   107,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,    60,    58,   109,
     123,   127,   128,   129,   130,    25,   125,   126,   131,   131,
      60,    66,   115,   116,   116,    60,   102,   106,    58,    65,
      66,   132,    81,   137,    58,    87,    88,   103,   105,    58,
     103,    91,    91,    91,    92,    92,    93,    93,    94,    94,
      94,    94,    95,    95,    96,    97,    98,    99,   100,   105,
      59,   138,    59,   106,    58,    82,    59,    59,   145,    80,
      82,    80,    65,   143,    82,   119,    60,    60,    66,    66,
     125,    68,   103,   122,    25,    60,    60,   103,    64,    91,
      62,    65,   134,    60,    66,    62,    80,   105,    22,   107,
     145,    80,    82,   105,   105,    82,   138,   138,    57,   129,
      58,   103,    62,    62,   103,   133,   132,   103,   102,    60,
      59,   145,    82,   138,    60,    60,    62,    62,    65,    66,
     138,   105,    82,   145,   138,   138,    65,    11,    60,   145,
      82,   138,    82,    60,   145,   138,    60,   138
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    84,    84,    84,    85,    85,    85,    85,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    87,    87,
      88,    88,    89,    89,    89,    89,    89,    89,    90,    90,
      90,    90,    90,    90,    91,    91,    92,    92,    92,    92,
      93,    93,    93,    94,    94,    94,    95,    95,    95,    95,
      95,    96,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   105,
     105,   106,   107,   108,   108,   109,   109,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   114,
     114,   114,   114,   114,   115,   115,   116,   116,   117,   117,
     117,   118,   119,   120,   120,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   132,   132,   132,   133,   133,   134,   134,   135,
     136,   136,   137,   137,   138,   138,   138,   138,   138,   138,
     139,   139,   139,   140,   141,   141,   142,   142,   143,   143,
     144,   145,   145,   146,   146,   146,   147,   147,   147,   147,
     148,   148,   148,   148,   149,   149,   150,   150,   151,   152,
     152,   153,   153
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     4,     3,     3,     2,     2,     6,     7,     1,     0,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     0,     2,     2,     2,     2,     1,
       0,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     1,     1,
       1,     1,     2,     1,     0,     1,     3,     5,     6,     6,
       5,     4,     4,     1,     0,     1,     0,     2,     3,     1,
       0,     1,     2,     1,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     3,     4,     2,     4,     1,     0,     2,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     3,     1,     0,     1,     2,     1,     1,
       2,     1,     0,     5,     7,     5,     5,     7,     9,     8,
       3,     2,     2,     3,     1,     2,     1,     1,     4,     1,
       0,     1,     2
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
#line 77 "asgn5_18CS30051.y"
        { printf("constant -> integer_constant\n"); }
#line 1753 "y.tab.c"
    break;

  case 3:
#line 79 "asgn5_18CS30051.y"
        { printf("constant -> float_constant\n"); }
#line 1759 "y.tab.c"
    break;

  case 4:
#line 81 "asgn5_18CS30051.y"
        { printf("constant -> character_constant\n"); }
#line 1765 "y.tab.c"
    break;

  case 5:
#line 85 "asgn5_18CS30051.y"
                  { printf("primary_expression -> identifier\n"); }
#line 1771 "y.tab.c"
    break;

  case 6:
#line 87 "asgn5_18CS30051.y"
                  { printf("primary_expression -> constant\n"); }
#line 1777 "y.tab.c"
    break;

  case 7:
#line 89 "asgn5_18CS30051.y"
                  { printf("primary_expression -> string\n"); }
#line 1783 "y.tab.c"
    break;

  case 8:
#line 91 "asgn5_18CS30051.y"
                  { printf("primary_expression -> ( expression )\n"); }
#line 1789 "y.tab.c"
    break;

  case 9:
#line 95 "asgn5_18CS30051.y"
                  { printf("postfix_expression -> primary_expression\n"); }
#line 1795 "y.tab.c"
    break;

  case 10:
#line 97 "asgn5_18CS30051.y"
                  { printf("postfix_expression -> postfix_expression [ expression ]\n"); }
#line 1801 "y.tab.c"
    break;

  case 11:
#line 99 "asgn5_18CS30051.y"
                  { printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); }
#line 1807 "y.tab.c"
    break;

  case 12:
#line 101 "asgn5_18CS30051.y"
                  { printf("postfix_expression -> postfix_expression . IDENTIFIER\n"); }
#line 1813 "y.tab.c"
    break;

  case 13:
#line 103 "asgn5_18CS30051.y"
                  { printf("postfix_expression -> postfix_expression -> IDENTIFIER\n"); }
#line 1819 "y.tab.c"
    break;

  case 14:
#line 105 "asgn5_18CS30051.y"
                  { printf("postfix_expression -> postfix_expression ++\n"); }
#line 1825 "y.tab.c"
    break;

  case 15:
#line 107 "asgn5_18CS30051.y"
                  { printf("postfix_expression -> postfix_expression --\n"); }
#line 1831 "y.tab.c"
    break;

  case 16:
#line 109 "asgn5_18CS30051.y"
                  { printf("postfix_expression -> ( type_name ) { initializer_list }\n"); }
#line 1837 "y.tab.c"
    break;

  case 17:
#line 111 "asgn5_18CS30051.y"
                  { printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); }
#line 1843 "y.tab.c"
    break;

  case 18:
#line 115 "asgn5_18CS30051.y"
                            { printf("argument_expression_list_opt -> argument_expression_list\n"); }
#line 1849 "y.tab.c"
    break;

  case 19:
#line 117 "asgn5_18CS30051.y"
                            { printf("argument_expression_list_opt -> %%empty\n"); }
#line 1855 "y.tab.c"
    break;

  case 20:
#line 121 "asgn5_18CS30051.y"
                        { printf("argument_expression_list -> assignment_expression\n"); }
#line 1861 "y.tab.c"
    break;

  case 21:
#line 123 "asgn5_18CS30051.y"
                        { printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); }
#line 1867 "y.tab.c"
    break;

  case 22:
#line 127 "asgn5_18CS30051.y"
                { printf("unary_expression -> postfix_expression\n"); }
#line 1873 "y.tab.c"
    break;

  case 23:
#line 129 "asgn5_18CS30051.y"
                { printf("unary_expression -> ++ unary_expression\n"); }
#line 1879 "y.tab.c"
    break;

  case 24:
#line 131 "asgn5_18CS30051.y"
                { printf("unary_expression -> -- unary_expression\n"); }
#line 1885 "y.tab.c"
    break;

  case 25:
#line 133 "asgn5_18CS30051.y"
                { printf("unary_expression -> unary_operator cast_expression\n"); }
#line 1891 "y.tab.c"
    break;

  case 26:
#line 135 "asgn5_18CS30051.y"
                { printf("unary_expression -> SIZEOF unary_expression\n"); }
#line 1897 "y.tab.c"
    break;

  case 27:
#line 137 "asgn5_18CS30051.y"
                { printf("unary_expression -> SIZEOF ( type_name )\n"); }
#line 1903 "y.tab.c"
    break;

  case 28:
#line 141 "asgn5_18CS30051.y"
              { printf("unary_operator -> &\n"); }
#line 1909 "y.tab.c"
    break;

  case 29:
#line 143 "asgn5_18CS30051.y"
              { printf("unary_operator -> *\n"); }
#line 1915 "y.tab.c"
    break;

  case 30:
#line 145 "asgn5_18CS30051.y"
              { printf("unary_operator -> +\n"); }
#line 1921 "y.tab.c"
    break;

  case 31:
#line 147 "asgn5_18CS30051.y"
              { printf("unary_operator -> -\n"); }
#line 1927 "y.tab.c"
    break;

  case 32:
#line 149 "asgn5_18CS30051.y"
              { printf("unary_operator -> ~\n"); }
#line 1933 "y.tab.c"
    break;

  case 33:
#line 151 "asgn5_18CS30051.y"
              { printf("unary_operator -> !\n"); }
#line 1939 "y.tab.c"
    break;

  case 34:
#line 155 "asgn5_18CS30051.y"
               { printf("cast_expression -> unary_expression\n"); }
#line 1945 "y.tab.c"
    break;

  case 35:
#line 157 "asgn5_18CS30051.y"
               { printf("cast_expression -> ( type_name ) cast_expression\n"); }
#line 1951 "y.tab.c"
    break;

  case 36:
#line 161 "asgn5_18CS30051.y"
                         { printf("multiplicative_expression -> cast_expression\n"); }
#line 1957 "y.tab.c"
    break;

  case 37:
#line 163 "asgn5_18CS30051.y"
                         { printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }
#line 1963 "y.tab.c"
    break;

  case 38:
#line 165 "asgn5_18CS30051.y"
                         { printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }
#line 1969 "y.tab.c"
    break;

  case 39:
#line 167 "asgn5_18CS30051.y"
                         { printf("multiplicative_expression -> multiplicative_expression %% cast_expression\n"); }
#line 1975 "y.tab.c"
    break;

  case 40:
#line 171 "asgn5_18CS30051.y"
                   { printf("additive_expression -> multiplicative_expression\n"); }
#line 1981 "y.tab.c"
    break;

  case 41:
#line 173 "asgn5_18CS30051.y"
                   { printf("additive_expression -> additive_expression + multiplicative_expression\n"); }
#line 1987 "y.tab.c"
    break;

  case 42:
#line 175 "asgn5_18CS30051.y"
                   { printf("additive_expression -> additive_expression - multiplicative_expression\n"); }
#line 1993 "y.tab.c"
    break;

  case 43:
#line 179 "asgn5_18CS30051.y"
                { printf("shift_expression -> additive_expression\n"); }
#line 1999 "y.tab.c"
    break;

  case 44:
#line 181 "asgn5_18CS30051.y"
                { printf("shift_expression -> shift_expression << additive_expression\n"); }
#line 2005 "y.tab.c"
    break;

  case 45:
#line 183 "asgn5_18CS30051.y"
                { printf("shift_expression -> shift_expression >> additive_expression\n"); }
#line 2011 "y.tab.c"
    break;

  case 46:
#line 187 "asgn5_18CS30051.y"
                     { printf("relational_expression -> shift_expression\n"); }
#line 2017 "y.tab.c"
    break;

  case 47:
#line 189 "asgn5_18CS30051.y"
                     { printf("relational_expression -> relational_expression < shift_expression\n"); }
#line 2023 "y.tab.c"
    break;

  case 48:
#line 191 "asgn5_18CS30051.y"
                     { printf("relational_expression -> relational_expression > shift_expression\n"); }
#line 2029 "y.tab.c"
    break;

  case 49:
#line 193 "asgn5_18CS30051.y"
                     { printf("relational_expression -> relational_expression <= shift_expression\n"); }
#line 2035 "y.tab.c"
    break;

  case 50:
#line 195 "asgn5_18CS30051.y"
                     { printf("relational_expression -> relational_expression >= shift_expression\n"); }
#line 2041 "y.tab.c"
    break;

  case 51:
#line 199 "asgn5_18CS30051.y"
                   { printf("equality_expression -> relational_expression\n"); }
#line 2047 "y.tab.c"
    break;

  case 52:
#line 201 "asgn5_18CS30051.y"
                   { printf("equality_expression -> equality_expression == relational_expression\n"); }
#line 2053 "y.tab.c"
    break;

  case 53:
#line 203 "asgn5_18CS30051.y"
                   { printf("equality_expression -> equality_expression != relational_expression\n"); }
#line 2059 "y.tab.c"
    break;

  case 54:
#line 207 "asgn5_18CS30051.y"
              { printf("AND_expression -> equality_expression\n"); }
#line 2065 "y.tab.c"
    break;

  case 55:
#line 209 "asgn5_18CS30051.y"
              { printf("AND_expression -> AND_expression & equality_expression\n"); }
#line 2071 "y.tab.c"
    break;

  case 56:
#line 213 "asgn5_18CS30051.y"
                       { printf("exclusive_OR_expression -> AND_expression\n"); }
#line 2077 "y.tab.c"
    break;

  case 57:
#line 215 "asgn5_18CS30051.y"
                       { printf("exclusive_OR_expression -> exclusive_OR_expression ^ AND_expression\n"); }
#line 2083 "y.tab.c"
    break;

  case 58:
#line 219 "asgn5_18CS30051.y"
                       { printf("inclusive_OR_expression -> exclusive_OR_expression\n"); }
#line 2089 "y.tab.c"
    break;

  case 59:
#line 221 "asgn5_18CS30051.y"
                       { printf("inclusive_OR_expression -> inclusive_OR_expression | exclusive_OR_expression\n"); }
#line 2095 "y.tab.c"
    break;

  case 60:
#line 225 "asgn5_18CS30051.y"
                      { printf("logical_AND_expression -> inclusive_OR_expression\n"); }
#line 2101 "y.tab.c"
    break;

  case 61:
#line 227 "asgn5_18CS30051.y"
                      { printf("logical_AND_expression -> logical_AND_expression && inclusive_OR_expression\n"); }
#line 2107 "y.tab.c"
    break;

  case 62:
#line 231 "asgn5_18CS30051.y"
                     { printf("logical_OR_expression -> logical_AND_expression\n"); }
#line 2113 "y.tab.c"
    break;

  case 63:
#line 233 "asgn5_18CS30051.y"
                     { printf("logical_OR_expression -> logical_OR_expression || logical_AND_expression\n"); }
#line 2119 "y.tab.c"
    break;

  case 64:
#line 237 "asgn5_18CS30051.y"
                      { printf("conditional_expression -> logical_OR_expression\n"); }
#line 2125 "y.tab.c"
    break;

  case 65:
#line 239 "asgn5_18CS30051.y"
                      { printf("conditional_expression -> logical_OR_expression ? expression : conditional_expression\n"); }
#line 2131 "y.tab.c"
    break;

  case 66:
#line 243 "asgn5_18CS30051.y"
                     { printf("assignment_expression -> conditional_expression\n"); }
#line 2137 "y.tab.c"
    break;

  case 67:
#line 245 "asgn5_18CS30051.y"
                     { printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
#line 2143 "y.tab.c"
    break;

  case 68:
#line 249 "asgn5_18CS30051.y"
                   { printf("assignment_operator -> =\n"); }
#line 2149 "y.tab.c"
    break;

  case 69:
#line 251 "asgn5_18CS30051.y"
                   { printf("assignment_operator -> /=\n"); }
#line 2155 "y.tab.c"
    break;

  case 70:
#line 253 "asgn5_18CS30051.y"
                   { printf("assignment_operator -> +=\n"); }
#line 2161 "y.tab.c"
    break;

  case 71:
#line 255 "asgn5_18CS30051.y"
                   { printf("assignment_operator -> &=\n"); }
#line 2167 "y.tab.c"
    break;

  case 72:
#line 257 "asgn5_18CS30051.y"
                   { printf("assignment_operator -> ^=\n"); }
#line 2173 "y.tab.c"
    break;

  case 73:
#line 259 "asgn5_18CS30051.y"
                   { printf("assignment_operator -> |=\n"); }
#line 2179 "y.tab.c"
    break;

  case 74:
#line 261 "asgn5_18CS30051.y"
                   { printf("assignment_operator -> >>=\n"); }
#line 2185 "y.tab.c"
    break;

  case 75:
#line 263 "asgn5_18CS30051.y"
                   { printf("assignment_operator -> <<=\n"); }
#line 2191 "y.tab.c"
    break;

  case 76:
#line 265 "asgn5_18CS30051.y"
                   { printf("assignment_operator -> %%=\n"); }
#line 2197 "y.tab.c"
    break;

  case 77:
#line 267 "asgn5_18CS30051.y"
                   { printf("assignment_operator -> *=\n"); }
#line 2203 "y.tab.c"
    break;

  case 78:
#line 269 "asgn5_18CS30051.y"
                   { printf("assignment_operator -> -=\n"); }
#line 2209 "y.tab.c"
    break;

  case 79:
#line 273 "asgn5_18CS30051.y"
          { printf("expression -> assignment_expression\n"); }
#line 2215 "y.tab.c"
    break;

  case 80:
#line 275 "asgn5_18CS30051.y"
          { printf("expression -> expression , assignment_expression\n"); }
#line 2221 "y.tab.c"
    break;

  case 81:
#line 279 "asgn5_18CS30051.y"
                   { printf("constant_expression -> conditional_expression\n"); }
#line 2227 "y.tab.c"
    break;

  case 82:
#line 283 "asgn5_18CS30051.y"
           { printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
#line 2233 "y.tab.c"
    break;

  case 83:
#line 287 "asgn5_18CS30051.y"
                        { printf("init_declarator_list_opt -> init_declarator_list\n"); }
#line 2239 "y.tab.c"
    break;

  case 84:
#line 289 "asgn5_18CS30051.y"
                        { printf("init_declarator_list_opt -> %%empty\n"); }
#line 2245 "y.tab.c"
    break;

  case 85:
#line 293 "asgn5_18CS30051.y"
                      { printf("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); }
#line 2251 "y.tab.c"
    break;

  case 86:
#line 295 "asgn5_18CS30051.y"
                      { printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }
#line 2257 "y.tab.c"
    break;

  case 87:
#line 297 "asgn5_18CS30051.y"
                      { printf("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); }
#line 2263 "y.tab.c"
    break;

  case 88:
#line 299 "asgn5_18CS30051.y"
                      { printf("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); }
#line 2269 "y.tab.c"
    break;

  case 89:
#line 303 "asgn5_18CS30051.y"
                          { printf("declaration_specifiers_opt -> declaration_specifiers\n"); }
#line 2275 "y.tab.c"
    break;

  case 90:
#line 305 "asgn5_18CS30051.y"
                          { printf("declaration_specifiers_opt -> %%empty\n"); }
#line 2281 "y.tab.c"
    break;

  case 91:
#line 309 "asgn5_18CS30051.y"
                    { printf("init_declarator_list -> init_declarator\n"); }
#line 2287 "y.tab.c"
    break;

  case 92:
#line 311 "asgn5_18CS30051.y"
                    { printf("init_declarator_list -> init_declarator_list , init_declarator\n"); }
#line 2293 "y.tab.c"
    break;

  case 93:
#line 315 "asgn5_18CS30051.y"
               { printf("init_declarator -> declarator\n"); }
#line 2299 "y.tab.c"
    break;

  case 94:
#line 317 "asgn5_18CS30051.y"
               { printf("init_declarator -> declarator = initializer\n"); }
#line 2305 "y.tab.c"
    break;

  case 95:
#line 321 "asgn5_18CS30051.y"
                       { printf("storage_class_specifier -> EXTERN\n"); }
#line 2311 "y.tab.c"
    break;

  case 96:
#line 323 "asgn5_18CS30051.y"
                       { printf("storage_class_specifier -> STATIC\n"); }
#line 2317 "y.tab.c"
    break;

  case 97:
#line 327 "asgn5_18CS30051.y"
              { printf("type_specifier -> VOID\n"); }
#line 2323 "y.tab.c"
    break;

  case 98:
#line 329 "asgn5_18CS30051.y"
              { printf("type_specifier -> CHAR\n"); }
#line 2329 "y.tab.c"
    break;

  case 99:
#line 331 "asgn5_18CS30051.y"
              { printf("type_specifier -> SHORT\n"); }
#line 2335 "y.tab.c"
    break;

  case 100:
#line 333 "asgn5_18CS30051.y"
              { printf("type_specifier -> INT\n"); }
#line 2341 "y.tab.c"
    break;

  case 101:
#line 335 "asgn5_18CS30051.y"
              { printf("type_specifier -> LONG\n"); }
#line 2347 "y.tab.c"
    break;

  case 102:
#line 337 "asgn5_18CS30051.y"
              { printf("type_specifier -> FLOAT\n"); }
#line 2353 "y.tab.c"
    break;

  case 103:
#line 339 "asgn5_18CS30051.y"
              { printf("type_specifier -> DOUBLE\n"); }
#line 2359 "y.tab.c"
    break;

  case 104:
#line 343 "asgn5_18CS30051.y"
                        { printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }
#line 2365 "y.tab.c"
    break;

  case 105:
#line 345 "asgn5_18CS30051.y"
                        { printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); }
#line 2371 "y.tab.c"
    break;

  case 106:
#line 349 "asgn5_18CS30051.y"
                            { printf("specifier_qualifier_list_opt -> specifier_qualifier_list\n"); }
#line 2377 "y.tab.c"
    break;

  case 107:
#line 351 "asgn5_18CS30051.y"
                            { printf("specifier_qualifier_list_opt -> %%empty\n"); }
#line 2383 "y.tab.c"
    break;

  case 108:
#line 355 "asgn5_18CS30051.y"
              { printf("type_qualifier -> CONST\n"); }
#line 2389 "y.tab.c"
    break;

  case 109:
#line 357 "asgn5_18CS30051.y"
              { printf("type_qualifier -> RESTRICT\n"); }
#line 2395 "y.tab.c"
    break;

  case 110:
#line 359 "asgn5_18CS30051.y"
              { printf("type_qualifier -> VOLATILE\n"); }
#line 2401 "y.tab.c"
    break;

  case 111:
#line 363 "asgn5_18CS30051.y"
                  { printf("function_specifier -> INLINE\n"); }
#line 2407 "y.tab.c"
    break;

  case 112:
#line 367 "asgn5_18CS30051.y"
          { printf("pointer_opt direct_declarator\n"); }
#line 2413 "y.tab.c"
    break;

  case 113:
#line 371 "asgn5_18CS30051.y"
           { printf("pointer_opt -> pointer\n"); }
#line 2419 "y.tab.c"
    break;

  case 114:
#line 373 "asgn5_18CS30051.y"
           { printf("pointer_opt -> %%empty\n"); }
#line 2425 "y.tab.c"
    break;

  case 115:
#line 377 "asgn5_18CS30051.y"
                 { printf("direct_declarator -> IDENTIFIER\n"); }
#line 2431 "y.tab.c"
    break;

  case 116:
#line 379 "asgn5_18CS30051.y"
                 { printf("direct_declarator -> ( declarator )\n"); }
#line 2437 "y.tab.c"
    break;

  case 117:
#line 381 "asgn5_18CS30051.y"
                 { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]\n"); }
#line 2443 "y.tab.c"
    break;

  case 118:
#line 383 "asgn5_18CS30051.y"
                 { printf("direct_declarator -> direct_declarator [ STATIC type_qualifier_list_opt assignment_expression ]\n"); }
#line 2449 "y.tab.c"
    break;

  case 119:
#line 385 "asgn5_18CS30051.y"
                 { printf("direct_declarator -> direct_declarator [ type_qualifier_list STATIC assignment_expression ]\n"); }
#line 2455 "y.tab.c"
    break;

  case 120:
#line 387 "asgn5_18CS30051.y"
                 { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]\n"); }
#line 2461 "y.tab.c"
    break;

  case 121:
#line 389 "asgn5_18CS30051.y"
                 { printf("direct_declarator -> direct_declarator ( parameter_type_list )\n"); }
#line 2467 "y.tab.c"
    break;

  case 122:
#line 391 "asgn5_18CS30051.y"
                 { printf("direct_declarator -> direct_declarator ( identifier_list_opt )\n"); }
#line 2473 "y.tab.c"
    break;

  case 123:
#line 395 "asgn5_18CS30051.y"
                         { printf("assignment_expression_opt -> assignment_expression\n"); }
#line 2479 "y.tab.c"
    break;

  case 124:
#line 397 "asgn5_18CS30051.y"
                         { printf("assignment_expression_opt -> %%empty\n"); }
#line 2485 "y.tab.c"
    break;

  case 125:
#line 401 "asgn5_18CS30051.y"
                   { printf("identifier_list_opt -> identifier_list\n"); }
#line 2491 "y.tab.c"
    break;

  case 126:
#line 403 "asgn5_18CS30051.y"
                   { printf("identifier_list_opt -> %%empty\n"); }
#line 2497 "y.tab.c"
    break;

  case 127:
#line 407 "asgn5_18CS30051.y"
       { printf("pointer -> * type_qualifier_list_opt\n"); }
#line 2503 "y.tab.c"
    break;

  case 128:
#line 409 "asgn5_18CS30051.y"
       { printf("pointer -> * type_qualifier_list_opt pointer\n"); }
#line 2509 "y.tab.c"
    break;

  case 129:
#line 413 "asgn5_18CS30051.y"
                       { printf("type_qualifier_list_opt -> type_qualifier_list\n"); }
#line 2515 "y.tab.c"
    break;

  case 130:
#line 415 "asgn5_18CS30051.y"
                       { printf("type_qualifier_list_opt -> %%empty\n"); }
#line 2521 "y.tab.c"
    break;

  case 131:
#line 419 "asgn5_18CS30051.y"
                   { printf("type_qualifier_list -> type_qualifier\n"); }
#line 2527 "y.tab.c"
    break;

  case 132:
#line 421 "asgn5_18CS30051.y"
                   { printf("type_qualifier_list -> type_qualifier_list type_qualifier\n"); }
#line 2533 "y.tab.c"
    break;

  case 133:
#line 425 "asgn5_18CS30051.y"
                   { printf("parameter_type_list -> parameter_list\n"); }
#line 2539 "y.tab.c"
    break;

  case 134:
#line 427 "asgn5_18CS30051.y"
                   { printf("parameter_type_list -> parameter_list , ...\n"); }
#line 2545 "y.tab.c"
    break;

  case 135:
#line 431 "asgn5_18CS30051.y"
              { printf("parameter_list -> parameter_declaration\n"); }
#line 2551 "y.tab.c"
    break;

  case 136:
#line 433 "asgn5_18CS30051.y"
              { printf("parameter_list -> parameter_list , parameter_declaration\n"); }
#line 2557 "y.tab.c"
    break;

  case 137:
#line 437 "asgn5_18CS30051.y"
                     { printf("parameter_declaration -> declaration_specifiers declarator\n"); }
#line 2563 "y.tab.c"
    break;

  case 138:
#line 439 "asgn5_18CS30051.y"
                     { printf("parameter_declaration -> declaration_specifiers\n"); }
#line 2569 "y.tab.c"
    break;

  case 139:
#line 443 "asgn5_18CS30051.y"
               { printf("identifier_list -> IDENTIFIER\n"); }
#line 2575 "y.tab.c"
    break;

  case 140:
#line 445 "asgn5_18CS30051.y"
               { printf("identifier_list -> identifier_list , IDENTIFIER\n"); }
#line 2581 "y.tab.c"
    break;

  case 141:
#line 449 "asgn5_18CS30051.y"
         { printf("type_name -> specifier_qualifier_list\n"); }
#line 2587 "y.tab.c"
    break;

  case 142:
#line 453 "asgn5_18CS30051.y"
           { printf("initializer -> assignment_expression\n"); }
#line 2593 "y.tab.c"
    break;

  case 143:
#line 455 "asgn5_18CS30051.y"
           { printf("initializer -> { initializer_list }\n"); }
#line 2599 "y.tab.c"
    break;

  case 144:
#line 457 "asgn5_18CS30051.y"
           { printf("initializer -> { initializer_list , }\n"); }
#line 2605 "y.tab.c"
    break;

  case 145:
#line 461 "asgn5_18CS30051.y"
                { printf("initializer_list -> designation_opt initializer\n"); }
#line 2611 "y.tab.c"
    break;

  case 146:
#line 463 "asgn5_18CS30051.y"
                { printf("initializer_list -> initializer_list , designation_opt initializer\n"); }
#line 2617 "y.tab.c"
    break;

  case 147:
#line 467 "asgn5_18CS30051.y"
               { printf("designation_opt -> designation\n"); }
#line 2623 "y.tab.c"
    break;

  case 148:
#line 469 "asgn5_18CS30051.y"
               { printf("designation_opt -> %%empty\n"); }
#line 2629 "y.tab.c"
    break;

  case 149:
#line 473 "asgn5_18CS30051.y"
           { printf("designation -> designator_list =\n"); }
#line 2635 "y.tab.c"
    break;

  case 150:
#line 477 "asgn5_18CS30051.y"
               { printf("designator_list -> designator\n"); }
#line 2641 "y.tab.c"
    break;

  case 151:
#line 479 "asgn5_18CS30051.y"
               { printf("designator_list -> designator_list designator\n"); }
#line 2647 "y.tab.c"
    break;

  case 152:
#line 483 "asgn5_18CS30051.y"
          { printf("designator -> [ constant_expression ]\n"); }
#line 2653 "y.tab.c"
    break;

  case 153:
#line 485 "asgn5_18CS30051.y"
          { printf("designator -> . IDENTIFIER\n"); }
#line 2659 "y.tab.c"
    break;

  case 154:
#line 489 "asgn5_18CS30051.y"
         { printf("statement -> labeled_statement\n"); }
#line 2665 "y.tab.c"
    break;

  case 155:
#line 491 "asgn5_18CS30051.y"
         { printf("statement -> compound_statement\n"); }
#line 2671 "y.tab.c"
    break;

  case 156:
#line 493 "asgn5_18CS30051.y"
         { printf("statement -> expression_statement\n"); }
#line 2677 "y.tab.c"
    break;

  case 157:
#line 495 "asgn5_18CS30051.y"
         { printf("statement -> selection_statement\n"); }
#line 2683 "y.tab.c"
    break;

  case 158:
#line 497 "asgn5_18CS30051.y"
         { printf("statement -> iteration_statement\n"); }
#line 2689 "y.tab.c"
    break;

  case 159:
#line 499 "asgn5_18CS30051.y"
         { printf("statement -> jump_statement\n"); }
#line 2695 "y.tab.c"
    break;

  case 160:
#line 503 "asgn5_18CS30051.y"
                 { printf("labeled_statement -> IDENTIFIER : statement\n"); }
#line 2701 "y.tab.c"
    break;

  case 161:
#line 505 "asgn5_18CS30051.y"
                 { printf("labeled_statement -> CASE constant_expression : statement\n"); }
#line 2707 "y.tab.c"
    break;

  case 162:
#line 507 "asgn5_18CS30051.y"
                 { printf("labeled_statement -> DEFAULT : statement\n"); }
#line 2713 "y.tab.c"
    break;

  case 163:
#line 511 "asgn5_18CS30051.y"
                  { printf("compound_statement -> { block_item_list_opt }\n"); }
#line 2719 "y.tab.c"
    break;

  case 164:
#line 515 "asgn5_18CS30051.y"
                   { printf("block_item_list_opt -> block_item_list\n"); }
#line 2725 "y.tab.c"
    break;

  case 165:
#line 517 "asgn5_18CS30051.y"
                   { printf("block_item_list_opt -> %%empty\n"); }
#line 2731 "y.tab.c"
    break;

  case 166:
#line 521 "asgn5_18CS30051.y"
               { printf("block_item_list -> block_item\n"); }
#line 2737 "y.tab.c"
    break;

  case 167:
#line 523 "asgn5_18CS30051.y"
               { printf("block_item_list -> block_item_list block_item\n"); }
#line 2743 "y.tab.c"
    break;

  case 168:
#line 527 "asgn5_18CS30051.y"
          { printf("block_item -> declaration\n"); }
#line 2749 "y.tab.c"
    break;

  case 169:
#line 529 "asgn5_18CS30051.y"
          { printf("block_item -> statement\n"); }
#line 2755 "y.tab.c"
    break;

  case 170:
#line 533 "asgn5_18CS30051.y"
                    { printf("expression_statement -> expression_opt ;\n"); }
#line 2761 "y.tab.c"
    break;

  case 171:
#line 537 "asgn5_18CS30051.y"
              { printf("expression_opt -> expression\n"); }
#line 2767 "y.tab.c"
    break;

  case 172:
#line 539 "asgn5_18CS30051.y"
              { printf("expression_opt -> %%empty\n"); }
#line 2773 "y.tab.c"
    break;

  case 173:
#line 543 "asgn5_18CS30051.y"
                   { printf("selection_statement -> IF ( expression ) statement\n"); }
#line 2779 "y.tab.c"
    break;

  case 174:
#line 545 "asgn5_18CS30051.y"
                   { printf("selection_statement -> IF ( expression ) statement ELSE statement\n"); }
#line 2785 "y.tab.c"
    break;

  case 175:
#line 547 "asgn5_18CS30051.y"
                   { printf("selection_statement -> SWITCH ( expression ) statement\n"); }
#line 2791 "y.tab.c"
    break;

  case 176:
#line 551 "asgn5_18CS30051.y"
                   { printf("iteration_statement -> WHILE ( expression ) statement\n"); }
#line 2797 "y.tab.c"
    break;

  case 177:
#line 553 "asgn5_18CS30051.y"
                   { printf("iteration_statement -> DO statement WHILE ( expression ) ;\n"); }
#line 2803 "y.tab.c"
    break;

  case 178:
#line 555 "asgn5_18CS30051.y"
                   { printf("iteration_statement -> FOR ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }
#line 2809 "y.tab.c"
    break;

  case 179:
#line 557 "asgn5_18CS30051.y"
                   { printf("iteration_statement -> FOR ( declaration expression_opt ; expression_opt ) statement\n"); }
#line 2815 "y.tab.c"
    break;

  case 180:
#line 561 "asgn5_18CS30051.y"
              { printf("jump_statement -> GOTO IDENTIFIER ;\n"); }
#line 2821 "y.tab.c"
    break;

  case 181:
#line 563 "asgn5_18CS30051.y"
              { printf("jump_statement -> CONTINUE ;\n"); }
#line 2827 "y.tab.c"
    break;

  case 182:
#line 565 "asgn5_18CS30051.y"
              { printf("jump_statement -> BREAK ;\n"); }
#line 2833 "y.tab.c"
    break;

  case 183:
#line 567 "asgn5_18CS30051.y"
              { printf("jump_statement -> RETURN expression_opt ;\n"); }
#line 2839 "y.tab.c"
    break;

  case 184:
#line 571 "asgn5_18CS30051.y"
                { printf("translation_unit -> external_declaration\n"); }
#line 2845 "y.tab.c"
    break;

  case 185:
#line 573 "asgn5_18CS30051.y"
                { printf("translation_unit -> translation_unit external_declaration\n"); }
#line 2851 "y.tab.c"
    break;

  case 186:
#line 577 "asgn5_18CS30051.y"
                    { printf("external_declaration -> function_definition\n"); }
#line 2857 "y.tab.c"
    break;

  case 187:
#line 579 "asgn5_18CS30051.y"
                    { printf("external_declaration -> declaration\n"); }
#line 2863 "y.tab.c"
    break;

  case 188:
#line 583 "asgn5_18CS30051.y"
                   { printf("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); }
#line 2869 "y.tab.c"
    break;

  case 189:
#line 587 "asgn5_18CS30051.y"
                    { printf("declaration_list_opt -> declaration_list\n"); }
#line 2875 "y.tab.c"
    break;

  case 190:
#line 589 "asgn5_18CS30051.y"
                    { printf("declaration_list_opt -> %%empty\n"); }
#line 2881 "y.tab.c"
    break;

  case 191:
#line 593 "asgn5_18CS30051.y"
                { printf("declaration_list -> declaration\n"); }
#line 2887 "y.tab.c"
    break;

  case 192:
#line 595 "asgn5_18CS30051.y"
                { printf("declaration_list -> declaration_list declaration\n"); }
#line 2893 "y.tab.c"
    break;


#line 2897 "y.tab.c"

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
#line 599 "asgn5_18CS30051.y"


void yyerror(const char *s) {
	printf ("ERROR in line %d: %s -> %s\n", line, s, yytext);
}
