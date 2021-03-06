/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         pj_wkt2_parse
#define yylex           pj_wkt2_lex
#define yyerror         pj_wkt2_error
#define yydebug         pj_wkt2_debug
#define yynerrs         pj_wkt2_nerrs


/* Copy the first part of user declarations.  */


/******************************************************************************
 * Project:  PROJ
 * Purpose:  WKT2 parser grammar
 * Author:   Even Rouault, <even.rouault at spatialys.com>
 *
 ******************************************************************************
 * Copyright (c) 2018 Even Rouault, <even.rouault at spatialys.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 ****************************************************************************/

#include "wkt2_parser.h"




# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "wkt2_generated_parser.h".  */
#ifndef YY_PJ_WKT2_SRC_WKT2_GENERATED_PARSER_H_INCLUDED
# define YY_PJ_WKT2_SRC_WKT2_GENERATED_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int pj_wkt2_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
    T_PROJECTION = 258,
    T_DATUM = 259,
    T_SPHEROID = 260,
    T_PRIMEM = 261,
    T_UNIT = 262,
    T_AXIS = 263,
    T_PARAMETER = 264,
    T_GEODCRS = 265,
    T_LENGTHUNIT = 266,
    T_ANGLEUNIT = 267,
    T_SCALEUNIT = 268,
    T_TIMEUNIT = 269,
    T_ELLIPSOID = 270,
    T_CS = 271,
    T_ID = 272,
    T_PROJCRS = 273,
    T_BASEGEODCRS = 274,
    T_MERIDIAN = 275,
    T_BEARING = 276,
    T_ORDER = 277,
    T_ANCHOR = 278,
    T_CONVERSION = 279,
    T_METHOD = 280,
    T_REMARK = 281,
    T_GEOGCRS = 282,
    T_BASEGEOGCRS = 283,
    T_SCOPE = 284,
    T_AREA = 285,
    T_BBOX = 286,
    T_CITATION = 287,
    T_URI = 288,
    T_VERTCRS = 289,
    T_VDATUM = 290,
    T_GEOIDMODEL = 291,
    T_COMPOUNDCRS = 292,
    T_PARAMETERFILE = 293,
    T_COORDINATEOPERATION = 294,
    T_SOURCECRS = 295,
    T_TARGETCRS = 296,
    T_INTERPOLATIONCRS = 297,
    T_OPERATIONACCURACY = 298,
    T_CONCATENATEDOPERATION = 299,
    T_STEP = 300,
    T_BOUNDCRS = 301,
    T_ABRIDGEDTRANSFORMATION = 302,
    T_DERIVINGCONVERSION = 303,
    T_TDATUM = 304,
    T_CALENDAR = 305,
    T_TIMEORIGIN = 306,
    T_TIMECRS = 307,
    T_VERTICALEXTENT = 308,
    T_TIMEEXTENT = 309,
    T_USAGE = 310,
    T_DYNAMIC = 311,
    T_FRAMEEPOCH = 312,
    T_MODEL = 313,
    T_VELOCITYGRID = 314,
    T_ENSEMBLE = 315,
    T_MEMBER = 316,
    T_ENSEMBLEACCURACY = 317,
    T_DERIVEDPROJCRS = 318,
    T_BASEPROJCRS = 319,
    T_EDATUM = 320,
    T_ENGCRS = 321,
    T_PDATUM = 322,
    T_PARAMETRICCRS = 323,
    T_PARAMETRICUNIT = 324,
    T_BASEVERTCRS = 325,
    T_BASEENGCRS = 326,
    T_BASEPARAMCRS = 327,
    T_BASETIMECRS = 328,
    T_EPOCH = 329,
    T_COORDEPOCH = 330,
    T_COORDINATEMETADATA = 331,
    T_POINTMOTIONOPERATION = 332,
    T_GEODETICCRS = 333,
    T_GEODETICDATUM = 334,
    T_PROJECTEDCRS = 335,
    T_PRIMEMERIDIAN = 336,
    T_GEOGRAPHICCRS = 337,
    T_TRF = 338,
    T_VERTICALCRS = 339,
    T_VERTICALDATUM = 340,
    T_VRF = 341,
    T_TIMEDATUM = 342,
    T_TEMPORALQUANTITY = 343,
    T_ENGINEERINGDATUM = 344,
    T_ENGINEERINGCRS = 345,
    T_PARAMETRICDATUM = 346,
    T_AFFINE = 347,
    T_CARTESIAN = 348,
    T_CYLINDRICAL = 349,
    T_ELLIPSOIDAL = 350,
    T_LINEAR = 351,
    T_PARAMETRIC = 352,
    T_POLAR = 353,
    T_SPHERICAL = 354,
    T_VERTICAL = 355,
    T_TEMPORAL = 356,
    T_TEMPORALCOUNT = 357,
    T_TEMPORALMEASURE = 358,
    T_ORDINAL = 359,
    T_TEMPORALDATETIME = 360,
    T_NORTH = 361,
    T_NORTHNORTHEAST = 362,
    T_NORTHEAST = 363,
    T_EASTNORTHEAST = 364,
    T_EAST = 365,
    T_EASTSOUTHEAST = 366,
    T_SOUTHEAST = 367,
    T_SOUTHSOUTHEAST = 368,
    T_SOUTH = 369,
    T_SOUTHSOUTHWEST = 370,
    T_SOUTHWEST = 371,
    T_WESTSOUTHWEST = 372,
    T_WEST = 373,
    T_WESTNORTHWEST = 374,
    T_NORTHWEST = 375,
    T_NORTHNORTHWEST = 376,
    T_UP = 377,
    T_DOWN = 378,
    T_GEOCENTRICX = 379,
    T_GEOCENTRICY = 380,
    T_GEOCENTRICZ = 381,
    T_COLUMNPOSITIVE = 382,
    T_COLUMNNEGATIVE = 383,
    T_ROWPOSITIVE = 384,
    T_ROWNEGATIVE = 385,
    T_DISPLAYRIGHT = 386,
    T_DISPLAYLEFT = 387,
    T_DISPLAYUP = 388,
    T_DISPLAYDOWN = 389,
    T_FORWARD = 390,
    T_AFT = 391,
    T_PORT = 392,
    T_STARBOARD = 393,
    T_CLOCKWISE = 394,
    T_COUNTERCLOCKWISE = 395,
    T_TOWARDS = 396,
    T_AWAYFROM = 397,
    T_FUTURE = 398,
    T_PAST = 399,
    T_UNSPECIFIED = 400,
    T_STRING = 401,
    T_UNSIGNED_INTEGER_DIFFERENT_ONE_TWO_THREE = 402
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int pj_wkt2_parse (pj_wkt2_parse_context *context);

#endif /* !YY_PJ_WKT2_SRC_WKT2_GENERATED_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  99
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3573

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  324
/* YYNRULES -- Number of rules.  */
#define YYNRULES  654
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1347

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   402

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     159,   161,     2,   153,   162,   154,   148,     2,     2,   150,
     151,   152,     2,     2,     2,     2,     2,     2,   155,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   149,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   156,     2,     2,     2,     2,     2,
     157,   158,     2,   160,     2,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   206,   206,   206,   206,   206,   206,   206,   207,   207,
     207,   208,   211,   211,   212,   212,   212,   213,   216,   216,
     216,   216,   217,   217,   217,   217,   218,   218,   218,   219,
     219,   219,   223,   227,   227,   229,   231,   233,   233,   235,
     235,   237,   239,   241,   243,   245,   245,   247,   247,   249,
     249,   249,   249,   251,   251,   255,   257,   261,   262,   263,
     265,   265,   267,   269,   271,   273,   277,   278,   281,   282,
     284,   286,   288,   291,   292,   293,   295,   297,   299,   299,
     301,   304,   305,   307,   307,   312,   312,   314,   314,   316,
     318,   320,   324,   325,   328,   329,   330,   332,   332,   333,
     336,   337,   341,   342,   343,   347,   348,   349,   350,   352,
     356,   358,   361,   363,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   401,   403,   405,   409,   414,   416,
     418,   420,   422,   426,   431,   432,   434,   436,   438,   442,
     446,   448,   448,   450,   450,   455,   460,   461,   462,   463,
     464,   465,   466,   468,   470,   472,   472,   474,   474,   476,
     478,   480,   482,   484,   486,   490,   492,   496,   496,   499,
     502,   507,   507,   507,   507,   507,   510,   515,   515,   515,
     515,   518,   522,   523,   525,   541,   545,   546,   548,   548,
     550,   550,   556,   556,   558,   560,   567,   567,   567,   569,
     576,   577,   578,   579,   581,   588,   595,   596,   597,   599,
     601,   601,   601,   601,   601,   601,   601,   601,   601,   604,
     604,   604,   606,   606,   608,   608,   608,   610,   615,   621,
     626,   629,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   643,   644,   645,   646,   647,   648,   649,   650,   653,
     654,   655,   656,   657,   658,   659,   660,   663,   664,   667,
     668,   669,   670,   675,   676,   677,   678,   679,   680,   681,
     682,   683,   686,   687,   688,   689,   692,   693,   694,   695,
     698,   699,   702,   703,   708,   709,   712,   713,   714,   715,
     718,   719,   720,   721,   722,   723,   724,   725,   726,   727,
     728,   729,   730,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   755,   758,   760,   762,
     764,   766,   768,   784,   784,   786,   794,   795,   797,   798,
     800,   808,   809,   811,   813,   815,   820,   821,   823,   825,
     827,   829,   831,   833,   835,   840,   844,   846,   849,   852,
     853,   854,   856,   857,   859,   864,   865,   867,   867,   869,
     873,   873,   873,   873,   875,   883,   891,   900,   910,   911,
     913,   915,   915,   917,   917,   920,   921,   925,   931,   932,
     933,   935,   935,   937,   939,   941,   945,   950,   950,   952,
     955,   956,   960,   965,   965,   965,   967,   969,   970,   971,
     972,   974,   977,   979,   983,   989,   989,   993,   993,   995,
    1000,  1001,  1002,  1003,  1005,  1011,  1011,  1013,  1015,  1019,
    1027,  1028,  1030,  1032,  1034,  1038,  1038,  1040,  1042,  1047,
    1048,  1050,  1052,  1054,  1056,  1060,  1060,  1062,  1068,  1075,
    1075,  1078,  1085,  1086,  1087,  1088,  1089,  1091,  1095,  1097,
    1099,  1099,  1103,  1108,  1108,  1108,  1112,  1117,  1117,  1119,
    1123,  1123,  1127,  1132,  1134,  1138,  1138,  1142,  1147,  1149,
    1153,  1154,  1155,  1156,  1157,  1159,  1159,  1161,  1164,  1166,
    1166,  1168,  1170,  1172,  1176,  1183,  1183,  1185,  1186,  1187,
    1188,  1190,  1192,  1196,  1201,  1203,  1206,  1211,  1215,  1221,
    1221,  1221,  1221,  1221,  1221,  1225,  1230,  1232,  1238,  1245,
    1255,  1261,  1263,  1265,  1270,  1275,  1281,  1281,  1283,  1286,
    1290,  1295,  1301,  1304,  1309,  1315,  1318,  1323,  1329,  1332,
    1337,  1343,  1344,  1345,  1346,  1347,  1349,  1351,  1353,  1356,
    1356,  1356,  1356,  1358,  1358,  1363,  1366,  1366,  1369,  1370,
    1371,  1373,  1377,  1378,  1380,  1382,  1382,  1383,  1383,  1384,
    1384,  1384,  1385,  1385,  1386,  1386,  1387,  1387,  1388,  1388,
    1390,  1390,  1391,  1391,  1392,  1392,  1393,  1393,  1397,  1404,
    1405,  1406,  1407,  1408,  1409,  1410,  1412,  1414,  1416,  1418,
    1420,  1422,  1424,  1426,  1428,  1430,  1435,  1442,  1443,  1444,
    1445,  1446,  1448,  1453,  1461,  1461,  1461,  1461,  1463,  1464,
    1465,  1466,  1468,  1470,  1475,  1481,  1483,  1490,  1490,  1492,
    1493,  1494,  1495,  1497,  1499
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of string\"", "error", "$undefined", "\"PROJECTION\"",
  "\"DATUM\"", "\"SPHEROID\"", "\"PRIMEM\"", "\"UNIT\"", "\"AXIS\"",
  "\"PARAMETER\"", "\"GEODCRS\"", "\"LENGTHUNIT\"", "\"ANGLEUNIT\"",
  "\"SCALEUNIT\"", "\"TIMEUNIT\"", "\"ELLIPSOID\"", "\"CS\"", "\"ID\"",
  "\"PROJCRS\"", "\"BASEGEODCRS\"", "\"MERIDIAN\"", "\"BEARING\"",
  "\"ORDER\"", "\"ANCHOR\"", "\"CONVERSION\"", "\"METHOD\"", "\"REMARK\"",
  "\"GEOGCRS\"", "\"BASEGEOGCRS\"", "\"SCOPE\"", "\"AREA\"", "\"BBOX\"",
  "\"CITATION\"", "\"URI\"", "\"VERTCRS\"", "\"VDATUM\"", "\"GEOIDMODEL\"",
  "\"COMPOUNDCRS\"", "\"PARAMETERFILE\"", "\"COORDINATEOPERATION\"",
  "\"SOURCECRS\"", "\"TARGETCRS\"", "\"INTERPOLATIONCRS\"",
  "\"OPERATIONACCURACY\"", "\"CONCATENATEDOPERATION\"", "\"STEP\"",
  "\"BOUNDCRS\"", "\"ABRIDGEDTRANSFORMATION\"", "\"DERIVINGCONVERSION\"",
  "\"TDATUM\"", "\"CALENDAR\"", "\"TIMEORIGIN\"", "\"TIMECRS\"",
  "\"VERTICALEXTENT\"", "\"TIMEEXTENT\"", "\"USAGE\"", "\"DYNAMIC\"",
  "\"FRAMEEPOCH\"", "\"MODEL\"", "\"VELOCITYGRID\"", "\"ENSEMBLE\"",
  "\"MEMBER\"", "\"ENSEMBLEACCURACY\"", "\"DERIVEDPROJCRS\"",
  "\"BASEPROJCRS\"", "\"EDATUM\"", "\"ENGCRS\"", "\"PDATUM\"",
  "\"PARAMETRICCRS\"", "\"PARAMETRICUNIT\"", "\"BASEVERTCRS\"",
  "\"BASEENGCRS\"", "\"BASEPARAMCRS\"", "\"BASETIMECRS\"", "\"EPOCH\"",
  "\"COORDEPOCH\"", "\"COORDINATEMETADATA\"", "\"POINTMOTIONOPERATION\"",
  "\"GEODETICCRS\"", "\"GEODETICDATUM\"", "\"PROJECTEDCRS\"",
  "\"PRIMEMERIDIAN\"", "\"GEOGRAPHICCRS\"", "\"TRF\"", "\"VERTICALCRS\"",
  "\"VERTICALDATUM\"", "\"VRF\"", "\"TIMEDATUM\"", "\"TEMPORALQUANTITY\"",
  "\"ENGINEERINGDATUM\"", "\"ENGINEERINGCRS\"", "\"PARAMETRICDATUM\"",
  "\"affine\"", "\"Cartesian\"", "\"cylindrical\"", "\"ellipsoidal\"",
  "\"linear\"", "\"parametric\"", "\"polar\"", "\"spherical\"",
  "\"vertical\"", "\"temporal\"", "\"temporalCount\"",
  "\"temporalMeasure\"", "\"ordinal\"", "\"temporalDateTime\"",
  "\"north\"", "\"northNorthEast\"", "\"northEast\"", "\"eastNorthEast\"",
  "\"east\"", "\"eastSouthEast\"", "\"southEast\"", "\"southSouthEast\"",
  "\"south\"", "\"southSouthWest\"", "\"southWest\"", "\"westSouthWest\"",
  "\"west\"", "\"westNorthWest\"", "\"northWest\"", "\"northNorthWest\"",
  "\"up\"", "\"down\"", "\"geocentricX\"", "\"geocentricY\"",
  "\"geocentricZ\"", "\"columnPositive\"", "\"columnNegative\"",
  "\"rowPositive\"", "\"rowNegative\"", "\"displayRight\"",
  "\"displayLeft\"", "\"displayUp\"", "\"displayDown\"", "\"forward\"",
  "\"aft\"", "\"port\"", "\"starboard\"", "\"clockwise\"",
  "\"counterClockwise\"", "\"towards\"", "\"awayFrom\"", "\"future\"",
  "\"part\"", "\"unspecified\"", "\"string\"", "\"unsigned integer\"",
  "'.'", "'E'", "'1'", "'2'", "'3'", "'+'", "'-'", "':'", "'T'", "'Z'",
  "'['", "'('", "']'", "')'", "','", "$accept", "input", "datum", "crs",
  "period", "number", "signed_numeric_literal_with_sign",
  "signed_numeric_literal", "unsigned_numeric_literal", "opt_sign",
  "approximate_numeric_literal", "mantissa", "exponent", "signed_integer",
  "exact_numeric_literal", "opt_period_unsigned_integer",
  "unsigned_integer", "sign", "colon", "hyphen", "datetime",
  "opt_24_hour_clock", "year", "month", "day", "_24_hour_clock",
  "opt_colon_minute_colon_second_time_zone_designator",
  "opt_colon_second_time_zone_designator", "time_designator", "hour",
  "minute", "second_time_zone_designator", "seconds_integer",
  "seconds_fraction", "time_zone_designator", "utc_designator",
  "local_time_zone_designator", "opt_colon_minute", "left_delimiter",
  "right_delimiter", "wkt_separator", "quoted_latin_text",
  "quoted_unicode_text", "opt_separator_scope_extent_identifier_remark",
  "no_opt_separator_scope_extent_identifier_remark",
  "opt_identifier_list_remark",
  "scope_extent_opt_identifier_list_opt_remark",
  "scope_extent_opt_identifier_list_remark",
  "usage_list_opt_identifier_list_remark", "usage", "usage_keyword",
  "scope", "scope_keyword", "scope_text_description", "extent",
  "extent_opt_identifier_list_remark", "area_description",
  "area_description_keyword", "area_text_description",
  "geographic_bounding_box", "geographic_bounding_box_keyword",
  "lower_left_latitude", "lower_left_longitude", "upper_right_latitude",
  "upper_right_longitude", "vertical_extent", "opt_separator_length_unit",
  "vertical_extent_keyword", "vertical_extent_minimum_height",
  "vertical_extent_maximum_height", "temporal_extent",
  "temporal_extent_keyword", "temporal_extent_start",
  "temporal_extent_end", "identifier",
  "opt_version_authority_citation_uri", "identifier_keyword",
  "authority_name", "authority_unique_identifier", "version",
  "authority_citation", "citation_keyword", "citation", "id_uri",
  "uri_keyword", "uri", "remark", "remark_keyword", "unit", "spatial_unit",
  "angle_or_length_or_parametric_or_scale_unit",
  "angle_or_length_or_parametric_or_scale_unit_keyword",
  "angle_or_length_or_scale_unit", "angle_or_length_or_scale_unit_keyword",
  "angle_unit", "opt_separator_identifier_list", "length_unit",
  "time_unit", "opt_separator_conversion_factor_identifier_list",
  "angle_unit_keyword", "length_unit_keyword", "time_unit_keyword",
  "unit_name", "conversion_factor",
  "coordinate_system_scope_extent_identifier_remark",
  "spatial_cs_scope_extent_identifier_remark",
  "opt_separator_spatial_axis_list_opt_separator_cs_unit_scope_extent_identifier_remark",
  "temporalcountmeasure_cs_scope_extent_identifier_remark",
  "ordinaldatetime_cs_scope_extent_identifier_remark",
  "opt_separator_ordinaldatetime_axis_list_scope_extent_identifier_remark",
  "cs_keyword", "spatial_cs_type", "temporalcountmeasure_cs_type",
  "ordinaldatetime_cs_type", "dimension", "spatial_axis",
  "temporalcountmeasure_axis", "ordinaldatetime_axis", "axis_keyword",
  "axis_name_abbrev",
  "axis_direction_opt_axis_order_spatial_unit_identifier_list",
  "north_south_options_spatial_unit",
  "clockwise_counter_clockwise_options_spatial_unit",
  "axis_direction_except_n_s_cw_ccw_opt_axis_spatial_unit_identifier_list",
  "axis_direction_except_n_s_cw_ccw_opt_axis_spatial_unit_identifier_list_options",
  "axis_direction_opt_axis_order_identifier_list", "north_south_options",
  "clockwise_counter_clockwise_options",
  "axis_direction_except_n_s_cw_ccw_opt_axis_identifier_list",
  "axis_direction_except_n_s_cw_ccw_opt_axis_identifier_list_options",
  "opt_separator_axis_time_unit_identifier_list",
  "axis_direction_except_n_s_cw_ccw_opt_axis_time_unit_identifier_list_options",
  "axis_direction_except_n_s_cw_ccw", "meridian", "meridian_keyword",
  "bearing", "bearing_keyword", "axis_order", "axis_order_keyword",
  "cs_unit", "datum_ensemble", "geodetic_datum_ensemble_without_pm",
  "datum_ensemble_member_list_ellipsoid_accuracy_identifier_list",
  "opt_separator_datum_ensemble_identifier_list",
  "vertical_datum_ensemble",
  "datum_ensemble_member_list_accuracy_identifier_list",
  "datum_ensemble_keyword", "datum_ensemble_name", "datum_ensemble_member",
  "opt_datum_ensemble_member_identifier_list",
  "datum_ensemble_member_keyword", "datum_ensemble_member_name",
  "datum_ensemble_member_identifier", "datum_ensemble_accuracy",
  "datum_ensemble_accuracy_keyword", "accuracy",
  "datum_ensemble_identifier", "dynamic_crs", "dynamic_crs_keyword",
  "frame_reference_epoch", "frame_reference_epoch_keyword",
  "reference_epoch", "opt_separator_deformation_model_id",
  "deformation_model_id", "opt_separator_identifier",
  "deformation_model_id_keyword", "deformation_model_name", "geodetic_crs",
  "static_geodetic_crs", "static_geographic_crs", "dynamic_geodetic_crs",
  "dynamic_geographic_crs",
  "opt_prime_meridian_coordinate_system_scope_extent_identifier_remark",
  "crs_name", "geodetic_crs_keyword", "geographic_crs_keyword",
  "geodetic_reference_frame_or_geodetic_datum_ensemble_without_pm",
  "ellipsoid", "opt_separator_length_unit_identifier_list",
  "ellipsoid_keyword", "ellipsoid_name", "semi_major_axis",
  "inverse_flattening", "prime_meridian", "prime_meridian_keyword",
  "prime_meridian_name", "irm_longitude_opt_separator_identifier_list",
  "geodetic_reference_frame_without_pm",
  "geodetic_reference_frame_keyword", "datum_name",
  "opt_separator_datum_anchor_identifier_list", "datum_anchor",
  "datum_anchor_keyword", "datum_anchor_description", "projected_crs",
  "projected_crs_keyword", "base_geodetic_crs", "base_static_geodetic_crs",
  "opt_separator_pm_ellipsoidal_cs_unit", "base_dynamic_geodetic_crs",
  "base_geodetic_crs_keyword", "base_crs_name", "ellipsoidal_cs_unit",
  "map_projection", "parameter_list_identifier_list",
  "map_projection_keyword", "map_projection_name", "map_projection_method",
  "map_projection_method_keyword", "map_projection_method_name",
  "map_projection_parameter", "opt_separator_param_unit_identifier_list",
  "parameter_keyword", "parameter_name", "parameter_value",
  "map_projection_parameter_unit", "vertical_crs", "static_vertical_crs",
  "dynamic_vertical_crs",
  "vertical_reference_frame_or_vertical_datum_ensemble",
  "vertical_cs_opt_geoid_model_id_scope_extent_identifier_remark",
  "opt_separator_cs_unit_opt_geoid_model_id_scope_extent_identifier_remark",
  "geoid_model_id", "geoid_model_keyword", "geoid_model_name",
  "vertical_crs_keyword", "vertical_reference_frame",
  "vertical_reference_frame_keyword", "engineering_crs",
  "engineering_crs_keyword", "engineering_datum",
  "engineering_datum_keyword", "parametric_crs", "parametric_crs_keyword",
  "parametric_datum", "parametric_datum_keyword", "temporal_crs",
  "temporal_crs_keyword", "temporal_datum",
  "opt_separator_temporal_datum_end", "temporal_datum_keyword",
  "temporal_origin", "temporal_origin_keyword",
  "temporal_origin_description", "calendar", "calendar_keyword",
  "calendar_identifier", "deriving_conversion",
  "parameter_or_parameter_file", "opt_separator_deriving_conversion_end",
  "deriving_conversion_keyword", "deriving_conversion_name",
  "operation_method", "operation_method_keyword", "operation_method_name",
  "operation_parameter", "parameter_unit",
  "length_or_angle_or_scale_or_time_or_parametric_unit",
  "length_or_angle_or_scale_or_time_or_parametric_unit_keyword",
  "operation_parameter_file", "parameter_file_keyword",
  "parameter_file_name", "derived_geodetic_crs", "derived_geographic_crs",
  "derived_projected_crs", "derived_projected_crs_keyword",
  "derived_crs_name", "base_projected_crs", "base_projected_crs_keyword",
  "derived_vertical_crs", "base_vertical_crs", "base_static_vertical_crs",
  "base_dynamic_vertical_crs", "base_vertical_crs_keyword",
  "derived_engineering_crs", "base_engineering_crs",
  "base_engineering_crs_keyword", "derived_parametric_crs",
  "base_parametric_crs", "base_parametric_crs_keyword",
  "derived_temporal_crs", "base_temporal_crs", "base_temporal_crs_keyword",
  "compound_crs", "compound_crs_other_components", "compound_crs_keyword",
  "compound_crs_name", "horizontal_crs", "geographic2D_crs",
  "metadata_coordinate_epoch", "coordinate_epoch_keyword",
  "coordinate_epoch", "coordinate_metadata", "coordinate_metadata_crs",
  "coordinate_metadata_keyword", "static_crs",
  "dynamic_crs_coordinate_metadata", "coordinate_operation",
  "opt_coordinate_operation_end", "operation_keyword", "operation_name",
  "source_crs", "source_crs_keyword", "target_crs", "target_crs_keyword",
  "interpolation_crs", "interpolation_crs_keyword", "operation_accuracy",
  "operation_accuracy_keyword", "point_motion_operation",
  "opt_point_motion_operation_end", "point_motion_keyword",
  "concatenated_operation", "step", "opt_concatenated_operation_end",
  "concatenated_operation_keyword", "step_keyword", "bound_crs",
  "bound_crs_keyword", "abridged_coordinate_transformation",
  "abridged_parameter_or_parameter_file",
  "opt_end_abridged_coordinate_transformation",
  "abridged_transformation_keyword", "abridged_transformation_parameter", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,    46,    69,
      49,    50,    51,    43,    45,    58,    84,    90,    91,    40,
      93,    41,    44
};
# endif

#define YYPACT_NINF -1108

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1108)))

#define YYTABLE_NINF -608

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     785, -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108,
   -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108,
   -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108,
   -1108, -1108, -1108, -1108, -1108, -1108, -1108,   117, -1108, -1108,
   -1108,   260, -1108, -1108, -1108,   260, -1108, -1108, -1108, -1108,
   -1108,   260,   260, -1108,   260, -1108,   260, -1108,   260, -1108,
     260, -1108, -1108, -1108,   260, -1108,   260, -1108,   260, -1108,
     260, -1108,   260, -1108,   260, -1108,   260, -1108,   260, -1108,
   -1108, -1108,   260, -1108, -1108, -1108, -1108, -1108,   260, -1108,
     260, -1108,   260, -1108,   260, -1108,   260, -1108,   260, -1108,
   -1108, -1108,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
     302,    82,    82,    82,   134, -1108, -1108,    77, -1108,    77,
   -1108,    77,    77, -1108,    77, -1108,    77,    77, -1108,    77,
      77,    77,    77,    77,    77,    77,    77,    77, -1108,    77,
   -1108,    77, -1108, -1108, -1108, -1108,    88, -1108, -1108, -1108,
   -1108, -1108,   105,   162,   205,   214, -1108, -1108, -1108, -1108,
     381, -1108,    77, -1108,    77,    77,    77, -1108,    77,   260,
   -1108,  1150,   324,   396,   396,   851,   243,   106,   168,   346,
     413,   381,   469,   381,   366,   381,   245,    96,   381,   335,
     431, -1108, -1108, -1108,   475,   134,   134,   134,   388,   302,
   -1108, -1108, -1108, -1108, -1108, -1108, -1108,   533, -1108, -1108,
   -1108, -1108,   317,   333,   303,   851, -1108,    77, -1108,    77,
     260, -1108, -1108, -1108, -1108,   260,    77,   260,    77, -1108,
      77, -1108, -1108,   260,    77,    77,    77, -1108,    77,    77,
      77, -1108, -1108,    77,   260, -1108, -1108,   260,    77,    77,
   -1108,    77, -1108, -1108,   260, -1108,    77,    77,   260, -1108,
   -1108,    77,    77,   260, -1108, -1108,    77,    77,   260, -1108,
   -1108,    77,    77,   260, -1108, -1108,    77,    77,   260,    77,
     260, -1108, -1108,    77,   260, -1108, -1108,   260, -1108, -1108,
     260,    77, -1108, -1108, -1108, -1108, -1108,   260,    77,    77,
      77, -1108,    77,   260,   381, -1108,   483,   533, -1108, -1108,
     257,   381,   114,   381,   381,    82,    82,   148,   435,   129,
     450,    82,   148,   129,   450,   851,   381,   505,   524,    82,
      82,   458,   546,   450,    82,   560, -1108,   560,    82,   546,
     450,    82,   546,   450,    82,   546,   450,    82, -1108, -1108,
     796,   122, -1108,    82,   450,    82,    82,    82,   275,   533,
     388,   575,   388,   538,   302, -1108,   533, -1108, -1108, -1108,
   -1108, -1108, -1108, -1108, -1108,    77,    77,   260, -1108,   260,
   -1108, -1108,    77,    77,   260,    77, -1108, -1108, -1108,    77,
      77,    77, -1108,    77,   260, -1108, -1108, -1108, -1108, -1108,
   -1108, -1108,   260,   381,    77,   260, -1108,    77,   260, -1108,
      77,    77,   381,    77, -1108,    77, -1108,    77, -1108,   381,
      77,   260, -1108,    77,    77,    77,   260,   381,    77,    77,
      77,    77, -1108,   381,   381,    77,    77,   381,    77,    77,
     381,    77,    77, -1108, -1108,   345, -1108,   381,    77, -1108,
     381,    77,    77,    77,    77,    77,   260,    77,   260,    77,
     260,   381,    77,   303,   381,    77, -1108,    77,   260,    77,
   -1108,    77,   260,   381, -1108,   572,   587,    82,    82, -1108,
   -1108,   560, -1108,   688,   547,   560,   381,   324,   129,   589,
     381,   533,  1386, -1108,   546,    82,   546,    82,    99,   129,
   -1108,   546,   503,   381,   546, -1108,   139, -1108,    82,   381,
     324,   546,  1175, -1108,   546,   293, -1108, -1108, -1108, -1108,
     546,   172, -1108,   546,   331, -1108,   546,    62, -1108, -1108,
     533, -1108, -1108,   533, -1108, -1108, -1108,   546,   106,   304,
     172,   829, -1108,    82,   829, -1108,    82,  1062, -1108,    82,
   -1108, -1108,   533, -1108,   575,   132,    82,   580,   381,    82,
   -1108,    77, -1108, -1108,   381, -1108,   381, -1108,    77, -1108,
     381,    77, -1108,    77, -1108,    77,   381, -1108, -1108, -1108,
     260, -1108,   303,   381, -1108, -1108, -1108, -1108, -1108, -1108,
   -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108,    77,    77,
      77, -1108, -1108,    77,   381, -1108,    77,    77,    77,   381,
     381, -1108, -1108,    77,    77,   260, -1108,   381, -1108, -1108,
      77, -1108,    77,   381,    77,   381,    77,   381,   381,   381,
     381,   381,   381,   381,   424,   478, -1108,   555,   381,    77,
   -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108,
   -1108,    77,   260,    77,   260, -1108,    77,   260,    77,   260,
      77,   260,    77,   260,    77, -1108,   260,    77,    77,    77,
      77,    77, -1108,    77, -1108,   260,    77, -1108, -1108,   260,
   -1108,    77, -1108,   260, -1108,    77,   587, -1108, -1108, -1108,
   -1108, -1108, -1108,   157, -1108,    82,   533, -1108,   465,   465,
     465,   483, -1108,   575,   123,   131,   381, -1108, -1108, -1108,
   -1108,    82, -1108,   483,   665, -1108,   465, -1108,   327, -1108,
   -1108, -1108, -1108, -1108, -1108, -1108, -1108,   533, -1108, -1108,
     533,   533, -1108,   488, -1108, -1108, -1108, -1108,   505,   433,
     626,   634, -1108,    82,   637, -1108,    82,   104, -1108,   688,
     127, -1108,   688,   215, -1108,   796, -1108,   515, -1108,   430,
   -1108,   331,    62,   132,    82,   753,   381,    82,   560,   381,
      84,   575, -1108,    77, -1108,    77, -1108, -1108, -1108, -1108,
      77,    77,    77,    77,   851,   381,    77,    77, -1108, -1108,
   -1108,   260,    77, -1108, -1108, -1108,    77, -1108,    77,    77,
      77,   381, -1108,   510,   488, -1108,   555,   533, -1108,   381,
   -1108,    77, -1108,    77, -1108,    77, -1108, -1108,   381,    77,
      77,    77, -1108,   381,    77,    77, -1108,    77,    77, -1108,
      77, -1108, -1108,    77, -1108,   381,    77,    77, -1108, -1108,
      77,    77,    77,   260, -1108,    77, -1108, -1108, -1108, -1108,
   -1108, -1108,   381,    77,   381,   381,   381,   381,   553, -1108,
   -1108, -1108,   132,   381,    82,   121,   851,   579,   381,   381,
   -1108, -1108, -1108,   533, -1108, -1108, -1108, -1108, -1108,   492,
   -1108, -1108,   104, -1108,   127, -1108, -1108, -1108,   127, -1108,
   -1108,   688, -1108,   688,   796, -1108,  1052,   381,   483, -1108,
   -1108, -1108,   688,    82,    77,   132, -1108,    77,    77,    77,
      77,    77, -1108,    77, -1108, -1108,    77, -1108, -1108, -1108,
   -1108, -1108,   260,    77, -1108,    77, -1108, -1108,   899,   381,
      77,    77,    77, -1108,    77,    77,    77,    77, -1108,    77,
   -1108,    77, -1108, -1108,   381, -1108, -1108,    77,    77,    77,
     260,    77, -1108,    77,   381, -1108,    77,   580,   260, -1108,
      77, -1108,   661,   661,   661, -1108,   328,   381,   851,   381,
      82, -1108,   661,  1025, -1108, -1108,   522,   683,   618,   127,
   -1108, -1108, -1108, -1108,   688,   545,   381, -1108, -1108, -1108,
     951, -1108,   302, -1108,   525, -1108,   381,   260,    82,   907,
     381, -1108,    77,   260,    77,   260,    77,   260,    77,    77,
      77, -1108,    77, -1108,    77,    77,   584,  1025, -1108,    77,
      77, -1108,    77, -1108, -1108,    77, -1108,    77, -1108, -1108,
      77,   381, -1108, -1108, -1108, -1108, -1108, -1108,    77, -1108,
     260, -1108,    84,    77, -1108,    77,    77, -1108,   897, -1108,
      82, -1108,    82,   687, -1108,    82, -1108, -1108, -1108,   381,
     851,   645, -1108, -1108,   683,   618,   618, -1108,   688, -1108,
   -1108,   381,    82,   381,   483, -1108, -1108, -1108, -1108, -1108,
   -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108,   260, -1108,
     260,    77,    77, -1108,    77,    77, -1108,    77,    77, -1108,
      77, -1108, -1108,    77,    77,   260,    77, -1108, -1108, -1108,
   -1108,   381, -1108,    77,    77,    77,    82,    82, -1108, -1108,
    1121,  1307, -1108,  1268,   381,   961, -1108, -1108,    82,   618,
   -1108,   851,   381,   417,   381,   381,    77,    77,    77, -1108,
   -1108, -1108, -1108, -1108, -1108, -1108,    77, -1108, -1108, -1108,
   -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108,
   -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108, -1108,
   -1108,    77,    77, -1108, -1108, -1108, -1108, -1108,   381, -1108,
      77,    77,    77,    77,    77,    77,   381, -1108,    77, -1108,
      77, -1108,    77, -1108,    77, -1108, -1108,    77,   260, -1108,
   -1108,   851,   381,   576,   576,   601,   601, -1108,   456,   146,
     381,   487,   576,   423,   423, -1108,   551, -1108,   381, -1108,
   -1108,    84,    77, -1108, -1108, -1108,    77,    77, -1108,    77,
     260,    77,   260, -1108, -1108,    77,    77, -1108,    77,   260,
      77, -1108,    77,    77, -1108,    77,    77,    77, -1108,    77,
   -1108,    77, -1108,    77,    77, -1108,    77, -1108,    77,    77,
   -1108,    77, -1108,    77, -1108,   381,   381, -1108, -1108,   456,
   -1108,   688,   627, -1108,   533, -1108, -1108,   456, -1108,   688,
     627, -1108, -1108, -1108,   627, -1108, -1108, -1108,    92, -1108,
   -1108,   551, -1108, -1108, -1108,   551, -1108, -1108, -1108, -1108,
      77, -1108,    77,    77,    77,    77,   381,    77,    77,   381,
      77,    77,    77,    77,    77, -1108, -1108,   627, -1108,   121,
   -1108, -1108, -1108,   627, -1108, -1108, -1108, -1108, -1108, -1108,
   -1108,    77,   381,    77, -1108, -1108, -1108
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   423,   412,   401,   411,   173,   435,   452,   403,   480,
     483,   567,   616,   642,   645,   505,   498,   363,   541,   490,
     487,   495,   493,   584,   632,   402,   425,   436,   404,   424,
     481,   485,   484,   506,   491,   488,   496,     0,     4,     5,
       2,     0,    13,   353,   354,     0,    18,   390,   391,   392,
     393,     0,     0,     3,     0,    12,     0,    19,     0,    11,
       0,    20,   465,   466,     0,    14,     0,    21,     0,    15,
       0,    22,     0,    16,     0,    23,     0,    17,     0,    24,
      25,    26,     0,    27,    28,    29,    30,    31,     0,     7,
       0,     8,     0,     9,     0,    10,     0,     6,     0,     1,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,   174,     0,   364,     0,
     400,     0,     0,   413,     0,   426,     0,     0,   453,     0,
       0,   427,     0,   427,     0,   427,     0,   500,   542,     0,
     568,     0,   585,   586,   600,   601,   587,   588,   603,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
       0,   582,     0,   617,     0,     0,     0,   619,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,   581,     0,     0,     0,     0,     0,     0,
      52,    32,    49,    50,    51,    53,    54,     0,   175,    33,
      34,    38,     0,    37,    47,     0,   176,   166,   368,     0,
       0,   445,   446,   376,   406,     0,     0,     0,     0,   405,
       0,   437,   438,     0,     0,     0,     0,   414,     0,   427,
       0,   456,   455,     0,     0,   550,   470,     0,     0,     0,
     469,     0,   546,   547,     0,   432,   202,   428,     0,   482,
     553,     0,     0,     0,   489,   556,     0,     0,     0,   494,
     559,     0,     0,     0,   512,   508,   202,   202,     0,   202,
       0,   499,   544,     0,     0,   573,   574,     0,   570,   571,
       0,     0,   569,   572,   576,   577,   583,     0,     0,     0,
       0,   621,     0,     0,     0,    46,    39,     0,    45,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   429,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   504,   503,
       0,     0,   501,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   618,     0,    41,    43,    40,
      48,   180,   183,   177,   178,   167,   170,     0,   172,     0,
     165,   372,     0,   358,     0,     0,   355,   360,   369,   366,
       0,     0,   378,   382,     0,   417,   229,   418,   399,   216,
     217,   218,     0,     0,     0,     0,   521,     0,     0,   447,
       0,     0,     0,     0,   415,   408,   422,     0,   461,     0,
     202,     0,   457,   202,     0,     0,     0,     0,     0,     0,
     202,   202,   433,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,   509,    60,   510,     0,   202,   513,
       0,     0,     0,     0,     0,    92,     0,    92,     0,    92,
       0,     0,    92,   578,     0,     0,   524,     0,     0,     0,
     653,    92,     0,     0,    44,     0,     0,     0,     0,   357,
     362,     0,   361,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   394,     0,     0,     0,     0,     0,     0,
     395,     0,     0,     0,     0,   449,     0,   450,     0,     0,
       0,     0,     0,   467,     0,     0,   203,   430,   431,   486,
       0,     0,   492,     0,     0,   497,     0,     0,    56,    70,
       0,    57,    61,     0,   507,   502,   511,     0,     0,     0,
       0,     0,   561,     0,     0,   562,     0,     0,   563,     0,
     560,   566,   579,   575,     0,     0,     0,     0,     0,     0,
     620,   168,   171,   181,     0,   184,     0,   374,   358,   373,
       0,   358,   370,   366,   365,     0,     0,   387,   388,   383,
       0,   375,   379,     0,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,     0,     0,
       0,   398,   419,     0,     0,   522,     0,     0,   440,     0,
       0,   211,   210,   202,   202,     0,   407,     0,   451,   462,
       0,   454,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,     0,    71,     0,     0,     0,
     186,   112,   145,   148,   156,   160,   110,    93,    94,   100,
     101,   105,     0,    97,     0,   104,    97,     0,    97,     0,
      97,     0,    97,     0,    97,    96,     0,    92,     0,    92,
       0,     0,   580,     0,   536,     0,   627,   515,   516,     0,
     525,   385,   643,     0,   644,     0,     0,   179,   182,   359,
     371,   356,   367,     0,   396,     0,   380,   377,     0,     0,
       0,    39,   538,     0,     0,     0,     0,   397,   539,   410,
     409,     0,   434,    39,     0,   468,     0,   545,     0,   548,
     551,   552,   554,   555,   557,   558,    58,     0,    55,    80,
       0,     0,    65,    83,    67,    78,    79,   540,     0,     0,
       0,     0,   103,     0,     0,   129,     0,     0,   130,     0,
       0,   131,     0,     0,   132,     0,    95,     0,   564,     0,
     565,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   169,     0,   389,   385,   381,   244,   245,   246,
     202,   202,   202,   202,     0,     0,     0,   440,   209,   208,
     448,     0,   441,   443,   439,   214,     0,   463,   459,     0,
     202,     0,    64,    60,    83,    72,     0,     0,    82,     0,
     108,    97,   106,     0,   102,    97,    99,   113,     0,    97,
      97,    97,   146,     0,    97,    97,   149,     0,    97,   157,
       0,   161,   162,     0,    91,     0,   609,     0,   625,   631,
     627,   627,    92,     0,   626,     0,   386,   523,   636,   637,
     634,   635,     0,     0,     0,     0,     0,     0,     0,   421,
      36,   416,     0,     0,     0,     0,     0,     0,     0,     0,
     549,    59,    81,     0,    66,    69,    84,   543,   107,     0,
      98,   111,     0,   133,     0,   134,   135,   144,     0,   136,
     137,     0,   138,     0,     0,   185,     0,     0,    39,   628,
     629,   630,     0,     0,     0,     0,   384,     0,     0,     0,
     202,   517,   444,     0,   442,   215,   202,   200,   198,   197,
     199,   464,     0,   202,   458,     0,    76,    68,     0,     0,
     114,   115,   116,   117,    97,    97,    97,    97,   150,     0,
     158,   154,   163,   164,     0,   623,   615,   609,   609,    92,
       0,    92,   608,     0,     0,   537,   385,     0,     0,   648,
     649,   647,     0,     0,     0,   420,     0,     0,     0,     0,
       0,   460,     0,     0,    75,   109,     0,     0,     0,     0,
     139,   140,   141,   142,     0,     0,     0,   159,   610,   611,
       0,   612,     0,   614,     0,   624,     0,     0,     0,     0,
       0,   250,   220,     0,    92,     0,   226,     0,   385,   517,
     517,   514,   202,   204,     0,   472,    77,     0,    73,   118,
     119,   120,   121,   122,   123,    97,   151,     0,   155,   153,
      92,     0,   534,   529,   530,   531,   532,   533,   385,   527,
       0,   535,     0,     0,   652,   649,   649,   646,     0,   219,
       0,   224,     0,     0,   225,     0,   520,   518,   519,     0,
       0,     0,   471,    74,     0,     0,     0,   143,     0,   613,
     622,     0,     0,     0,    39,   651,   650,   195,   192,   191,
     194,   212,   193,   213,   223,   352,   187,   189,     0,   188,
       0,   220,    92,   251,     0,     0,   228,   226,     0,   201,
     202,   478,   476,    92,    92,     0,   124,   125,   126,   127,
     152,     0,   526,   206,   638,   202,     0,     0,   222,   221,
       0,     0,   227,     0,     0,     0,   473,   475,     0,     0,
     147,     0,     0,     0,     0,     0,     0,   206,   253,   310,
     311,   312,   313,   314,   315,   316,   255,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   257,   259,   341,   342,   343,   344,   345,     0,   252,
     277,   304,   284,   286,   288,   290,     0,   283,   300,   196,
      92,   479,   385,   128,   202,   528,   641,    92,     0,   633,
     654,     0,     0,     0,     0,     0,     0,   247,     0,     0,
       0,     0,     0,     0,     0,   249,     0,   474,     0,   207,
     640,     0,   202,   205,   347,   351,   202,   202,   254,   202,
       0,   202,     0,   256,   349,   202,   202,   258,   202,     0,
     202,   260,   202,   202,   278,   202,   202,   202,   305,   202,
     248,   202,   285,   202,   202,   287,   202,   289,   202,   202,
     291,   202,   301,   202,   477,     0,     0,   261,   268,     0,
     265,     0,     0,   267,     0,   269,   276,     0,   273,     0,
       0,   275,   279,   282,     0,   280,   306,   309,     0,   307,
     292,     0,   294,   295,   296,     0,   298,   299,   302,   303,
     638,   190,   202,   202,     0,   202,     0,   202,   202,     0,
     202,   202,   202,   202,   202,   639,   264,     0,   262,     0,
     266,   350,   272,     0,   270,   348,   274,   281,   308,   293,
     297,   202,     0,   202,   263,   346,   271
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1108, -1108, -1108,  -205,  -218,  -178, -1108,   -34,  -184,   377,
   -1108, -1108, -1108, -1108, -1108, -1108,  -210,  -297,  -564,    37,
    -671,  -530, -1108, -1108, -1108, -1108, -1108, -1108, -1108,  -477,
    -116, -1108, -1108, -1108,  -740, -1108, -1108,  -117,   -43,  1740,
     892,  2435, -1108,  -435,  -723,  -550, -1108, -1108,   -46, -1108,
   -1108,   -39, -1108, -1108, -1108,   -36,  -165, -1108, -1108,  -686,
   -1108, -1108, -1108, -1108, -1108,  -673, -1108, -1108, -1108, -1108,
    -685, -1108, -1108, -1108,     0, -1108, -1108, -1108, -1108, -1108,
     246, -1108, -1108,  -424, -1108, -1108,  -672, -1108, -1108,  -956,
   -1108, -1108, -1108, -1108,  -842,  1831,  -245, -1107,  -395, -1108,
   -1108, -1108,  -816,  -905,   -30, -1108,  -340, -1108, -1108,  -348,
    -256,   242, -1108, -1108,  -353,  -872, -1108,  -294,  -874,  -767,
   -1108,  -859,  -445, -1108, -1108, -1108, -1108,  -450, -1108, -1108,
   -1108, -1108,  -502,  -441, -1108,  -476, -1108,  -652, -1108,  -283,
   -1108,   798,  -342,   -98,   799,  -354,    12,  -200,  -282,   218,
   -1108, -1108, -1108,   310, -1108,  -107, -1108,  -167, -1108, -1108,
   -1108, -1108, -1108, -1108,  -749, -1108, -1108, -1108,   691,   -33,
     693,   -23,  -202,   -51, -1108,   614,  -103,    90, -1108, -1108,
   -1108, -1108, -1108,   100, -1108, -1108, -1108,    20, -1108,   486,
     -50, -1108, -1108, -1108,   -16, -1108,  -120, -1108,    21, -1108,
   -1108,   378,   -54,     5,   307, -1108, -1108, -1108, -1108, -1108,
   -1108, -1108,  -320,  -703,  -810, -1108,   457,   706,   707,   489,
     311, -1108,  -307, -1108, -1108,   476,    10, -1108,   -15,   633,
      28, -1108,   -76,   479,    14, -1108,   -90,  -298,    24, -1108,
   -1108,   482, -1108, -1108, -1108, -1108, -1108,   746,  -677,  -264,
   -1108, -1108,  -508, -1108, -1108,  -683, -1108, -1108, -1108,  -727,
   -1108, -1108,   729,   734,   736, -1108, -1108, -1108, -1108,   737,
   -1108, -1108, -1108, -1108,   757, -1108, -1108,   758, -1108, -1108,
     759, -1108, -1108,   760, -1108, -1108, -1108, -1108, -1108, -1108,
   -1108, -1108, -1108, -1108, -1108, -1108, -1108,   866,  -181, -1108,
     -80,   561, -1108,   349, -1108, -1108, -1108,  -846, -1108, -1108,
     -65,   873, -1108,  -963,  -425, -1108,  -866,  -122, -1108, -1108,
   -1108,  -263, -1108,  -121
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    37,    38,    39,   217,   579,   219,   807,   220,   794,
     221,   222,   377,   378,   223,   318,   224,   225,   817,   540,
     454,   541,   455,   645,   813,   542,   742,   884,   543,   743,
     816,   937,   938,  1027,   744,   745,   746,   818,   102,   203,
     345,   130,   845,   552,   657,   752,   658,   659,   660,   661,
     662,   663,   664,   828,   939,   665,   666,   667,   833,   668,
     669,   837,   949,  1037,  1121,   670,   996,   671,   840,   951,
     672,   673,   843,   954,   440,   321,    41,   127,   227,   385,
     386,   387,   574,   388,   389,   576,   675,   676,  1095,  1237,
    1097,  1098,   931,   932,   800,   346,   624,  1099,  1142,   801,
     625,  1100,   806,   926,   408,   409,  1059,   410,   411,  1064,
     412,   608,   609,   610,   790,  1012,  1014,  1016,  1013,  1104,
    1188,  1238,  1247,  1189,  1254,  1196,  1262,  1267,  1197,  1272,
    1220,  1258,  1190,  1239,  1240,  1248,  1249,  1241,  1242,  1102,
      42,   234,   323,   492,   256,   324,   235,   129,   229,   496,
     230,   399,   583,   393,   394,   580,   578,   244,   237,   403,
     404,   593,   500,   589,   779,   590,   785,    46,    47,    48,
      49,    50,   413,   131,    51,    52,   245,   395,   513,    54,
     134,   248,   425,   414,   415,   613,   795,   239,    56,   136,
     191,   267,   268,   443,    57,    58,   240,   241,   716,   242,
     243,   420,   803,   858,   429,    60,   139,   253,   254,   433,
     430,   878,   685,   630,   808,   933,    61,    62,    63,   259,
     437,  1072,  1114,  1115,  1202,    64,   260,    66,    67,    68,
     271,    70,    71,    72,   276,    74,    75,    76,   281,   198,
      78,   287,   288,   457,   289,   290,   460,   859,   686,   977,
     418,   616,   477,   478,   691,   687,  1048,  1049,  1050,   688,
     689,   966,    79,    80,    81,    82,   149,   293,   294,    83,
     261,   262,   263,   264,    84,   272,   273,    85,   277,   278,
      86,   282,   283,    87,   471,    88,   151,   301,   302,   306,
     307,   474,    89,   170,    90,   171,   172,   860,   907,    92,
     174,   178,   179,   312,   313,   959,   960,   852,   853,    93,
     776,   861,    95,   862,  1144,    96,   693,    97,    98,   481,
     970,  1010,   482,   971
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,   247,   103,   218,   314,    59,   317,   315,   104,   105,
      65,   106,    45,   107,    73,   108,   236,   109,   431,   379,
      55,   110,   258,   111,    77,   112,   920,   113,    69,   114,
     161,   115,   555,   116,   558,   117,   864,   561,   490,   118,
     392,   319,   175,   176,   160,   119,   568,   120,   851,   121,
     489,   122,   849,   123,   132,   124,   683,   137,   923,   140,
     961,   142,   572,   144,   246,   146,   647,   250,   829,   831,
     470,   847,   835,  1022,   855,   838,   885,   822,   303,   826,
     238,   830,   826,   741,   834,   826,   436,   153,   826,  1083,
      53,   826,   850,   193,   841,   195,   846,   155,   963,  1015,
    1017,  1007,  1096,     1,   156,   159,  1091,   380,     7,     5,
    1025,    15,  1257,     5,   736,  1096,   755,    99,   758,     2,
     761,     5,   764,    12,   766,   231,   400,     1,   798,     4,
     650,   422,   416,   799,   232,   405,   209,   405,   798,     5,
     434,   428,   383,   799,     5,   406,   284,   285,   428,    33,
     453,   424,     1,   650,  1040,   233,     5,   654,   655,   473,
    1091,    24,     2,     5,  1024,  1110,   484,   295,  1235,   483,
     684,   251,     4,   285,   177,   228,   391,   296,    26,   958,
    1093,   655,    29,   956,   298,   299,  1101,   325,   969,  1017,
     266,  1322,   326,   252,   328,   921,   431,   286,   984,   336,
     331,   257,    26,   941,   943,   796,    29,   945,    17,   946,
     407,   339,   407,   947,   340,   585,   942,  1006,   228,   944,
     826,   344,   826,   957,   401,   348,   826,    26,   125,   421,
     351,    29,     5,   952,  1093,   354,  1204,    19,   632,   180,
     357,   650,   768,  1028,   770,   360,   472,   363,     2,  1020,
    -602,   365,   883,   470,   366,   562,   470,   367,     4,  1246,
    1246,    34,  1253,   814,   369,   436,  1123,  -604,  1275,  1066,
     374,   888,   782,   863,  1125,   890,   249,  1208,   469,   893,
     895,   896,  1055,   881,   899,   900,  1054,  1073,   902,   381,
     382,   592,   467,  1019,    15,  1105,   586,  1207,  1108,  1081,
    1029,  1031,  1033,  1034,  1035,  1053,  1232,   619,     1,     9,
    1146,  1147,     3,  1030,  1032,   463,   464,   826,   280,   444,
       6,    14,   447,  1312,  -605,   450,  1315,    16,    10,     8,
     644,  1317,    33,   646,  1320,  1094,     9,   428,  1321,    11,
    1106,   617,   427,    22,   487,     5,   488,   441,  1112,   233,
     740,   493,   682,   257,    16,  1243,   791,   792,   636,    30,
     233,   501,    10,  1265,    17,    18,   684,  -606,    20,   502,
      22,  1341,   505,   810,   706,   507,  -607,  1343,    31,    32,
      25,    10,    27,    26,    28,   228,    30,    29,   518,  1117,
    1118,  1119,    35,   522,   990,   991,   992,   993,    21,   292,
       1,  1116,   233,   125,   210,   211,    17,   212,   213,   214,
     215,   216,    31,    32,   379,   231,   255,   911,   100,   101,
    1206,   783,    36,   553,   232,   556,   379,   559,   649,   311,
       5,    31,    32,    21,     5,   566,   265,   646,   275,   569,
       5,   489,   809,   650,  1244,  1235,   651,   652,   653,     6,
       5,   211,   233,  1228,  1203,   490,    17,    36,     8,   650,
     848,   677,   692,  1087,   679,    10,   316,  1088,  1089,  1090,
     654,   655,   656,     5,   611,    26,   614,    14,  1235,    29,
     699,   620,   -42,   701,   627,  1077,   233,  1342,   656,   695,
      17,   577,   402,    10,   635,   582,   786,    20,   416,   538,
     638,   539,   678,   640,     5,   680,   642,  1234,   681,  1235,
     621,    27,   623,    28,   622,    31,    32,   648,    17,   740,
       5,    35,   652,   653,  1001,  1092,  1003,   812,   618,     7,
     646,   815,  1042,   428,    19,   637,  1043,  1044,  1045,  1046,
     270,   201,   202,    31,    32,   654,   655,   705,   641,   304,
     305,   674,   621,   653,   674,   453,   622,   674,    34,   639,
     798,   643,   406,  1250,  1250,   799,  1255,  1259,     5,  1264,
       5,  1269,  1269,  1235,  1273,   654,   655,     5,   -63,  1061,
     539,   836,   721,  1087,   839,   480,   927,  1088,  1089,  1090,
     928,   929,   930,     5,  1047,   968,  1234,   141,  1235,   143,
     476,   145,   258,   147,   381,  1079,   646,   815,  1087,   391,
     870,   379,  1088,  1089,  1090,   787,   788,   789,     5,   750,
     382,   753,  1244,  1235,   756,   692,   759,  1313,   762,  1191,
     765,  1198,   538,   767,  1087,  1318,   215,   216,  1088,  1089,
    1090,   740,   774,   738,     5,  1092,   777,   587,   588,  1323,
     780,     5,  1087,  1324,     5,   651,  1088,  1089,  1090,  1091,
     650,   844,     5,   650,   652,   653,   539,  1129,   653,  1011,
    1092,   650,   655,   936,   651,   652,   653,   793,  1136,  1137,
     210,  1111,   737,   212,   213,   214,   740,   654,   655,   968,
     654,   655,   925,   376,   453,  1011,  1092,   882,   654,   655,
     656,   886,   210,   820,     5,   212,   213,   214,   215,   216,
     738,   823,   739,   650,  1092,   824,   651,   652,   653,   475,
     983,   479,   439,   948,   940,   950,   228,   391,   646,   446,
     740,   571,   449,  1093,   797,   452,   654,   655,   811,   -71,
     654,   655,   656,   462,   -71,   -71,   -71,  1268,  1268,   821,
    1038,   825,  1212,   819,   825,  1067,  1068,   825,   874,  1132,
     825,  1128,   428,   825,   634,  1227,   308,   309,   310,  1107,
       5,  1251,  1230,  1026,  1270,   674,   998,   999,   856,   650,
    1263,   257,   651,   652,   653,   909,   910,   379,  1113,     1,
       2,   684,  1085,  1086,   925,     3,   848,  1041,    43,    44,
       4,   702,     5,     6,   581,   964,   654,   655,   656,     7,
     912,   152,     8,   154,   297,   802,  1036,   646,   873,     9,
      10,   924,    11,   628,    12,   465,   157,   158,  1200,    13,
     435,    14,   633,   300,    15,   210,   211,    16,   212,   213,
     214,   215,   216,   458,   466,    17,     5,   468,    18,   162,
      19,    20,    21,    22,   163,   650,   164,   165,   651,   652,
     653,    23,    24,    25,    26,    27,    91,    28,    29,    30,
      31,    32,    33,    94,    34,    35,    36,   166,   167,   168,
     169,    16,   654,   655,   656,  1325,   925,     0,  1056,   980,
       0,     0,   825,     0,   825,     0,     0,     0,   825,     0,
    1120,     0,     0,     0,  1087,  1011,   674,     0,  1088,  1089,
    1090,  1091,     0,     0,     5,     0,   428,  1002,     0,     0,
       0,     0,     0,   650,     5,  1008,   651,   652,   653,     0,
       0,     0,     0,   650,     0,     0,   651,   652,   653,     0,
       0,     0,   125,   210,     0,   684,   212,   213,   214,     0,
     654,   655,   656,     0,     0,     0,     0,   925,     0,     0,
     654,   655,   656,     0,  1052,     0,  1092,     0,     5,     0,
    1060,     0,  1062,     0,  1065,     0,  1018,   650,     5,     0,
     651,   652,   653,     0,     0,  1093,     0,   650,     0,   825,
     651,   652,   653,     0,   848,     0,     0,  1111,   210,   211,
     674,   212,   213,   214,   654,   655,   656,  1082,     0,   674,
       0,     0,     0,     0,   654,   655,   656,     0,     0,   181,
       0,   182,     0,   183,   184,     0,   185,   925,   186,   187,
       0,   188,   189,   190,   192,   190,   194,   190,   196,   197,
       0,   199,     0,   200,     0,     0,   210,   211,     0,   212,
     213,   214,   215,   216,     0,  1126,   739,  1127,   674,     0,
       0,   428,     0,   674,   204,     0,   205,   206,   207,     5,
     208,   674,  1138,     0,  1316,     0,   417,     0,   650,     5,
     423,   651,   652,   653,     0,     0,     0,     0,   650,   438,
     684,   651,   652,   653,   955,   848,   445,     0,     0,   448,
       0,     0,   451,  1314,     0,   654,   655,   656,     0,     0,
     461,  1319,     0,     0,     0,   654,   655,   656,     0,   320,
       0,   322,     0,     0,     0,     0,     0,     0,   327,     0,
     329,     0,   330,     0,     0,   674,   332,   333,   334,     0,
     335,   190,   337,   674,     0,   338,     0,     0,     0,     0,
     341,   342,     0,   343,     0,     0,     0,     0,     0,   347,
       0,     0,     0,   349,   350,  1231,     0,     0,   352,   353,
       0,     0,   210,   355,   356,   212,   213,   214,   215,   216,
       0,   361,   739,     0,     0,   364,     0,     0,     0,     0,
       0,     0,     0,   368,     0,     0,     0,  1281,     0,  1284,
     370,   371,   372,     0,   373,     0,  1289,     0,     0,     0,
       0,     0,     0,  1236,  1236,  1245,  1245,     0,  1252,  1256,
       0,  1261,  1236,  1266,  1266,     0,  1271,  1148,  1149,  1150,
    1151,  1152,  1153,  1154,  1155,  1156,  1157,  1158,  1159,  1160,
    1161,  1162,  1163,  1164,  1165,  1166,  1167,  1168,  1169,  1170,
    1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,
    1181,  1182,  1183,  1184,  1185,  1186,  1187,   594,   595,   596,
     597,   598,   599,   600,   601,   602,     0,   485,   486,     0,
       0,     0,     0,     0,   322,   491,     0,   494,     0,     0,
       0,   495,   497,   498,     0,   499,   125,   210,   211,     0,
     212,   213,   214,   215,   216,     0,   504,     0,     0,   506,
       0,     0,   508,   509,     0,   511,     0,   512,     0,   514,
       0,     0,   516,     0,     0,     0,   520,   521,     0,     0,
     524,   525,     0,     0,     0,     0,     0,   530,   531,     0,
     533,   534,     0,   536,   537,     0,     0,     0,     0,     0,
       0,     0,     0,   547,   548,   549,   550,   551,     0,   554,
       0,   557,     0,     0,   557,     0,     0,   564,     0,   565,
       0,   567,     0,   557,  1192,  1149,  1150,  1151,  1152,  1153,
    1154,  1155,  1193,  1157,  1158,  1159,  1160,  1161,  1162,  1163,
    1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,
    1174,  1175,  1176,  1177,  1178,  1179,  1180,  1194,  1195,  1183,
    1184,  1185,  1186,  1187,  1149,  1150,  1151,  1152,  1153,  1154,
    1155,     0,  1157,  1158,  1159,  1160,  1161,  1162,  1163,  1164,
    1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,
    1175,  1176,  1177,  1178,  1179,  1180,     0,     0,  1183,  1184,
    1185,  1186,  1187,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   696,     0,     0,     0,     0,     0,     0,
     491,     0,     0,   491,     0,   495,     0,   703,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,     0,     0,     0,     0,     0,     0,     0,     0,
     708,   709,   710,     0,     0,   711,     0,     0,   713,   714,
     715,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   723,     0,   724,     0,   726,     0,   728,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   748,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   749,     0,   751,     0,     0,   754,     0,
     757,     0,   760,     0,   763,     0,   763,     0,     0,   557,
     769,   557,   771,   772,     0,   773,     0,     0,   775,     0,
       0,     0,     0,   778,     0,     0,     0,   781,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   703,     0,   778,     0,     0,
       0,     0,     0,     0,     0,   868,     0,     0,   872,   715,
       0,     0,     0,     0,   875,     0,     0,     0,   876,     0,
     877,   724,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   763,     0,   889,     0,   763,     0,     0,
       0,   892,   894,   763,     0,     0,   898,   763,     0,   901,
     763,     0,   903,     0,     0,   904,     0,     0,   906,   908,
       0,     0,   775,   775,   557,     0,     0,   913,     0,     0,
       0,     0,     0,     0,     0,   915,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   967,     0,     0,   972,
     973,   974,     0,   976,     0,   978,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   982,     0,     0,
       0,     0,   986,   987,   988,     0,   989,   763,   763,   763,
       0,   994,     0,   995,     0,     0,     0,     0,     0,   906,
     906,  1000,     0,   557,     0,  1004,     0,     0,   778,     0,
       0,     0,  1009,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1058,     0,   557,     0,  1063,     0,
     778,   976,   976,     0,     0,     0,  1070,  1071,     0,     0,
       0,  1074,  1075,     0,  1076,     0,     0,   763,     0,  1078,
       0,   269,   557,   274,     0,   279,     0,     0,   291,     0,
     778,     0,     0,     0,     0,  1084,     0,  1009,  1009,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1058,   557,     0,  1130,  1131,     0,  1063,
    1133,     0,     0,     0,     0,  1135,   557,     0,  1139,     0,
       0,     0,     0,     0,     0,  1141,  1143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1211,  1141,
    1213,     0,     0,     0,     0,     0,     0,     0,  1214,     0,
       0,     0,     0,     0,   375,     0,     0,     0,     0,     0,
       0,   390,     0,   396,   397,     0,     0,     0,     0,     0,
       0,     0,     0,  1215,  1216,     0,   426,     0,     0,     0,
       0,     0,  1218,  1219,  1221,  1222,  1223,  1224,     0,     0,
    1226,     0,   557,     0,   778,     0,     0,     0,     0,   557,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   358,   359,     0,
     362,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1279,     0,  1282,     0,     0,     0,     0,     0,     0,
    1287,     0,  1290,     0,     0,     0,     0,  1294,     0,     0,
       0,  1298,     0,   503,     0,  1301,     0,     0,     0,     0,
    1305,     0,   510,     0,     0,     0,     0,     0,     0,   515,
       0,     0,     0,     0,     0,     0,     0,   523,     0,     0,
       0,     0,     0,   528,   529,     0,     0,   532,     0,     0,
     535,     0,     0,     0,     0,     0,     0,   544,     0,     0,
     546,     0,  1143,     0,     0,  1327,  1329,     0,     0,     0,
    1333,   560,     0,     0,   563,     0,     0,     0,     0,     0,
       0,     0,     0,   570,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   584,     0,     0,     0,
     591,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   626,     0,     0,     0,     0,     0,   631,
       0,   517,     0,     0,   519,     0,     0,     0,     0,     0,
       0,   526,   527,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   545,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   694,     0,
       0,     0,     0,     0,   697,     0,   698,     0,     0,     0,
     700,     0,     0,     0,     0,     0,   704,     0,     0,     0,
       0,     0,     0,   707,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   712,     0,     0,     0,     0,   717,
     718,     0,     0,     0,     0,     0,     0,   722,     0,     0,
       0,     0,     0,   725,     0,   727,     0,   729,   730,   731,
     732,   733,   734,   735,     0,     0,     0,     0,   747,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   719,   720,   804,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   854,     0,     0,   857,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   871,     0,   126,   128,     0,
       0,   133,   135,     0,   138,     0,   135,     0,   135,     0,
     135,   880,   135,   148,   150,     0,   173,   173,   173,   887,
       0,     0,     0,     0,     0,     0,     0,     0,   891,     0,
       0,     0,     0,   897,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   905,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   914,     0,   916,   917,   918,   919,     0,     0,
       0,     0,     0,   922,     0,     0,   226,     0,   934,   935,
       0,   865,   866,   867,   869,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   879,     0,     0,     0,     0,     0,   962,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   985,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   997,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1005,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1021,     0,  1023,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1039,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1051,     0,     0,     0,
    1057,   975,     0,     0,     0,   384,     0,   979,     0,     0,
     398,   128,     0,     0,   981,     0,   419,     0,     0,     0,
       0,     0,     0,     0,   432,   128,     0,     0,     0,   419,
       0,  1080,     0,   442,     0,     0,   419,     0,     0,   419,
       0,     0,   419,     0,     0,   456,     0,     0,   459,     0,
     419,     0,     0,     0,     0,     0,     0,     0,     0,  1109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1122,     0,  1124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1069,     0,     0,     0,     0,     0,     0,
       0,  1140,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1199,     0,     0,     0,     0,     0,
       0,     0,  1205,     0,  1209,  1210,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   573,   575,     0,     0,     0,     0,  1217,     0,
       0,     0,     0,     0,     0,     0,  1225,     0,     0,     0,
     612,  1134,   615,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1233,   629,     0,     0,  1145,     0,     0,     0,
    1260,     0,     0,     0,     0,     0,     0,     0,  1274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   690,     0,     0,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1310,  1311,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1229,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1331,     0,     0,  1335,
       0,     0,     0,  1276,     0,     0,     0,  1277,  1278,     0,
    1280,     0,  1283,     0,     0,     0,  1285,  1286,     0,  1288,
       0,  1291,  1345,  1292,  1293,     0,  1295,  1296,  1297,     0,
    1299,     0,  1300,     0,  1302,  1303,     0,  1304,     0,  1306,
    1307,     0,  1308,     0,  1309,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     784,     0,     0,  1326,  1328,     0,  1330,     0,  1332,  1334,
       0,  1336,  1337,  1338,  1339,  1340,   805,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1344,     0,  1346,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   827,     0,
       0,   832,     0,     0,     0,     0,     0,     0,     0,     0,
     842,     0,     0,     0,     0,     0,     0,     0,     0,   629,
       0,     0,   629,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   805,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   953,
       0,     0,     0,     0,     0,     0,     0,     0,   965,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   805,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   629,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1103,     0,  1103,     0,     0,
    1103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   805,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   805,   805,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1201
};

static const yytype_int16 yycheck[] =
{
       0,   185,    45,   181,   209,     0,   224,   217,    51,    52,
       0,    54,     0,    56,     0,    58,   183,    60,   338,   316,
       0,    64,   189,    66,     0,    68,   868,    70,     0,    72,
     120,    74,   467,    76,   469,    78,   785,   472,   392,    82,
     322,   225,   122,   123,   120,    88,   481,    90,   775,    92,
     392,    94,   775,    96,   105,    98,   564,   108,   874,   110,
     906,   112,   486,   114,   184,   116,   543,   187,   754,   754,
     368,   774,   757,   978,   777,   760,   816,   749,   200,   751,
     183,   754,   754,   647,   757,   757,   342,   120,   760,  1052,
       0,   763,   775,   143,   765,   145,   773,   120,   908,   973,
     974,   967,  1058,     4,   120,   120,    14,   317,    24,    17,
     982,    49,  1219,    17,   644,  1071,   666,     0,   668,     5,
     670,    17,   672,    39,   674,    19,   326,     4,     7,    15,
      26,   333,    48,    12,    28,     6,   179,     6,     7,    17,
     340,     9,   320,    12,    17,    16,    50,    51,     9,    87,
     360,   335,     4,    26,  1000,    56,    17,    53,    54,   369,
      14,    77,     5,    17,   980,  1070,   376,   200,    22,   374,
      38,     3,    15,    51,    40,    61,    62,   200,    79,   906,
      88,    54,    83,   906,   200,   200,  1058,   230,   915,  1063,
     190,  1298,   235,    25,   237,   872,   516,   197,   938,   249,
     243,   189,    79,   889,   889,   713,    83,   892,    60,   894,
      81,   254,    81,   898,   257,   497,   889,   966,    61,   892,
     892,   264,   894,   906,   327,   268,   898,    79,   146,   332,
     273,    83,    17,   904,    88,   278,  1141,    65,   520,   162,
     283,    26,   677,   983,   679,   288,   368,   290,     5,   976,
     162,   294,   816,   551,   297,   473,   554,   300,    15,  1215,
    1216,    89,  1218,   740,   307,   521,  1082,   162,  1231,  1018,
     313,   821,   696,   781,  1084,   825,   186,  1143,   368,   829,
     830,   831,  1009,   813,   834,   835,  1009,  1027,   838,    32,
      33,   501,   368,   976,    49,  1062,   498,  1143,  1065,  1048,
     986,   986,   987,   988,   989,  1008,  1211,   509,     4,    34,
    1126,  1127,    10,   986,   987,   366,   367,   989,    73,   349,
      18,    46,   352,  1279,   162,   355,  1282,    52,    35,    27,
     540,  1287,    87,   543,  1290,  1058,    34,     9,  1294,    37,
    1063,   508,   337,    68,   387,    17,   389,   347,  1071,    56,
     647,   394,   562,   341,    52,  1214,   709,   710,   525,    84,
      56,   404,    35,  1222,    60,    63,    38,   162,    66,   412,
      68,  1327,   415,   726,   592,   418,   162,  1333,    85,    86,
      78,    35,    80,    79,    82,    61,    84,    83,   431,  1074,
    1075,  1076,    90,   436,   944,   945,   946,   947,    67,    64,
       4,  1074,    56,   146,   147,   148,    60,   150,   151,   152,
     153,   154,    85,    86,   711,    19,    70,   852,   158,   159,
    1143,   703,    91,   466,    28,   468,   723,   470,   548,    41,
      17,    85,    86,    67,    17,   478,    23,   647,    72,   482,
      17,   783,   724,    26,    21,    22,    29,    30,    31,    18,
      17,   148,    56,  1202,  1139,   809,    60,    91,    27,    26,
      43,   551,    45,     7,   554,    35,   149,    11,    12,    13,
      53,    54,    55,    17,   504,    79,   506,    46,    22,    83,
     578,   511,   149,   581,   514,  1035,    56,  1329,    55,   569,
      60,   491,    57,    35,   524,   495,   706,    66,    48,   154,
     530,   156,   553,   533,    17,   556,   536,    20,   559,    22,
       7,    80,   512,    82,    11,    85,    86,   547,    60,   816,
      17,    90,    30,    31,   959,    69,   961,   737,   508,    24,
     740,   741,     7,     9,    65,   525,    11,    12,    13,    14,
      71,   160,   161,    85,    86,    53,    54,   590,   534,    74,
      75,   551,     7,    31,   554,   765,    11,   557,    89,   531,
       7,   537,    16,  1215,  1216,    12,  1218,  1219,    17,  1221,
      17,  1223,  1224,    22,  1226,    53,    54,    17,   154,  1014,
     156,   759,   625,     7,   762,    47,     7,    11,    12,    13,
      11,    12,    13,    17,    69,   915,    20,   111,    22,   113,
      25,   115,   769,   117,    32,  1040,   816,   817,     7,    62,
     794,   908,    11,    12,    13,   150,   151,   152,    17,   662,
      33,   664,    21,    22,   667,    45,   669,  1279,   671,  1131,
     673,  1133,   154,   676,     7,  1287,   153,   154,    11,    12,
      13,   938,   685,   155,    17,    69,   689,    58,    59,  1301,
     693,    17,     7,  1305,    17,    29,    11,    12,    13,    14,
      26,   146,    17,    26,    30,    31,   156,  1102,    31,     8,
      69,    26,    54,   883,    29,    30,    31,   711,  1113,  1114,
     147,    36,   645,   150,   151,   152,   983,    53,    54,  1009,
      53,    54,   876,   316,   904,     8,    69,   814,    53,    54,
      55,   817,   147,   749,    17,   150,   151,   152,   153,   154,
     155,   750,   157,    26,    69,   751,    29,    30,    31,   370,
     938,   372,   344,   901,   889,   903,    61,    62,   938,   351,
    1027,   485,   354,    88,   714,   357,    53,    54,   728,   155,
      53,    54,    55,   365,   160,   161,   162,  1223,  1224,   749,
     995,   751,  1147,   748,   754,  1019,  1020,   757,   801,  1107,
     760,  1101,     9,   763,   522,  1200,   205,   206,   207,  1063,
      17,  1216,  1207,   983,  1224,   775,   957,   958,   778,    26,
    1221,   769,    29,    30,    31,   850,   851,  1084,  1071,     4,
       5,    38,  1055,  1056,   978,    10,    43,  1002,     0,     0,
      15,   583,    17,    18,   494,   912,    53,    54,    55,    24,
     853,   120,    27,   120,   200,   715,   994,  1027,   797,    34,
      35,   875,    37,   516,    39,   368,   120,   120,  1135,    44,
     341,    46,   521,   200,    49,   147,   148,    52,   150,   151,
     152,   153,   154,   361,   368,    60,    17,   368,    63,   120,
      65,    66,    67,    68,   120,    26,   120,   120,    29,    30,
      31,    76,    77,    78,    79,    80,     0,    82,    83,    84,
      85,    86,    87,     0,    89,    90,    91,   120,   120,   120,
     120,    52,    53,    54,    55,  1310,  1070,    -1,  1009,   932,
      -1,    -1,   892,    -1,   894,    -1,    -1,    -1,   898,    -1,
    1078,    -1,    -1,    -1,     7,     8,   906,    -1,    11,    12,
      13,    14,    -1,    -1,    17,    -1,     9,   960,    -1,    -1,
      -1,    -1,    -1,    26,    17,   968,    29,    30,    31,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    30,    31,    -1,
      -1,    -1,   146,   147,    -1,    38,   150,   151,   152,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,  1141,    -1,    -1,
      53,    54,    55,    -1,  1007,    -1,    69,    -1,    17,    -1,
    1013,    -1,  1015,    -1,  1017,    -1,   976,    26,    17,    -1,
      29,    30,    31,    -1,    -1,    88,    -1,    26,    -1,   989,
      29,    30,    31,    -1,    43,    -1,    -1,    36,   147,   148,
    1000,   150,   151,   152,    53,    54,    55,  1050,    -1,  1009,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,   127,
      -1,   129,    -1,   131,   132,    -1,   134,  1211,   136,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
      -1,   149,    -1,   151,    -1,    -1,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,  1098,   157,  1100,  1058,    -1,
      -1,     9,    -1,  1063,   172,    -1,   174,   175,   176,    17,
     178,  1071,  1115,    -1,  1284,    -1,   330,    -1,    26,    17,
     334,    29,    30,    31,    -1,    -1,    -1,    -1,    26,   343,
      38,    29,    30,    31,    42,    43,   350,    -1,    -1,   353,
      -1,    -1,   356,  1281,    -1,    53,    54,    55,    -1,    -1,
     364,  1289,    -1,    -1,    -1,    53,    54,    55,    -1,   227,
      -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,
     238,    -1,   240,    -1,    -1,  1135,   244,   245,   246,    -1,
     248,   249,   250,  1143,    -1,   253,    -1,    -1,    -1,    -1,
     258,   259,    -1,   261,    -1,    -1,    -1,    -1,    -1,   267,
      -1,    -1,    -1,   271,   272,  1208,    -1,    -1,   276,   277,
      -1,    -1,   147,   281,   282,   150,   151,   152,   153,   154,
      -1,   289,   157,    -1,    -1,   293,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   301,    -1,    -1,    -1,  1240,    -1,  1242,
     308,   309,   310,    -1,   312,    -1,  1249,    -1,    -1,    -1,
      -1,    -1,    -1,  1213,  1214,  1215,  1216,    -1,  1218,  1219,
      -1,  1221,  1222,  1223,  1224,    -1,  1226,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    -1,   385,   386,    -1,
      -1,    -1,    -1,    -1,   392,   393,    -1,   395,    -1,    -1,
      -1,   399,   400,   401,    -1,   403,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   414,    -1,    -1,   417,
      -1,    -1,   420,   421,    -1,   423,    -1,   425,    -1,   427,
      -1,    -1,   430,    -1,    -1,    -1,   434,   435,    -1,    -1,
     438,   439,    -1,    -1,    -1,    -1,    -1,   445,   446,    -1,
     448,   449,    -1,   451,   452,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   461,   462,   463,   464,   465,    -1,   467,
      -1,   469,    -1,    -1,   472,    -1,    -1,   475,    -1,   477,
      -1,   479,    -1,   481,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   107,   108,   109,   110,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,    -1,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   571,    -1,    -1,    -1,    -1,    -1,    -1,
     578,    -1,    -1,   581,    -1,   583,    -1,   585,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     608,   609,   610,    -1,    -1,   613,    -1,    -1,   616,   617,
     618,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   630,    -1,   632,    -1,   634,    -1,   636,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   649,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   661,    -1,   663,    -1,    -1,   666,    -1,
     668,    -1,   670,    -1,   672,    -1,   674,    -1,    -1,   677,
     678,   679,   680,   681,    -1,   683,    -1,    -1,   686,    -1,
      -1,    -1,    -1,   691,    -1,    -1,    -1,   695,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   783,    -1,   785,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   793,    -1,    -1,   796,   797,
      -1,    -1,    -1,    -1,   802,    -1,    -1,    -1,   806,    -1,
     808,   809,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   821,    -1,   823,    -1,   825,    -1,    -1,
      -1,   829,   830,   831,    -1,    -1,   834,   835,    -1,   837,
     838,    -1,   840,    -1,    -1,   843,    -1,    -1,   846,   847,
      -1,    -1,   850,   851,   852,    -1,    -1,   855,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   863,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   914,    -1,    -1,   917,
     918,   919,    -1,   921,    -1,   923,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   935,    -1,    -1,
      -1,    -1,   940,   941,   942,    -1,   944,   945,   946,   947,
      -1,   949,    -1,   951,    -1,    -1,    -1,    -1,    -1,   957,
     958,   959,    -1,   961,    -1,   963,    -1,    -1,   966,    -1,
      -1,    -1,   970,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1012,    -1,  1014,    -1,  1016,    -1,
    1018,  1019,  1020,    -1,    -1,    -1,  1024,  1025,    -1,    -1,
      -1,  1029,  1030,    -1,  1032,    -1,    -1,  1035,    -1,  1037,
      -1,   191,  1040,   193,    -1,   195,    -1,    -1,   198,    -1,
    1048,    -1,    -1,    -1,    -1,  1053,    -1,  1055,  1056,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1101,  1102,    -1,  1104,  1105,    -1,  1107,
    1108,    -1,    -1,    -1,    -1,  1113,  1114,    -1,  1116,    -1,
      -1,    -1,    -1,    -1,    -1,  1123,  1124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1146,  1147,
    1148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1156,    -1,
      -1,    -1,    -1,    -1,   314,    -1,    -1,    -1,    -1,    -1,
      -1,   321,    -1,   323,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1181,  1182,    -1,   336,    -1,    -1,    -1,
      -1,    -1,  1190,  1191,  1192,  1193,  1194,  1195,    -1,    -1,
    1198,    -1,  1200,    -1,  1202,    -1,    -1,    -1,    -1,  1207,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,   287,    -1,
     289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1239,    -1,  1241,    -1,    -1,    -1,    -1,    -1,    -1,
    1248,    -1,  1250,    -1,    -1,    -1,    -1,  1255,    -1,    -1,
      -1,  1259,    -1,   413,    -1,  1263,    -1,    -1,    -1,    -1,
    1268,    -1,   422,    -1,    -1,    -1,    -1,    -1,    -1,   429,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   437,    -1,    -1,
      -1,    -1,    -1,   443,   444,    -1,    -1,   447,    -1,    -1,
     450,    -1,    -1,    -1,    -1,    -1,    -1,   457,    -1,    -1,
     460,    -1,  1310,    -1,    -1,  1313,  1314,    -1,    -1,    -1,
    1318,   471,    -1,    -1,   474,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   483,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,
     500,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   513,    -1,    -1,    -1,    -1,    -1,   519,
      -1,   430,    -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,
      -1,   440,   441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   458,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   568,    -1,
      -1,    -1,    -1,    -1,   574,    -1,   576,    -1,    -1,    -1,
     580,    -1,    -1,    -1,    -1,    -1,   586,    -1,    -1,    -1,
      -1,    -1,    -1,   593,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   614,    -1,    -1,    -1,    -1,   619,
     620,    -1,    -1,    -1,    -1,    -1,    -1,   627,    -1,    -1,
      -1,    -1,    -1,   633,    -1,   635,    -1,   637,   638,   639,
     640,   641,   642,   643,    -1,    -1,    -1,    -1,   648,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   623,   624,   716,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   776,    -1,    -1,   779,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   795,    -1,   102,   103,    -1,
      -1,   106,   107,    -1,   109,    -1,   111,    -1,   113,    -1,
     115,   811,   117,   118,   119,    -1,   121,   122,   123,   819,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   828,    -1,
      -1,    -1,    -1,   833,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   845,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   862,    -1,   864,   865,   866,   867,    -1,    -1,
      -1,    -1,    -1,   873,    -1,    -1,   181,    -1,   878,   879,
      -1,   790,   791,   792,   793,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   810,    -1,    -1,    -1,    -1,    -1,   907,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   939,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   954,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   964,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   977,    -1,   979,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   996,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1006,    -1,    -1,    -1,
    1010,   920,    -1,    -1,    -1,   320,    -1,   926,    -1,    -1,
     325,   326,    -1,    -1,   933,    -1,   331,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   339,   340,    -1,    -1,    -1,   344,
      -1,  1041,    -1,   348,    -1,    -1,   351,    -1,    -1,   354,
      -1,    -1,   357,    -1,    -1,   360,    -1,    -1,   363,    -1,
     365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1069,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1081,    -1,  1083,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1022,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1142,    -1,  1144,  1145,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   487,   488,    -1,    -1,    -1,    -1,  1188,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1196,    -1,    -1,    -1,
     505,  1110,   507,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1212,   518,    -1,    -1,  1125,    -1,    -1,    -1,
    1220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1228,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   566,    -1,    -1,   569,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1275,  1276,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1204,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1316,    -1,    -1,  1319,
      -1,    -1,    -1,  1232,    -1,    -1,    -1,  1236,  1237,    -1,
    1239,    -1,  1241,    -1,    -1,    -1,  1245,  1246,    -1,  1248,
      -1,  1250,  1342,  1252,  1253,    -1,  1255,  1256,  1257,    -1,
    1259,    -1,  1261,    -1,  1263,  1264,    -1,  1266,    -1,  1268,
    1269,    -1,  1271,    -1,  1273,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     705,    -1,    -1,  1312,  1313,    -1,  1315,    -1,  1317,  1318,
      -1,  1320,  1321,  1322,  1323,  1324,   721,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1341,    -1,  1343,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   753,    -1,
      -1,   756,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     765,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   774,
      -1,    -1,   777,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   874,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   904,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   913,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   980,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1008,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1060,    -1,  1062,    -1,    -1,
    1065,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1082,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1126,  1127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1138
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     4,     5,    10,    15,    17,    18,    24,    27,    34,
      35,    37,    39,    44,    46,    49,    52,    60,    63,    65,
      66,    67,    68,    76,    77,    78,    79,    80,    82,    83,
      84,    85,    86,    87,    89,    90,    91,   164,   165,   166,
     237,   239,   303,   304,   307,   309,   330,   331,   332,   333,
     334,   337,   338,   340,   342,   350,   351,   357,   358,   366,
     368,   379,   380,   381,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   403,   425,
     426,   427,   428,   432,   437,   440,   443,   446,   448,   455,
     457,   460,   462,   472,   474,   475,   478,   480,   481,     0,
     158,   159,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   146,   204,   240,   204,   310,
     204,   336,   336,   204,   343,   204,   352,   336,   204,   369,
     336,   352,   336,   352,   336,   352,   336,   352,   204,   429,
     204,   449,   331,   332,   333,   334,   357,   380,   381,   391,
     395,   399,   425,   426,   427,   432,   437,   440,   443,   446,
     456,   458,   459,   204,   463,   463,   463,    40,   464,   465,
     162,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   353,   203,   353,   203,   353,   203,   203,   402,   203,
     203,   160,   161,   202,   203,   203,   203,   203,   203,   201,
     147,   148,   150,   151,   152,   153,   154,   167,   168,   169,
     171,   173,   174,   177,   179,   180,   204,   241,    61,   311,
     313,    19,    28,    56,   304,   309,   320,   321,   339,   350,
     359,   360,   362,   363,   320,   339,   359,   171,   344,   340,
     359,     3,    25,   370,   371,    70,   307,   309,   320,   382,
     389,   433,   434,   435,   436,    23,   237,   354,   355,   202,
      71,   393,   438,   439,   202,    72,   397,   441,   442,   202,
      73,   401,   444,   445,    50,    51,   237,   404,   405,   407,
     408,   202,    64,   430,   431,   332,   334,   338,   357,   391,
     392,   450,   451,   480,    74,    75,   452,   453,   464,   464,
     464,    41,   466,   467,   166,   179,   149,   167,   178,   171,
     203,   238,   203,   305,   308,   201,   201,   203,   201,   203,
     203,   201,   203,   203,   203,   203,   353,   203,   203,   201,
     201,   203,   203,   203,   201,   203,   258,   203,   201,   203,
     203,   201,   203,   203,   201,   203,   203,   201,   258,   258,
     201,   203,   258,   201,   203,   201,   201,   201,   203,   201,
     203,   203,   203,   203,   201,   202,   172,   175,   176,   180,
     179,    32,    33,   168,   204,   242,   243,   244,   246,   247,
     202,    62,   311,   316,   317,   340,   202,   202,   204,   314,
     310,   339,    57,   322,   323,     6,    16,    81,   267,   268,
     270,   271,   273,   335,   346,   347,    48,   410,   413,   204,
     364,   339,   335,   410,   171,   345,   202,   366,     9,   367,
     373,   375,   204,   372,   310,   382,   273,   383,   410,   364,
     237,   237,   204,   356,   267,   410,   364,   267,   410,   364,
     267,   410,   364,   179,   183,   185,   204,   406,   404,   204,
     409,   410,   364,   336,   336,   379,   388,   395,   396,   399,
     400,   447,   480,   179,   454,   466,    25,   415,   416,   466,
      47,   482,   485,   166,   179,   203,   203,   201,   201,   305,
     308,   203,   306,   201,   203,   203,   312,   203,   203,   203,
     325,   201,   201,   202,   203,   201,   203,   201,   203,   203,
     202,   203,   203,   341,   203,   202,   203,   258,   201,   258,
     203,   203,   201,   202,   203,   203,   258,   258,   202,   202,
     203,   203,   202,   203,   203,   202,   203,   203,   154,   156,
     182,   184,   188,   191,   202,   258,   202,   203,   203,   203,
     203,   203,   206,   201,   203,   206,   201,   203,   206,   201,
     202,   206,   167,   202,   203,   203,   201,   203,   206,   201,
     202,   243,   246,   204,   245,   204,   248,   237,   319,   168,
     318,   316,   237,   315,   202,   311,   335,    58,    59,   326,
     328,   202,   179,   324,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   274,   275,
     276,   267,   204,   348,   267,   204,   414,   320,   350,   335,
     267,     7,    11,   237,   259,   263,   202,   267,   367,   204,
     376,   202,   311,   383,   274,   267,   320,   389,   267,   393,
     267,   397,   267,   401,   179,   186,   179,   192,   267,   359,
      26,    29,    30,    31,    53,    54,    55,   207,   209,   210,
     211,   212,   213,   214,   215,   218,   219,   220,   222,   223,
     228,   230,   233,   234,   237,   249,   250,   399,   336,   399,
     336,   336,   179,   415,    38,   375,   411,   418,   422,   423,
     204,   417,    45,   479,   202,   463,   203,   202,   202,   306,
     202,   306,   312,   203,   202,   201,   167,   202,   203,   203,
     203,   203,   202,   203,   203,   203,   361,   202,   202,   258,
     258,   201,   202,   203,   203,   202,   203,   202,   203,   202,
     202,   202,   202,   202,   202,   202,   184,   182,   155,   157,
     180,   181,   189,   192,   197,   198,   199,   202,   203,   203,
     201,   203,   208,   201,   203,   208,   201,   203,   208,   201,
     203,   208,   201,   203,   208,   201,   208,   201,   206,   203,
     206,   203,   203,   203,   201,   203,   473,   201,   203,   327,
     201,   203,   246,   311,   204,   329,   179,   150,   151,   152,
     277,   277,   277,   170,   172,   349,   415,   350,     7,    12,
     257,   262,   346,   365,   202,   204,   265,   170,   377,   311,
     277,   389,   179,   187,   192,   179,   193,   181,   200,   366,
     211,   237,   249,   214,   218,   237,   249,   204,   216,   222,
     228,   233,   204,   221,   228,   233,   168,   224,   233,   168,
     231,   183,   204,   235,   146,   205,   411,   376,    43,   207,
     418,   422,   470,   471,   202,   376,   237,   202,   366,   410,
     460,   474,   476,   415,   327,   258,   258,   258,   203,   258,
     171,   202,   203,   361,   201,   203,   203,   203,   374,   258,
     202,   184,   200,   181,   190,   197,   193,   202,   208,   203,
     208,   202,   203,   208,   203,   208,   208,   202,   203,   208,
     208,   203,   208,   203,   203,   202,   203,   461,   203,   473,
     473,   206,   201,   203,   202,   203,   202,   202,   202,   202,
     257,   411,   202,   265,   365,   171,   266,     7,    11,    12,
      13,   255,   256,   378,   202,   202,   179,   194,   195,   217,
     219,   222,   228,   233,   228,   233,   233,   233,   168,   225,
     168,   232,   183,   204,   236,    42,   207,   418,   422,   468,
     469,   470,   202,   377,   318,   204,   424,   203,   375,   422,
     483,   486,   203,   203,   203,   258,   203,   412,   203,   258,
     201,   258,   203,   167,   197,   202,   203,   203,   203,   203,
     208,   208,   208,   208,   203,   203,   229,   202,   461,   461,
     203,   206,   201,   206,   203,   202,   327,   479,   201,   203,
     484,     8,   278,   281,   279,   281,   280,   281,   237,   418,
     422,   202,   266,   202,   265,   278,   179,   196,   197,   222,
     228,   233,   228,   233,   233,   233,   168,   226,   259,   202,
     470,   166,     7,    11,    12,    13,    14,    69,   419,   420,
     421,   202,   201,   376,   207,   422,   486,   202,   203,   269,
     201,   206,   201,   203,   272,   201,   327,   412,   412,   258,
     203,   203,   384,   197,   203,   203,   203,   208,   203,   206,
     202,   327,   201,   476,   203,   484,   484,     7,    11,    12,
      13,    14,    69,    88,   207,   251,   252,   253,   254,   260,
     264,   278,   302,   204,   282,   282,   207,   280,   282,   202,
     266,    36,   207,   302,   385,   386,   228,   233,   233,   233,
     168,   227,   202,   265,   202,   377,   201,   201,   269,   206,
     203,   203,   272,   203,   258,   203,   206,   206,   201,   203,
     202,   203,   261,   203,   477,   258,   265,   265,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   283,   286,
     295,   295,   106,   114,   139,   140,   288,   291,   295,   202,
     385,   204,   387,   233,   266,   202,   207,   470,   479,   202,
     202,   203,   261,   203,   203,   203,   203,   202,   203,   203,
     293,   203,   203,   203,   203,   202,   203,   206,   327,   258,
     206,   201,   266,   202,    20,    22,   237,   252,   284,   296,
     297,   300,   301,   284,    21,   237,   252,   285,   298,   299,
     300,   285,   237,   252,   287,   300,   237,   260,   294,   300,
     202,   237,   289,   296,   300,   284,   237,   290,   298,   300,
     290,   237,   292,   300,   202,   476,   258,   258,   258,   203,
     258,   201,   203,   258,   201,   258,   258,   203,   258,   201,
     203,   258,   258,   258,   203,   258,   258,   258,   203,   258,
     258,   203,   258,   258,   258,   203,   258,   258,   258,   258,
     202,   202,   252,   300,   168,   252,   179,   252,   300,   168,
     252,   252,   260,   300,   300,   477,   258,   203,   258,   203,
     258,   202,   258,   203,   258,   202,   258,   258,   258,   258,
     258,   252,   257,   252,   258,   202,   258
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   163,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   165,   165,   165,   165,   165,   165,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   167,   168,   168,   169,   170,   171,   171,   172,
     172,   173,   174,   175,   176,   177,   177,   178,   178,   179,
     179,   179,   179,   180,   180,   181,   182,   183,   183,   183,
     184,   184,   185,   186,   187,   188,   189,   189,   190,   190,
     191,   192,   193,   194,   194,   194,   195,   196,   197,   197,
     198,   199,   199,   200,   200,   201,   201,   202,   202,   203,
     204,   205,   206,   206,   207,   207,   207,   208,   208,   208,
     209,   209,   210,   210,   210,   211,   211,   211,   211,   212,
     213,   214,   215,   216,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   229,   230,   231,   232,   233,
     234,   235,   235,   236,   236,   237,   238,   238,   238,   238,
     238,   238,   238,   239,   240,   241,   241,   242,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   251,   252,
     253,   254,   254,   254,   254,   254,   255,   256,   256,   256,
     256,   257,   258,   258,   259,   260,   261,   261,   262,   262,
     263,   263,   264,   264,   265,   266,   267,   267,   267,   268,
     269,   269,   269,   269,   270,   271,   272,   272,   272,   273,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   275,
     275,   275,   276,   276,   277,   277,   277,   278,   279,   280,
     281,   282,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   284,   284,   284,   284,   284,   284,   284,   284,   285,
     285,   285,   285,   285,   285,   285,   285,   286,   286,   287,
     287,   287,   287,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   289,   289,   289,   289,   290,   290,   290,   290,
     291,   291,   292,   292,   293,   293,   294,   294,   294,   294,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   303,   304,   305,   305,   306,   306,
     307,   308,   308,   309,   310,   311,   312,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     324,   324,   325,   325,   326,   327,   327,   328,   328,   329,
     330,   330,   330,   330,   331,   332,   333,   334,   335,   335,
     336,   337,   337,   338,   338,   339,   339,   340,   341,   341,
     341,   342,   342,   343,   344,   345,   346,   347,   347,   348,
     349,   349,   350,   351,   351,   351,   352,   353,   353,   353,
     353,   354,   355,   356,   357,   358,   358,   359,   359,   360,
     361,   361,   361,   361,   362,   363,   363,   364,   365,   366,
     367,   367,   368,   369,   370,   371,   371,   372,   373,   374,
     374,   375,   376,   377,   378,   379,   379,   380,   381,   382,
     382,   383,   384,   384,   384,   384,   384,   385,   386,   387,
     388,   388,   389,   390,   390,   390,   391,   392,   392,   393,
     394,   394,   395,   396,   397,   398,   398,   399,   400,   401,
     402,   402,   402,   402,   402,   403,   403,   404,   405,   406,
     406,   407,   408,   409,   410,   411,   411,   412,   412,   412,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     421,   421,   421,   421,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   447,   447,   447,   447,   447,   448,   449,   450,
     450,   450,   450,   451,   451,   452,   453,   453,   454,   454,
     454,   455,   456,   456,   457,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     459,   459,   459,   459,   459,   459,   459,   459,   460,   461,
     461,   461,   461,   461,   461,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   473,   473,
     473,   473,   474,   475,   476,   476,   476,   476,   477,   477,
     477,   477,   478,   479,   480,   481,   482,   483,   483,   484,
     484,   484,   484,   485,   486
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     0,
       1,     3,     1,     1,     2,     2,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     6,
       0,     1,     1,     1,     1,     3,     3,     1,     2,     1,
       1,     1,     1,     3,     4,     2,     1,     1,     1,     1,
       1,     3,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     2,     1,     0,     3,     2,
       1,     1,     3,     2,     1,     1,     3,     4,     3,     6,
       1,     4,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     5,     5,     5,     5,     7,     2,
       2,     2,     2,     4,     4,     4,     4,     4,     4,     6,
       6,     6,     6,     8,     4,     1,     1,    10,     1,     1,
       1,     1,     1,     7,     0,     2,     1,     1,     1,     6,
       1,     1,     1,     1,     1,     7,     0,     2,     4,     6,
       2,     4,     2,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     4,     1,     1,     4,     1,     1,     1,     1,
       7,     1,     1,     1,     1,     1,     7,     1,     1,     1,
       1,     7,     0,     3,     7,     5,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,    10,
       0,     3,     3,     2,    10,    10,     0,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     7,     6,
       1,     1,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     2,     4,     6,     4,     2,     4,     2,     2,     2,
       4,     6,     4,     2,     4,     2,     2,     1,     3,     2,
       2,     4,     2,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     2,     4,     2,     2,     2,     4,     2,     2,
       1,     3,     2,     2,     0,     2,     2,     2,     4,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     1,     4,     1,
       4,     1,     1,     1,     1,     7,     5,     3,     0,     3,
       7,     3,     3,     1,     1,     5,     0,     3,     1,     1,
       1,     4,     1,     1,     1,     5,     1,     4,     1,     1,
       2,     3,     0,     2,     5,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     8,     8,    10,    10,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     9,     0,     3,
       3,     1,     1,     1,     1,     1,     6,     1,     1,     1,
       4,     2,     7,     1,     1,     1,     1,     0,     2,     3,
       5,     4,     1,     1,    10,     1,     1,     1,     1,     7,
       0,     2,     4,     2,     9,     1,     1,     1,     1,     8,
       2,     3,     1,     1,     5,     1,     1,     1,     7,     0,
       3,     1,     1,     1,     1,     1,     1,     8,    10,     1,
       1,    10,     0,     3,     5,     3,     2,     5,     1,     1,
       1,     1,     5,     1,     1,     1,     8,     1,     1,     5,
       1,     1,     8,     1,     5,     1,     1,     8,     1,     5,
       0,     3,     5,     3,     3,     1,     1,     4,     1,     1,
       1,     4,     1,     1,     9,     1,     1,     0,     3,     3,
       3,     1,     1,     5,     1,     1,     9,     1,     5,     1,
       1,     1,     1,     1,     1,     7,     1,     1,    10,    10,
      10,     1,     1,     8,     1,    10,     1,     1,     6,     8,
       1,    10,     6,     1,    10,     6,     1,    10,     6,     1,
       8,     2,     2,     2,     4,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     2,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,    13,     0,
       3,     3,     3,     5,     3,     2,     1,     1,     4,     1,
       4,     1,     4,     1,     4,     1,    11,     0,     3,     3,
       3,     2,     1,    19,     1,     1,     1,     1,     0,     6,
       3,     2,     1,     1,     9,     1,     9,     1,     1,     0,
       3,     3,     2,     1,     7
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (context, YY_("syntax error: cannot back up")); \
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
                  Type, Value, context); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pj_wkt2_parse_context *context)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (context);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pj_wkt2_parse_context *context)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, context);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, pj_wkt2_parse_context *context)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, context); \
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr && yystr[yylen]; yylen++)
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, pj_wkt2_parse_context *context)
{
  YYUSE (yyvaluep);
  YYUSE (context);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (pj_wkt2_parse_context *context)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = (yytype_int16)yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
      yychar = yylex (&yylval, context);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
      yyerror (context, YY_("syntax error"));
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
        yyerror (context, yymsgp);
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
                      yytoken, &yylval, context);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
#if 0
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
#endif
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
                  yystos[yystate], yyvsp, context);
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
  yyerror (context, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, context);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, context);
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
