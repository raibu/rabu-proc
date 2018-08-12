/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "grammar.yac" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>




#define MEMIMM_BASE 0
#define IMM_BASE 0x8000
#define JMP_BASE 0xc000
#define RR_BASE  0xe000

#define MEMIMM_OPC_SHIFT 11
#define IMM_OPC_SHIFT 11
#define RR_OPC_SHIFT 9

#define OPC_ADD  0x0 
#define OPC_SUB  0x1
#define OPC_MUL  0x2 
#define OPC_DIV  0x3 
#define OPC_AND  0x4 
#define OPC_OR  0x5
#define OPC_XOR  0x6 
#define OPC_MOV  0x7 
#define OPC_ADC  0x8 
#define OPC_SBC  0x9 
#define OPC_RMOV  0xa 
#define OPC_CMP  0xb 
#define OPC_CPC  0xc 
#define OPC_LSL  0xd 
#define OPC_LSR  0xe 
#define OPC_ASR  0xf 

#define JMP_ABS  (1<<12)
#define JMP_COND  (1<<11)
#define JMP_CARRY  (1<<10)
#define JMP_INV (1<<9)
#define JMP_RES (1<<8)

#define RR_FLAG (1<<8)
#define RR_RNMP (1<<7)
#define RR_RDMP (1<<6)









typedef struct _par_ams{
	char* instr;
	char* op1;
	char* op2;
	char* label;
	int numops;
	int line;
	int instr_count;
	int labels_count;
}ASMPARAMS;

typedef struct __label{
	unsigned short addr_preset;
	unsigned short label_addr; // label addr in file
	char label_name[64]; //
}label;

label* labels;

#define EQSTR(s1,s2) (!strcasecmp(s1,s2))
ASMPARAMS* keked=NULL;
unsigned short instr_opcode=0;
FILE* infile=NULL;
FILE* outfile=NULL;
void yyerror(const char *str)
{
        fprintf(stderr,"error at line %d:  %s %s %s:\n%s\n", keked->line, keked->instr, keked->op1, keked->op2, str);
        exit(1);
}
 
int yywrap()
{
        return 1;
} 
  
void print_labels(){
	for (int i = 0; i < keked->labels_count; ++i)
	{
		printf("addr: %#x, addr_preset: %#x, name: %s\n", labels[i].label_addr, labels[i].addr_preset, labels[i].label_name);
	}
}



#line 163 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    LABEL = 258,
    REGISTER = 259,
    HEXNUM = 260,
    INSTRUCTION = 261,
    COMMA = 262,
    OPREF = 263,
    CLOSEREF = 264,
    COMMENT = 265,
    DECLABEL = 266
  };
#endif
/* Tokens.  */
#define LABEL 258
#define REGISTER 259
#define HEXNUM 260
#define INSTRUCTION 261
#define COMMA 262
#define OPREF 263
#define CLOSEREF 264
#define COMMENT 265
#define DECLABEL 266

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 236 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   33

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  12
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  21
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  43

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   266

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
       5,     6,     7,     8,     9,    10,    11
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   103,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   111,   164,   231,   277,   324,   371,   414,
     464,   488
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LABEL", "REGISTER", "HEXNUM",
  "INSTRUCTION", "COMMA", "OPREF", "CLOSEREF", "COMMENT", "DECLABEL",
  "$accept", "commands", "command", "i0_label", "i1_label", "i2_reg_reg",
  "i2_reg_rm", "i2_rm_reg", "i2_imm_reg", "i2_reg_mimm", "i2_mimm_reg",
  "linefeed", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266
};
# endif

#define YYPACT_NINF -10

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-10)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -10,     0,   -10,    -1,   -10,    -9,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,    -6,    -2,     9,   -10,
     -10,     4,     8,    10,    12,    13,    11,    14,    17,   -10,
     -10,    16,    18,    22,    24,    19,    20,    21,    23,   -10,
     -10,   -10,   -10
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    21,     0,     3,    12,     4,     5,
      10,     7,     9,     8,     6,    11,     0,     0,     0,    13,
      14,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      18,     0,     0,     0,     0,     0,     0,     0,     0,    16,
      19,    17,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,
     -10,   -10
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       2,    19,    16,    17,    20,    21,     3,    18,    24,    25,
       4,     5,    26,    22,    23,    31,    32,    27,     0,    28,
       0,    33,    29,    30,    34,    35,    37,    36,    38,    39,
      40,    41,     0,    42
};

static const yytype_int8 yycheck[] =
{
       0,    10,     3,     4,    10,     7,     6,     8,     4,     5,
      10,    11,     8,     4,     5,     4,     5,     9,    -1,     9,
      -1,     7,    10,    10,     7,     9,     4,     9,     4,    10,
      10,    10,    -1,    10
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,     0,     6,    10,    11,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     3,     4,     8,    10,
      10,     7,     4,     5,     4,     5,     8,     9,     9,    10,
      10,     4,     5,     7,     7,     9,     9,     4,     4,    10,
      10,    10,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    12,    13,    13,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     5,     7,     7,     5,     7,
       7,     1
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
        case 13:
#line 112 "grammar.yac" /* yacc.c:1648  */
    {
			printf("OFFSWT %li\n",ftell(outfile));
			char fnd_l=0;
			keked->label[strlen(keked->label)-1]=0;
			for (int i = 0; i < keked->labels_count; ++i)
			{
				if(EQSTR(labels[i].label_name, keked->label)){ // if label already declared
					if(labels[i].addr_preset == 0){
						//TODO: overwrite jmpaddr in file
						printf("\n--\ncurrent addr: %x, label offs %x, imm %d\n", keked->instr_count, labels[i].label_addr, keked->instr_count- labels[i].label_addr);
						printf("overwrite %s\n",keked->label);
						fnd_l=1;
						labels[i].addr_preset=1;
						long int tell_tmp=ftell(outfile);
						printf("%li, %li\n", tell_tmp,9+labels[i].label_addr*5);
						fseek(outfile, 9+(labels[i].label_addr-1)*5+2, SEEK_SET);
						instr_opcode=0;
					instr_opcode=(unsigned char)(keked->instr_count- labels[i].label_addr);
					fprintf(outfile, "%02x", instr_opcode);
						fseek(outfile,tell_tmp,SEEK_SET);
						//labels[i].label_addr=keked->instr_count;
						continue;
					}
				}

			}
			if(!fnd_l){
					keked->labels_count++;
					label* lab_t = malloc(keked->labels_count*sizeof(label));
					memcpy(lab_t, labels, keked->labels_count*sizeof(label));
					free(labels);
					labels=lab_t;
					lab_t=NULL;
					label* t_lab=malloc(sizeof(label));
					t_lab->label_addr=keked->instr_count;
					t_lab->addr_preset=1;
					strncpy(t_lab->label_name, keked->label, 63);
					memcpy(&(labels[keked->labels_count-1]),t_lab,sizeof(label));
					//__asm__(:::"memory");
					printf("\n--\ndeclared %s\n",keked->label);
					free(t_lab);
			}
			//print_labels();
			printf( "DECLABEL: %s\n", keked->label);
			
			

		}
#line 1380 "y.tab.c" /* yacc.c:1648  */
    break;

  case 14:
#line 165 "grammar.yac" /* yacc.c:1648  */
    {
			printf("OFFSWT %li\n",ftell(outfile));
			char fnd_l=0;
			for (int i = 0; i < keked->labels_count; ++i)
			{
				if(EQSTR(labels[i].label_name, keked->label) && (labels[i].addr_preset != 0)){ // if label already declared

					printf("\n--\naccepted %s\n",keked->label);
					printf("current addr: %x, label offs %x, imm %i\n", keked->instr_count, labels[i].label_addr, keked->instr_count- labels[i].label_addr);
					fnd_l=1;
					instr_opcode=0;
					instr_opcode|=JMP_BASE|(unsigned char)(-keked->instr_count+ labels[i].label_addr);
						  if(EQSTR(keked->instr,"jmp")){
						  	__asm__ volatile ("nop");
					}else if(EQSTR(keked->instr,"jnc")){
						instr_opcode|=JMP_COND|JMP_INV|JMP_CARRY;
					}else if(EQSTR(keked->instr,"jc")){
						instr_opcode|=JMP_COND|JMP_CARRY;
					}else if(EQSTR(keked->instr,"jnz")){
						instr_opcode|=JMP_COND|JMP_INV;
					}else if(EQSTR(keked->instr,"jz")){
						instr_opcode|=JMP_COND;
					}else{
						yyerror("unknown instruction");
					}
					fprintf(outfile, "%4x ", instr_opcode);
					break;
				}

			}
			if(!fnd_l){
					keked->labels_count++;
					label* lab_t = malloc(keked->labels_count*sizeof(label));
					memcpy(lab_t, labels, keked->labels_count*sizeof(label));
					free(labels);
					labels=lab_t;
					lab_t=NULL;
					label* t_lab=malloc(sizeof(label));
					t_lab->label_addr=keked->instr_count;
					t_lab->addr_preset=0;
					strncpy(t_lab->label_name, keked->label, 63);
					memcpy(&(labels[keked->labels_count-1]),t_lab,sizeof(label));
					instr_opcode=0;
					instr_opcode|=JMP_BASE;
						  if(EQSTR(keked->instr,"jmp")){
						  	__asm__ volatile ("nop");
					}else if(EQSTR(keked->instr,"jnc")){
						instr_opcode|=JMP_COND|JMP_INV|JMP_CARRY;
					}else if(EQSTR(keked->instr,"jc")){
						instr_opcode|=JMP_COND|JMP_CARRY;
					}else if(EQSTR(keked->instr,"jnz")){
						instr_opcode|=JMP_COND|JMP_INV;
					}else if(EQSTR(keked->instr,"jz")){
						instr_opcode|=JMP_COND;
					}else{
						yyerror("unknown instruction");
					}
					fprintf(outfile, "%4x ", instr_opcode);
					printf("\n--\ndeclared %s\n",keked->label);
					free(t_lab);
			}
			//print_labels();
			printf( "JMPINSTR: { %s } { %s } \n", keked->instr, keked->label);
			
		}
#line 1450 "y.tab.c" /* yacc.c:1648  */
    break;

  case 15:
#line 232 "grammar.yac" /* yacc.c:1648  */
    {
			printf( "2REGREG :{ %s } { %s } , { %s } \n",  keked->instr, keked->op1, keked->op2);
			instr_opcode=0;
			instr_opcode|=RR_BASE|((keked->op2[1]-'0')<<3)|(keked->op1[1]-'0');
			if(!EQSTR(keked->instr+3,"nf")){
				instr_opcode|=RR_FLAG;
			}
			keked->instr[3]=0;
				  if(EQSTR(keked->instr,"add")){
				instr_opcode|=(OPC_ADD)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"sub")){
				instr_opcode|=(OPC_SUB)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"mul")){
				instr_opcode|=(OPC_MUL)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"div")){
				instr_opcode|=(OPC_DIV)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"and")){
				instr_opcode|=(OPC_AND)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"orr")){
				instr_opcode|=(OPC_OR)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"xor")){
				instr_opcode|=(OPC_XOR)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"mov")){
				instr_opcode|=(OPC_MOV)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"adc")){
				instr_opcode|=(OPC_ADC)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"sbb")){
				instr_opcode|=(OPC_SBC)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"cmp")){
				instr_opcode|=(OPC_CMP)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"cpc")){
				instr_opcode|=(OPC_CPC)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"shl")){
				instr_opcode|=(OPC_LSL)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"shr")){
				instr_opcode|=(OPC_LSR)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"asr")){
				instr_opcode|=(OPC_ASR)<<RR_OPC_SHIFT;
			}else{
				yyerror("unknown instruction");
			}
			fprintf(outfile, "%4x ", instr_opcode);
		}
#line 1498 "y.tab.c" /* yacc.c:1648  */
    break;

  case 16:
#line 279 "grammar.yac" /* yacc.c:1648  */
    {
			printf( "2REGRM  : { %s } { %s } , [ { %s } ] \n",  keked->instr, keked->op1, keked->op2);
			instr_opcode=0;
			instr_opcode|=RR_BASE|((keked->op2[1]-'0')<<3)|(keked->op1[1]-'0')|RR_RNMP;
			if(!EQSTR(keked->instr+3,"nf")){
				instr_opcode|=RR_FLAG;
			}
			keked->instr[3]=0;
				  if(EQSTR(keked->instr,"add")){
				instr_opcode|=(OPC_ADD)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"sub")){
				instr_opcode|=(OPC_SUB)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"mul")){
				instr_opcode|=(OPC_MUL)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"div")){
				instr_opcode|=(OPC_DIV)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"and")){
				instr_opcode|=(OPC_AND)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"orr")){
				instr_opcode|=(OPC_OR)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"xor")){
				instr_opcode|=(OPC_XOR)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"mov")){
				instr_opcode|=(OPC_MOV)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"adc")){
				instr_opcode|=(OPC_ADC)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"sbb")){
				instr_opcode|=(OPC_SBC)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"cmp")){
				instr_opcode|=(OPC_CMP)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"cpc")){
				instr_opcode|=(OPC_CPC)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"shl")){
				instr_opcode|=(OPC_LSL)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"shr")){
				instr_opcode|=(OPC_LSR)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"asr")){
				instr_opcode|=(OPC_ASR)<<RR_OPC_SHIFT;
			}else{
				yyerror("unknown instruction");
			}
			fprintf(outfile, "%4x ", instr_opcode);
		}
#line 1546 "y.tab.c" /* yacc.c:1648  */
    break;

  case 17:
#line 325 "grammar.yac" /* yacc.c:1648  */
    {
			printf( "2RMREG  : { %s } [ { %s } ] , { %s }\n", keked->instr, keked->op1, keked->op2);
			instr_opcode=0;
			instr_opcode|=RR_BASE|((keked->op2[1]-'0')<<3)|(keked->op1[1]-'0')|RR_RDMP;
			if(!EQSTR(keked->instr+3,"nf")){
				instr_opcode|=RR_FLAG;
			}
			keked->instr[3]=0;

				  if(EQSTR(keked->instr,"add")){
				instr_opcode|=(OPC_ADD)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"sub")){
				instr_opcode|=(OPC_SUB)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"mul")){
				instr_opcode|=(OPC_MUL)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"div")){
				instr_opcode|=(OPC_DIV)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"and")){
				instr_opcode|=(OPC_AND)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"orr")){
				instr_opcode|=(OPC_OR)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"xor")){
				instr_opcode|=(OPC_XOR)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"mov")){
				instr_opcode|=(OPC_MOV)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"adc")){
				instr_opcode|=(OPC_ADC)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"sbb")){
				instr_opcode|=(OPC_SBC)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"cmp")){
				instr_opcode|=(OPC_CMP)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"cpc")){
				instr_opcode|=(OPC_CPC)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"shl")){
				instr_opcode|=(OPC_LSL)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"shr")){
				instr_opcode|=(OPC_LSR)<<RR_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"asr")){
				instr_opcode|=(OPC_ASR)<<RR_OPC_SHIFT;
			}else{
				yyerror("unknown instruction");
			}
			fprintf(outfile, "%4x ", instr_opcode);
		}
#line 1595 "y.tab.c" /* yacc.c:1648  */
    break;

  case 18:
#line 372 "grammar.yac" /* yacc.c:1648  */
    {
			printf( "2IMMREG : { %s } { %s } , { %s } \n", keked->instr, keked->op1, keked->op2);
			unsigned short hnum;
			if((keked->op2[1]=='x') || (keked->op2[1]=='X')){
				sscanf(keked->op2+2, "%hhx",&hnum);
			}else{
				sscanf(keked->op2, "%hhd",&hnum);
			}
			printf("%#4x\n", hnum);
			hnum&=0xff;
			printf("INSTR %s\n", keked->instr);
			instr_opcode=0;
			instr_opcode|=IMM_BASE ;
			printf("%#4x\n", instr_opcode);
			instr_opcode|=(keked->op1[1]-'0');
			printf("%#4x\n", instr_opcode);
			instr_opcode|= (hnum<<3);
			keked->instr[3]=0;
			printf("%#4x\n", instr_opcode);
				  if(EQSTR(keked->instr,"add")){
				instr_opcode|=(OPC_ADD)<<IMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"sub")){
				instr_opcode|=(OPC_SUB)<<IMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"mul")){
				instr_opcode|=(OPC_MUL)<<IMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"div")){
				instr_opcode|=(OPC_DIV)<<IMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"and")){
				instr_opcode|=(OPC_AND)<<IMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"orr")){
				instr_opcode|=(OPC_OR)<<IMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"xor")){
				instr_opcode|=(OPC_XOR)<<IMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"mov")){
				instr_opcode|=(OPC_MOV)<<IMM_OPC_SHIFT;
			}else{
				yyerror("unknown instruction");
			}
			fprintf(outfile, "%4x ", instr_opcode);
		}
#line 1640 "y.tab.c" /* yacc.c:1648  */
    break;

  case 19:
#line 415 "grammar.yac" /* yacc.c:1648  */
    {
			printf("2REGMIMM: { %s } { %s } , [ { %s } ] \n", keked->instr, keked->op1, keked->op2); 
			unsigned short hnum;
			if((keked->op2[1]=='x') || (keked->op2[1]=='X')){
				sscanf(keked->op2+2, "%hhx",&hnum);
			}else{
				sscanf(keked->op2, "%hhd",&hnum);
			}
			hnum&=0xff;
			instr_opcode=0;
			instr_opcode|=MEMIMM_BASE |(keked->op1[1]-'0')| (hnum<<3);
			keked->instr[3]=0;
				  if(EQSTR(keked->instr,"add")){
				instr_opcode|=(OPC_ADD)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"sub")){
				instr_opcode|=(OPC_SUB)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"mul")){
				instr_opcode|=(OPC_MUL)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"div")){
				instr_opcode|=(OPC_DIV)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"and")){
				instr_opcode|=(OPC_AND)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"orr")){
				instr_opcode|=(OPC_OR)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"xor")){
				instr_opcode|=(OPC_XOR)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"mov")){
				instr_opcode|=(OPC_MOV)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"adc")){
				instr_opcode|=(OPC_ADC)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"sbb")){
				instr_opcode|=(OPC_SBC)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"cmp")){
				instr_opcode|=(OPC_CMP)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"cpc")){
				instr_opcode|=(OPC_CPC)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"shl")){
				instr_opcode|=(OPC_LSL)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"shr")){
				instr_opcode|=(OPC_LSR)<<MEMIMM_OPC_SHIFT;
			}else if(EQSTR(keked->instr,"asr")){
				instr_opcode|=(OPC_ASR)<<MEMIMM_OPC_SHIFT;
			}else{
				yyerror("unknown instruction");
			}
			fprintf(outfile, "%4x ", instr_opcode);
		}
#line 1692 "y.tab.c" /* yacc.c:1648  */
    break;

  case 20:
#line 465 "grammar.yac" /* yacc.c:1648  */
    {
			printf( "2MIMMREG: { %s } [ { %s } ] , { %s } \n",  keked->instr, keked->op1, keked->op2);
			unsigned short hnum;
			if((keked->op1[1]=='x') || (keked->op1[1]=='X')){
				sscanf(keked->op1+2, "%hhx",&hnum);
			}else{
				sscanf(keked->op1, "%hhd",&hnum);
			}
			printf("%#4x\n", hnum);
			hnum&=0xff;

			instr_opcode=0;
			instr_opcode|=MEMIMM_BASE |(keked->op2[1]-'0')| (hnum<<3);
			keked->instr[3]=0;
			if(EQSTR(keked->instr,"mov")){
				instr_opcode|=(OPC_RMOV)<<MEMIMM_OPC_SHIFT;
			}else{
				yyerror("unknown instruction");
			}
			fprintf(outfile, "%4x ", instr_opcode);
		}
#line 1718 "y.tab.c" /* yacc.c:1648  */
    break;

  case 21:
#line 489 "grammar.yac" /* yacc.c:1648  */
    {
			/*fprintf(outfile, "NEWLINE \n");*/
		}
#line 1726 "y.tab.c" /* yacc.c:1648  */
    break;


#line 1730 "y.tab.c" /* yacc.c:1648  */
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
#line 494 "grammar.yac" /* yacc.c:1907  */



int main(int argc, char const **argv)
{		/*yydebug=1;*/
		infile=stdin;
		outfile=stdout;
		int format=0;
		printf("%d\n", argc);
		if(argc==1){
			
		}else if(argc==2){
			if(!strcmp(argv[1], "-h")){
				printf("usage: rabu-as [-h|infile [outfile [t|b]]]\n");
				exit(0);
			}else{
				infile=fopen(argv[1],"r");
				if(infile==NULL){
					printf("Unable to open file %s. Exiting.\n", argv[1]);
					exit(1);
				}
			}
		}else if(argc==3 || argc == 4){
			infile=fopen(argv[1],"r");
				if(infile==NULL){
					printf("Unable to open file %s. Exiting.\n", argv[1]);
					exit(1);
				}
			outfile=fopen(argv[2],"w");
				if(outfile==NULL){
					printf("Unable to create file %s. Exiting.\n", argv[2]);
					exit(1);
				}
			if(argc==4){
				format=argv[3][0]=='b';
			}

		}else{
			printf("Uncorrect number of arguments.\n");
			exit(1);
		}
		fprintf(outfile, "v2.0 raw\n");
		yyset_in(infile);
		keked=malloc(sizeof(ASMPARAMS));
		keked->instr=malloc(64);
		keked->op1=malloc(64);
		keked->op2=malloc(64);
		keked->label=malloc(64);
		labels=malloc(1*sizeof(label));
		keked->line=0;
		keked->instr_count=0;
        yyparse();
        free(labels);
        free(keked->label);
        free(keked->op2);
        free(keked->op1);
        free(keked->instr);
        free(keked);
        return 0;
} 

