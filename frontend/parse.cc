/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "./frontend/c.y"

#include <cstdlib>
#include <cstdio>
void yyerror(const char *s);
int yylex();

/* Line 371 of yacc.c  */
#line 75 "./frontend/parse.cc"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse.hh".  */
#ifndef YY_YY_FRONTEND_PARSE_HH_INCLUDED
# define YY_YY_FRONTEND_PARSE_HH_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 9 "./frontend/c.y"

#include "juicyc/symbol.h"


/* Line 387 of yacc.c  */
#line 112 "./frontend/parse.cc"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     PTR_OP = 262,
     INC_OP = 263,
     DEC_OP = 264,
     LEFT_OP = 265,
     RIGHT_OP = 266,
     LE_OP = 267,
     GE_OP = 268,
     EQ_OP = 269,
     NE_OP = 270,
     AND_OP = 271,
     OR_OP = 272,
     MUL_ASSIGN = 273,
     DIV_ASSIGN = 274,
     MOD_ASSIGN = 275,
     ADD_ASSIGN = 276,
     SUB_ASSIGN = 277,
     LEFT_ASSIGN = 278,
     RIGHT_ASSIGN = 279,
     AND_ASSIGN = 280,
     XOR_ASSIGN = 281,
     OR_ASSIGN = 282,
     TYPE_NAME = 283,
     TYPEDEF = 284,
     EXTERN = 285,
     STATIC = 286,
     AUTO = 287,
     REGISTER = 288,
     INLINE = 289,
     RESTRICT = 290,
     TOKEN_CHAR = 291,
     TOKEN_SHORT = 292,
     TOKEN_INT = 293,
     TOKEN_LONG = 294,
     TOKEN_SIGNED = 295,
     TOKEN_UNSIGNED = 296,
     TOKEN_FLOAT = 297,
     TOKEN_DOUBLE = 298,
     TOKEN_CONST = 299,
     VOLATILE = 300,
     TOKEN_VOID = 301,
     TOKEN_BOOL = 302,
     STRUCT = 303,
     UNION = 304,
     ENUM = 305,
     ELLIPSIS = 306,
     CASE = 307,
     DEFAULT = 308,
     IF = 309,
     ELSE = 310,
     SWITCH = 311,
     WHILE = 312,
     DO = 313,
     FOR = 314,
     GOTO = 315,
     CONTINUE = 316,
     BREAK = 317,
     RETURN = 318,
     LOWER_THAN_ELSE = 319
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 13 "./frontend/c.y"

	juicyc::Symbol* sym;


/* Line 387 of yacc.c  */
#line 196 "./frontend/parse.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_FRONTEND_PARSE_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 224 "./frontend/parse.cc"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1448

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNRULES -- Number of states.  */
#define YYNSTATES  398

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,     2,     2,    80,    73,     2,
      65,    66,    74,    75,    72,    76,    69,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,    88,
      81,    87,    82,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    83,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,    84,    71,    77,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    33,    37,    40,    43,    50,    58,    60,    64,    66,
      69,    72,    75,    78,    83,    85,    87,    89,    91,    93,
      95,    97,   102,   104,   108,   112,   116,   118,   122,   126,
     128,   132,   136,   138,   142,   146,   150,   154,   156,   160,
     164,   166,   170,   172,   176,   178,   182,   184,   188,   190,
     194,   196,   202,   204,   208,   210,   212,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   236,   238,   241,
     245,   247,   250,   252,   255,   257,   260,   262,   265,   267,
     271,   273,   277,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   319,   324,   327,   329,   331,   333,   336,   340,   343,
     345,   348,   350,   352,   356,   358,   361,   365,   370,   376,
     382,   389,   392,   394,   398,   400,   404,   406,   408,   410,
     412,   415,   417,   419,   423,   429,   434,   439,   446,   453,
     459,   464,   468,   473,   478,   482,   484,   487,   490,   494,
     496,   499,   501,   505,   507,   511,   514,   517,   519,   521,
     525,   527,   530,   532,   534,   537,   541,   544,   548,   552,
     557,   561,   566,   569,   573,   577,   582,   584,   588,   593,
     595,   598,   602,   607,   610,   612,   615,   619,   622,   624,
     626,   628,   630,   632,   634,   638,   643,   647,   650,   654,
     656,   659,   661,   663,   665,   668,   674,   682,   688,   694,
     702,   709,   717,   724,   732,   736,   739,   742,   745,   749,
     751,   754,   756,   758,   763,   767,   769
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     154,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    65,
     109,    66,    -1,    90,    -1,    91,    67,   109,    68,    -1,
      91,    65,    66,    -1,    91,    65,    92,    66,    -1,    91,
      69,     3,    -1,    91,     7,     3,    -1,    91,     8,    -1,
      91,     9,    -1,    65,   137,    66,    70,   141,    71,    -1,
      65,   137,    66,    70,   141,    72,    71,    -1,   107,    -1,
      92,    72,   107,    -1,    91,    -1,     8,    93,    -1,     9,
      93,    -1,    94,    95,    -1,     6,    93,    -1,     6,    65,
     137,    66,    -1,    73,    -1,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    78,    -1,    93,    -1,    65,   137,    66,
      95,    -1,    95,    -1,    96,    74,    95,    -1,    96,    79,
      95,    -1,    96,    80,    95,    -1,    96,    -1,    97,    75,
      96,    -1,    97,    76,    96,    -1,    97,    -1,    98,    10,
      97,    -1,    98,    11,    97,    -1,    98,    -1,    99,    81,
      98,    -1,    99,    82,    98,    -1,    99,    12,    98,    -1,
      99,    13,    98,    -1,    99,    -1,   100,    14,    99,    -1,
     100,    15,    99,    -1,   100,    -1,   101,    73,   100,    -1,
     101,    -1,   102,    83,   101,    -1,   102,    -1,   103,    84,
     102,    -1,   103,    -1,   104,    16,   103,    -1,   104,    -1,
     105,    17,   104,    -1,   105,    -1,   105,    85,   109,    86,
     106,    -1,   106,    -1,    93,   108,   107,    -1,    87,    -1,
      18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
     107,    -1,   109,    72,   107,    -1,   106,    -1,   112,    88,
      -1,   112,   113,    88,    -1,   115,    -1,   115,   112,    -1,
     116,    -1,   116,   112,    -1,   127,    -1,   127,   112,    -1,
     128,    -1,   128,   112,    -1,   114,    -1,   113,    72,   114,
      -1,   129,    -1,   129,    87,   140,    -1,    29,    -1,    30,
      -1,    31,    -1,    32,    -1,    33,    -1,    46,    -1,    36,
      -1,    37,    -1,    38,    -1,    39,    -1,    42,    -1,    43,
      -1,    40,    -1,    41,    -1,    47,    -1,   117,    -1,   124,
      -1,    28,    -1,   118,     3,    70,   119,    71,    -1,   118,
      70,   119,    71,    -1,   118,     3,    -1,    48,    -1,    49,
      -1,   120,    -1,   119,   120,    -1,   121,   122,    88,    -1,
     116,   121,    -1,   116,    -1,   127,   121,    -1,   127,    -1,
     123,    -1,   122,    72,   123,    -1,   129,    -1,    86,   110,
      -1,   129,    86,   110,    -1,    50,    70,   125,    71,    -1,
      50,     3,    70,   125,    71,    -1,    50,    70,   125,    72,
      71,    -1,    50,     3,    70,   125,    72,    71,    -1,    50,
       3,    -1,   126,    -1,   125,    72,   126,    -1,     3,    -1,
       3,    87,   110,    -1,    44,    -1,    35,    -1,    45,    -1,
      34,    -1,   131,   130,    -1,   130,    -1,     3,    -1,    65,
     129,    66,    -1,   130,    67,   132,   107,    68,    -1,   130,
      67,   132,    68,    -1,   130,    67,   107,    68,    -1,   130,
      67,    31,   132,   107,    68,    -1,   130,    67,   132,    31,
     107,    68,    -1,   130,    67,   132,    74,    68,    -1,   130,
      67,    74,    68,    -1,   130,    67,    68,    -1,   130,    65,
     133,    66,    -1,   130,    65,   136,    66,    -1,   130,    65,
      66,    -1,    74,    -1,    74,   132,    -1,    74,   131,    -1,
      74,   132,   131,    -1,   127,    -1,   132,   127,    -1,   134,
      -1,   134,    72,    51,    -1,   135,    -1,   134,    72,   135,
      -1,   112,   129,    -1,   112,   138,    -1,   112,    -1,     3,
      -1,   136,    72,     3,    -1,   121,    -1,   121,   138,    -1,
     131,    -1,   139,    -1,   131,   139,    -1,    65,   138,    66,
      -1,    67,    68,    -1,    67,   107,    68,    -1,   139,    67,
      68,    -1,   139,    67,   107,    68,    -1,    67,    74,    68,
      -1,   139,    67,    74,    68,    -1,    65,    66,    -1,    65,
     133,    66,    -1,   139,    65,    66,    -1,   139,    65,   133,
      66,    -1,   107,    -1,    70,   141,    71,    -1,    70,   141,
      72,    71,    -1,   140,    -1,   142,   140,    -1,   141,    72,
     140,    -1,   141,    72,   142,   140,    -1,   143,    87,    -1,
     144,    -1,   143,   144,    -1,    67,   110,    68,    -1,    69,
       3,    -1,   146,    -1,   147,    -1,   150,    -1,   151,    -1,
     152,    -1,   153,    -1,     3,    86,   145,    -1,    52,   110,
      86,   145,    -1,    53,    86,   145,    -1,    70,    71,    -1,
      70,   148,    71,    -1,   149,    -1,   148,   149,    -1,   111,
      -1,   145,    -1,    88,    -1,   109,    88,    -1,    54,    65,
     109,    66,   145,    -1,    54,    65,   109,    66,   145,    55,
     145,    -1,    56,    65,   109,    66,   145,    -1,    57,    65,
     109,    66,   145,    -1,    58,   145,    57,    65,   109,    66,
      88,    -1,    59,    65,   150,   150,    66,   145,    -1,    59,
      65,   150,   150,   109,    66,   145,    -1,    59,    65,   111,
     150,    66,   145,    -1,    59,    65,   111,   150,   109,    66,
     145,    -1,    60,     3,    88,    -1,    61,    88,    -1,    62,
      88,    -1,    63,    88,    -1,    63,   109,    88,    -1,   155,
      -1,   154,   155,    -1,   156,    -1,   111,    -1,   112,   129,
     157,   147,    -1,   112,   129,   147,    -1,   111,    -1,   157,
     111,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    66,    67,    68,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    85,    86,    90,    91,
      92,    93,    94,    95,    99,   100,   101,   102,   103,   104,
     108,   109,   113,   114,   115,   116,   120,   121,   122,   126,
     127,   128,   132,   133,   134,   135,   136,   140,   141,   142,
     146,   147,   151,   152,   156,   157,   161,   162,   166,   167,
     171,   172,   176,   177,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   195,   196,   200,   204,   205,
     209,   210,   211,   212,   213,   214,   215,   216,   220,   221,
     225,   226,   230,   231,   232,   233,   234,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     254,   255,   256,   260,   261,   265,   266,   270,   274,   275,
     276,   277,   281,   282,   286,   287,   288,   292,   293,   294,
     295,   296,   300,   301,   305,   306,   310,   311,   312,   316,
     320,   321,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   342,   343,   344,   345,   349,
     350,   355,   356,   360,   361,   365,   366,   367,   371,   372,
     376,   377,   381,   382,   383,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   401,   402,   403,   407,
     408,   409,   410,   414,   418,   419,   423,   424,   428,   429,
     430,   431,   432,   433,   437,   438,   439,   443,   444,   448,
     449,   453,   454,   458,   459,   463,   464,   465,   469,   470,
     471,   472,   473,   474,   478,   479,   480,   481,   482,   486,
     487,   491,   492,   496,   497,   501,   502
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "INLINE",
  "RESTRICT", "TOKEN_CHAR", "TOKEN_SHORT", "TOKEN_INT", "TOKEN_LONG",
  "TOKEN_SIGNED", "TOKEN_UNSIGNED", "TOKEN_FLOAT", "TOKEN_DOUBLE",
  "TOKEN_CONST", "VOLATILE", "TOKEN_VOID", "TOKEN_BOOL", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "LOWER_THAN_ELSE",
  "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "':'", "'='", "';'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    40,    41,    91,    93,    46,
     123,   125,    44,    38,    42,    43,    45,   126,    33,    47,
      37,    60,    62,    94,   124,    63,    58,    61,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      95,    95,    96,    96,    96,    96,    97,    97,    97,    98,
      98,    98,    99,    99,    99,    99,    99,   100,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   109,   109,   110,   111,   111,
     112,   112,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   114,   115,   115,   115,   115,   115,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   117,   118,   118,   119,   119,   120,   121,   121,
     121,   121,   122,   122,   123,   123,   123,   124,   124,   124,
     124,   124,   125,   125,   126,   126,   127,   127,   127,   128,
     129,   129,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   131,   131,   131,   131,   132,
     132,   133,   133,   134,   134,   135,   135,   135,   136,   136,
     137,   137,   138,   138,   138,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   140,   140,   140,   141,
     141,   141,   141,   142,   143,   143,   144,   144,   145,   145,
     145,   145,   145,   145,   146,   146,   146,   147,   147,   148,
     148,   149,   149,   150,   150,   151,   151,   151,   152,   152,
     152,   152,   152,   152,   153,   153,   153,   153,   153,   154,
     154,   155,   155,   156,   156,   157,   157
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     3,     2,     1,
       2,     1,     1,     3,     1,     2,     3,     4,     5,     5,
       6,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     1,     3,     5,     4,     4,     6,     6,     5,
       4,     3,     4,     4,     3,     1,     2,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     2,     1,     1,     3,
       1,     2,     1,     1,     2,     3,     2,     3,     3,     4,
       3,     4,     2,     3,     3,     4,     1,     3,     4,     1,
       2,     3,     4,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     3,     1,
       2,     1,     1,     1,     2,     5,     7,     5,     5,     7,
       6,     7,     6,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   109,    92,    93,    94,    95,    96,   139,   137,    98,
      99,   100,   101,   104,   105,   102,   103,   136,   138,    97,
     106,   113,   114,     0,   232,     0,    80,    82,   107,     0,
     108,    84,    86,     0,   229,   231,   131,     0,   142,     0,
     155,    78,     0,    88,    90,   141,     0,    81,    83,   112,
       0,    85,    87,     1,   230,     0,   134,     0,   132,     0,
     159,   157,   156,     0,    79,     0,     0,   235,     0,   234,
       0,     0,     0,   140,     0,   119,     0,   115,     0,   121,
       0,     0,   127,     0,   143,   160,   158,    89,    90,     2,
       3,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   207,    24,    25,
      26,    27,    28,    29,   213,     6,    18,    30,     0,    32,
      36,    39,    42,    47,    50,    52,    54,    56,    58,    60,
      62,    75,     0,   211,   212,   198,   199,     0,   209,   200,
     201,   202,   203,     2,     0,   186,    91,   236,   233,   168,
     154,   167,     0,   161,   163,     0,     0,   151,    25,     0,
       0,     0,   118,   111,   116,     0,     0,   122,   124,   120,
     128,     0,    30,    77,   135,   129,   133,     0,     0,    22,
       0,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   226,   227,     0,     0,   170,     0,     0,    12,
      13,     0,     0,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    64,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   214,   208,   210,
       0,     0,   189,     0,     0,     0,   194,     0,     0,   165,
     172,   166,   173,   152,     0,   153,     0,     0,   150,   146,
       0,   145,    25,     0,   110,   125,     0,   117,     0,   130,
     204,     0,     0,     0,   206,     0,     0,     0,     0,     0,
       0,   224,   228,     5,     0,   172,   171,     0,    11,     8,
       0,    16,     0,    10,    63,    33,    34,    35,    37,    38,
      40,    41,    45,    46,    43,    44,    48,    49,    51,    53,
      55,    57,    59,     0,    76,     0,   197,   187,     0,   190,
     193,   195,   182,     0,     0,   176,    25,     0,   174,     0,
       0,   162,   164,   169,     0,     0,   149,   144,   123,   126,
      23,     0,   205,     0,     0,     0,     0,     0,     0,     0,
      31,     9,     0,     7,     0,   196,   188,   191,     0,   183,
     175,   180,   177,   184,     0,   178,    25,     0,   147,   148,
     215,   217,   218,     0,     0,     0,     0,     0,     0,    17,
      61,   192,   185,   181,   179,     0,     0,   222,     0,   220,
       0,    14,     0,   216,   219,   223,   221,    15
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   115,   116,   290,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   215,
     132,   174,    24,    68,    42,    43,    26,    27,    28,    29,
      76,    77,    78,   166,   167,    30,    57,    58,    31,    32,
      59,    45,    46,    62,   323,   153,   154,   155,   197,   324,
     252,   242,   243,   244,   245,   246,   134,   135,   136,   137,
     138,   139,   140,   141,   142,    33,    34,    35,    70
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -301
static const yytype_int16 yypact[] =
{
    1398,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,    11,  -301,    48,  1398,  1398,  -301,    13,
    -301,  1398,  1398,   955,  -301,  -301,   -35,    35,  -301,    50,
      -5,  -301,   -24,  -301,  1111,     8,    34,  -301,  -301,    60,
    1147,  -301,  -301,  -301,  -301,    35,   -40,    23,  -301,    90,
    -301,  -301,    -5,    50,  -301,   328,   802,  -301,    48,  -301,
    1292,  1072,   664,     8,  1147,  1147,  1211,  -301,    63,  1147,
     174,   941,  -301,     9,  -301,  -301,  -301,  -301,    31,    65,
    -301,  -301,   948,   970,   970,   941,    80,   111,   118,   132,
     528,   139,   245,   167,   171,   233,   616,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,  -301,   136,   609,   941,  -301,
      81,   187,   256,    45,   274,   196,   194,   191,   263,    27,
    -301,  -301,   -23,  -301,  -301,  -301,  -301,   404,  -301,  -301,
    -301,  -301,  -301,  -301,   712,  -301,  -301,  -301,  -301,  -301,
    -301,     5,   216,   214,  -301,    53,    32,  -301,   223,   226,
     679,  1248,  -301,  -301,  -301,   941,    59,  -301,   232,  -301,
    -301,    49,  -301,  -301,  -301,  -301,  -301,   528,   616,  -301,
     616,  -301,  -301,   234,   528,   941,   941,   941,   262,   480,
     235,  -301,  -301,  -301,    66,   101,    85,   258,   319,  -301,
    -301,   816,   941,   322,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,   941,  -301,   941,   941,   941,
     941,   941,   941,   941,   941,   941,   941,   941,   941,   941,
     941,   941,   941,   941,   941,   941,   941,  -301,  -301,  -301,
     941,   323,  -301,   228,   802,   -33,  -301,  1024,   346,  -301,
      56,  -301,    98,  -301,  1374,  -301,   325,   788,  -301,  -301,
     941,  -301,   267,   270,  -301,  -301,    63,  -301,   941,  -301,
    -301,   273,   275,   528,  -301,   115,   119,   127,   277,   535,
     535,  -301,  -301,  -301,  1171,   142,  -301,   831,  -301,  -301,
     128,  -301,   163,  -301,  -301,  -301,  -301,  -301,    81,    81,
     187,   187,   256,   256,   256,   256,    45,    45,   274,   196,
     194,   191,   263,    76,  -301,   272,  -301,  -301,   496,  -301,
    -301,  -301,  -301,   278,   279,  -301,   280,   285,    98,  1335,
     846,  -301,  -301,  -301,   311,   315,  -301,  -301,  -301,  -301,
     276,   276,  -301,   528,   528,   528,   941,   865,   894,   712,
    -301,  -301,   941,  -301,   941,  -301,  -301,  -301,   802,  -301,
    -301,  -301,  -301,  -301,   326,  -301,   327,   329,  -301,  -301,
     288,  -301,  -301,   168,   528,   177,   528,   192,   241,  -301,
    -301,  -301,  -301,  -301,  -301,   528,   306,  -301,   528,  -301,
     528,  -301,   697,  -301,  -301,  -301,  -301,  -301
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -301,  -301,  -301,  -301,    -7,  -301,  -109,    84,    92,    46,
      88,   166,   169,   183,   184,   193,  -301,   -76,   -62,  -301,
     -45,   -72,   -20,     0,  -301,   355,  -301,    96,  -301,  -301,
     351,   -56,   -64,  -301,   160,  -301,   373,   -70,    28,  -301,
     -22,   -21,   -19,   -50,   -69,  -301,   175,  -301,    52,  -134,
    -222,   -65,    82,  -300,  -301,   185,   -93,  -301,   -15,  -301,
     318,  -183,  -301,  -301,  -301,  -301,   426,  -301,  -301
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      25,   146,   152,    44,   145,   173,   280,   188,    38,   216,
     159,   162,    56,   176,    36,   169,    49,   251,   358,   173,
     164,    61,   160,   183,    67,    73,    47,    48,   328,    69,
       8,    51,    52,    25,   240,    55,   241,    38,    56,    17,
      18,    88,   196,    86,   234,   133,    88,    81,    63,   236,
     147,    38,    56,    38,   320,   148,   168,   224,   225,    38,
     194,   195,   286,   328,    64,   237,    38,     8,    60,    40,
     247,   151,   248,    71,   172,    72,    17,    18,    79,    40,
     175,    37,   145,    50,   270,   179,   181,   182,   172,   173,
      85,   274,   358,   265,    82,    83,   347,   348,   263,    39,
      60,   176,    79,    79,    79,   164,   257,    79,   295,   296,
     297,   172,   235,    39,   196,    39,   196,   133,    66,   255,
     269,   247,    40,   248,    40,   256,   226,   227,    39,   249,
      74,   266,   250,   195,    79,   195,    41,    40,   236,   291,
     275,   276,   277,   198,   199,   200,    75,   267,   236,   165,
     284,   177,   248,   294,   282,   217,    84,   292,   172,    40,
     218,   219,   354,   329,   173,   330,   184,   283,   315,   279,
      75,    75,    75,   236,   314,    75,   185,   285,   350,   319,
     342,   343,   145,   186,    60,   344,   327,   236,    85,    79,
     313,   236,   173,   345,   351,   334,   339,   187,   335,   236,
     352,   201,    75,   202,   189,   203,    79,   284,    79,   248,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   250,    73,
     271,   353,   272,   172,   386,   236,   143,    90,    91,    92,
     236,    93,    94,   388,   168,   170,   171,   151,   190,   236,
     370,   371,   372,   357,   151,   191,   145,    75,   390,   192,
     364,   172,   220,   221,   236,   285,   222,   223,   367,   230,
     302,   303,   304,   305,    75,   232,    75,   231,   380,   233,
     172,   387,   253,   389,   151,    85,   254,   145,   228,   229,
     379,   258,   393,   381,   259,   395,   145,   396,   106,   317,
     318,   373,   375,   377,   298,   299,   108,   109,   110,   111,
     112,   113,   391,   392,   300,   301,   306,   307,   268,   278,
     273,   193,   288,   281,   287,   293,   316,   357,   333,   151,
     145,    89,    90,    91,    92,   336,    93,    94,   337,   340,
     355,   341,   346,   385,   359,   360,   349,   172,   361,   143,
      90,    91,    92,   362,    93,    94,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   368,
      95,    96,    97,   369,    98,    99,   100,   101,   102,   103,
     104,   105,   382,   106,   394,   383,   308,   384,    65,   107,
     309,   108,   109,   110,   111,   112,   113,    89,    90,    91,
      92,   106,    93,    94,   325,   310,   114,   311,    87,   108,
     326,   110,   111,   112,   113,   161,   338,   312,    80,   332,
     321,   378,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   239,    95,    96,    97,    54,
      98,    99,   100,   101,   102,   103,   104,   105,     0,   106,
       0,     0,     0,     0,    65,   238,     0,   108,   109,   110,
     111,   112,   113,   143,    90,    91,    92,     0,    93,    94,
       0,     0,   114,     0,     0,     0,     0,     0,     0,   143,
      90,    91,    92,     0,    93,    94,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    89,    90,    91,    92,     0,    93,    94,   143,    90,
      91,    92,     0,    93,    94,   106,     0,     0,     0,     0,
       0,     0,     0,   108,   109,   110,   111,   112,   113,     0,
       0,   106,     0,   240,     0,   241,   144,   356,   114,   108,
     109,   110,   111,   112,   113,     0,     0,     0,     0,     0,
      95,    96,    97,     0,    98,    99,   100,   101,   102,   103,
     104,   105,     0,   106,     0,     0,     0,     0,    65,     0,
     106,   108,   109,   110,   111,   112,   113,     0,   108,   109,
     110,   111,   112,   113,     0,     0,   114,     0,     0,   143,
      90,    91,    92,   114,    93,    94,     0,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   143,    90,    91,
      92,     0,    93,    94,     0,     0,     0,     0,     0,     0,
       0,   106,   143,    90,    91,    92,     0,    93,    94,   108,
     109,   110,   111,   112,   113,   156,   214,     0,     0,     8,
     143,    90,    91,    92,     0,    93,    94,     0,    17,    18,
     260,     0,     0,     0,     8,   143,    90,    91,    92,     0,
      93,    94,     0,    17,    18,     0,     0,     0,     0,   106,
       0,     0,   157,     0,     0,     0,     0,   108,   158,   110,
     111,   112,   113,     0,   106,     0,     0,   261,     0,     0,
       0,     0,   108,   262,   110,   111,   112,   113,     0,     0,
       0,     0,   106,     0,   240,     0,   241,   144,   397,     0,
     108,   109,   110,   111,   112,   113,     0,   106,     0,   240,
       0,   241,   144,     0,     0,   108,   109,   110,   111,   112,
     113,   143,    90,    91,    92,     0,    93,    94,     0,     0,
       0,     0,     0,     0,     0,   143,    90,    91,    92,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,   143,
      90,    91,    92,     8,    93,    94,     0,     0,     0,     0,
       0,     0,    17,    18,   143,    90,    91,    92,     0,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,   143,
      90,    91,    92,   106,    93,    94,     0,     0,     0,     0,
       0,   108,   109,   110,   111,   112,   113,   106,   143,    90,
      91,    92,   144,    93,    94,   108,   109,   110,   111,   112,
     113,   106,   289,     0,     0,     0,     0,     0,     0,   108,
     109,   110,   111,   112,   113,     0,   106,   143,    90,    91,
      92,   349,    93,    94,   108,   109,   110,   111,   112,   113,
       0,   106,     0,     0,   365,     0,     0,     0,     0,   108,
     366,   110,   111,   112,   113,     0,     0,     0,     0,     0,
     106,   374,     0,     0,     0,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   143,    90,    91,    92,     0,    93,
      94,   143,    90,    91,    92,    53,    93,    94,     0,   106,
     376,     0,     0,     0,     0,     0,     0,   108,   109,   110,
     111,   112,   113,   143,    90,    91,    92,     0,    93,    94,
       0,     0,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   106,     0,     0,     0,
       0,     0,     0,   178,   108,   109,   110,   111,   112,   113,
       0,   108,   109,   110,   111,   112,   113,    38,     0,     0,
       0,     0,     0,     0,     0,   180,     0,     0,     0,     0,
       0,     0,     0,   108,   109,   110,   111,   112,   113,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   247,
     322,   248,     0,     0,     0,     0,     0,     0,    40,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   150,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,    65,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    66,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   284,   322,   248,     1,
       0,     0,     0,     0,     0,    40,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,   163,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   264,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   363,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   331,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-301)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    66,    71,    25,    66,    81,   189,   100,     3,   118,
      72,    75,     3,    83,     3,    79,     3,   151,   318,    95,
      76,    40,    72,    95,    44,    46,    26,    27,   250,    44,
      35,    31,    32,    33,    67,    70,    69,     3,     3,    44,
      45,    63,   106,    62,    17,    65,    68,    87,    72,    72,
      70,     3,     3,     3,    87,    70,    78,    12,    13,     3,
     105,   106,   196,   285,    88,    88,     3,    35,    40,    74,
      65,    71,    67,    65,    81,    67,    44,    45,    50,    74,
      71,    70,   144,    70,   177,    92,    93,    94,    95,   165,
      62,   184,   392,   165,    71,    72,   279,   280,   160,    65,
      72,   171,    74,    75,    76,   161,   156,    79,   217,   218,
     219,   118,    85,    65,   178,    65,   180,   137,    87,    66,
      71,    65,    74,    67,    74,    72,    81,    82,    65,   151,
      70,    72,   151,   178,   106,   180,    88,    74,    72,   201,
     185,   186,   187,     7,     8,     9,    50,    88,    72,    86,
      65,    86,    67,   215,    88,    74,    66,   202,   165,    74,
      79,    80,    86,    65,   240,    67,    86,    66,   240,   189,
      74,    75,    76,    72,   236,    79,    65,   196,   287,   244,
     273,    66,   244,    65,   156,    66,   248,    72,   160,   161,
     235,    72,   268,    66,    66,   257,   268,    65,   260,    72,
      72,    65,   106,    67,    65,    69,   178,    65,   180,    67,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   247,   250,
     178,    68,   180,   240,    66,    72,     3,     4,     5,     6,
      72,     8,     9,    66,   266,    71,    72,   247,     3,    72,
     343,   344,   345,   318,   254,    88,   318,   161,    66,    88,
     329,   268,    75,    76,    72,   284,    10,    11,   330,    73,
     224,   225,   226,   227,   178,    84,   180,    83,   354,    16,
     287,   374,    66,   376,   284,   257,    72,   349,    14,    15,
     352,    68,   385,   358,    68,   388,   358,   390,    65,    71,
      72,   346,   347,   348,   220,   221,    73,    74,    75,    76,
      77,    78,    71,    72,   222,   223,   228,   229,    86,    57,
      86,    88,     3,    88,    66,     3,     3,   392,     3,   329,
     392,     3,     4,     5,     6,    68,     8,     9,    68,    66,
      68,    66,    65,    55,    66,    66,    70,   354,    68,     3,
       4,     5,     6,    68,     8,     9,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    68,
      52,    53,    54,    68,    56,    57,    58,    59,    60,    61,
      62,    63,    66,    65,    88,    68,   230,    68,    70,    71,
     231,    73,    74,    75,    76,    77,    78,     3,     4,     5,
       6,    65,     8,     9,    68,   232,    88,   233,    63,    73,
      74,    75,    76,    77,    78,    74,   266,   234,    55,   254,
     245,   349,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,   137,    52,    53,    54,    33,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    65,
      -1,    -1,    -1,    -1,    70,    71,    -1,    73,    74,    75,
      76,    77,    78,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     3,     4,     5,     6,    -1,     8,     9,     3,     4,
       5,     6,    -1,     8,     9,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    -1,
      -1,    65,    -1,    67,    -1,    69,    70,    71,    88,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,
      65,    73,    74,    75,    76,    77,    78,    -1,    73,    74,
      75,    76,    77,    78,    -1,    -1,    88,    -1,    -1,     3,
       4,     5,     6,    88,     8,     9,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,     3,     4,     5,     6,    -1,     8,     9,    73,
      74,    75,    76,    77,    78,    31,    87,    -1,    -1,    35,
       3,     4,     5,     6,    -1,     8,     9,    -1,    44,    45,
      31,    -1,    -1,    -1,    35,     3,     4,     5,     6,    -1,
       8,     9,    -1,    44,    45,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,    65,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    65,    -1,    67,    -1,    69,    70,    71,    -1,
      73,    74,    75,    76,    77,    78,    -1,    65,    -1,    67,
      -1,    69,    70,    -1,    -1,    73,    74,    75,    76,    77,
      78,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    35,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    65,     8,     9,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    65,     3,     4,
       5,     6,    70,     8,     9,    73,    74,    75,    76,    77,
      78,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    65,     3,     4,     5,
       6,    70,     8,     9,    73,    74,    75,    76,    77,    78,
      -1,    65,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,     3,     4,     5,     6,    -1,     8,
       9,     3,     4,     5,     6,     0,     8,     9,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    73,    74,    75,    76,    77,    78,
      -1,    73,    74,    75,    76,    77,    78,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    70,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    87,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    28,
      -1,    -1,    -1,    -1,    -1,    74,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    71,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,   111,   112,   115,   116,   117,   118,
     124,   127,   128,   154,   155,   156,     3,    70,     3,    65,
      74,    88,   113,   114,   129,   130,   131,   112,   112,     3,
      70,   112,   112,     0,   155,    70,     3,   125,   126,   129,
     127,   131,   132,    72,    88,    70,    87,   111,   112,   147,
     157,    65,    67,   130,    70,   116,   119,   120,   121,   127,
     125,    87,    71,    72,    66,   127,   131,   114,   129,     3,
       4,     5,     6,     8,     9,    52,    53,    54,    56,    57,
      58,    59,    60,    61,    62,    63,    65,    71,    73,    74,
      75,    76,    77,    78,    88,    90,    91,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   109,   111,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     3,    70,   107,   140,   111,   147,     3,
      66,   112,   133,   134,   135,   136,    31,    68,    74,   107,
     132,   119,   121,    71,   120,    86,   122,   123,   129,   121,
      71,    72,    93,   106,   110,    71,   126,    86,    65,    93,
      65,    93,    93,   110,    86,    65,    65,    65,   145,    65,
       3,    88,    88,    88,   109,   109,   121,   137,     7,     8,
       9,    65,    67,    69,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    87,   108,    95,    74,    79,    80,
      75,    76,    10,    11,    12,    13,    81,    82,    14,    15,
      73,    83,    84,    16,    17,    85,    72,    88,    71,   149,
      67,    69,   140,   141,   142,   143,   144,    65,    67,   129,
     131,   138,   139,    66,    72,    66,    72,   132,    68,    68,
      31,    68,    74,   107,    71,   110,    72,    88,    86,    71,
     145,   137,   137,    86,   145,   109,   109,   109,    57,   111,
     150,    88,    88,    66,    65,   131,   138,    66,     3,    66,
      92,   107,   109,     3,   107,    95,    95,    95,    96,    96,
      97,    97,    98,    98,    98,    98,    99,    99,   100,   101,
     102,   103,   104,   109,   107,   110,     3,    71,    72,   140,
      87,   144,    66,   133,   138,    68,    74,   107,   139,    65,
      67,    51,   135,     3,   107,   107,    68,    68,   123,   110,
      66,    66,   145,    66,    66,    66,    65,   150,   150,    70,
      95,    66,    72,    68,    86,    68,    71,   140,   142,    66,
      66,    68,    68,    66,   133,    68,    74,   107,    68,    68,
     145,   145,   145,   109,    66,   109,    66,   109,   141,   107,
     106,   140,    66,    68,    68,    55,    66,   145,    66,   145,
      66,    71,    72,   145,    88,   145,   145,    71
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
  *yyssp = yystate;

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
      yychar = YYLEX;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
/* Line 1792 of yacc.c  */
#line 2034 "./frontend/parse.cc"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 506 "./frontend/c.y"

extern char yytext[];
extern int column;

void yyerror(const char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}