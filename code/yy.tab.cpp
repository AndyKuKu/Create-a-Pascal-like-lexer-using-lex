/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_AND = 258,
     TK_ARRAY = 259,
     TK_ASSIGN = 260,
     TK_CASE = 261,
     TK_TYPE = 262,
     TK_SYS_TYPE = 263,
     TK_COLON = 264,
     TK_COMMA = 265,
     TK_CONST = 266,
     TK_DIGITS = 267,
     TK_DIV = 268,
     TK_REM = 269,
     TK_DO = 270,
     TK_DOT = 271,
     TK_DOTDOT = 272,
     TK_DOWNTO = 273,
     TK_ELSE = 274,
     TK_ELSE_NULL = 275,
     TK_END = 276,
     TK_EQUAL = 277,
     TK_FOR = 278,
     TK_FUNCTION = 279,
     TK_GE = 280,
     TK_GOTO = 281,
     TK_GT = 282,
     TK_ID = 283,
     TK_REF = 284,
     TK_IF = 285,
     TK_IN = 286,
     TK_LB = 287,
     TK_LE = 288,
     TK_LP = 289,
     TK_LT = 290,
     TK_MINUS = 291,
     TK_MOD = 292,
     TK_UNEQUAL = 293,
     TK_OF = 294,
     TK_OR = 295,
     TK_OTHERWISE = 296,
     TK_BEGIN = 297,
     TK_PLUS = 298,
     TK_PROCEDURE = 299,
     TK_PROGRAM = 300,
     TK_RB = 301,
     TK_REAL = 302,
     TK_RECORD = 303,
     TK_REPEAT = 304,
     TK_RP = 305,
     TK_SYS_PROC = 306,
     TK_READ = 307,
     TK_READLN = 308,
     TK_SEMI = 309,
     TK_MUL = 310,
     TK_THEN = 311,
     TK_NOT = 312,
     TK_TO = 313,
     TK_UNTIL = 314,
     TK_UPARROW = 315,
     TK_VAR = 316,
     TK_WHILE = 317,
     TK_SET = 318,
     TK_STARSTAR = 319,
     TK_CHAR = 320,
     TK_STRING = 321,
     TK_INTEGER = 322,
     TK_SYS_CON = 323,
     TK_SYS_FUNCT = 324,
     TK_WITH = 325,
     TK_NIL = 326,
     ERROR = 327,
     TK_PROGRAM_HEAD = 328,
     TK_ROUTINE = 329,
     TK_ROUTINE_PART = 330,
     TK_ROUTINE_HEAD = 331,
     TK_ROUTINE_BODY = 332,
     TK_CONST_PART = 333,
     TK_CONST_PART_END = 334,
     TK_TYPE_PART = 335,
     TK_TYPE_PART_END = 336,
     TK_VAR_PART = 337,
     TK_VAR_PART_END = 338,
     TK_ROUTINE_PART_RF = 339,
     TK_ROUTINE_PART_RP = 340,
     TK_ROUTINE_PART_FUNC = 341,
     TK_ROUTINE_PART_PROC = 342,
     TK_ROUTINE_PART_NULL = 343,
     TK_STMT_LIST = 344,
     TK_STMT_LIST_NULL = 345,
     TK_STMT_LABEL = 346,
     TK_STMT = 347,
     TK_CP_STMT = 348,
     TK_VAL_PARA_LIST = 349,
     TK_NON_LABEL_STMT_ASSIGN = 350,
     TK_NON_LABEL_STMT_PROC = 351,
     TK_NON_LABEL_STMT_CP = 352,
     TK_NON_LABEL_STMT_IF = 353,
     TK_NON_LABEL_STMT_REP = 354,
     TK_NON_LABEL_STMT_WHILE = 355,
     TK_NON_LABEL_STMT_FOR = 356,
     TK_NON_LABEL_STMT_CASE = 357,
     TK_NON_LABEL_STMT_GOTO = 358,
     TK_EXP_LIST = 359,
     TK_EXP_LIST_END = 360,
     TK_EXP = 361,
     TK_TERM = 362,
     TK_CONST_MINUS = 363,
     TK_ID_MINUS = 364,
     TK_FACTOR_ID = 365,
     TK_FACTOR_ID_ARGS = 366,
     TK_FACTOR_SYS_FUNCT = 367,
     TK_FACTOR_CONST = 368,
     TK_FACTOR_EXP = 369,
     TK_FACTOR_NOT = 370,
     TK_FACTOR_MINUS = 371,
     TK_FACTOR_ID_EXP = 372,
     TK_FACTOR_DD = 373,
     TK_ARGS_LIST = 374,
     TK_ARGS_LIST_END = 375,
     TK_CONST_DL = 376,
     TK_CONST_DL_END = 377,
     TK_TYPE_DL = 378,
     TK_TYPE_DL_END = 379,
     TK_TYPE_DEF = 380,
     TK_TYPE_DECL = 381,
     TK_TYPE_DECL_SIM = 382,
     TK_TYPE_DECL_ARR = 383,
     TK_TYPE_DECL_REC = 384,
     TK_FIELD_DL = 385,
     TK_FIELD_DL_END = 386,
     TK_FIELD_DECL = 387,
     TK_NL = 388,
     TK_NL_END = 389,
     TK_STD_SYS_TYPE = 390,
     TK_STD_ID = 391,
     TK_STD_NL = 392,
     TK_STD_DD = 393,
     TK_STD_DD_M = 394,
     TK_STD_DD_MM = 395,
     TK_STD_DD_ID = 396,
     TK_DL = 397,
     TK_DL_END = 398,
     TK_VAR_DECL = 399,
     TK_FUNC_DECL = 400,
     TK_FUNC_HEAD = 401,
     TK_PROC_DECL = 402,
     TK_PROC_HEAD = 403,
     TK_PARA = 404,
     TK_PARA_TL = 405,
     TK_PARA_NULL = 406,
     TK_PARA_DL = 407,
     TK_PARA_DL_END = 408,
     TK_PARA_TL_VAR = 409,
     TK_PARA_TL_VAL = 410,
     TK_PARA_TL_END = 411,
     TK_PROC = 412,
     TK_CASE_EL = 413,
     TK_CASE_EL_END = 414,
     TK_CASE_EXPR = 415,
     TK_CASE_EXPR_END = 416,
     TK_EXPR = 417,
     TK_ASSIGN_ID = 418,
     TK_ASSIGN_ID_EXPR = 419,
     TK_ASSIGN_DD = 420,
     TK_PROC_ID = 421,
     TK_PROC_ID_ARGS = 422,
     TK_PROC_SYS = 423,
     TK_PROC_SYS_ARGS = 424,
     TK_PROC_READ = 425,
     TK_PROC_READLN = 426,
     TK_STMT_ASSIGN = 427,
     TK_STMT_PROC = 428,
     TK_STMT_CP = 429
   };
#endif
/* Tokens.  */
#define TK_AND 258
#define TK_ARRAY 259
#define TK_ASSIGN 260
#define TK_CASE 261
#define TK_TYPE 262
#define TK_SYS_TYPE 263
#define TK_COLON 264
#define TK_COMMA 265
#define TK_CONST 266
#define TK_DIGITS 267
#define TK_DIV 268
#define TK_REM 269
#define TK_DO 270
#define TK_DOT 271
#define TK_DOTDOT 272
#define TK_DOWNTO 273
#define TK_ELSE 274
#define TK_ELSE_NULL 275
#define TK_END 276
#define TK_EQUAL 277
#define TK_FOR 278
#define TK_FUNCTION 279
#define TK_GE 280
#define TK_GOTO 281
#define TK_GT 282
#define TK_ID 283
#define TK_REF 284
#define TK_IF 285
#define TK_IN 286
#define TK_LB 287
#define TK_LE 288
#define TK_LP 289
#define TK_LT 290
#define TK_MINUS 291
#define TK_MOD 292
#define TK_UNEQUAL 293
#define TK_OF 294
#define TK_OR 295
#define TK_OTHERWISE 296
#define TK_BEGIN 297
#define TK_PLUS 298
#define TK_PROCEDURE 299
#define TK_PROGRAM 300
#define TK_RB 301
#define TK_REAL 302
#define TK_RECORD 303
#define TK_REPEAT 304
#define TK_RP 305
#define TK_SYS_PROC 306
#define TK_READ 307
#define TK_READLN 308
#define TK_SEMI 309
#define TK_MUL 310
#define TK_THEN 311
#define TK_NOT 312
#define TK_TO 313
#define TK_UNTIL 314
#define TK_UPARROW 315
#define TK_VAR 316
#define TK_WHILE 317
#define TK_SET 318
#define TK_STARSTAR 319
#define TK_CHAR 320
#define TK_STRING 321
#define TK_INTEGER 322
#define TK_SYS_CON 323
#define TK_SYS_FUNCT 324
#define TK_WITH 325
#define TK_NIL 326
#define ERROR 327
#define TK_PROGRAM_HEAD 328
#define TK_ROUTINE 329
#define TK_ROUTINE_PART 330
#define TK_ROUTINE_HEAD 331
#define TK_ROUTINE_BODY 332
#define TK_CONST_PART 333
#define TK_CONST_PART_END 334
#define TK_TYPE_PART 335
#define TK_TYPE_PART_END 336
#define TK_VAR_PART 337
#define TK_VAR_PART_END 338
#define TK_ROUTINE_PART_RF 339
#define TK_ROUTINE_PART_RP 340
#define TK_ROUTINE_PART_FUNC 341
#define TK_ROUTINE_PART_PROC 342
#define TK_ROUTINE_PART_NULL 343
#define TK_STMT_LIST 344
#define TK_STMT_LIST_NULL 345
#define TK_STMT_LABEL 346
#define TK_STMT 347
#define TK_CP_STMT 348
#define TK_VAL_PARA_LIST 349
#define TK_NON_LABEL_STMT_ASSIGN 350
#define TK_NON_LABEL_STMT_PROC 351
#define TK_NON_LABEL_STMT_CP 352
#define TK_NON_LABEL_STMT_IF 353
#define TK_NON_LABEL_STMT_REP 354
#define TK_NON_LABEL_STMT_WHILE 355
#define TK_NON_LABEL_STMT_FOR 356
#define TK_NON_LABEL_STMT_CASE 357
#define TK_NON_LABEL_STMT_GOTO 358
#define TK_EXP_LIST 359
#define TK_EXP_LIST_END 360
#define TK_EXP 361
#define TK_TERM 362
#define TK_CONST_MINUS 363
#define TK_ID_MINUS 364
#define TK_FACTOR_ID 365
#define TK_FACTOR_ID_ARGS 366
#define TK_FACTOR_SYS_FUNCT 367
#define TK_FACTOR_CONST 368
#define TK_FACTOR_EXP 369
#define TK_FACTOR_NOT 370
#define TK_FACTOR_MINUS 371
#define TK_FACTOR_ID_EXP 372
#define TK_FACTOR_DD 373
#define TK_ARGS_LIST 374
#define TK_ARGS_LIST_END 375
#define TK_CONST_DL 376
#define TK_CONST_DL_END 377
#define TK_TYPE_DL 378
#define TK_TYPE_DL_END 379
#define TK_TYPE_DEF 380
#define TK_TYPE_DECL 381
#define TK_TYPE_DECL_SIM 382
#define TK_TYPE_DECL_ARR 383
#define TK_TYPE_DECL_REC 384
#define TK_FIELD_DL 385
#define TK_FIELD_DL_END 386
#define TK_FIELD_DECL 387
#define TK_NL 388
#define TK_NL_END 389
#define TK_STD_SYS_TYPE 390
#define TK_STD_ID 391
#define TK_STD_NL 392
#define TK_STD_DD 393
#define TK_STD_DD_M 394
#define TK_STD_DD_MM 395
#define TK_STD_DD_ID 396
#define TK_DL 397
#define TK_DL_END 398
#define TK_VAR_DECL 399
#define TK_FUNC_DECL 400
#define TK_FUNC_HEAD 401
#define TK_PROC_DECL 402
#define TK_PROC_HEAD 403
#define TK_PARA 404
#define TK_PARA_TL 405
#define TK_PARA_NULL 406
#define TK_PARA_DL 407
#define TK_PARA_DL_END 408
#define TK_PARA_TL_VAR 409
#define TK_PARA_TL_VAL 410
#define TK_PARA_TL_END 411
#define TK_PROC 412
#define TK_CASE_EL 413
#define TK_CASE_EL_END 414
#define TK_CASE_EXPR 415
#define TK_CASE_EXPR_END 416
#define TK_EXPR 417
#define TK_ASSIGN_ID 418
#define TK_ASSIGN_ID_EXPR 419
#define TK_ASSIGN_DD 420
#define TK_PROC_ID 421
#define TK_PROC_ID_ARGS 422
#define TK_PROC_SYS 423
#define TK_PROC_SYS_ARGS 424
#define TK_PROC_READ 425
#define TK_PROC_READLN 426
#define TK_STMT_ASSIGN 427
#define TK_STMT_PROC 428
#define TK_STMT_CP 429




/* Copy the first part of user declarations.  */
#line 1 "syntax.y"

#include "common.h"
#include <stdio.h>
#include <stdlib.h>
int DEBUG = 0;
int IS_SYNTAX_ERROR=0;
int syntax_const_error = 0;
NODE* ROOT;
extern int yylineno;

#define STR_DOT     "\".\""
#define STR_SEMI    "\";\""
#define STR_EQU     "\"=\""
#define STR_COMMA   "\",\""
#define STR_COLON   "\":\""
#define STR_ASSIGN  "\":=\""
#define STR_RP      "\")\""
#define STR_RB      "\"]\""

#define STR_END     "\"end\""
#define STR_UNTIL   "\"until\""
#define STR_DO      "\"do\""
#define STR_TO_OR_DOWNTO      "\"do\" or \"downto\""
#define STR_OF      "\"of\""
#define STR_LABEL   "\"label\""

void LOG_ERROR(string expected, int line);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 484 "yy.tab.cpp"

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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   487

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  175
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNRULES -- Number of states.  */
#define YYNSTATES  360

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   429

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    11,    15,    19,    22,    27,    30,
      31,    37,    38,    45,    51,    56,    57,    63,    68,    70,
      72,    74,    76,    78,    81,    82,    85,    87,    92,    93,
      99,   104,   106,   108,   110,   117,   118,   126,   130,   134,
     137,   139,   144,   145,   151,   156,   160,   162,   164,   166,
     170,   174,   179,   185,   189,   194,   199,   205,   208,   209,
     212,   214,   219,   220,   226,   231,   234,   237,   239,   241,
     242,   247,   252,   253,   259,   265,   266,   273,   278,   283,
     284,   290,   294,   298,   302,   303,   307,   308,   313,   315,
     319,   320,   325,   329,   330,   335,   338,   340,   342,   346,
     350,   351,   355,   356,   361,   363,   365,   367,   369,   371,
     373,   375,   377,   379,   381,   385,   392,   393,   401,   407,
     409,   414,   419,   421,   426,   431,   435,   441,   444,   445,
     450,   451,   457,   462,   463,   469,   478,   479,   489,   490,
     500,   501,   511,   513,   515,   521,   522,   529,   532,   534,
     539,   544,   549,   554,   557,   560,   564,   566,   570,   574,
     578,   582,   586,   590,   592,   596,   600,   604,   606,   610,
     614,   618,   622,   626,   628,   630,   635,   640,   642,   646,
     650,   653,   656,   661,   666,   670,   674,   675,   680
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     176,     0,    -1,   177,   178,    16,    -1,   177,   178,     1,
      -1,    45,    28,    54,    -1,    45,    28,     1,    -1,   179,
     218,    -1,   180,   185,   198,   202,    -1,    11,   181,    -1,
      -1,   181,    28,    22,   184,    54,    -1,    -1,   181,    28,
       1,   182,   184,    54,    -1,   181,    28,    22,   184,     1,
      -1,    28,    22,   184,    54,    -1,    -1,    28,     1,   183,
     184,    54,    -1,    28,    22,   184,     1,    -1,    67,    -1,
      47,    -1,    65,    -1,    66,    -1,    68,    -1,     7,   186,
      -1,    -1,   186,   187,    -1,   187,    -1,    28,    22,   189,
      54,    -1,    -1,    28,     1,   188,   189,    54,    -1,    28,
      22,   189,     1,    -1,   197,    -1,   190,    -1,   192,    -1,
       4,    32,   197,    46,    39,   189,    -1,    -1,     4,    32,
     197,     1,   191,    39,   189,    -1,    48,   193,    21,    -1,
      48,   193,     1,    -1,   193,   194,    -1,   194,    -1,   196,
       9,   189,    54,    -1,    -1,   196,     1,   195,   189,    54,
      -1,   196,     9,   189,     1,    -1,   196,    10,    28,    -1,
      28,    -1,     8,    -1,    28,    -1,    34,   196,    50,    -1,
     184,    17,   184,    -1,    36,   184,    17,   184,    -1,    36,
     184,    17,    36,   184,    -1,    28,    17,    28,    -1,    36,
      28,    17,    28,    -1,    28,    17,    36,    28,    -1,    36,
      28,    17,    36,    28,    -1,    61,   199,    -1,    -1,   199,
     200,    -1,   200,    -1,   196,     9,   189,    54,    -1,    -1,
     196,     1,   201,   189,    54,    -1,   196,     9,   189,     1,
      -1,   202,   203,    -1,   202,   207,    -1,   203,    -1,   207,
      -1,    -1,   205,    54,   178,    54,    -1,   205,    54,   178,
       1,    -1,    -1,   205,     1,   204,   178,    54,    -1,    24,
      28,   210,     9,   197,    -1,    -1,    24,    28,   210,     1,
     206,   197,    -1,   209,    54,   178,    54,    -1,   209,    54,
     178,     1,    -1,    -1,   209,     1,   208,   178,    54,    -1,
      44,    28,   210,    -1,    34,   211,    50,    -1,    34,   211,
       1,    -1,    -1,   211,    54,   213,    -1,    -1,   211,     1,
     212,   213,    -1,   213,    -1,   216,     9,   197,    -1,    -1,
     216,     1,   214,   197,    -1,   217,     9,   197,    -1,    -1,
     217,     1,   215,   197,    -1,    61,   196,    -1,   196,    -1,
     226,    -1,   219,   220,    54,    -1,   219,   220,     1,    -1,
      -1,    67,     9,   222,    -1,    -1,    67,     1,   221,   222,
      -1,   222,    -1,   223,    -1,   225,    -1,   226,    -1,   227,
      -1,   229,    -1,   231,    -1,   233,    -1,   238,    -1,   242,
      -1,    28,     5,   244,    -1,    28,    32,   245,    46,     5,
     244,    -1,    -1,    28,    32,   245,     1,   224,     5,   244,
      -1,    28,    16,    28,     5,   244,    -1,    28,    -1,    28,
      34,   248,    50,    -1,    28,    34,   248,     1,    -1,    51,
      -1,    51,    34,   243,    50,    -1,    51,    34,   243,     1,
      -1,    42,   219,    21,    -1,    30,   244,    56,   220,   228,
      -1,    19,   220,    -1,    -1,    49,   219,    59,   244,    -1,
      -1,    49,   219,     1,   230,   244,    -1,    62,   244,    15,
     220,    -1,    -1,    62,   244,     1,   232,   220,    -1,    23,
      28,     5,   244,   237,   244,    15,   220,    -1,    -1,    23,
      28,     1,   234,   244,   237,   244,    15,   220,    -1,    -1,
      23,    28,     5,   244,     1,   235,   244,    15,   220,    -1,
      -1,    23,    28,     5,   244,   237,   244,     1,   236,   220,
      -1,    58,    -1,    18,    -1,     6,   244,    39,   240,    21,
      -1,    -1,     6,   244,     1,   239,   240,    21,    -1,   240,
     241,    -1,   241,    -1,   184,     9,   220,    54,    -1,   184,
       9,   220,     1,    -1,    28,     9,   220,    54,    -1,    28,
       9,   220,     1,    -1,    26,    67,    -1,    26,     1,    -1,
     243,    10,   244,    -1,   244,    -1,   244,    25,   245,    -1,
     244,    27,   245,    -1,   244,    33,   245,    -1,   244,    35,
     245,    -1,   244,    22,   245,    -1,   244,    38,   245,    -1,
     245,    -1,   245,    43,   246,    -1,   245,    36,   246,    -1,
     245,    40,   246,    -1,   246,    -1,   246,    55,   247,    -1,
     246,    13,   247,    -1,   246,    14,   247,    -1,   246,    37,
     247,    -1,   246,     3,   247,    -1,   247,    -1,    28,    -1,
      28,    34,   248,    50,    -1,    69,    34,   248,    50,    -1,
     184,    -1,    34,   244,    50,    -1,    34,   244,     1,    -1,
      57,   247,    -1,    36,   247,    -1,    28,    32,   245,    46,
      -1,    28,    32,   245,     1,    -1,    28,    16,    28,    -1,
     248,    10,   244,    -1,    -1,   248,     1,   249,   244,    -1,
     244,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    77,    98,   108,   123,   136,   153,   160,
     168,   190,   190,   212,   237,   253,   253,   269,   290,   296,
     302,   308,   314,   322,   329,   338,   353,   364,   375,   375,
     386,   402,   411,   420,   431,   446,   446,   463,   470,   482,
     498,   510,   522,   522,   534,   551,   568,   580,   591,   601,
     611,   622,   639,   661,   672,   686,   699,   715,   722,   730,
     746,   758,   770,   770,   782,   799,   815,   831,   841,   851,
     859,   871,   886,   886,   900,   918,   918,   938,   950,   965,
     965,   979,   993,  1000,  1010,  1019,  1036,  1036,  1053,  1066,
    1081,  1081,  1096,  1111,  1111,  1128,  1137,  1145,  1153,  1178,
    1206,  1214,  1226,  1226,  1238,  1251,  1261,  1271,  1281,  1287,
    1293,  1299,  1305,  1311,  1319,  1331,  1345,  1345,  1359,  1375,
    1385,  1397,  1412,  1422,  1434,  1451,  1459,  1476,  1482,  1490,
    1502,  1502,  1516,  1528,  1528,  1542,  1560,  1560,  1578,  1578,
    1596,  1596,  1616,  1623,  1632,  1645,  1645,  1660,  1677,  1690,
    1703,  1719,  1731,  1748,  1757,  1771,  1788,  1800,  1812,  1823,
    1834,  1845,  1855,  1865,  1876,  1887,  1898,  1909,  1922,  1932,
    1942,  1952,  1962,  1972,  1985,  1996,  2007,  2018,  2027,  2037,
    2050,  2059,  2068,  2079,  2093,  2107,  2124,  2124,  2141
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_AND", "TK_ARRAY", "TK_ASSIGN",
  "TK_CASE", "TK_TYPE", "TK_SYS_TYPE", "TK_COLON", "TK_COMMA", "TK_CONST",
  "TK_DIGITS", "TK_DIV", "TK_REM", "TK_DO", "TK_DOT", "TK_DOTDOT",
  "TK_DOWNTO", "TK_ELSE", "TK_ELSE_NULL", "TK_END", "TK_EQUAL", "TK_FOR",
  "TK_FUNCTION", "TK_GE", "TK_GOTO", "TK_GT", "TK_ID", "TK_REF", "TK_IF",
  "TK_IN", "TK_LB", "TK_LE", "TK_LP", "TK_LT", "TK_MINUS", "TK_MOD",
  "TK_UNEQUAL", "TK_OF", "TK_OR", "TK_OTHERWISE", "TK_BEGIN", "TK_PLUS",
  "TK_PROCEDURE", "TK_PROGRAM", "TK_RB", "TK_REAL", "TK_RECORD",
  "TK_REPEAT", "TK_RP", "TK_SYS_PROC", "TK_READ", "TK_READLN", "TK_SEMI",
  "TK_MUL", "TK_THEN", "TK_NOT", "TK_TO", "TK_UNTIL", "TK_UPARROW",
  "TK_VAR", "TK_WHILE", "TK_SET", "TK_STARSTAR", "TK_CHAR", "TK_STRING",
  "TK_INTEGER", "TK_SYS_CON", "TK_SYS_FUNCT", "TK_WITH", "TK_NIL", "ERROR",
  "TK_PROGRAM_HEAD", "TK_ROUTINE", "TK_ROUTINE_PART", "TK_ROUTINE_HEAD",
  "TK_ROUTINE_BODY", "TK_CONST_PART", "TK_CONST_PART_END", "TK_TYPE_PART",
  "TK_TYPE_PART_END", "TK_VAR_PART", "TK_VAR_PART_END",
  "TK_ROUTINE_PART_RF", "TK_ROUTINE_PART_RP", "TK_ROUTINE_PART_FUNC",
  "TK_ROUTINE_PART_PROC", "TK_ROUTINE_PART_NULL", "TK_STMT_LIST",
  "TK_STMT_LIST_NULL", "TK_STMT_LABEL", "TK_STMT", "TK_CP_STMT",
  "TK_VAL_PARA_LIST", "TK_NON_LABEL_STMT_ASSIGN", "TK_NON_LABEL_STMT_PROC",
  "TK_NON_LABEL_STMT_CP", "TK_NON_LABEL_STMT_IF", "TK_NON_LABEL_STMT_REP",
  "TK_NON_LABEL_STMT_WHILE", "TK_NON_LABEL_STMT_FOR",
  "TK_NON_LABEL_STMT_CASE", "TK_NON_LABEL_STMT_GOTO", "TK_EXP_LIST",
  "TK_EXP_LIST_END", "TK_EXP", "TK_TERM", "TK_CONST_MINUS", "TK_ID_MINUS",
  "TK_FACTOR_ID", "TK_FACTOR_ID_ARGS", "TK_FACTOR_SYS_FUNCT",
  "TK_FACTOR_CONST", "TK_FACTOR_EXP", "TK_FACTOR_NOT", "TK_FACTOR_MINUS",
  "TK_FACTOR_ID_EXP", "TK_FACTOR_DD", "TK_ARGS_LIST", "TK_ARGS_LIST_END",
  "TK_CONST_DL", "TK_CONST_DL_END", "TK_TYPE_DL", "TK_TYPE_DL_END",
  "TK_TYPE_DEF", "TK_TYPE_DECL", "TK_TYPE_DECL_SIM", "TK_TYPE_DECL_ARR",
  "TK_TYPE_DECL_REC", "TK_FIELD_DL", "TK_FIELD_DL_END", "TK_FIELD_DECL",
  "TK_NL", "TK_NL_END", "TK_STD_SYS_TYPE", "TK_STD_ID", "TK_STD_NL",
  "TK_STD_DD", "TK_STD_DD_M", "TK_STD_DD_MM", "TK_STD_DD_ID", "TK_DL",
  "TK_DL_END", "TK_VAR_DECL", "TK_FUNC_DECL", "TK_FUNC_HEAD",
  "TK_PROC_DECL", "TK_PROC_HEAD", "TK_PARA", "TK_PARA_TL", "TK_PARA_NULL",
  "TK_PARA_DL", "TK_PARA_DL_END", "TK_PARA_TL_VAR", "TK_PARA_TL_VAL",
  "TK_PARA_TL_END", "TK_PROC", "TK_CASE_EL", "TK_CASE_EL_END",
  "TK_CASE_EXPR", "TK_CASE_EXPR_END", "TK_EXPR", "TK_ASSIGN_ID",
  "TK_ASSIGN_ID_EXPR", "TK_ASSIGN_DD", "TK_PROC_ID", "TK_PROC_ID_ARGS",
  "TK_PROC_SYS", "TK_PROC_SYS_ARGS", "TK_PROC_READ", "TK_PROC_READLN",
  "TK_STMT_ASSIGN", "TK_STMT_PROC", "TK_STMT_CP", "$accept", "program",
  "program_head", "routine", "routine_head", "const_part",
  "const_expr_list", "@1", "@2", "const_value", "type_part",
  "type_decl_list", "type_definition", "@3", "type_decl",
  "array_type_decl", "@4", "record_type_decl", "field_decl_list",
  "field_decl", "@5", "name_list", "simple_type_decl", "var_part",
  "var_decl_list", "var_decl", "@6", "routine_part", "function_decl", "@7",
  "function_head", "@8", "procedure_decl", "@9", "procedure_head",
  "parameters", "para_decl_list", "@10", "para_type_list", "@11", "@12",
  "var_para_list", "val_para_list", "routine_body", "stmt_list", "stmt",
  "@13", "non_label_stmt", "assign_stmt", "@14", "proc_stmt",
  "compound_stmt", "if_stmt", "else_clause", "repeat_stmt", "@15",
  "while_stmt", "@16", "for_stmt", "@17", "@18", "@19", "direction",
  "case_stmt", "@20", "case_expr_list", "case_expr", "goto_stmt",
  "expression_list", "expression", "expr", "term", "factor", "args_list",
  "@21", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   175,   176,   176,   177,   177,   178,   179,   180,   180,
     181,   182,   181,   181,   181,   183,   181,   181,   184,   184,
     184,   184,   184,   185,   185,   186,   186,   187,   188,   187,
     187,   189,   189,   189,   190,   191,   190,   192,   192,   193,
     193,   194,   195,   194,   194,   196,   196,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   198,   198,   199,
     199,   200,   201,   200,   200,   202,   202,   202,   202,   202,
     203,   203,   204,   203,   205,   206,   205,   207,   207,   208,
     207,   209,   210,   210,   210,   211,   212,   211,   211,   213,
     214,   213,   213,   215,   213,   216,   217,   218,   219,   219,
     219,   220,   221,   220,   220,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   223,   223,   224,   223,   223,   225,
     225,   225,   225,   225,   225,   226,   227,   228,   228,   229,
     230,   229,   231,   232,   231,   233,   234,   233,   235,   233,
     236,   233,   237,   237,   238,   239,   238,   240,   240,   241,
     241,   241,   241,   242,   242,   243,   243,   244,   244,   244,
     244,   244,   244,   244,   245,   245,   245,   245,   246,   246,
     246,   246,   246,   246,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   248,   249,   248,   248
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     3,     3,     2,     4,     2,     0,
       5,     0,     6,     5,     4,     0,     5,     4,     1,     1,
       1,     1,     1,     2,     0,     2,     1,     4,     0,     5,
       4,     1,     1,     1,     6,     0,     7,     3,     3,     2,
       1,     4,     0,     5,     4,     3,     1,     1,     1,     3,
       3,     4,     5,     3,     4,     4,     5,     2,     0,     2,
       1,     4,     0,     5,     4,     2,     2,     1,     1,     0,
       4,     4,     0,     5,     5,     0,     6,     4,     4,     0,
       5,     3,     3,     3,     0,     3,     0,     4,     1,     3,
       0,     4,     3,     0,     4,     2,     1,     1,     3,     3,
       0,     3,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     6,     0,     7,     5,     1,
       4,     4,     1,     4,     4,     3,     5,     2,     0,     4,
       0,     5,     4,     0,     5,     8,     0,     9,     0,     9,
       0,     9,     1,     1,     5,     0,     6,     2,     1,     4,
       4,     4,     4,     2,     2,     3,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     1,     1,     4,     4,     1,     3,     3,
       2,     2,     4,     4,     3,     3,     0,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     9,     0,     1,     0,     0,     0,    24,
       5,     4,     0,     8,     3,     2,   100,     6,    97,     0,
      58,    15,     0,     0,     0,     0,    23,    26,     0,    69,
       0,    19,    20,    21,    18,    22,     0,    11,     0,     0,
     125,     0,     0,   119,     0,   100,   122,     0,     0,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      28,     0,    25,    46,     0,    57,    60,     0,     0,     7,
      67,     0,    68,     0,     0,    17,    14,     0,     0,   174,
       0,     0,     0,     0,   177,     0,   163,   167,   173,     0,
     154,   153,     0,     0,     0,     0,     0,     0,     0,     0,
     102,     0,    99,    98,     0,     0,    47,    48,     0,     0,
       0,     0,     0,    32,    33,    31,    62,     0,     0,    59,
      84,    84,    65,    66,    72,     9,    79,     9,    16,     0,
      13,    10,     0,     0,     0,     0,   181,   180,     0,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   136,     0,   114,     0,     0,
     188,     0,     0,   130,     0,     0,   156,   133,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,    40,     0,
       0,    30,    27,     0,     0,    45,     0,     0,    81,     9,
       0,     9,     0,    12,   184,     0,     0,   179,   178,     0,
       0,   161,   157,   158,   159,   160,   162,     0,     0,     0,
     148,   165,   166,   164,   172,   169,   170,   171,   168,     0,
       0,     0,   116,     0,   186,     0,   120,   128,     0,   129,
     124,     0,   123,     0,   132,   103,    29,     0,    53,     0,
      49,     0,     0,    38,    37,    39,    42,     0,    50,     0,
      64,    61,     0,    96,     0,    88,     0,     0,    75,     0,
       0,    71,    70,     0,    78,    77,   183,   182,   186,   175,
     176,     0,     0,     0,   144,   147,     0,   138,   143,   142,
       0,   118,     0,     0,     0,   185,     0,   126,   131,   155,
     134,    35,     0,    55,    54,     0,     0,    51,     0,     0,
      63,    95,    83,    82,     0,    90,     0,    93,     0,     0,
      74,    73,    80,   146,     0,     0,     0,     0,     0,     0,
     115,   187,   127,     0,     0,    56,    52,     0,    44,    41,
       0,    85,     0,    89,     0,    92,    76,   152,   151,   150,
     149,     0,     0,   140,     0,   117,     0,    34,    43,    87,
      91,    94,     0,     0,     0,   135,    36,   137,   139,   141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     8,     9,    13,    77,    30,    84,
      20,    26,    27,   104,   112,   113,   323,   114,   177,   178,
     298,   253,   115,    29,    65,    66,   183,    69,    70,   189,
      71,   309,    72,   191,    73,   187,   254,   330,   255,   332,
     334,   256,   257,    17,    24,    49,   169,    50,    51,   282,
      52,    53,    54,   287,    55,   228,    56,   233,    57,   219,
     317,   354,   280,    58,   200,   209,   210,    59,   165,   160,
      86,    87,    88,   161,   284
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -213
static const yytype_int16 yypact[] =
{
     -18,     2,    32,    68,    30,  -213,     5,    22,    80,   103,
    -213,  -213,   167,    99,  -213,  -213,  -213,  -213,  -213,   118,
      96,  -213,   266,   178,   252,   192,   118,  -213,   132,    88,
     266,  -213,  -213,  -213,  -213,  -213,    35,  -213,   266,   323,
    -213,   146,     6,   137,   323,  -213,   143,   323,    33,    40,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,   115,  -213,  -213,   261,   132,  -213,   158,   174,    88,
    -213,    42,  -213,    43,   136,  -213,  -213,   266,    44,   207,
     323,   323,   323,   169,  -213,   375,   245,   162,  -213,    56,
    -213,  -213,   323,   185,   323,   323,   402,   210,   323,   384,
    -213,   299,  -213,  -213,   115,   190,  -213,   218,   132,   271,
     132,   229,    46,  -213,  -213,  -213,  -213,   115,   222,  -213,
     226,   226,  -213,  -213,  -213,    68,  -213,    68,  -213,   213,
    -213,  -213,   240,   323,   323,   327,  -213,  -213,   323,  -213,
     323,   323,   323,   323,   323,   323,   328,   323,   323,   323,
     323,   323,   323,   323,   323,  -213,   323,   449,   274,   172,
     449,    12,   105,  -213,   323,    98,   449,  -213,   105,   299,
    -213,   237,     1,    78,     9,   276,   278,    92,  -213,   357,
     266,  -213,  -213,   115,    48,  -213,    -3,   187,  -213,    68,
      49,    68,    50,  -213,  -213,   208,   120,  -213,  -213,   135,
     328,   245,   245,   245,   245,   245,   245,   288,   289,   163,
    -213,   162,   162,   162,  -213,  -213,  -213,  -213,  -213,   323,
     282,   323,  -213,   301,    27,   323,  -213,   292,   323,   449,
    -213,   323,  -213,   105,  -213,  -213,  -213,    17,  -213,   280,
    -213,   196,   387,  -213,  -213,  -213,  -213,   115,  -213,   262,
    -213,  -213,   132,   311,    10,  -213,   233,   246,  -213,     1,
     269,  -213,  -213,   272,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,   198,   105,   105,  -213,  -213,   346,  -213,  -213,  -213,
     323,   449,   325,   323,   323,   449,   105,  -213,   449,   449,
    -213,  -213,   314,  -213,  -213,   335,   266,  -213,   115,    51,
    -213,   311,    73,  -213,    -3,  -213,     1,  -213,     1,     1,
    -213,  -213,  -213,  -213,    53,    55,   323,   323,   406,   323,
     449,   449,  -213,   316,   115,  -213,  -213,   315,  -213,  -213,
      -3,  -213,     1,  -213,     1,  -213,  -213,  -213,  -213,  -213,
    -213,   434,   435,  -213,   105,   449,   115,  -213,  -213,  -213,
    -213,  -213,   105,   105,   105,  -213,  -213,  -213,  -213,  -213
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,  -213,  -101,  -213,  -213,  -213,  -213,  -213,   -22,
    -213,  -213,   348,  -213,  -103,  -213,  -213,  -213,  -213,   195,
    -213,   -25,  -168,  -213,  -213,   313,  -213,  -213,   317,  -213,
    -213,  -213,   318,  -213,  -213,   277,  -213,  -213,  -212,  -213,
    -213,  -213,  -213,  -213,   337,  -147,  -213,   -99,  -213,  -213,
    -213,   393,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,   107,  -213,  -213,   203,  -199,  -213,  -213,   -27,
     202,   -32,   -76,    21,  -213
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -122
static const yytype_int16 yytable[] =
{
      36,   171,   170,    64,   237,   136,   137,    90,    74,   106,
     275,   302,    85,   224,   184,   227,    78,    96,   291,   118,
      99,   234,   225,    14,   190,    63,   192,     1,  -121,   107,
       4,    10,     5,    12,   100,   108,    75,   109,    15,   111,
      64,   102,   101,   124,   126,   130,  -121,   181,    31,   250,
     261,   264,   328,   135,   337,   129,   339,   155,   252,   240,
     303,   156,   226,   292,   304,   157,    32,    33,    34,    35,
     235,   166,   275,    91,   214,   215,   216,   217,   218,     6,
     249,  -121,   111,   174,    11,   179,   290,   176,   260,    76,
     263,   310,   331,   243,   103,   111,   125,   127,   131,   230,
     182,   -86,   251,   262,   265,   329,   238,   338,   231,   340,
      19,    39,    67,   244,   239,   211,   212,   213,   349,   105,
      63,   268,    16,   106,   208,   314,   315,    23,    41,   220,
     225,    42,    68,    43,   -86,    44,   268,   229,   333,   322,
     335,   336,    92,   107,   299,   225,    25,    16,   232,   108,
     111,   109,   179,    93,    45,   196,    46,    28,   248,   199,
      63,   111,    31,   110,   350,   150,   351,    47,    21,    94,
     269,    95,    48,   222,    89,   151,   152,    98,   208,    37,
      32,    33,    34,    35,   274,   270,   120,   208,   258,    22,
     128,   207,   276,    60,   281,   327,   259,   355,   285,   153,
      38,   288,   121,   138,   289,   357,   358,   359,   147,   266,
      31,   163,   148,   158,    61,   149,    39,   154,   223,   313,
     297,   347,   172,   132,   294,   111,   207,   301,    32,    33,
      34,    35,   295,    41,   305,   173,    42,   111,    43,   133,
      44,   134,   306,   356,   147,    31,   180,   307,   148,   208,
     185,   149,    16,   318,   267,   308,   320,   321,    39,    45,
     186,    46,   116,    32,    33,    34,    35,   193,   194,   164,
     117,   118,    47,    40,   326,    41,   111,    48,    42,   221,
      43,   147,    44,   277,   111,   148,   111,   111,   149,   341,
     342,   236,   345,   241,    16,   242,   159,   272,   273,   175,
     278,    45,   111,    46,   140,    39,   283,   141,   293,   142,
     111,   286,   111,    31,    47,   143,   300,   144,    31,    48,
     145,   118,    41,   311,   111,    42,   312,    43,   197,    44,
     319,    32,    33,    34,    35,   195,    32,    33,    34,    35,
     279,    16,   201,   202,   203,   204,   205,   206,    45,   140,
      46,    79,   141,   324,   142,   346,   207,    80,   246,    81,
     143,    47,   144,   325,   278,   145,   247,   118,   140,   348,
      31,   141,   245,   142,    62,    31,   139,   198,   119,   143,
      82,   144,    97,   316,   145,   167,   122,   123,    32,    33,
      34,    35,    83,    32,    33,    34,    35,   140,   188,   168,
     141,    18,   142,   271,   279,     0,   140,   343,   143,   141,
     144,   142,     0,   145,   146,     0,     0,   143,     0,   144,
       0,   344,   145,   296,   140,     0,     0,   141,   140,   142,
       0,   141,     0,   142,    31,   143,     0,   144,     0,   143,
     145,   144,     0,     0,   145,     0,     0,     0,     0,   352,
     353,     0,    32,    33,    34,    35,   140,   140,   162,   141,
     141,   142,   142,     0,     0,     0,     0,   143,   143,   144,
     144,   140,   145,   145,   141,     0,   142,     0,     0,     0,
       0,     0,   143,     0,   144,     0,     0,   145
};

static const yytype_int16 yycheck[] =
{
      22,   104,   101,    28,   172,    81,    82,     1,    30,     8,
     209,     1,    39,     1,   117,   162,    38,    44,     1,    10,
      47,   168,    10,     1,   125,    28,   127,    45,     1,    28,
      28,     1,     0,    28,     1,    34,     1,    36,    16,    61,
      65,     1,     9,     1,     1,     1,    19,     1,    47,     1,
       1,     1,     1,    80,     1,    77,     1,     1,    61,    50,
      50,     5,    50,    46,    54,    92,    65,    66,    67,    68,
     169,    98,   271,    67,   150,   151,   152,   153,   154,    11,
     183,    54,   104,   108,    54,   110,   233,   109,   189,    54,
     191,   259,   304,     1,    54,   117,    54,    54,    54,     1,
      54,    28,    54,    54,    54,    54,    28,    54,    10,    54,
       7,     6,    24,    21,    36,   147,   148,   149,   330,     4,
      28,     1,    42,     8,   146,   272,   273,    28,    23,   156,
      10,    26,    44,    28,    61,    30,     1,   164,   306,   286,
     308,   309,     5,    28,   247,    10,    28,    42,    50,    34,
     172,    36,   177,    16,    49,   134,    51,    61,   180,   138,
      28,   183,    47,    48,   332,     3,   334,    62,     1,    32,
      50,    34,    67,     1,    28,    13,    14,    34,   200,     1,
      65,    66,    67,    68,    21,    50,    28,   209,     1,    22,
      54,    28,   219,     1,   221,   298,     9,   344,   225,    37,
      22,   228,    28,    34,   231,   352,   353,   354,    36,     1,
      47,     1,    40,    28,    22,    43,     6,    55,    46,    21,
     242,   324,    32,    16,    28,   247,    28,   252,    65,    66,
      67,    68,    36,    23,     1,    17,    26,   259,    28,    32,
      30,    34,     9,   346,    36,    47,    17,     1,    40,   271,
      28,    43,    42,   280,    46,     9,   283,   284,     6,    49,
      34,    51,     1,    65,    66,    67,    68,    54,    28,    59,
       9,    10,    62,    21,   296,    23,   298,    67,    26,     5,
      28,    36,    30,     1,   306,    40,   308,   309,    43,   316,
     317,    54,   319,    17,    42,    17,    94,     9,     9,    28,
      18,    49,   324,    51,    22,     6,     5,    25,    28,    27,
     332,    19,   334,    47,    62,    33,    54,    35,    47,    67,
      38,    10,    23,    54,   346,    26,    54,    28,     1,    30,
       5,    65,    66,    67,    68,   133,    65,    66,    67,    68,
      58,    42,   140,   141,   142,   143,   144,   145,    49,    22,
      51,    28,    25,    39,    27,    39,    28,    34,     1,    36,
      33,    62,    35,    28,    18,    38,     9,    10,    22,    54,
      47,    25,   177,    27,    26,    47,     1,    50,    65,    33,
      57,    35,    45,   276,    38,     1,    69,    69,    65,    66,
      67,    68,    69,    65,    66,    67,    68,    22,   121,    15,
      25,     8,    27,   200,    58,    -1,    22,     1,    33,    25,
      35,    27,    -1,    38,    39,    -1,    -1,    33,    -1,    35,
      -1,    15,    38,    36,    22,    -1,    -1,    25,    22,    27,
      -1,    25,    -1,    27,    47,    33,    -1,    35,    -1,    33,
      38,    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,    15,
      15,    -1,    65,    66,    67,    68,    22,    22,    56,    25,
      25,    27,    27,    -1,    -1,    -1,    -1,    33,    33,    35,
      35,    22,    38,    38,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,   176,   177,    28,     0,    11,   178,   179,   180,
       1,    54,    28,   181,     1,    16,    42,   218,   226,     7,
     185,     1,    22,    28,   219,    28,   186,   187,    61,   198,
     183,    47,    65,    66,    67,    68,   184,     1,    22,     6,
      21,    23,    26,    28,    30,    49,    51,    62,    67,   220,
     222,   223,   225,   226,   227,   229,   231,   233,   238,   242,
       1,    22,   187,    28,   196,   199,   200,    24,    44,   202,
     203,   205,   207,   209,   184,     1,    54,   182,   184,    28,
      34,    36,    57,    69,   184,   244,   245,   246,   247,    28,
       1,    67,     5,    16,    32,    34,   244,   219,    34,   244,
       1,     9,     1,    54,   188,     4,     8,    28,    34,    36,
      48,   184,   189,   190,   192,   197,     1,     9,    10,   200,
      28,    28,   203,   207,     1,    54,     1,    54,    54,   184,
       1,    54,    16,    32,    34,   244,   247,   247,    34,     1,
      22,    25,    27,    33,    35,    38,    39,    36,    40,    43,
       3,    13,    14,    37,    55,     1,     5,   244,    28,   245,
     244,   248,    56,     1,    59,   243,   244,     1,    15,   221,
     222,   189,    32,    17,   196,    28,   184,   193,   194,   196,
      17,     1,    54,   201,   189,    28,    34,   210,   210,   204,
     178,   208,   178,    54,    28,   245,   248,     1,    50,   248,
     239,   245,   245,   245,   245,   245,   245,    28,   184,   240,
     241,   246,   246,   246,   247,   247,   247,   247,   247,   234,
     244,     5,     1,    46,     1,    10,    50,   220,   230,   244,
       1,    10,    50,   232,   220,   222,    54,   197,    28,    36,
      50,    17,    17,     1,    21,   194,     1,     9,   184,   189,
       1,    54,    61,   196,   211,   213,   216,   217,     1,     9,
     178,     1,    54,   178,     1,    54,     1,    46,     1,    50,
      50,   240,     9,     9,    21,   241,   244,     1,    18,    58,
     237,   244,   224,     5,   249,   244,    19,   228,   244,   244,
     220,     1,    46,    28,    28,    36,    36,   184,   195,   189,
      54,   196,     1,    50,    54,     1,     9,     1,     9,   206,
     197,    54,    54,    21,   220,   220,   237,   235,   244,     5,
     244,   244,   220,   191,    39,    28,   184,   189,     1,    54,
     212,   213,   214,   197,   215,   197,   197,     1,    54,     1,
      54,   244,   244,     1,    15,   244,    39,   189,    54,   213,
     197,   197,    15,    15,   236,   220,   189,   220,   220,   220
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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


/* Prevent warnings from -Wmissing-prototypes.  */

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
        case 2:
#line 61 "syntax.y"
    {
            if(DEBUG){
                printf("PARSING PROGRAM\n");
            }
            (yyval) = NEWNODE(TK_PROGRAM);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[(1) - (3)]);
            (yyval)->child[1] = (yyvsp[(2) - (3)]);

            (yyval)->lineno = MIN((yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]));

            if(syntax_const_error)
                ROOT = NULL;
            else
                ROOT = (yyval);
        }
    break;

  case 3:
#line 77 "syntax.y"
    {
            if(DEBUG){
                printf("PARSING PROGRAM\n");
            }
            (yyval) = NEWNODE(TK_PROGRAM);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[(1) - (3)]);
            (yyval)->child[1] = (yyvsp[(2) - (3)]);

            (yyval)->lineno = MIN((yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]));

            if(syntax_const_error)
                ROOT = NULL;
            else
                ROOT = (yyval);

            IS_SYNTAX_ERROR = 1;
            LOG_ERROR(STR_DOT,yylineno);
        }
    break;

  case 4:
#line 98 "syntax.y"
    {
        //NOTE: PROGRAM HEAD ACTUALLY IS TK_ID
            if(DEBUG){
                printf("PROGRAM HEAD:%s\n", (yyvsp[(2) - (3)])->name.c_str());
            }
            (yyval) = (yyvsp[(2) - (3)]);
            (yyval)->type = TK_PROGRAM_HEAD;
            (yyval)->child_number = 0;
            (yyval)->child = NULL;
        }
    break;

  case 5:
#line 108 "syntax.y"
    {
        //NOTE: PROGRAM HEAD ACTUALLY IS TK_ID
            if(DEBUG){
                printf("PROGRAM HEAD:%s\n", (yyvsp[(2) - (3)])->name.c_str());
            }
            (yyval) = (yyvsp[(2) - (3)]);
            (yyval)->type = TK_PROGRAM_HEAD;
            (yyval)->child_number = 0;
            (yyval)->child = NULL;

            IS_SYNTAX_ERROR = 1;
            LOG_ERROR(STR_SEMI, (yyval)->lineno);
        }
    break;

  case 6:
#line 123 "syntax.y"
    {
            if(DEBUG){
                printf("PARSING ROUTINE\n");
            }
            (yyval) = NEWNODE(TK_ROUTINE);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[(1) - (2)]);
            (yyval)->child[1] = (yyvsp[(2) - (2)]);

            (yyval)->lineno = MIN((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));
        }
    break;

  case 7:
#line 136 "syntax.y"
    {
            if(DEBUG){
                printf("PARSING ROUTINE HEAD\n");
            }
            (yyval) = NEWNODE(TK_ROUTINE_HEAD);
            (yyval)->child = MALLOC((yyval),4);
            (yyval)->child[0] = (yyvsp[(1) - (4)]);
            (yyval)->child[1] = (yyvsp[(2) - (4)]);
            (yyval)->child[2] = (yyvsp[(3) - (4)]);
            (yyval)->child[3] = (yyvsp[(4) - (4)]);

            (yyval)->lineno = MIN((yyvsp[(1) - (4)]),(yyvsp[(2) - (4)]));
            (yyval)->lineno = MIN((yyval),(yyvsp[(3) - (4)]));
            (yyval)->lineno = MIN((yyval),(yyvsp[(4) - (4)]));
        }
    break;

  case 8:
#line 153 "syntax.y"
    {
        //NOTE: IGNORE TK_CONST
            if(DEBUG){
                printf("PARSING CONST PART\n");
            }
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 9:
#line 160 "syntax.y"
    {
            if(DEBUG){
                printf("PARSING CONST PART NULL\n");
            }
            (yyval) = NULL;
        }
    break;

  case 10:
#line 168 "syntax.y"
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST\n");
                    }
                    (yyval) = (yyvsp[(1) - (5)]);
                    NODE* node = NEWNODE(TK_CONST_DL_END);
                    node->child = MALLOC(node,2);
                    node->child[0] = (yyvsp[(2) - (5)]);
                    node->child[1] = (yyvsp[(4) - (5)]);

                    NODE** tmp = (yyval)->child;
                    int old_child_number = (yyval)->child_number;
                    (yyval)->child = MALLOC((yyval), (1+old_child_number));
                    int i;
                    for(i=0;i<old_child_number;i++){
                    	(yyval)->child[i] = tmp[i];
                    }
                    (yyval)->child[i] = node;

                    free(tmp);
                }
    break;

  case 11:
#line 190 "syntax.y"
    {  IS_SYNTAX_ERROR = 1;LOG_ERROR(STR_EQU,(yyvsp[(2) - (3)])->lineno);}
    break;

  case 12:
#line 190 "syntax.y"
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST\n");
                    }
                    (yyval) = (yyvsp[(1) - (6)]);
                    NODE* node = NEWNODE(TK_CONST_DL_END);
                    node->child = MALLOC(node,2);
                    node->child[0] = (yyvsp[(2) - (6)]);
                    node->child[1] = (yyvsp[(4) - (6)]);

                    NODE** tmp = (yyval)->child;
                    int old_child_number = (yyval)->child_number;
                    (yyval)->child = MALLOC((yyval), (1+old_child_number));
                    int i;
                    for(i=0;i<old_child_number;i++){
                        (yyval)->child[i] = tmp[i];
                    }
                    (yyval)->child[i] = node;

                    free(tmp);
                }
    break;

  case 13:
#line 212 "syntax.y"
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST\n");
                    }
                    (yyval) = (yyvsp[(1) - (5)]);
                    NODE* node = NEWNODE(TK_CONST_DL_END);
                    node->child = MALLOC(node,2);
                    node->child[0] = (yyvsp[(2) - (5)]);
                    node->child[1] = (yyvsp[(4) - (5)]);

                    NODE** tmp = (yyval)->child;
                    int old_child_number = (yyval)->child_number;
                    (yyval)->child = MALLOC((yyval), (1+old_child_number));
                    int i;
                    for(i=0;i<old_child_number;i++){
                        (yyval)->child[i] = tmp[i];
                    }
                    (yyval)->child[i] = node;

                    free(tmp);

                    IS_SYNTAX_ERROR = 1;
                    LOG_ERROR(STR_SEMI, (yyvsp[(4) - (5)])->lineno);
                }
    break;

  case 14:
#line 237 "syntax.y"
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST : FIRST ONE\n");
                    }
                    (yyval) = NEWNODE(TK_CONST_DL);
                    NODE* node = NEWNODE(TK_CONST_DL_END);

                    node->child = MALLOC(node,2);
                    node->child[0] = (yyvsp[(1) - (4)]);
                    node->child[1] = (yyvsp[(3) - (4)]);
                    (yyval)->lineno = node->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));

                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = node;
                }
    break;

  case 15:
#line 253 "syntax.y"
    { IS_SYNTAX_ERROR = 1;LOG_ERROR(STR_EQU,(yyvsp[(1) - (2)])->lineno); }
    break;

  case 16:
#line 253 "syntax.y"
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST : FIRST ONE\n");
                    }
                    (yyval) = NEWNODE(TK_CONST_DL);
                    NODE* node = NEWNODE(TK_CONST_DL_END);

                    node->child = MALLOC(node,2);
                    node->child[0] = (yyvsp[(1) - (5)]);
                    node->child[1] = (yyvsp[(3) - (5)]);
                    (yyval)->lineno = node->lineno = MIN((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]));

                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = node;
                }
    break;

  case 17:
#line 269 "syntax.y"
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST : FIRST ONE\n");
                    }
                    (yyval) = NEWNODE(TK_CONST_DL);
                    NODE* node = NEWNODE(TK_CONST_DL_END);

                    node->child = MALLOC(node,2);
                    node->child[0] = (yyvsp[(1) - (4)]);
                    node->child[1] = (yyvsp[(3) - (4)]);
                    (yyval)->lineno = node->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));

                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = node;

                    IS_SYNTAX_ERROR = 1;
                    LOG_ERROR(STR_SEMI, (yyvsp[(3) - (4)])->lineno);
                }
    break;

  case 18:
#line 290 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE INTEGER\n");
                }
                (yyval) = (yyvsp[(1) - (1)]);
            }
    break;

  case 19:
#line 296 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE REAL\n");
                }
                (yyval) = (yyvsp[(1) - (1)]);
            }
    break;

  case 20:
#line 302 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE CHAR\n");
                }
                (yyval) = (yyvsp[(1) - (1)]);
            }
    break;

  case 21:
#line 308 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE STRING\n");
                }
                (yyval) = (yyvsp[(1) - (1)]);
            }
    break;

  case 22:
#line 314 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE SYS CON\n");
                }
                (yyval) = (yyvsp[(1) - (1)]);
            }
    break;

  case 23:
#line 322 "syntax.y"
    {
            //NOTE: IGNORE TYPE
            if(DEBUG){
                printf("PARSING TYPE PART NULL\n");
            }
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 24:
#line 329 "syntax.y"
    {
              //NOTE: IGNORE TYPE
                  if(DEBUG){
                      printf("PARSING TYPE PART NULL\n");
                  }
                (yyval)=NULL;
                }
    break;

  case 25:
#line 338 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING TYPE DECL LIST DEF\n");
                    }
                    (yyval) = (yyvsp[(1) - (2)]);

                    int old_child_number = (yyval)->child_number;
                    NODE** tmp = (yyval)->child;
                    (yyval)->child = MALLOC((yyval), (1+old_child_number));
                    int i;
                    for(i=0;i<old_child_number;i++){
                    	(yyval)->child[i] = tmp[i];
                    }
                    (yyval)->child[i] = (yyvsp[(2) - (2)]);
                }
    break;

  case 26:
#line 353 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING TYPE DECL LIST\n");
                    }
                    (yyval) = NEWNODE(TK_TYPE_DL);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[(1) - (1)]);
                    (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
               }
    break;

  case 27:
#line 364 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING TYPE DEF\n");
                    }
                    (yyval) = NEWNODE(TK_TYPE_DEF);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[(1) - (4)]);
                    (yyval)->child[1] = (yyvsp[(3) - (4)]);

                    (yyval)->lineno = MIN((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));
                }
    break;

  case 28:
#line 375 "syntax.y"
    { IS_SYNTAX_ERROR = 1;LOG_ERROR(STR_EQU,(yyvsp[(1) - (2)])->lineno); }
    break;

  case 29:
#line 375 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING TYPE DEF\n");
                    }
                    (yyval) = NEWNODE(TK_TYPE_DEF);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[(1) - (5)]);
                    (yyval)->child[1] = (yyvsp[(3) - (5)]);

                    (yyval)->lineno = MIN((yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]));
                }
    break;

  case 30:
#line 386 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING TYPE DEF\n");
                    }
                    (yyval) = NEWNODE(TK_TYPE_DEF);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[(1) - (4)]);
                    (yyval)->child[1] = (yyvsp[(3) - (4)]);

                    (yyval)->lineno = MIN((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));

                    IS_SYNTAX_ERROR = 1;
                    LOG_ERROR(STR_SEMI, yylineno);
                }
    break;

  case 31:
#line 402 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING TYPE DECL\n");
                }
                (yyval) = NEWNODE(TK_TYPE_DECL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[(1) - (1)]);
                (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
          }
    break;

  case 32:
#line 411 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING TYPE DECL\n");
                }
                (yyval) = NEWNODE(TK_TYPE_DECL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[(1) - (1)]);
                (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
          }
    break;

  case 33:
#line 420 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING TYPE DECL\n");
                }
                (yyval) = NEWNODE(TK_TYPE_DECL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[(1) - (1)]);
                (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
          }
    break;

  case 34:
#line 431 "syntax.y"
    {
                //NOTE: IGNORE TK_LB TK_RB TK_OF
                if(DEBUG){
                    printf("PARSING ARRAY\n");
                }
                (yyval) = NEWNODE(TK_ARRAY);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = NEWNODE(TK_TYPE_DECL);
                (yyval)->child[0]->lineno = (yyvsp[(3) - (6)])->lineno;
                (yyval)->child[0]->child = MALLOC((yyval), 1);
                (yyval)->child[0]->child[0] = (yyvsp[(3) - (6)]);
                (yyval)->child[1] = (yyvsp[(6) - (6)]);

                (yyval)->lineno = MIN((yyvsp[(3) - (6)]), (yyvsp[(6) - (6)]));
            }
    break;

  case 35:
#line 446 "syntax.y"
    { IS_SYNTAX_ERROR = 1; LOG_ERROR(STR_RB, yylineno); }
    break;

  case 36:
#line 446 "syntax.y"
    {
                //NOTE: IGNORE TK_LB TK_RB TK_OF
                if(DEBUG){
                    printf("PARSING ARRAY\n");
                }
                (yyval) = NEWNODE(TK_ARRAY);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = NEWNODE(TK_TYPE_DECL);
                (yyval)->child[0]->lineno = (yyvsp[(3) - (7)])->lineno;
                (yyval)->child[0]->child = MALLOC((yyval), 1);
                (yyval)->child[0]->child[0] = (yyvsp[(3) - (7)]);
                (yyval)->child[1] = (yyvsp[(6) - (7)]);

                (yyval)->lineno = MIN((yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));
            }
    break;

  case 37:
#line 463 "syntax.y"
    {
                //NOTE: IGNORE TK_END
                if(DEBUG){
                    printf("PARSING RECORD TYPE DECL\n");
                }
                (yyval) = (yyvsp[(2) - (3)]);
            }
    break;

  case 38:
#line 470 "syntax.y"
    {
                //NOTE: IGNORE TK_END
                if(DEBUG){
                    printf("PARSING RECORD TYPE DECL\n");
                }
                (yyval) = (yyvsp[(2) - (3)]);

                IS_SYNTAX_ERROR = 1;
                LOG_ERROR(STR_END,(yyvsp[(2) - (3)])->lineno);
            }
    break;

  case 39:
#line 482 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING FIELD DECL LIST\n");
                }
                (yyval) = (yyvsp[(1) - (2)]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[(2) - (2)]);

                free(tmp);
            }
    break;

  case 40:
#line 498 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING FIELD DECL LIST : FIRST ONE\n");
                }
                (yyval) = NEWNODE(TK_FIELD_DL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[(1) - (1)]);

                (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
            }
    break;

  case 41:
#line 510 "syntax.y"
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
                if(DEBUG){
                    printf("PARSING FIELD DECL\n");
                }
                (yyval) = NEWNODE(TK_FIELD_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (4)]);
                (yyval)->child[1] = (yyvsp[(3) - (4)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));
            }
    break;

  case 42:
#line 522 "syntax.y"
    {IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COLON, yylineno);}
    break;

  case 43:
#line 522 "syntax.y"
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
                if(DEBUG){
                    printf("PARSING FIELD DECL\n");
                }
                (yyval) = NEWNODE(TK_FIELD_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (5)]);
                (yyval)->child[1] = (yyvsp[(3) - (5)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]));
            }
    break;

  case 44:
#line 534 "syntax.y"
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
                if(DEBUG){
                    printf("PARSING FIELD DECL\n");
                }
                (yyval) = NEWNODE(TK_FIELD_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (4)]);
                (yyval)->child[1] = (yyvsp[(3) - (4)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));

                IS_SYNTAX_ERROR = 1;
                LOG_ERROR(STR_SEMI, yylineno);
            }
    break;

  case 45:
#line 551 "syntax.y"
    {
            //NOTE: HERE TAG IS SIMPLIFIED AS 'TK_NL', IGNORE TK_COMMA
                if(DEBUG){
                    printf("PARSING NAME LIST\n");
                }
              	(yyval) = (yyvsp[(1) - (3)]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[(3) - (3)]);

                free(tmp);
            }
    break;

  case 46:
#line 568 "syntax.y"
    {
                  if(DEBUG){
                      printf("PARSING NAME LIST : FIRST ONE\n");
                  }
                  (yyval) = NEWNODE(TK_NL);
                  (yyval)->child = MALLOC((yyval),1);
                  (yyval)->child[0] = (yyvsp[(1) - (1)]);

                  (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
              }
    break;

  case 47:
#line 580 "syntax.y"
    {
                //NOTE: HERE TAG IS SIMPLIFIED AS 'TK_STD' AND FOLLOWED BY A TYPE
                    if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL SYS TYPE\n");
                    }
                    (yyval) = NEWNODE(TK_STD_SYS_TYPE);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[(1) - (1)]);

                    (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
                }
    break;

  case 48:
#line 591 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_ID);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[(1) - (1)]);

                    (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
                }
    break;

  case 49:
#line 601 "syntax.y"
    {
                     if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_NL);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[(2) - (3)]);

                    (yyval)->lineno = (yyvsp[(1) - (3)])->lineno;
                }
    break;

  case 50:
#line 611 "syntax.y"
    {
                     if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_DD);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[(1) - (3)]);
                    (yyval)->child[1] = (yyvsp[(3) - (3)]);

                    (yyval)->lineno = (yyvsp[(1) - (3)])->lineno;
                }
    break;

  case 51:
#line 622 "syntax.y"
    {
                                      if(DEBUG){
                                         printf("PARSING SIMPLE TYPE DECL ID\n");
                                     }
                                     (yyval) = NEWNODE(TK_STD_DD);
                                     (yyval)->child = MALLOC((yyval),2);
                                     if((yyvsp[(2) - (4)])->type!=TK_INTEGER){
                                        syntax_const_error  = 1;
                                     }else{
                                        (yyvsp[(2) - (4)])->value.ival *= -1;
                                     }

                                     (yyval)->child[0] = (yyvsp[(2) - (4)]);
                                     (yyval)->child[1] = (yyvsp[(4) - (4)]);

                                     (yyval)->lineno = (yyvsp[(1) - (4)])->lineno;
                   }
    break;

  case 52:
#line 639 "syntax.y"
    {
                                      if(DEBUG){
                                         printf("PARSING SIMPLE TYPE DECL ID\n");
                                      }
                                      if((yyvsp[(2) - (5)])->type!=TK_INTEGER){
                                         syntax_const_error  = 1;
                                      }else{
                                           (yyvsp[(2) - (5)])->value.ival *= -1;
                                      }
                                      if((yyvsp[(5) - (5)])->type!=TK_INTEGER){
                                         syntax_const_error  = 1;
                                      }else{
                                         (yyvsp[(5) - (5)])->value.ival *= -1;
                                      }

                                     (yyval) = NEWNODE(TK_STD_DD);
                                     (yyval)->child = MALLOC((yyval),2);
                                     (yyval)->child[0] = (yyvsp[(2) - (5)]);
                                     (yyval)->child[1] = (yyvsp[(5) - (5)]);

                                     (yyval)->lineno = (yyvsp[(1) - (5)])->lineno;
                 }
    break;

  case 53:
#line 661 "syntax.y"
    {
                     if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_DD_ID);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[(1) - (3)]);
                    (yyval)->child[1] = (yyvsp[(3) - (3)]);

                    (yyval)->lineno = (yyvsp[(1) - (3)])->lineno;
                }
    break;

  case 54:
#line 672 "syntax.y"
    {
                                     if(DEBUG){
                                        printf("PARSING SIMPLE TYPE DECL ID\n");
                                    }
                                    (yyval) = NEWNODE(TK_STD_DD_ID);
                                    (yyval)->child = MALLOC((yyval),2);

                                    (yyvsp[(2) - (4)])->type = TK_ID_MINUS;
                                    (yyval)->child[0] = (yyvsp[(2) - (4)]);

                                    (yyval)->child[1] = (yyvsp[(4) - (4)]);

                                    (yyval)->lineno = (yyvsp[(2) - (4)])->lineno;
                                }
    break;

  case 55:
#line 686 "syntax.y"
    {
                                     if(DEBUG){
                                        printf("PARSING SIMPLE TYPE DECL ID\n");
                                    }
                                    (yyval) = NEWNODE(TK_STD_DD_ID);
                                    (yyval)->child = MALLOC((yyval),2);

                                    (yyval)->child[0] = (yyvsp[(1) - (4)]);
                                    (yyvsp[(4) - (4)])->type = TK_ID_MINUS;
                                    (yyval)->child[1] = (yyvsp[(4) - (4)]);

                                    (yyval)->lineno = (yyvsp[(1) - (4)])->lineno;
                                }
    break;

  case 56:
#line 699 "syntax.y"
    {
                                     if(DEBUG){
                                         printf("PARSING SIMPLE TYPE DECL ID\n");
                                     }
                                     (yyval) = NEWNODE(TK_STD_DD_ID);
                                     (yyval)->child = MALLOC((yyval),2);

                                     (yyvsp[(2) - (5)])->type = TK_ID_MINUS;
                                     (yyval)->child[0] = (yyvsp[(2) - (5)]);
                                     (yyvsp[(5) - (5)])->type = TK_ID_MINUS;
                                     (yyval)->child[1] = (yyvsp[(5) - (5)]);

                                     (yyval)->lineno = (yyvsp[(2) - (5)])->lineno;
                                 }
    break;

  case 57:
#line 715 "syntax.y"
    {
        //NOTE: IGNORE TK_VAR
            if(DEBUG){
                  printf("PARSING VAR PART NOT NULL\n");
              }
              (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 58:
#line 722 "syntax.y"
    {
              if(DEBUG){
                  printf("PARSING VAR PART NULL\n");
              }
             (yyval) = NULL;
        }
    break;

  case 59:
#line 730 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING VAR DECL LIST\n");
                }
                (yyval) = (yyvsp[(1) - (2)]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[(2) - (2)]);

                free(tmp);
            }
    break;

  case 60:
#line 746 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING VAR DECL LIST : FIRST ONE\n");
                }
                (yyval) = NEWNODE(TK_DL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[(1) - (1)]);

                (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
            }
    break;

  case 61:
#line 758 "syntax.y"
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING VAR DECL\n");
            }
            (yyval) = NEWNODE(TK_VAR_DECL);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[(1) - (4)]);
            (yyval)->child[1] = (yyvsp[(3) - (4)]);

            (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
        }
    break;

  case 62:
#line 770 "syntax.y"
    {IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COLON, yylineno);}
    break;

  case 63:
#line 770 "syntax.y"
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING VAR DECL\n");
            }
            (yyval) = NEWNODE(TK_VAR_DECL);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[(1) - (5)]);
            (yyval)->child[1] = (yyvsp[(3) - (5)]);

            (yyval)->lineno = MIN((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]));
        }
    break;

  case 64:
#line 782 "syntax.y"
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING VAR DECL\n");
            }
            (yyval) = NEWNODE(TK_VAR_DECL);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[(1) - (4)]);
            (yyval)->child[1] = (yyvsp[(3) - (4)]);

            (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));

            IS_SYNTAX_ERROR = 1;
            LOG_ERROR(STR_SEMI, yylineno);
        }
    break;

  case 65:
#line 799 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING ROUTINE_PART\n");
                }
                (yyval) = (yyvsp[(1) - (2)]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[(2) - (2)]);

                free(tmp);
            }
    break;

  case 66:
#line 815 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING ROUTINE_PART\n");
                }
                (yyval) = (yyvsp[(1) - (2)]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[(2) - (2)]);

                free(tmp);
            }
    break;

  case 67:
#line 831 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING ROUTINE_PART\n");
                }
                (yyval) = NEWNODE(TK_ROUTINE_PART);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[(1) - (1)]);

                (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
            }
    break;

  case 68:
#line 841 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING ROUTINE_PART\n");
                }
                (yyval) = NEWNODE(TK_ROUTINE_PART);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[(1) - (1)]);

                (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
            }
    break;

  case 69:
#line 851 "syntax.y"
    {
                 if(DEBUG){
                     printf("PARSING ROUTINE_PART NULL\n");
                 }
                 (yyval) = NULL;
             }
    break;

  case 70:
#line 859 "syntax.y"
    {
                //NOTE: IGNORE TK_SEMI
                if(DEBUG){
                    printf("PARSING FUNC DECL\n");
                }
                (yyval) = NEWNODE(TK_FUNC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (4)]);
                (yyval)->child[1] = (yyvsp[(3) - (4)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
            }
    break;

  case 71:
#line 871 "syntax.y"
    {
                //NOTE: IGNORE TK_SEMI
                if(DEBUG){
                    printf("PARSING FUNC DECL\n");
                }
                (yyval) = NEWNODE(TK_FUNC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (4)]);
                (yyval)->child[1] = (yyvsp[(3) - (4)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));

                IS_SYNTAX_ERROR = 1;
                LOG_ERROR(STR_SEMI, yylineno);
            }
    break;

  case 72:
#line 886 "syntax.y"
    { IS_SYNTAX_ERROR = 1;LOG_ERROR(STR_SEMI, (yyvsp[(1) - (2)])->lineno); }
    break;

  case 73:
#line 886 "syntax.y"
    {
                //NOTE: IGNORE TK_SEMI
                if(DEBUG){
                    printf("PARSING FUNC DECL\n");
                }
                (yyval) = NEWNODE(TK_FUNC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (5)]);
                (yyval)->child[1] = (yyvsp[(3) - (5)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]));
            }
    break;

  case 74:
#line 900 "syntax.y"
    {
                //NOTE: IGNORE TK_FUNCTION TK_COLON
                if(DEBUG){
                    printf("PARSING TK_FUNCTINO HEAD\n");
                }
                (yyval) = NEWNODE(TK_FUNC_HEAD);
                (yyval)->child = MALLOC((yyval),3);
                (yyval)->child[0] = (yyvsp[(2) - (5)]);
                (yyval)->child[1] = (yyvsp[(3) - (5)]);
                (yyval)->child[2] = NEWNODE(TK_TYPE_DECL);
                (yyval)->child[2]->lineno = (yyvsp[(5) - (5)])->lineno;
                (yyval)->child[2]->child = MALLOC((yyval), 1);
                (yyval)->child[2]->child[0] = (yyvsp[(5) - (5)]);

                (yyval)->lineno = MIN((yyvsp[(2) - (5)]),(yyvsp[(3) - (5)]));
                (yyval)->lineno = MIN((yyval),(yyvsp[(5) - (5)]));

            }
    break;

  case 75:
#line 918 "syntax.y"
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COLON, yylineno); }
    break;

  case 76:
#line 918 "syntax.y"
    {
                //NOTE: IGNORE TK_FUNCTION TK_COLON
                if(DEBUG){
                    printf("PARSING TK_FUNCTINO HEAD\n");
                }
                (yyval) = NEWNODE(TK_FUNC_HEAD);
                (yyval)->child = MALLOC((yyval),3);
                (yyval)->child[0] = (yyvsp[(2) - (6)]);
                (yyval)->child[1] = (yyvsp[(3) - (6)]);
                (yyval)->child[2] = NEWNODE(TK_TYPE_DECL);
                (yyval)->child[2]->lineno = (yyvsp[(5) - (6)])->lineno;
                (yyval)->child[2]->child = MALLOC((yyval), 1);
                (yyval)->child[2]->child[0] = (yyvsp[(5) - (6)]);

                (yyval)->lineno = MIN((yyvsp[(2) - (6)]),(yyvsp[(3) - (6)]));
                (yyval)->lineno = MIN((yyval),(yyvsp[(5) - (6)]));

            }
    break;

  case 77:
#line 938 "syntax.y"
    {
                //NOTE: IGNORE TK_SEMI PROCEDURE_DECL IS 'TK_PROC_DECL'
                if(DEBUG){
                    printf("PARSING PROC DECL\n");
                }
                (yyval) = NEWNODE(TK_PROC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (4)]);
                (yyval)->child[1] = (yyvsp[(3) - (4)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
            }
    break;

  case 78:
#line 950 "syntax.y"
    {
                //NOTE: IGNORE TK_SEMI PROCEDURE_DECL IS 'TK_PROC_DECL'
                if(DEBUG){
                    printf("PARSING PROC DECL\n");
                }
                (yyval) = NEWNODE(TK_PROC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (4)]);
                (yyval)->child[1] = (yyvsp[(3) - (4)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));

                IS_SYNTAX_ERROR = 1;
                LOG_ERROR(STR_SEMI, yylineno);
            }
    break;

  case 79:
#line 965 "syntax.y"
    { IS_SYNTAX_ERROR = 1;LOG_ERROR(STR_SEMI, (yyvsp[(1) - (2)])->lineno); }
    break;

  case 80:
#line 965 "syntax.y"
    {
                //NOTE: IGNORE TK_SEMI PROCEDURE_DECL IS 'TK_PROC_DECL'
                if(DEBUG){
                    printf("PARSING PROC DECL\n");
                }
                (yyval) = NEWNODE(TK_PROC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (5)]);
                (yyval)->child[1] = (yyvsp[(3) - (5)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]));
            }
    break;

  case 81:
#line 979 "syntax.y"
    {
                //NOTE: IGNORE TK_PROCEDURE  PROCEDURE_HEAD IS 'TK_PROC_HEAD'
                if(DEBUG){
                    printf("PARSING PROC HEAD\n");
                }
                (yyval) = NEWNODE(TK_PROC_HEAD);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(2) - (3)]);
                (yyval)->child[1] = (yyvsp[(3) - (3)]);

                (yyval)->lineno = MIN((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
            }
    break;

  case 82:
#line 993 "syntax.y"
    {
            //NOTE: PARAMETERS IS 'TK_PARA', IGNORE TK_LP TK_RP
                if(DEBUG){
                    printf("PARSING PARA\n");
                }
                (yyval) = (yyvsp[(2) - (3)]);
            }
    break;

  case 83:
#line 1000 "syntax.y"
    {
            //NOTE: PARAMETERS IS 'TK_PARA', IGNORE TK_LP TK_RP
                if(DEBUG){
                    printf("PARSING PARA\n");
                }
                (yyval) = (yyvsp[(2) - (3)]);

                IS_SYNTAX_ERROR=1; 
                LOG_ERROR(STR_RP, yylineno); 
            }
    break;

  case 84:
#line 1010 "syntax.y"
    {
            //NOTE: PARAMETERS IS 'TK_PARA'
                if(DEBUG){
                    printf("PARSING PARA NULL\n");
                }
                (yyval) = NULL;
            }
    break;

  case 85:
#line 1019 "syntax.y"
    {
                //NOTE: IGNORE TK_SEMI PARA_DECL_LIST IS 'PARA_DL'
                if(DEBUG){
                    printf("PARSING PARA DECL LIST\n");
                }
                (yyval) = (yyvsp[(1) - (3)]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[(3) - (3)]);

                free(tmp);
            }
    break;

  case 86:
#line 1036 "syntax.y"
    {  IS_SYNTAX_ERROR = 1; LOG_ERROR(STR_SEMI, yylineno); }
    break;

  case 87:
#line 1036 "syntax.y"
    {
                //NOTE: IGNORE TK_SEMI PARA_DECL_LIST IS 'PARA_DL'
                if(DEBUG){
                    printf("PARSING PARA DECL LIST\n");
                }
                (yyval) = (yyvsp[(1) - (4)]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                    (yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[(3) - (4)]);

                free(tmp);
            }
    break;

  case 88:
#line 1053 "syntax.y"
    {
                //NOTE: IGNORE TK_SEMI PARA_DECL_LIST IS 'PARA_DL'
                if(DEBUG){
                    printf("PARSING PARA DECL LIST : FIRST ONE\n");
                }
                (yyval) = NEWNODE(TK_PARA_DL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[(1) - (1)]);

                (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
            }
    break;

  case 89:
#line 1066 "syntax.y"
    {
                    //NOTE: IGNORE TK_COLON PARA_TYPE_LIST IS 'PARA_TL'
                    if(DEBUG){
                        printf("PARSING TK_COLON\n");
                    }
                    (yyval) = NEWNODE(TK_PARA_TL_VAR);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[(1) - (3)]);
                    (yyval)->child[1] = NEWNODE(TK_TYPE_DECL);
                    (yyval)->child[1]->lineno = (yyvsp[(3) - (3)])->lineno;
                    (yyval)->child[1]->child = MALLOC((yyval), 1);
                    (yyval)->child[1]->child[0] = (yyvsp[(3) - (3)]);

                    (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
                }
    break;

  case 90:
#line 1081 "syntax.y"
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COLON, yylineno); }
    break;

  case 91:
#line 1081 "syntax.y"
    {
                    //NOTE: IGNORE TK_COLON PARA_TYPE_LIST IS 'PARA_TL'
                    if(DEBUG){
                        printf("PARSING TK_COLON\n");
                    }
                    (yyval) = NEWNODE(TK_PARA_TL_VAR);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[(1) - (4)]);
                    (yyval)->child[1] = NEWNODE(TK_TYPE_DECL);
                    (yyval)->child[1]->lineno = (yyvsp[(3) - (4)])->lineno;
                    (yyval)->child[1]->child = MALLOC((yyval), 1);
                    (yyval)->child[1]->child[0] = (yyvsp[(3) - (4)]);

                    (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
                }
    break;

  case 92:
#line 1096 "syntax.y"
    {
                    //NOTE: IGNORE TK_COLON PARA_TYPE_LIST IS 'PARA_TL'
                    if(DEBUG){
                        printf("PARSING TK_COLON\n");
                    }
                    (yyval) = NEWNODE(TK_PARA_TL_VAL);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[(1) - (3)]);
                    (yyval)->child[1] = NEWNODE(TK_TYPE_DECL);
                    (yyval)->child[1]->lineno = (yyvsp[(3) - (3)])->lineno;
                    (yyval)->child[1]->child = MALLOC((yyval), 1);
                    (yyval)->child[1]->child[0] = (yyvsp[(3) - (3)]);

                    (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
                }
    break;

  case 93:
#line 1111 "syntax.y"
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COLON, yylineno); }
    break;

  case 94:
#line 1111 "syntax.y"
    {
                    //NOTE: IGNORE TK_COLON PARA_TYPE_LIST IS 'PARA_TL'
                    if(DEBUG){
                        printf("PARSING TK_COLON\n");
                    }
                    (yyval) = NEWNODE(TK_PARA_TL_VAL);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[(1) - (4)]);
                    (yyval)->child[1] = NEWNODE(TK_TYPE_DECL);
                    (yyval)->child[1]->lineno = (yyvsp[(3) - (4)])->lineno;
                    (yyval)->child[1]->child = MALLOC((yyval), 1);
                    (yyval)->child[1]->child[0] = (yyvsp[(3) - (4)]);

                    (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
                }
    break;

  case 95:
#line 1128 "syntax.y"
    {
                //NOTE: IGNORE TK_VAR VAR_PARA_LIST IS "TK_VAR"
                if(DEBUG){
                    printf("PARSING VAR LIST\n");
                }
                (yyval) = (yyvsp[(2) - (2)]);
            }
    break;

  case 96:
#line 1137 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING VAL PARA LIST\n");
                }
                (yyval) = (yyvsp[(1) - (1)]);
            }
    break;

  case 97:
#line 1145 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING ROUTINE BODY\n");
                }
                (yyval) = (yyvsp[(1) - (1)]);
            }
    break;

  case 98:
#line 1153 "syntax.y"
    {
            if(DEBUG){
                printf("PARSING STMT LIST\n");
            }
            if((yyvsp[(1) - (3)])==NULL){
          		(yyval) = NEWNODE(TK_STMT_LIST);
          		(yyval)->child = MALLOC((yyval), 1);
          		(yyval)->child[0] = (yyvsp[(2) - (3)]);

          		(yyval)->lineno = (yyvsp[(2) - (3)])->lineno;
            }
          	else{
          		(yyval) = (yyvsp[(1) - (3)]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[(2) - (3)]);

                free(tmp);
          	}
        }
    break;

  case 99:
#line 1178 "syntax.y"
    {
            if(DEBUG){
                printf("PARSING STMT LIST\n");
            }
            if((yyvsp[(1) - (3)])==NULL){
                (yyval) = NEWNODE(TK_STMT_LIST);
                (yyval)->child = MALLOC((yyval), 1);
                (yyval)->child[0] = (yyvsp[(2) - (3)]);

                (yyval)->lineno = (yyvsp[(2) - (3)])->lineno;
            }
            else{
                (yyval) = (yyvsp[(1) - (3)]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                    (yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[(2) - (3)]);

                free(tmp);
            }

            IS_SYNTAX_ERROR = 1;
            LOG_ERROR(STR_SEMI, (yyvsp[(2) - (3)])->lineno);
        }
    break;

  case 100:
#line 1206 "syntax.y"
    {
              if(DEBUG){
                  printf("PARSING STMT LIST NULL\n");
              }
              (yyval)=NULL;
        }
    break;

  case 101:
#line 1214 "syntax.y"
    {
        //NOTE: IGNORE TK_COLON
        if(DEBUG){
            printf("PARSING STMT\n");
        }
        (yyval) = NEWNODE(TK_STMT_LABEL);
         (yyval)->child = MALLOC((yyval),2);
         (yyval)->child[0] = (yyvsp[(1) - (3)]);
         (yyval)->child[1] = (yyvsp[(3) - (3)]);

         (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
    }
    break;

  case 102:
#line 1226 "syntax.y"
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COLON, (yyvsp[(1) - (2)])->lineno); }
    break;

  case 103:
#line 1226 "syntax.y"
    {
        //NOTE: IGNORE TK_COLON
        if(DEBUG){
            printf("PARSING STMT\n");
        }
        (yyval) = NEWNODE(TK_STMT_LABEL);
         (yyval)->child = MALLOC((yyval),2);
         (yyval)->child[0] = (yyvsp[(1) - (4)]);
         (yyval)->child[1] = (yyvsp[(3) - (4)]);

         (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
    }
    break;

  case 104:
#line 1238 "syntax.y"
    {
         //NOTE: IGNORE TK_COLON
         if(DEBUG){
             printf("PARSING NON LABEL STMT\n");
         }
         (yyval) = NEWNODE(TK_STMT);
         (yyval)->child = MALLOC((yyval),1);
         (yyval)->child[0] = (yyvsp[(1) - (1)]);

         (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
     }
    break;

  case 105:
#line 1251 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING ASSIGN STMT\n");
                    }
                    (yyval) = NEWNODE(TK_STMT_ASSIGN);
                    (yyval)->child = MALLOC((yyval), 1);
                    (yyval)->child[0] = (yyvsp[(1) - (1)]);

                    (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
                }
    break;

  case 106:
#line 1261 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING PROC STMT\n");
                    }
                    (yyval) = NEWNODE(TK_STMT_PROC);
                    (yyval)->child = MALLOC((yyval), 1);
                    (yyval)->child[0] = (yyvsp[(1) - (1)]);

                    (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
                }
    break;

  case 107:
#line 1271 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING CP STMT\n");
                    }
                    (yyval) = NEWNODE(TK_STMT_CP);
                    (yyval)->child = MALLOC((yyval), 1);
                    (yyval)->child[0] = (yyvsp[(1) - (1)]);

                    (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
                }
    break;

  case 108:
#line 1281 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING IF STMT\n");
                    }
                    (yyval) = (yyvsp[(1) - (1)]);
                }
    break;

  case 109:
#line 1287 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING REPEAT STMT\n");
                    }
                    (yyval) = (yyvsp[(1) - (1)]);
                }
    break;

  case 110:
#line 1293 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING WHILE STMT\n");
                    }
                    (yyval) = (yyvsp[(1) - (1)]);
                }
    break;

  case 111:
#line 1299 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING FOR STMT\n");
                    }
                    (yyval) = (yyvsp[(1) - (1)]);
                }
    break;

  case 112:
#line 1305 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING CASE STMT\n");
                    }
                    (yyval) = (yyvsp[(1) - (1)]);
                }
    break;

  case 113:
#line 1311 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING GOTO STMT\n");
                    }
                    (yyval) = (yyvsp[(1) - (1)]);
                }
    break;

  case 114:
#line 1319 "syntax.y"
    {
                //NOTE: IGNORE TK_ASSIGN
                if(DEBUG){
                    printf("PARSING ASSIGN\n");
                }
                (yyval) = NEWNODE(TK_ASSIGN_ID);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (3)]);
                (yyval)->child[1] = (yyvsp[(3) - (3)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
            }
    break;

  case 115:
#line 1331 "syntax.y"
    {
                //NOTE: IGNORE TK_ASSIGN TK_LB TK_RB
                if(DEBUG){
                    printf("PARSING ASSIGN\n");
                }
                (yyval) = NEWNODE(TK_ASSIGN_ID_EXPR);
                (yyval)->child = MALLOC((yyval),3);
                (yyval)->child[0] = (yyvsp[(1) - (6)]);
                (yyval)->child[1] = (yyvsp[(3) - (6)]);
                (yyval)->child[2] = (yyvsp[(6) - (6)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]));
                (yyval)->lineno = MIN((yyval), (yyvsp[(6) - (6)]));
            }
    break;

  case 116:
#line 1345 "syntax.y"
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_RB, yylineno);}
    break;

  case 117:
#line 1345 "syntax.y"
    {
                //NOTE: IGNORE TK_ASSIGN TK_LB TK_RB
                if(DEBUG){
                    printf("PARSING ASSIGN\n");
                }
                (yyval) = NEWNODE(TK_ASSIGN_ID_EXPR);
                (yyval)->child = MALLOC((yyval),3);
                (yyval)->child[0] = (yyvsp[(1) - (7)]);
                (yyval)->child[1] = (yyvsp[(3) - (7)]);
                (yyval)->child[2] = (yyvsp[(6) - (7)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]));
                (yyval)->lineno = MIN((yyval), (yyvsp[(6) - (7)]));
            }
    break;

  case 118:
#line 1359 "syntax.y"
    {
                //NOTE: IGNORE TK_ASSIGN TK_LB TK_RB
                if(DEBUG){
                    printf("PARSING ASSIGN\n");
                }
                (yyval) = NEWNODE(TK_ASSIGN_DD);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (5)]);
                (yyval)->child[1] = (yyvsp[(5) - (5)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (5)]), (yyvsp[(5) - (5)]));

                (yyvsp[(1) - (5)])->record = (yyvsp[(3) - (5)]);
            }
    break;

  case 119:
#line 1375 "syntax.y"
    {
            if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_ID);
           (yyval)->child = MALLOC((yyval),1);
           (yyval)->child[0] = (yyvsp[(1) - (1)]);

           (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
        }
    break;

  case 120:
#line 1385 "syntax.y"
    {
           //NOTE: IGNROE TK_LP TK_RP
           if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_ID_ARGS);
           (yyval)->child = MALLOC((yyval),2);
           (yyval)->child[0] = (yyvsp[(1) - (4)]);
           (yyval)->child[1] = (yyvsp[(3) - (4)]);

           (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
          }
    break;

  case 121:
#line 1397 "syntax.y"
    {
           //NOTE: IGNROE TK_LP TK_RP
           if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_ID_ARGS);
           (yyval)->child = MALLOC((yyval),2);
           (yyval)->child[0] = (yyvsp[(1) - (4)]);
           (yyval)->child[1] = (yyvsp[(3) - (4)]);

           (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));

           IS_SYNTAX_ERROR=1;
           LOG_ERROR(STR_RP, yylineno);
          }
    break;

  case 122:
#line 1412 "syntax.y"
    {
            if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_SYS);
           (yyval)->child = MALLOC((yyval),1);
           (yyval)->child[0] = (yyvsp[(1) - (1)]);

           (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
        }
    break;

  case 123:
#line 1422 "syntax.y"
    {
           //NOTE: IGNROE TK_LP TK_RP
           if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_SYS_ARGS);
           (yyval)->child = MALLOC((yyval),2);
           (yyval)->child[0] = (yyvsp[(1) - (4)]);
           (yyval)->child[1] = (yyvsp[(3) - (4)]);

           (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
          }
    break;

  case 124:
#line 1434 "syntax.y"
    {
           //NOTE: IGNROE TK_LP TK_RP
           if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_SYS_ARGS);
           (yyval)->child = MALLOC((yyval),2);
           (yyval)->child[0] = (yyvsp[(1) - (4)]);
           (yyval)->child[1] = (yyvsp[(3) - (4)]);

           (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));

           IS_SYNTAX_ERROR=1;
           LOG_ERROR(STR_RP, yylineno);
          }
    break;

  case 125:
#line 1451 "syntax.y"
    {
            if(DEBUG){
                printf("PARSING CP STMT\n");
            }
            (yyval) = (yyvsp[(2) - (3)]);
        }
    break;

  case 126:
#line 1459 "syntax.y"
    {
            //NOTE: IGNORE TK_IF TK_THEN
            if(DEBUG){
                printf("PARSING IF STMT\n");
            }
            (yyval) = NEWNODE(TK_IF);
            (yyval)->child = MALLOC((yyval),3);
            (yyval)->child[0] = (yyvsp[(2) - (5)]);
            (yyval)->child[1] = (yyvsp[(4) - (5)]);
            (yyval)->child[2] = (yyvsp[(5) - (5)]);

            (yyval)->lineno = MIN((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
            (yyval)->lineno = MIN((yyval), (yyvsp[(5) - (5)]));
        }
    break;

  case 127:
#line 1476 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING ELSE CLAUSE\n");
                }
                (yyval) = (yyvsp[(2) - (2)]);
            }
    break;

  case 128:
#line 1482 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING ELSE CLAUSE NULL\n");
                }
                (yyval) = NULL;
            }
    break;

  case 129:
#line 1490 "syntax.y"
    {
                //NOTE: IGNORE TK_REPEAR TK_UNTIL
                if(DEBUG){
                    printf("PARSING REPEAT STMT\n");
                }
                (yyval) = NEWNODE(TK_REPEAT);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(2) - (4)]);
                (yyval)->child[1] = (yyvsp[(4) - (4)]);

                (yyval)->lineno = MIN((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
            }
    break;

  case 130:
#line 1502 "syntax.y"
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_UNTIL, yylineno);}
    break;

  case 131:
#line 1502 "syntax.y"
    {
                //NOTE: IGNORE TK_REPEAR TK_UNTIL
                if(DEBUG){
                    printf("PARSING REPEAT STMT\n");
                }
                (yyval) = NEWNODE(TK_REPEAT);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(2) - (5)]);
                (yyval)->child[1] = (yyvsp[(4) - (5)]);

                (yyval)->lineno = MIN((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
            }
    break;

  case 132:
#line 1516 "syntax.y"
    {
                //NOTE: IGNORE TK_WHILE TK_DO
                if(DEBUG){
                    printf("PARSING WHILE STMT\n");
                }
                (yyval) = NEWNODE(TK_WHILE);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(2) - (4)]);
                (yyval)->child[1] = (yyvsp[(4) - (4)]);

                (yyval)->lineno = MIN((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
            }
    break;

  case 133:
#line 1528 "syntax.y"
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_DO, yylineno); }
    break;

  case 134:
#line 1528 "syntax.y"
    {
                //NOTE: IGNORE TK_WHILE TK_DO
                if(DEBUG){
                    printf("PARSING WHILE STMT\n");
                }
                (yyval) = NEWNODE(TK_WHILE);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(2) - (5)]);
                (yyval)->child[1] = (yyvsp[(4) - (5)]);

                (yyval)->lineno = MIN((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
            }
    break;

  case 135:
#line 1542 "syntax.y"
    {
            //NOTE: IGNORE TK_FOR TK_ASSIGN TK_DO
            if(DEBUG){
                printf("PARSING FOR STMT\n");
            }
            (yyval) = NEWNODE(TK_FOR);
            (yyval)->child = MALLOC((yyval),5);
            (yyval)->child[0] = (yyvsp[(2) - (8)]);
            (yyval)->child[1] = (yyvsp[(4) - (8)]);
            (yyval)->child[2] = (yyvsp[(5) - (8)]);
            (yyval)->child[3] = (yyvsp[(6) - (8)]);
            (yyval)->child[4] = (yyvsp[(8) - (8)]);

            (yyval)->lineno = MIN((yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]));
            (yyval)->lineno = MIN((yyval), (yyvsp[(5) - (8)]));
            (yyval)->lineno = MIN((yyval), (yyvsp[(6) - (8)]));
            (yyval)->lineno = MIN((yyval), (yyvsp[(8) - (8)]));
        }
    break;

  case 136:
#line 1560 "syntax.y"
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_ASSIGN, (yyvsp[(1) - (3)])->lineno); }
    break;

  case 137:
#line 1560 "syntax.y"
    {
            //NOTE: IGNORE TK_FOR TK_ASSIGN TK_DO
            if(DEBUG){
                printf("PARSING FOR STMT\n");
            }
            (yyval) = NEWNODE(TK_FOR);
            (yyval)->child = MALLOC((yyval),5);
            (yyval)->child[0] = (yyvsp[(2) - (9)]);
            (yyval)->child[1] = (yyvsp[(4) - (9)]);
            (yyval)->child[2] = (yyvsp[(5) - (9)]);
            (yyval)->child[3] = (yyvsp[(6) - (9)]);
            (yyval)->child[4] = (yyvsp[(8) - (9)]);

            (yyval)->lineno = MIN((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]));
            (yyval)->lineno = MIN((yyval), (yyvsp[(5) - (9)]));
            (yyval)->lineno = MIN((yyval), (yyvsp[(6) - (9)]));
            (yyval)->lineno = MIN((yyval), (yyvsp[(8) - (9)]));
        }
    break;

  case 138:
#line 1578 "syntax.y"
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_TO_OR_DOWNTO, yylineno); }
    break;

  case 139:
#line 1578 "syntax.y"
    {
            //NOTE: IGNORE TK_FOR TK_ASSIGN TK_DO
            if(DEBUG){
                printf("PARSING FOR STMT\n");
            }
            (yyval) = NEWNODE(TK_FOR);
            (yyval)->child = MALLOC((yyval),5);
            (yyval)->child[0] = (yyvsp[(2) - (9)]);
            (yyval)->child[1] = (yyvsp[(4) - (9)]);
            (yyval)->child[2] = (yyvsp[(5) - (9)]);
            (yyval)->child[3] = (yyvsp[(6) - (9)]);
            (yyval)->child[4] = (yyvsp[(8) - (9)]);

            (yyval)->lineno = MIN((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]));
            (yyval)->lineno = MIN((yyval), (yyvsp[(5) - (9)]));
            (yyval)->lineno = MIN((yyval), (yyvsp[(6) - (9)]));
            (yyval)->lineno = MIN((yyval), (yyvsp[(8) - (9)]));
        }
    break;

  case 140:
#line 1596 "syntax.y"
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_DO, yylineno); }
    break;

  case 141:
#line 1596 "syntax.y"
    {
            //NOTE: IGNORE TK_FOR TK_ASSIGN TK_DO
            if(DEBUG){
                printf("PARSING FOR STMT\n");
            }
            (yyval) = NEWNODE(TK_FOR);
            (yyval)->child = MALLOC((yyval),5);
            (yyval)->child[0] = (yyvsp[(2) - (9)]);
            (yyval)->child[1] = (yyvsp[(4) - (9)]);
            (yyval)->child[2] = (yyvsp[(5) - (9)]);
            (yyval)->child[3] = (yyvsp[(6) - (9)]);
            (yyval)->child[4] = (yyvsp[(8) - (9)]);

            (yyval)->lineno = MIN((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]));
            (yyval)->lineno = MIN((yyval), (yyvsp[(5) - (9)]));
            (yyval)->lineno = MIN((yyval), (yyvsp[(6) - (9)]));
            (yyval)->lineno = MIN((yyval), (yyvsp[(8) - (9)]));
        }
    break;

  case 142:
#line 1616 "syntax.y"
    {
        //NOTE: THERE IS NO DIR
            if(DEBUG){
                printf("PARSING DIR TO\n");
            }
            (yyval) = (yyvsp[(1) - (1)]);
        }
    break;

  case 143:
#line 1623 "syntax.y"
    {
        //NOTE: THERE IS NO DIR
            if(DEBUG){
                printf("PARSING DIR DOWNTO\n");
            }
            (yyval) = (yyvsp[(1) - (1)]);
        }
    break;

  case 144:
#line 1632 "syntax.y"
    {
            //NOTE: IGNORE TK_CASE TK_OF TK_END
            if(DEBUG){
                printf("PARSING CASE STMT\n");
            }
            (yyval) = NEWNODE(TK_CASE);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[(2) - (5)]);
            (yyval)->child[1] = (yyvsp[(4) - (5)]);

            (yyval)->lineno = MIN((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));

        }
    break;

  case 145:
#line 1645 "syntax.y"
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_OF, yylineno);}
    break;

  case 146:
#line 1645 "syntax.y"
    {
            //NOTE: IGNORE TK_CASE TK_OF TK_END
            if(DEBUG){
                printf("PARSING CASE STMT\n");
            }
            (yyval) = NEWNODE(TK_CASE);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[(2) - (6)]);
            (yyval)->child[1] = (yyvsp[(4) - (6)]);

            (yyval)->lineno = MIN((yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]));

        }
    break;

  case 147:
#line 1660 "syntax.y"
    {
            //NOTE: CASE_EXPR_LIST IS 'TK_CASE_EL'
            if(DEBUG){
                printf("PARSING CASE EXPR LIST\n");
            }
            	(yyval) = (yyvsp[(1) - (2)]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[(2) - (2)]);

                free(tmp);
        }
    break;

  case 148:
#line 1677 "syntax.y"
    {
            //NOTE: CASE_EXPR_LIST IS 'TK_CASE_EL'
            if(DEBUG){
                printf("PARSING CASE EXPR LIST : FIRST ONE\n");
            }
            (yyval) = NEWNODE(TK_CASE_EL);
            (yyval)->child = MALLOC((yyval),1);
            (yyval)->child[0] = (yyvsp[(1) - (1)]);

            (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
        }
    break;

  case 149:
#line 1690 "syntax.y"
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING CASE EXPR\n");
            }
            (yyval) = NEWNODE(TK_CASE_EXPR);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[(1) - (4)]);
            (yyval)->child[1] = (yyvsp[(3) - (4)]);

            (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));

        }
    break;

  case 150:
#line 1703 "syntax.y"
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING CASE EXPR\n");
            }
            (yyval) = NEWNODE(TK_CASE_EXPR);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[(1) - (4)]);
            (yyval)->child[1] = (yyvsp[(3) - (4)]);

            (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));

            IS_SYNTAX_ERROR = 1;
            LOG_ERROR(STR_SEMI, (yyvsp[(3) - (4)])->lineno);

        }
    break;

  case 151:
#line 1719 "syntax.y"
    {
         //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING CASE EXPR\n");
            }
            (yyval) = NEWNODE(TK_CASE_EXPR_END);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[(1) - (4)]);
            (yyval)->child[1] = (yyvsp[(3) - (4)]);

            (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
        }
    break;

  case 152:
#line 1731 "syntax.y"
    {
         //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING CASE EXPR\n");
            }
            (yyval) = NEWNODE(TK_CASE_EXPR_END);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[(1) - (4)]);
            (yyval)->child[1] = (yyvsp[(3) - (4)]);

            (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));

            IS_SYNTAX_ERROR = 1;
            LOG_ERROR(STR_SEMI, (yyvsp[(3) - (4)])->lineno);
        }
    break;

  case 153:
#line 1748 "syntax.y"
    {
        //NOTE: GOTO STMT IS ACTUALLY TK_INTEGER
            if(DEBUG){
                printf("PARSING GOTO STMT\n");
            }
            (yyval) = (yyvsp[(2) - (2)]);
            (yyval)->type = TK_GOTO;
           	setName((yyval), TK_GOTO);
        }
    break;

  case 154:
#line 1757 "syntax.y"
    {
        //NOTE: GOTO STMT IS ACTUALLY TK_INTEGER
            if(DEBUG){
                printf("PARSING GOTO STMT\n");
            }
            (yyval) = NULL;

            syntax_const_error=1;
            IS_SYNTAX_ERROR = 1;
            LOG_ERROR(STR_LABEL, yylineno);
        }
    break;

  case 155:
#line 1771 "syntax.y"
    {
                    //NOTE: IGNORE TK_COMMA
                    if(DEBUG){
                        printf("PARSING EXP LIST\n");
                    }
                    (yyval) = (yyvsp[(1) - (3)]);
                	int old_child_number = (yyval)->child_number;
                	NODE** tmp = (yyval)->child;
                	(yyval)->child = MALLOC((yyval), (1+old_child_number));
                	int i;
                	for(i=0;i<old_child_number;i++){
                		(yyval)->child[i] = tmp[i];
                	}
                	(yyval)->child[i] = (yyvsp[(3) - (3)]);

                	free(tmp);
                }
    break;

  case 156:
#line 1788 "syntax.y"
    {
                    if(DEBUG){
                        printf("PARSING EXP LIST : FIRST ONE\n");
                    }
                    (yyval) = NEWNODE(TK_EXP_LIST);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[(1) - (1)]);

                    (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
                }
    break;

  case 157:
#line 1800 "syntax.y"
    {
            //NOTE: IGNORE TK_GE TK_GT TK_LE TK_LT TK_EQUAL TK_UNEQUAL
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_GE);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (3)]);
                (yyval)->child[1] = (yyvsp[(3) - (3)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
           }
    break;

  case 158:
#line 1812 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_GT);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (3)]);
                (yyval)->child[1] = (yyvsp[(3) - (3)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
           }
    break;

  case 159:
#line 1823 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_LE);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[(1) - (3)]);
                (yyval)->child[1] = (yyvsp[(3) - (3)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
           }
    break;

  case 160:
#line 1834 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_LT);
                (yyval)->child = MALLOC((yyval),2);
                                (yyval)->child[0] = (yyvsp[(1) - (3)]);
                                (yyval)->child[1] = (yyvsp[(3) - (3)]);

                (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
           }
    break;

  case 161:
#line 1845 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_EQUAL);
                (yyval)->child = MALLOC((yyval),2);
                                (yyval)->child[0] = (yyvsp[(1) - (3)]);
                                (yyval)->child[1] = (yyvsp[(3) - (3)]);
                 (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
           }
    break;

  case 162:
#line 1855 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_UNEQUAL);
                (yyval)->child = MALLOC((yyval),2);
                                (yyval)->child[0] = (yyvsp[(1) - (3)]);
                                (yyval)->child[1] = (yyvsp[(3) - (3)]);
                                (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
           }
    break;

  case 163:
#line 1865 "syntax.y"
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION : FIRST ONE\n");
                }
                (yyval) = NEWNODE(TK_EXP);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[(1) - (1)]);
                (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
           }
    break;

  case 164:
#line 1876 "syntax.y"
    {
     //NOTE: expr IS EXPR, expression IS EXP, IGNORE TK_PLUS
         if(DEBUG){
             printf("PARSING EXPR : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_PLUS);
         (yyval)->child = MALLOC((yyval),2);
                         (yyval)->child[0] = (yyvsp[(1) - (3)]);
                         (yyval)->child[1] = (yyvsp[(3) - (3)]);
                         (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
     }
    break;

  case 165:
#line 1887 "syntax.y"
    {
     //NOTE: expr IS EXPR, expression IS EXP, IGNORE TK_MINUS
         if(DEBUG){
             printf("PARSING EXPR : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_MINUS);
         (yyval)->child = MALLOC((yyval),2);
                         (yyval)->child[0] = (yyvsp[(1) - (3)]);
                         (yyval)->child[1] = (yyvsp[(3) - (3)]);
                         (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
     }
    break;

  case 166:
#line 1898 "syntax.y"
    {
     //NOTE: expr IS EXPR, expression IS EXP, IGNORE TK_OR
         if(DEBUG){
             printf("PARSING EXPR : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_OR);
         (yyval)->child = MALLOC((yyval),2);
                         (yyval)->child[0] = (yyvsp[(1) - (3)]);
                         (yyval)->child[1] = (yyvsp[(3) - (3)]);
                         (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
     }
    break;

  case 167:
#line 1909 "syntax.y"
    {
     //NOTE: expr IS EXPR, expression IS EXP
         if(DEBUG){
             printf("PARSING EXPR : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_EXPR);
         (yyval)->child = MALLOC((yyval),1);
         (yyval)->child[0] = (yyvsp[(1) - (1)]);

         (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
     }
    break;

  case 168:
#line 1922 "syntax.y"
    {
         if(DEBUG){
             printf("PARSING TK_MUL\n");
         }
         (yyval) = NEWNODE(TK_MUL);
         (yyval)->child = MALLOC((yyval),2);
                                  (yyval)->child[0] = (yyvsp[(1) - (3)]);
                                  (yyval)->child[1] = (yyvsp[(3) - (3)]);
                                  (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
     }
    break;

  case 169:
#line 1932 "syntax.y"
    {
         if(DEBUG){
             printf("PARSING TK_DIV\n");
         }
         (yyval) = NEWNODE(TK_DIV);
        (yyval)->child = MALLOC((yyval),2);
                                 (yyval)->child[0] = (yyvsp[(1) - (3)]);
                                 (yyval)->child[1] = (yyvsp[(3) - (3)]);
                                 (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
     }
    break;

  case 170:
#line 1942 "syntax.y"
    {
               if(DEBUG){
                   printf("PARSING TK_REM\n");
               }
               (yyval) = NEWNODE(TK_REM);
              (yyval)->child = MALLOC((yyval),2);
                                       (yyval)->child[0] = (yyvsp[(1) - (3)]);
                                       (yyval)->child[1] = (yyvsp[(3) - (3)]);
                                       (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
           }
    break;

  case 171:
#line 1952 "syntax.y"
    {
         if(DEBUG){
             printf("PARSING TK_MOD\n");
         }
         (yyval) = NEWNODE(TK_MOD);
        (yyval)->child = MALLOC((yyval),2);
                                 (yyval)->child[0] = (yyvsp[(1) - (3)]);
                                 (yyval)->child[1] = (yyvsp[(3) - (3)]);
                                 (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
     }
    break;

  case 172:
#line 1962 "syntax.y"
    {
         if(DEBUG){
             printf("PARSING TK_AND\n");
         }
         (yyval) = NEWNODE(TK_AND);
         (yyval)->child = MALLOC((yyval),2);
                                  (yyval)->child[0] = (yyvsp[(1) - (3)]);
                                  (yyval)->child[1] = (yyvsp[(3) - (3)]);
                                  (yyval)->lineno = MIN((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
     }
    break;

  case 173:
#line 1972 "syntax.y"
    {
         if(DEBUG){
             printf("PARSING TERM : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_TERM);
         (yyval)->child = MALLOC((yyval),1);
         (yyval)->child[0] = (yyvsp[(1) - (1)]);

         (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
     }
    break;

  case 174:
#line 1985 "syntax.y"
    {
    //NOTE: THERE IS NO TK_FACTOR BUT 'TK_FACTOR' FOLLOWED BY A TYPE
        if(DEBUG){
            printf("PARSING FACTOR\n");
        }
        (yyval) = NEWNODE(TK_FACTOR_ID);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[(1) - (1)]);

        (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
    }
    break;

  case 175:
#line 1996 "syntax.y"
    {
    //NOTE: IGNORE TK_LP TK_RP
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_ID_ARGS);
        (yyval)->child = MALLOC((yyval),2);
        (yyval)->child[0] = (yyvsp[(1) - (4)]);
        (yyval)->child[1] = (yyvsp[(3) - (4)]);
        (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
    }
    break;

  case 176:
#line 2007 "syntax.y"
    {
    //NOTE: IGNORE TK_LP TK_RP
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_SYS_FUNCT);
        (yyval)->child = MALLOC((yyval),2);
        (yyval)->child[0] = (yyvsp[(1) - (4)]);
        (yyval)->child[1] = (yyvsp[(3) - (4)]);
        (yyval)->lineno = MIN((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
    }
    break;

  case 177:
#line 2018 "syntax.y"
    {
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_CONST);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[(1) - (1)]);
        (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
    }
    break;

  case 178:
#line 2027 "syntax.y"
    {
    //NOTE: IGNORE TK_LP TK_RP
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_EXP);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[(2) - (3)]);
        (yyval)->lineno = (yyvsp[(2) - (3)])->lineno;
    }
    break;

  case 179:
#line 2037 "syntax.y"
    {
    //NOTE: IGNORE TK_LP TK_RP
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_EXP);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[(2) - (3)]);
        (yyval)->lineno = (yyvsp[(2) - (3)])->lineno;

        IS_SYNTAX_ERROR = 1;
        LOG_ERROR(STR_RP, yylineno);
    }
    break;

  case 180:
#line 2050 "syntax.y"
    {
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_NOT);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[(2) - (2)]);
        (yyval)->lineno = (yyvsp[(2) - (2)])->lineno;
    }
    break;

  case 181:
#line 2059 "syntax.y"
    {
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_MINUS);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[(2) - (2)]);
        (yyval)->lineno = (yyvsp[(2) - (2)])->lineno;
    }
    break;

  case 182:
#line 2068 "syntax.y"
    {
    //NOTE: IGNORE TK_LB TK_RB
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_ID_EXP);
        (yyval)->child = MALLOC((yyval),2);
        (yyval)->child[0] = (yyvsp[(1) - (4)]);
        (yyval)->child[1] = (yyvsp[(3) - (4)]);
        (yyval)->lineno = MIN((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));
    }
    break;

  case 183:
#line 2079 "syntax.y"
    {
    //NOTE: IGNORE TK_LB TK_RB
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_ID_EXP);
        (yyval)->child = MALLOC((yyval),2);
        (yyval)->child[0] = (yyvsp[(1) - (4)]);
        (yyval)->child[1] = (yyvsp[(3) - (4)]);
        (yyval)->lineno = MIN((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]));

        IS_SYNTAX_ERROR = 1;
        LOG_ERROR(STR_RB ,yylineno);
    }
    break;

  case 184:
#line 2093 "syntax.y"
    {
    //NOTE: ID->ID IS IN ONE NODE
        if(DEBUG){
            printf("PARSING FACTOR FOR ID->ID\n");
        }
        (yyval) = NEWNODE(TK_FACTOR_DD);
        (yyval)->child = MALLOC((yyval),2);
        (yyval)->child[0] = (yyvsp[(1) - (3)]);
        (yyval)->child[1] = (yyvsp[(3) - (3)]);
        (yyval)->lineno = (yyvsp[(1) - (3)])->lineno;
        (yyvsp[(1) - (3)])->record = (yyvsp[(3) - (3)]);
    }
    break;

  case 185:
#line 2107 "syntax.y"
    {
            //NOTE: IGNORE TK_COMMA
            if(DEBUG){
                printf("PARSING ARGS LIST\n");
            }
            	(yyval) = (yyvsp[(1) - (3)]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[(3) - (3)]);

                free(tmp);
        }
    break;

  case 186:
#line 2124 "syntax.y"
    {IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COMMA, yylineno);}
    break;

  case 187:
#line 2124 "syntax.y"
    {
            //NOTE: IGNORE TK_COMMA
            if(DEBUG){
                printf("PARSING ARGS LIST\n");
            }
                (yyval) = (yyvsp[(1) - (4)]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                    (yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[(3) - (4)]);

                free(tmp);
        }
    break;

  case 188:
#line 2141 "syntax.y"
    {
            if(DEBUG){
                printf("PARSING ARGS LIST : FIRST ONE\n");
            }
            (yyval) = NEWNODE(TK_ARGS_LIST);
            (yyval)->child = MALLOC((yyval),1);
            (yyval)->child[0] = (yyvsp[(1) - (1)]);
            (yyval)->lineno = (yyvsp[(1) - (1)])->lineno;
        }
    break;


/* Line 1267 of yacc.c.  */
#line 4855 "yy.tab.cpp"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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


#line 2152 "syntax.y"


int yyerror(string s){
    //extern char* yytext;
   // printf("\n");
    //printf( "%s\n", s);
    //fprintf(stderr, "line %d: ", yylineno);
    //fprintf(stderr, "\"%s\"\n", yytext);
    return 1;
}

void LOG_ERROR(string expected, int line){
    printf("line %d: error: missing %s\n", line, expected.c_str());
}
