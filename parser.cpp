/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "FrontEnd/parser.y" /* yacc.c:339  */

#include <iostream>
#include <fstream>
#include "FrontEnd/ProcessLog.hpp"
#include "FrontEnd/FrontEnd.hpp"

extern int yylex();
void yyerror(const char*);

#line 76 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:339  */

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
   by #include "parser.hpp".  */
#ifndef YY_YY_HOME_RYAN_DROPBOX_RYAN_SCHOOL_CURRENT_CLASSES_CS6300_WORKSPACE_PARSER_HPP_INCLUDED
# define YY_YY_HOME_RYAN_DROPBOX_RYAN_SCHOOL_CURRENT_CLASSES_CS6300_WORKSPACE_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ARRAYSY = 258,
    ASSIGNSY = 259,
    BEGINSY = 260,
    CHARCONSTSY = 261,
    CHRSY = 262,
    COLONSY = 263,
    COMMASY = 264,
    CONSTSY = 265,
    DIVSY = 266,
    DOSY = 267,
    DOTSY = 268,
    DOWNTOSY = 269,
    ELSEIFSY = 270,
    ELSESY = 271,
    ENDSY = 272,
    EQSY = 273,
    FORSY = 274,
    FORWARDSY = 275,
    FUNCTIONSY = 276,
    GTESY = 277,
    GTSY = 278,
    IDENTSY = 279,
    IFSY = 280,
    INTSY = 281,
    LBRACKETSY = 282,
    LPARENSY = 283,
    LTESY = 284,
    LTSY = 285,
    MINUSSY = 286,
    MODSY = 287,
    MULTSY = 288,
    NOTSY = 289,
    OFSY = 290,
    ORDSY = 291,
    PLUSSY = 292,
    PREDSY = 293,
    PROCEDURESY = 294,
    RBRACKETSY = 295,
    READSY = 296,
    RECORDSY = 297,
    REPEATSY = 298,
    RETURNSY = 299,
    RPARENSY = 300,
    SCOLONSY = 301,
    STOPSY = 302,
    STRINGSY = 303,
    SUCCSY = 304,
    THENSY = 305,
    TOSY = 306,
    TYPESY = 307,
    UNTILSY = 308,
    VARSY = 309,
    WHILESY = 310,
    WRITESY = 311,
    ANDSY = 312,
    ORSY = 313,
    NEQSY = 314,
    UMINUSSY = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 12 "FrontEnd/parser.y" /* yacc.c:355  */

  char * str_val;
  int int_val;
  char char_val;

#line 183 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_RYAN_DROPBOX_RYAN_SCHOOL_CURRENT_CLASSES_CS6300_WORKSPACE_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 198 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   446

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  242

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   128,   128,   131,   133,   134,   137,   138,   141,   144,
     145,   146,   149,   150,   153,   156,   157,   160,   163,   164,
     167,   168,   171,   174,   175,   179,   182,   185,   186,   189,
     190,   193,   194,   197,   200,   201,   202,   205,   208,   211,
     212,   215,   218,   219,   222,   225,   226,   229,   230,   233,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   249,   252,   255,   258,   261,   262,   265,   268,   269,
     272,   275,   278,   280,   283,   286,   287,   290,   293,   294,
     298,   301,   302,   305,   308,   309,   312,   314,   315,   317,
     318,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   348,   351,   352,   353
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARRAYSY", "ASSIGNSY", "BEGINSY",
  "CHARCONSTSY", "CHRSY", "COLONSY", "COMMASY", "CONSTSY", "DIVSY", "DOSY",
  "DOTSY", "DOWNTOSY", "ELSEIFSY", "ELSESY", "ENDSY", "EQSY", "FORSY",
  "FORWARDSY", "FUNCTIONSY", "GTESY", "GTSY", "IDENTSY", "IFSY", "INTSY",
  "LBRACKETSY", "LPARENSY", "LTESY", "LTSY", "MINUSSY", "MODSY", "MULTSY",
  "NOTSY", "OFSY", "ORDSY", "PLUSSY", "PREDSY", "PROCEDURESY",
  "RBRACKETSY", "READSY", "RECORDSY", "REPEATSY", "RETURNSY", "RPARENSY",
  "SCOLONSY", "STOPSY", "STRINGSY", "SUCCSY", "THENSY", "TOSY", "TYPESY",
  "UNTILSY", "VARSY", "WHILESY", "WRITESY", "ANDSY", "ORSY", "NEQSY",
  "UMINUSSY", "$accept", "Program", "ProgramHead", "OptConstDecls",
  "ConstDecls", "ConstDecl", "PFDecls", "ProcedureDecl", "PSignature",
  "FunctionDecl", "FSignature", "OptFormalParameters", "FormalParameters",
  "FormalParameter", "OptVar", "Body", "Block", "StatementList",
  "OptTypeDecls", "TypeDecls", "TypeDecl", "Type", "SimpleType",
  "RecordType", "FieldDecls", "FieldDecl", "IdentList", "ArrayType",
  "OptVarDecls", "VarDecls", "VarDecl", "Statement", "Assignment",
  "IfStatement", "IfHead", "ThenPart", "ElseIfList", "ElseIfHead",
  "ElseClause", "WhileStatement", "WhileHead", "RepeatStatement",
  "ForStatement", "ForHead", "ToHead", "StopStatement", "ReturnStatement",
  "ReadStatement", "ReadArgs", "WriteStatement", "WriteArgs",
  "ProcedureCall", "OptArguments", "Arguments", "Expression",
  "FunctionCall", "LValue", YY_NULLPTR
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
     315
};
# endif

#define YYPACT_NINF -172

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-172)))

#define YYTABLE_NINF -25

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-25)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,   -12,    17,    24,    15,    40,   -12,  -172,  -172,   359,
      51,    72,    49,   102,  -172,    91,    94,   102,    96,   359,
     102,  -172,   102,   107,     4,  -172,  -172,  -172,    87,  -172,
     127,  -172,  -172,    -3,  -172,  -172,  -172,  -172,  -172,   100,
    -172,   130,    72,  -172,   117,  -172,  -172,   129,   138,  -172,
     102,   102,   102,   139,   141,  -172,   142,    88,  -172,    -8,
     155,   102,   333,   148,   -28,   333,   333,   102,  -172,   359,
     359,  -172,   359,   102,   102,   161,   102,   151,   102,    -2,
    -172,  -172,    23,   117,  -172,    84,   102,   102,   131,  -172,
     364,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,  -172,   102,   102,   102,   102,   133,
     170,   333,  -172,     1,    -8,   102,     6,   333,  -172,   134,
      85,    10,   333,   333,   359,   333,  -172,   163,   156,  -172,
    -172,   136,  -172,  -172,  -172,    -2,   160,  -172,   167,   174,
    -172,   159,  -172,   164,   186,     7,  -172,   217,   248,   279,
    -172,   387,   387,   387,   387,   387,    65,  -172,  -172,    65,
     364,   364,   387,   333,  -172,   102,   148,  -172,   333,   102,
    -172,   102,   359,    87,   184,  -172,    11,  -172,   102,    42,
    -172,   165,  -172,   178,   179,    16,    52,  -172,  -172,  -172,
    -172,  -172,   333,    -8,   333,   333,   134,  -172,  -172,  -172,
      12,  -172,  -172,   123,  -172,   -21,   -21,   166,    15,   168,
     180,   181,   102,    -2,  -172,   157,   183,  -172,   117,   185,
    -172,    49,  -172,  -172,  -172,   310,   187,   205,   171,   135,
    -172,    24,   152,  -172,    -2,  -172,    -2,  -172,    -2,  -172,
    -172,  -172
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     0,    30,     0,     4,     7,     1,    60,
       0,     0,    46,     0,     6,     0,   119,     0,     0,    60,
      79,    77,     0,     0,     0,    28,    50,    51,     0,    52,
       0,    53,    54,     0,    55,    56,    57,    58,    59,     0,
       2,     0,    29,    32,     0,    11,    91,     0,   119,   107,
       0,     0,     0,     0,     0,   114,     0,     0,   106,   109,
       0,    88,    63,     0,     0,    78,    71,     0,    26,    60,
      60,    66,    60,     0,     0,     0,     0,     0,     0,     0,
      31,    43,     0,    45,    48,     3,     0,     0,     0,   110,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
      87,    90,   119,     0,    82,     0,     0,    85,    27,    64,
      69,     0,    76,    75,    60,    61,   117,     0,     0,    37,
      40,     0,    34,    35,    36,     0,     0,    47,     0,     0,
       9,     0,    10,     0,     0,     0,   108,     0,     0,     0,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   105,
      93,   104,   103,    74,    86,     0,     0,    80,    72,     0,
      83,     0,    60,     0,     0,    70,     0,   118,     0,     0,
      33,     0,    42,     0,     0,     5,     5,    92,   116,   112,
     113,   115,    89,    81,    84,    67,    68,    65,    62,    73,
       0,    38,    39,     0,    49,    19,    19,     0,    30,     0,
       0,     0,     0,     0,    23,     0,    18,    21,     0,     0,
      12,    46,    13,    15,    16,     0,     0,     0,    24,     0,
      14,     0,     0,    41,     0,    20,     0,    25,     0,    17,
      22,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,  -172,   224,  -172,   226,  -172,  -172,  -172,  -172,
    -172,    28,  -172,     8,  -172,    55,    20,   -17,    29,  -172,
     196,  -122,  -172,  -172,  -172,  -172,  -171,  -172,    21,  -172,
     169,   188,  -172,  -172,  -172,    80,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,   173,   -13,  -172,     5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   208,     6,     7,    85,   140,   141,   142,
     143,   215,   216,   217,   218,   209,    10,    24,    12,    42,
      43,   131,   132,   133,   179,   202,    82,   134,    45,    83,
      84,    25,    26,    27,    28,    71,   120,   173,   174,    29,
      30,    31,    32,    33,    75,    34,    35,    36,   113,    37,
     116,    38,   109,   110,   111,    58,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   128,    64,   -24,    62,    77,     1,    65,   203,    66,
     166,    73,     5,   181,    39,   169,   165,     8,    69,    78,
     212,    68,   129,    94,    39,   115,     1,   175,   199,     9,
      95,   135,   136,   214,    96,    97,   207,    88,    89,    90,
     130,    98,    99,   100,   101,   102,   167,   229,    74,   103,
      69,   170,   188,   119,   117,   121,    69,    69,    13,   201,
     122,   123,     1,   125,    40,   127,    81,    11,   114,   105,
     106,   107,   210,   144,    39,    39,    94,    39,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   226,   160,   161,   162,   163,    41,   101,   102,    94,
     171,   172,   168,    44,    76,   138,    95,   176,    46,    47,
      96,    97,   239,    77,   240,    60,   241,    98,    99,   100,
     101,   102,    61,   139,    63,   103,    48,    78,    49,    39,
      50,   213,   136,    51,   104,    67,    52,    70,    53,    72,
      54,    81,    94,   236,   136,   105,   106,   107,    79,    95,
      55,    56,   192,    96,    97,   196,   194,    86,   195,   108,
      98,    99,   100,   101,   102,   200,    87,    91,   103,    92,
      93,   193,   112,   124,    94,   126,   146,    39,   164,   165,
      69,    95,   180,   178,   182,    96,    97,   238,   105,   106,
     107,   183,    98,    99,   100,   101,   102,    94,   184,   225,
     103,   198,   227,   177,    95,   185,   205,   206,    96,    97,
     186,   204,   220,   234,   222,    98,    99,   100,   101,   102,
     105,   106,   107,   103,     4,   214,   223,   224,    94,   228,
     230,   187,    14,   233,   219,    95,   235,   221,    80,    96,
      97,   211,   231,   105,   106,   107,    98,    99,   100,   101,
     102,   237,   137,   197,   103,     0,     0,   118,     0,    94,
     145,     0,   189,     0,     0,     0,    95,     0,     0,     0,
      96,    97,     0,     0,   105,   106,   107,    98,    99,   100,
     101,   102,     0,     0,     0,   103,     0,     0,     0,     0,
      94,     0,     0,   190,     0,     0,     0,    95,     0,     0,
       0,    96,    97,     0,     0,   105,   106,   107,    98,    99,
     100,   101,   102,     0,     0,     0,   103,     0,     0,     0,
       0,    94,     0,     0,   191,     0,     0,     0,    95,     0,
       0,     0,    96,    97,     0,     0,   105,   106,   107,    98,
      99,   100,   101,   102,    94,     0,     0,   103,     0,     0,
     232,    95,     0,     0,     0,    96,    97,     0,     0,     0,
       0,     0,    98,    99,   100,   101,   102,   105,   106,   107,
     103,     0,     0,     0,     0,    94,     0,     0,    15,     0,
       0,     0,    95,    16,    17,     0,    96,    97,     0,     0,
     105,   106,   107,    98,    99,   100,   101,   102,    94,     0,
      18,   103,    19,    20,     0,   -25,    21,     0,     0,   -25,
     -25,     0,     0,     0,    22,    23,   -25,   -25,   100,   101,
     102,     0,     0,   107,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -25
};

static const yytype_int16 yycheck[] =
{
      13,     3,    19,    24,    17,    13,    10,    20,   179,    22,
       9,    14,    24,   135,     9,     9,     9,     0,    46,    27,
       8,    17,    24,    11,    19,    53,    10,    17,    17,     5,
      18,     8,     9,    54,    22,    23,    20,    50,    51,    52,
      42,    29,    30,    31,    32,    33,    45,   218,    51,    37,
      46,    45,    45,    70,    67,    72,    46,    46,    18,    17,
      73,    74,    10,    76,    13,    78,    24,    52,    63,    57,
      58,    59,    20,    86,    69,    70,    11,    72,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   213,   105,   106,   107,   108,    24,    32,    33,    11,
      15,    16,   115,    54,     4,    21,    18,   124,     6,     7,
      22,    23,   234,    13,   236,    24,   238,    29,    30,    31,
      32,    33,    28,    39,    28,    37,    24,    27,    26,   124,
      28,     8,     9,    31,    46,    28,    34,    50,    36,    12,
      38,    24,    11,     8,     9,    57,    58,    59,    18,    18,
      48,    49,   165,    22,    23,   172,   169,    28,   171,     4,
      29,    30,    31,    32,    33,   178,    28,    28,    37,    28,
      28,   166,    24,    12,    11,    24,    45,   172,    45,     9,
      46,    18,    46,    27,    24,    22,    23,    35,    57,    58,
      59,    24,    29,    30,    31,    32,    33,    11,    24,   212,
      37,    17,    45,    40,    18,    46,    28,    28,    22,    23,
      46,    46,    46,     8,    46,    29,    30,    31,    32,    33,
      57,    58,    59,    37,     0,    54,    46,    46,    11,    46,
      45,    45,     6,    46,   206,    18,   228,   208,    42,    22,
      23,   186,   221,    57,    58,    59,    29,    30,    31,    32,
      33,   231,    83,   173,    37,    -1,    -1,    69,    -1,    11,
      87,    -1,    45,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      22,    23,    -1,    -1,    57,    58,    59,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    45,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    22,    23,    -1,    -1,    57,    58,    59,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    45,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    22,    23,    -1,    -1,    57,    58,    59,    29,
      30,    31,    32,    33,    11,    -1,    -1,    37,    -1,    -1,
      40,    18,    -1,    -1,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    57,    58,    59,
      37,    -1,    -1,    -1,    -1,    11,    -1,    -1,    19,    -1,
      -1,    -1,    18,    24,    25,    -1,    22,    23,    -1,    -1,
      57,    58,    59,    29,    30,    31,    32,    33,    11,    -1,
      41,    37,    43,    44,    -1,    18,    47,    -1,    -1,    22,
      23,    -1,    -1,    -1,    55,    56,    29,    30,    31,    32,
      33,    -1,    -1,    59,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    62,    63,    64,    24,    65,    66,     0,     5,
      77,    52,    79,    18,    66,    19,    24,    25,    41,    43,
      44,    47,    55,    56,    78,    92,    93,    94,    95,   100,
     101,   102,   103,   104,   106,   107,   108,   110,   112,   117,
      13,    24,    80,    81,    54,    89,     6,     7,    24,    26,
      28,    31,    34,    36,    38,    48,    49,   115,   116,   117,
      24,    28,   115,    28,    78,   115,   115,    28,    17,    46,
      50,    96,    12,    14,    51,   105,     4,    13,    27,    18,
      81,    24,    87,    90,    91,    67,    28,    28,   115,   115,
     115,    28,    28,    28,    11,    18,    22,    23,    29,    30,
      31,    32,    33,    37,    46,    57,    58,    59,     4,   113,
     114,   115,    24,   109,   117,    53,   111,   115,    92,    78,
      97,    78,   115,   115,    12,   115,    24,   115,     3,    24,
      42,    82,    83,    84,    88,     8,     9,    91,    21,    39,
      68,    69,    70,    71,   115,   114,    45,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,    45,     9,     9,    45,   115,     9,
      45,    15,    16,    98,    99,    17,    78,    40,    27,    85,
      46,    82,    24,    24,    24,    46,    46,    45,    45,    45,
      45,    45,   115,   117,   115,   115,    78,    96,    17,    17,
     115,    17,    86,    87,    46,    28,    28,    20,    64,    76,
      20,    76,     8,     8,    54,    72,    73,    74,    75,    72,
      46,    79,    46,    46,    46,   115,    82,    45,    46,    87,
      45,    89,    40,    46,     8,    74,     8,    77,    35,    82,
      82,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    64,    64,    65,    65,    66,    67,
      67,    67,    68,    68,    69,    70,    70,    71,    72,    72,
      73,    73,    74,    75,    75,    76,    77,    78,    78,    79,
      79,    80,    80,    81,    82,    82,    82,    83,    84,    85,
      85,    86,    87,    87,    88,    89,    89,    90,    90,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    94,    95,    96,    97,    97,    98,    99,    99,
     100,   101,   102,   103,   104,   105,   105,   106,   107,   107,
     108,   109,   109,   110,   111,   111,   112,   113,   113,   114,
     114,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   116,   117,   117,   117
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     4,     2,     0,     2,     1,     4,     2,
       2,     0,     4,     4,     5,     4,     4,     7,     1,     0,
       3,     1,     4,     1,     0,     4,     3,     3,     1,     2,
       0,     2,     1,     4,     1,     1,     1,     1,     3,     2,
       0,     4,     3,     1,     8,     2,     0,     2,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     5,     2,     2,     3,     0,     2,     2,     0,
       4,     2,     4,     5,     4,     2,     2,     1,     2,     1,
       4,     3,     1,     4,     3,     1,     4,     1,     0,     3,
       1,     1,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     1,
       2,     2,     4,     4,     1,     4,     4,     3,     4,     1
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
        case 2:
#line 128 "FrontEnd/parser.y" /* yacc.c:1646  */
    {cs6300::AddMain((yyvsp[-1].int_val));}
#line 1498 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 141 "FrontEnd/parser.y" /* yacc.c:1646  */
    {cs6300::AddConstant((yyvsp[-3].str_val),(yyvsp[-1].int_val));}
#line 1504 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 149 "FrontEnd/parser.y" /* yacc.c:1646  */
    {cs6300::AddFunction((yyvsp[-3].int_val));}
#line 1510 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 150 "FrontEnd/parser.y" /* yacc.c:1646  */
    {cs6300::AddFunction((yyvsp[-3].int_val),(yyvsp[-1].int_val));}
#line 1516 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 153 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::Signature((yyvsp[-3].str_val),(yyvsp[-1].int_val),-1);}
#line 1522 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 156 "FrontEnd/parser.y" /* yacc.c:1646  */
    {cs6300::AddFunction((yyvsp[-3].int_val));}
#line 1528 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 157 "FrontEnd/parser.y" /* yacc.c:1646  */
    {cs6300::AddFunction((yyvsp[-3].int_val),(yyvsp[-1].int_val));}
#line 1534 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 160 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::Signature((yyvsp[-5].str_val),(yyvsp[-3].int_val),(yyvsp[0].int_val));}
#line 1540 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 163 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1546 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 164 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = -1;}
#line 1552 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 167 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::ParameterList((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1558 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 168 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1564 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 171 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::Parameter((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1570 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 179 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1576 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 182 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[-1].int_val);}
#line 1582 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 185 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::StatementList((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1588 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 186 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::StatementList(-1,(yyvsp[0].int_val));}
#line 1594 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 197 "FrontEnd/parser.y" /* yacc.c:1646  */
    {cs6300::AddType((yyvsp[-3].str_val),(yyvsp[-1].int_val));}
#line 1600 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 200 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1606 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 201 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1612 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 202 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1618 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 205 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::LookupType((yyvsp[0].str_val));}
#line 1624 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 208 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[-1].int_val);}
#line 1630 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 211 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::FieldList((yyvsp[-1].int_val), (yyvsp[0].int_val));}
#line 1636 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 212 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = -1;}
#line 1642 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 215 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::AddField((yyvsp[-3].int_val),(yyvsp[-1].int_val));}
#line 1648 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 218 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::IdentList((yyvsp[-2].int_val),(yyvsp[0].str_val));}
#line 1654 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 219 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::IdentList(-1,(yyvsp[0].str_val));}
#line 1660 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 222 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::BuildArrayType((yyvsp[-5].int_val),(yyvsp[-3].int_val),(yyvsp[0].int_val));}
#line 1666 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 233 "FrontEnd/parser.y" /* yacc.c:1646  */
    {cs6300::AddVariables((yyvsp[-3].int_val),(yyvsp[-1].int_val));}
#line 1672 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 236 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1678 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 237 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1684 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 238 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1690 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 239 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1696 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 240 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1702 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 241 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1708 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 242 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1714 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 243 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1720 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 244 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1726 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 245 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1732 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 246 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = -1;}
#line 1738 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 249 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::Assign((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1744 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 252 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::If((yyvsp[-4].int_val),(yyvsp[-3].int_val),(yyvsp[-2].int_val),(yyvsp[-1].int_val));}
#line 1750 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 255 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1756 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 258 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1762 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 261 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) =cs6300::AppendElseList((yyvsp[-2].int_val),(yyvsp[-1].int_val),(yyvsp[0].int_val));}
#line 1768 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 262 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) =-1;}
#line 1774 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 265 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1780 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 268 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1786 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 269 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = -1;}
#line 1792 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 272 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::While((yyvsp[-3].int_val),(yyvsp[-1].int_val));}
#line 1798 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 275 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1804 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 278 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val)=cs6300::Repeat((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1810 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 280 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::For((yyvsp[-4].int_val),(yyvsp[-3].int_val),(yyvsp[-1].int_val));}
#line 1816 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 283 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::ForHead((yyvsp[-2].str_val),(yyvsp[0].int_val));}
#line 1822 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 286 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::To((yyvsp[0].int_val));}
#line 1828 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 287 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::DownTo((yyvsp[0].int_val));}
#line 1834 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 290 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::Stop();}
#line 1840 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 293 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::Return((yyvsp[0].int_val));}
#line 1846 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 294 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::Return();}
#line 1852 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 298 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[-1].int_val);}
#line 1858 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 301 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::ReadValue((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1864 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 302 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::ReadValue((yyvsp[0].int_val));}
#line 1870 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 305 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[-1].int_val);}
#line 1876 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 308 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::WriteExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1882 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 309 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::WriteExpr((yyvsp[0].int_val));}
#line 1888 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 312 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::CallProc((yyvsp[-3].str_val),(yyvsp[-1].int_val));}
#line 1894 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 314 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 1900 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 315 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = -1;}
#line 1906 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 317 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::ArgumentList((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1912 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 318 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::ArgumentList(-1,(yyvsp[0].int_val));}
#line 1918 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 321 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::CharExpr((yyvsp[0].char_val));}
#line 1924 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 322 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::ChrExpr((yyvsp[-1].int_val));}
#line 1930 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 323 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::AndExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1936 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 324 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::DivExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1942 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 325 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::EqExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1948 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 326 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::GteExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1954 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 327 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::GtExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1960 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 328 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::LteExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1966 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 329 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::LtExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1972 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 330 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::SubExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1978 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 331 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::ModExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1984 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 332 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::MultExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1990 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 333 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::NeqExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 1996 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 334 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::OrExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 2002 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 335 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::AddExpr((yyvsp[-2].int_val),(yyvsp[0].int_val));}
#line 2008 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 336 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[0].int_val);}
#line 2014 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 337 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::IntExpr((yyvsp[0].int_val));}
#line 2020 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 338 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = (yyvsp[-1].int_val);}
#line 2026 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 339 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::LoadExpr((yyvsp[0].int_val));}
#line 2032 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 340 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::UnMinusExpr((yyvsp[0].int_val));}
#line 2038 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 341 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::NotExpr((yyvsp[0].int_val));}
#line 2044 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 342 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::OrdExpr((yyvsp[-1].int_val));}
#line 2050 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 343 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::PredExpr((yyvsp[-1].int_val));}
#line 2056 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 344 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::StrExpr((yyvsp[0].str_val));delete((yyvsp[0].str_val));}
#line 2062 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 345 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::SuccExpr((yyvsp[-1].int_val));}
#line 2068 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 348 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::CallExpr((yyvsp[-3].str_val),(yyvsp[-1].int_val));}
#line 2074 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 351 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::LoadMember((yyvsp[-2].int_val),(yyvsp[0].str_val));}
#line 2080 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 352 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::LoadArray((yyvsp[-3].int_val),(yyvsp[-1].int_val));}
#line 2086 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 353 "FrontEnd/parser.y" /* yacc.c:1646  */
    {(yyval.int_val) = cs6300::LoadId((yyvsp[0].str_val));}
#line 2092 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
    break;


#line 2096 "/home/ryan/Dropbox/Ryan/School/Current Classes/cs6300/workspace/parser.cpp" /* yacc.c:1646  */
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
  return yyresult;
}
#line 355 "FrontEnd/parser.y" /* yacc.c:1906  */


void yyerror(const char* msg)
{
  ProcessLog::getInstance()->logError(msg);
}
