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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "syntax.y" /* yacc.c:339  */

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


#line 96 "yy.tab.cpp" /* yacc.c:339  */

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
   by #include "yy.tab.hpp".  */
#ifndef YY_YY_YY_TAB_HPP_INCLUDED
# define YY_YY_YY_TAB_HPP_INCLUDED
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YY_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 495 "yy.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   487

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  175
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  360

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   429

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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
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

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "array_type_decl", "$@4", "record_type_decl", "field_decl_list",
  "field_decl", "@5", "name_list", "simple_type_decl", "var_part",
  "var_decl_list", "var_decl", "@6", "routine_part", "function_decl", "@7",
  "function_head", "@8", "procedure_decl", "@9", "procedure_head",
  "parameters", "para_decl_list", "@10", "para_type_list", "@11", "@12",
  "var_para_list", "val_para_list", "routine_body", "stmt_list", "stmt",
  "@13", "non_label_stmt", "assign_stmt", "$@14", "proc_stmt",
  "compound_stmt", "if_stmt", "else_clause", "repeat_stmt", "@15",
  "while_stmt", "@16", "for_stmt", "@17", "@18", "@19", "direction",
  "case_stmt", "@20", "case_expr_list", "case_expr", "goto_stmt",
  "expression_list", "expression", "expr", "term", "factor", "args_list",
  "@21", YY_NULLPTR
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
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429
};
# endif

#define YYPACT_NINF -213

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-213)))

#define YYTABLE_NINF -122

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
#line 61 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING PROGRAM\n");
            }
            (yyval) = NEWNODE(TK_PROGRAM);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-2]);
            (yyval)->child[1] = (yyvsp[-1]);

            (yyval)->lineno = MIN((yyvsp[-2]),(yyvsp[-1]));

            if(syntax_const_error)
                ROOT = NULL;
            else
                ROOT = (yyval);
        }
#line 1930 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 77 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING PROGRAM\n");
            }
            (yyval) = NEWNODE(TK_PROGRAM);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-2]);
            (yyval)->child[1] = (yyvsp[-1]);

            (yyval)->lineno = MIN((yyvsp[-2]),(yyvsp[-1]));

            if(syntax_const_error)
                ROOT = NULL;
            else
                ROOT = (yyval);

            IS_SYNTAX_ERROR = 1;
            LOG_ERROR(STR_DOT,yylineno);
        }
#line 1954 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 98 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: PROGRAM HEAD ACTUALLY IS TK_ID
            if(DEBUG){
                printf("PROGRAM HEAD:%s\n", (yyvsp[-1])->name.c_str());
            }
            (yyval) = (yyvsp[-1]);
            (yyval)->type = TK_PROGRAM_HEAD;
            (yyval)->child_number = 0;
            (yyval)->child = NULL;
        }
#line 1969 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 108 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: PROGRAM HEAD ACTUALLY IS TK_ID
            if(DEBUG){
                printf("PROGRAM HEAD:%s\n", (yyvsp[-1])->name.c_str());
            }
            (yyval) = (yyvsp[-1]);
            (yyval)->type = TK_PROGRAM_HEAD;
            (yyval)->child_number = 0;
            (yyval)->child = NULL;

            IS_SYNTAX_ERROR = 1;
            LOG_ERROR(STR_SEMI, (yyval)->lineno);
        }
#line 1987 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 123 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING ROUTINE\n");
            }
            (yyval) = NEWNODE(TK_ROUTINE);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-1]);
            (yyval)->child[1] = (yyvsp[0]);

            (yyval)->lineno = MIN((yyvsp[-1]),(yyvsp[0]));
        }
#line 2003 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 136 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING ROUTINE HEAD\n");
            }
            (yyval) = NEWNODE(TK_ROUTINE_HEAD);
            (yyval)->child = MALLOC((yyval),4);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-2]);
            (yyval)->child[2] = (yyvsp[-1]);
            (yyval)->child[3] = (yyvsp[0]);

            (yyval)->lineno = MIN((yyvsp[-3]),(yyvsp[-2]));
            (yyval)->lineno = MIN((yyval),(yyvsp[-1]));
            (yyval)->lineno = MIN((yyval),(yyvsp[0]));
        }
#line 2023 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 153 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: IGNORE TK_CONST
            if(DEBUG){
                printf("PARSING CONST PART\n");
            }
            (yyval) = (yyvsp[0]);
        }
#line 2035 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 160 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING CONST PART NULL\n");
            }
            (yyval) = NULL;
        }
#line 2046 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 168 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST\n");
                    }
                    (yyval) = (yyvsp[-4]);
                    NODE* node = NEWNODE(TK_CONST_DL_END);
                    node->child = MALLOC(node,2);
                    node->child[0] = (yyvsp[-3]);
                    node->child[1] = (yyvsp[-1]);

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
#line 2073 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 190 "syntax.y" /* yacc.c:1646  */
    {  IS_SYNTAX_ERROR = 1;LOG_ERROR(STR_EQU,(yyvsp[-1])->lineno);}
#line 2079 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 190 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST\n");
                    }
                    (yyval) = (yyvsp[-5]);
                    NODE* node = NEWNODE(TK_CONST_DL_END);
                    node->child = MALLOC(node,2);
                    node->child[0] = (yyvsp[-4]);
                    node->child[1] = (yyvsp[-2]);

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
#line 2106 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 212 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST\n");
                    }
                    (yyval) = (yyvsp[-4]);
                    NODE* node = NEWNODE(TK_CONST_DL_END);
                    node->child = MALLOC(node,2);
                    node->child[0] = (yyvsp[-3]);
                    node->child[1] = (yyvsp[-1]);

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
                    LOG_ERROR(STR_SEMI, (yyvsp[-1])->lineno);
                }
#line 2136 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 237 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST : FIRST ONE\n");
                    }
                    (yyval) = NEWNODE(TK_CONST_DL);
                    NODE* node = NEWNODE(TK_CONST_DL_END);

                    node->child = MALLOC(node,2);
                    node->child[0] = (yyvsp[-3]);
                    node->child[1] = (yyvsp[-1]);
                    (yyval)->lineno = node->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));

                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = node;
                }
#line 2157 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 253 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR = 1;LOG_ERROR(STR_EQU,(yyvsp[-1])->lineno); }
#line 2163 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 253 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST : FIRST ONE\n");
                    }
                    (yyval) = NEWNODE(TK_CONST_DL);
                    NODE* node = NEWNODE(TK_CONST_DL_END);

                    node->child = MALLOC(node,2);
                    node->child[0] = (yyvsp[-4]);
                    node->child[1] = (yyvsp[-2]);
                    (yyval)->lineno = node->lineno = MIN((yyvsp[-4]), (yyvsp[-2]));

                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = node;
                }
#line 2184 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 269 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST : FIRST ONE\n");
                    }
                    (yyval) = NEWNODE(TK_CONST_DL);
                    NODE* node = NEWNODE(TK_CONST_DL_END);

                    node->child = MALLOC(node,2);
                    node->child[0] = (yyvsp[-3]);
                    node->child[1] = (yyvsp[-1]);
                    (yyval)->lineno = node->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));

                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = node;

                    IS_SYNTAX_ERROR = 1;
                    LOG_ERROR(STR_SEMI, (yyvsp[-1])->lineno);
                }
#line 2208 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 290 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE INTEGER\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 2219 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 296 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE REAL\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 2230 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 302 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE CHAR\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 2241 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 308 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE STRING\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 2252 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 314 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE SYS CON\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 2263 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 322 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TYPE
            if(DEBUG){
                printf("PARSING TYPE PART NULL\n");
            }
            (yyval) = (yyvsp[0]);
        }
#line 2275 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 329 "syntax.y" /* yacc.c:1646  */
    {
              //NOTE: IGNORE TYPE
                  if(DEBUG){
                      printf("PARSING TYPE PART NULL\n");
                  }
                (yyval)=NULL;
                }
#line 2287 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 338 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING TYPE DECL LIST DEF\n");
                    }
                    (yyval) = (yyvsp[-1]);

                    int old_child_number = (yyval)->child_number;
                    NODE** tmp = (yyval)->child;
                    (yyval)->child = MALLOC((yyval), (1+old_child_number));
                    int i;
                    for(i=0;i<old_child_number;i++){
                    	(yyval)->child[i] = tmp[i];
                    }
                    (yyval)->child[i] = (yyvsp[0]);
                }
#line 2307 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 353 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING TYPE DECL LIST\n");
                    }
                    (yyval) = NEWNODE(TK_TYPE_DL);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[0]);
                    (yyval)->lineno = (yyvsp[0])->lineno;
               }
#line 2321 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 364 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING TYPE DEF\n");
                    }
                    (yyval) = NEWNODE(TK_TYPE_DEF);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-3]);
                    (yyval)->child[1] = (yyvsp[-1]);

                    (yyval)->lineno = MIN((yyvsp[-3]),(yyvsp[-1]));
                }
#line 2337 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 375 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR = 1;LOG_ERROR(STR_EQU,(yyvsp[-1])->lineno); }
#line 2343 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 375 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING TYPE DEF\n");
                    }
                    (yyval) = NEWNODE(TK_TYPE_DEF);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-4]);
                    (yyval)->child[1] = (yyvsp[-2]);

                    (yyval)->lineno = MIN((yyvsp[-4]),(yyvsp[-2]));
                }
#line 2359 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 386 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING TYPE DEF\n");
                    }
                    (yyval) = NEWNODE(TK_TYPE_DEF);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-3]);
                    (yyval)->child[1] = (yyvsp[-1]);

                    (yyval)->lineno = MIN((yyvsp[-3]),(yyvsp[-1]));

                    IS_SYNTAX_ERROR = 1;
                    LOG_ERROR(STR_SEMI, yylineno);
                }
#line 2378 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 402 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING TYPE DECL\n");
                }
                (yyval) = NEWNODE(TK_TYPE_DECL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->lineno = (yyvsp[0])->lineno;
          }
#line 2392 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 411 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING TYPE DECL\n");
                }
                (yyval) = NEWNODE(TK_TYPE_DECL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->lineno = (yyvsp[0])->lineno;
          }
#line 2406 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 420 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING TYPE DECL\n");
                }
                (yyval) = NEWNODE(TK_TYPE_DECL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->lineno = (yyvsp[0])->lineno;
          }
#line 2420 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 431 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_LB TK_RB TK_OF
                if(DEBUG){
                    printf("PARSING ARRAY\n");
                }
                (yyval) = NEWNODE(TK_ARRAY);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = NEWNODE(TK_TYPE_DECL);
                (yyval)->child[0]->lineno = (yyvsp[-3])->lineno;
                (yyval)->child[0]->child = MALLOC((yyval), 1);
                (yyval)->child[0]->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[0]);

                (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[0]));
            }
#line 2440 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 446 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR = 1; LOG_ERROR(STR_RB, yylineno); }
#line 2446 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 446 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_LB TK_RB TK_OF
                if(DEBUG){
                    printf("PARSING ARRAY\n");
                }
                (yyval) = NEWNODE(TK_ARRAY);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = NEWNODE(TK_TYPE_DECL);
                (yyval)->child[0]->lineno = (yyvsp[-4])->lineno;
                (yyval)->child[0]->child = MALLOC((yyval), 1);
                (yyval)->child[0]->child[0] = (yyvsp[-4]);
                (yyval)->child[1] = (yyvsp[-1]);

                (yyval)->lineno = MIN((yyvsp[-4]), (yyvsp[-1]));
            }
#line 2466 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 463 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_END
                if(DEBUG){
                    printf("PARSING RECORD TYPE DECL\n");
                }
                (yyval) = (yyvsp[-1]);
            }
#line 2478 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 470 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_END
                if(DEBUG){
                    printf("PARSING RECORD TYPE DECL\n");
                }
                (yyval) = (yyvsp[-1]);

                IS_SYNTAX_ERROR = 1;
                LOG_ERROR(STR_END,(yyvsp[-1])->lineno);
            }
#line 2493 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 482 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING FIELD DECL LIST\n");
                }
                (yyval) = (yyvsp[-1]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
            }
#line 2514 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 498 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING FIELD DECL LIST : FIRST ONE\n");
                }
                (yyval) = NEWNODE(TK_FIELD_DL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);

                (yyval)->lineno = (yyvsp[0])->lineno;
            }
#line 2529 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 510 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
                if(DEBUG){
                    printf("PARSING FIELD DECL\n");
                }
                (yyval) = NEWNODE(TK_FIELD_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[-1]);

                (yyval)->lineno = MIN((yyvsp[-3]),(yyvsp[-1]));
            }
#line 2546 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 522 "syntax.y" /* yacc.c:1646  */
    {IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COLON, yylineno);}
#line 2552 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 522 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
                if(DEBUG){
                    printf("PARSING FIELD DECL\n");
                }
                (yyval) = NEWNODE(TK_FIELD_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-4]);
                (yyval)->child[1] = (yyvsp[-2]);

                (yyval)->lineno = MIN((yyvsp[-4]),(yyvsp[-2]));
            }
#line 2569 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 534 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
                if(DEBUG){
                    printf("PARSING FIELD DECL\n");
                }
                (yyval) = NEWNODE(TK_FIELD_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[-1]);

                (yyval)->lineno = MIN((yyvsp[-3]),(yyvsp[-1]));

                IS_SYNTAX_ERROR = 1;
                LOG_ERROR(STR_SEMI, yylineno);
            }
#line 2589 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 551 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: HERE TAG IS SIMPLIFIED AS 'TK_NL', IGNORE TK_COMMA
                if(DEBUG){
                    printf("PARSING NAME LIST\n");
                }
              	(yyval) = (yyvsp[-2]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
            }
#line 2611 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 568 "syntax.y" /* yacc.c:1646  */
    {
                  if(DEBUG){
                      printf("PARSING NAME LIST : FIRST ONE\n");
                  }
                  (yyval) = NEWNODE(TK_NL);
                  (yyval)->child = MALLOC((yyval),1);
                  (yyval)->child[0] = (yyvsp[0]);

                  (yyval)->lineno = (yyvsp[0])->lineno;
              }
#line 2626 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 580 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: HERE TAG IS SIMPLIFIED AS 'TK_STD' AND FOLLOWED BY A TYPE
                    if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL SYS TYPE\n");
                    }
                    (yyval) = NEWNODE(TK_STD_SYS_TYPE);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[0]);

                    (yyval)->lineno = (yyvsp[0])->lineno;
                }
#line 2642 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 591 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_ID);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[0]);

                    (yyval)->lineno = (yyvsp[0])->lineno;
                }
#line 2657 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 601 "syntax.y" /* yacc.c:1646  */
    {
                     if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_NL);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[-1]);

                    (yyval)->lineno = (yyvsp[-2])->lineno;
                }
#line 2672 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 611 "syntax.y" /* yacc.c:1646  */
    {
                     if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_DD);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-2]);
                    (yyval)->child[1] = (yyvsp[0]);

                    (yyval)->lineno = (yyvsp[-2])->lineno;
                }
#line 2688 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 622 "syntax.y" /* yacc.c:1646  */
    {
                                      if(DEBUG){
                                         printf("PARSING SIMPLE TYPE DECL ID\n");
                                     }
                                     (yyval) = NEWNODE(TK_STD_DD);
                                     (yyval)->child = MALLOC((yyval),2);
                                     if((yyvsp[-2])->type!=TK_INTEGER){
                                        syntax_const_error  = 1;
                                     }else{
                                        (yyvsp[-2])->value.ival *= -1;
                                     }

                                     (yyval)->child[0] = (yyvsp[-2]);
                                     (yyval)->child[1] = (yyvsp[0]);

                                     (yyval)->lineno = (yyvsp[-3])->lineno;
                   }
#line 2710 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 639 "syntax.y" /* yacc.c:1646  */
    {
                                      if(DEBUG){
                                         printf("PARSING SIMPLE TYPE DECL ID\n");
                                      }
                                      if((yyvsp[-3])->type!=TK_INTEGER){
                                         syntax_const_error  = 1;
                                      }else{
                                           (yyvsp[-3])->value.ival *= -1;
                                      }
                                      if((yyvsp[0])->type!=TK_INTEGER){
                                         syntax_const_error  = 1;
                                      }else{
                                         (yyvsp[0])->value.ival *= -1;
                                      }

                                     (yyval) = NEWNODE(TK_STD_DD);
                                     (yyval)->child = MALLOC((yyval),2);
                                     (yyval)->child[0] = (yyvsp[-3]);
                                     (yyval)->child[1] = (yyvsp[0]);

                                     (yyval)->lineno = (yyvsp[-4])->lineno;
                 }
#line 2737 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 661 "syntax.y" /* yacc.c:1646  */
    {
                     if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_DD_ID);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-2]);
                    (yyval)->child[1] = (yyvsp[0]);

                    (yyval)->lineno = (yyvsp[-2])->lineno;
                }
#line 2753 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 672 "syntax.y" /* yacc.c:1646  */
    {
                                     if(DEBUG){
                                        printf("PARSING SIMPLE TYPE DECL ID\n");
                                    }
                                    (yyval) = NEWNODE(TK_STD_DD_ID);
                                    (yyval)->child = MALLOC((yyval),2);

                                    (yyvsp[-2])->type = TK_ID_MINUS;
                                    (yyval)->child[0] = (yyvsp[-2]);

                                    (yyval)->child[1] = (yyvsp[0]);

                                    (yyval)->lineno = (yyvsp[-2])->lineno;
                                }
#line 2772 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 686 "syntax.y" /* yacc.c:1646  */
    {
                                     if(DEBUG){
                                        printf("PARSING SIMPLE TYPE DECL ID\n");
                                    }
                                    (yyval) = NEWNODE(TK_STD_DD_ID);
                                    (yyval)->child = MALLOC((yyval),2);

                                    (yyval)->child[0] = (yyvsp[-3]);
                                    (yyvsp[0])->type = TK_ID_MINUS;
                                    (yyval)->child[1] = (yyvsp[0]);

                                    (yyval)->lineno = (yyvsp[-3])->lineno;
                                }
#line 2790 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 699 "syntax.y" /* yacc.c:1646  */
    {
                                     if(DEBUG){
                                         printf("PARSING SIMPLE TYPE DECL ID\n");
                                     }
                                     (yyval) = NEWNODE(TK_STD_DD_ID);
                                     (yyval)->child = MALLOC((yyval),2);

                                     (yyvsp[-3])->type = TK_ID_MINUS;
                                     (yyval)->child[0] = (yyvsp[-3]);
                                     (yyvsp[0])->type = TK_ID_MINUS;
                                     (yyval)->child[1] = (yyvsp[0]);

                                     (yyval)->lineno = (yyvsp[-3])->lineno;
                                 }
#line 2809 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 715 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: IGNORE TK_VAR
            if(DEBUG){
                  printf("PARSING VAR PART NOT NULL\n");
              }
              (yyval) = (yyvsp[0]);
        }
#line 2821 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 722 "syntax.y" /* yacc.c:1646  */
    {
              if(DEBUG){
                  printf("PARSING VAR PART NULL\n");
              }
             (yyval) = NULL;
        }
#line 2832 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 730 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING VAR DECL LIST\n");
                }
                (yyval) = (yyvsp[-1]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
            }
#line 2853 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 746 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING VAR DECL LIST : FIRST ONE\n");
                }
                (yyval) = NEWNODE(TK_DL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);

                (yyval)->lineno = (yyvsp[0])->lineno;
            }
#line 2868 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 758 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING VAR DECL\n");
            }
            (yyval) = NEWNODE(TK_VAR_DECL);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-1]);

            (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
        }
#line 2885 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 770 "syntax.y" /* yacc.c:1646  */
    {IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COLON, yylineno);}
#line 2891 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 770 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING VAR DECL\n");
            }
            (yyval) = NEWNODE(TK_VAR_DECL);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-4]);
            (yyval)->child[1] = (yyvsp[-2]);

            (yyval)->lineno = MIN((yyvsp[-4]), (yyvsp[-2]));
        }
#line 2908 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 782 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING VAR DECL\n");
            }
            (yyval) = NEWNODE(TK_VAR_DECL);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-1]);

            (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));

            IS_SYNTAX_ERROR = 1;
            LOG_ERROR(STR_SEMI, yylineno);
        }
#line 2928 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 799 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ROUTINE_PART\n");
                }
                (yyval) = (yyvsp[-1]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
            }
#line 2949 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 815 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ROUTINE_PART\n");
                }
                (yyval) = (yyvsp[-1]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
            }
#line 2970 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 831 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ROUTINE_PART\n");
                }
                (yyval) = NEWNODE(TK_ROUTINE_PART);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);

                (yyval)->lineno = (yyvsp[0])->lineno;
            }
#line 2985 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 841 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ROUTINE_PART\n");
                }
                (yyval) = NEWNODE(TK_ROUTINE_PART);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);

                (yyval)->lineno = (yyvsp[0])->lineno;
            }
#line 3000 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 851 "syntax.y" /* yacc.c:1646  */
    {
                 if(DEBUG){
                     printf("PARSING ROUTINE_PART NULL\n");
                 }
                 (yyval) = NULL;
             }
#line 3011 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 859 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_SEMI
                if(DEBUG){
                    printf("PARSING FUNC DECL\n");
                }
                (yyval) = NEWNODE(TK_FUNC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[-1]);

                (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
            }
#line 3028 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 871 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_SEMI
                if(DEBUG){
                    printf("PARSING FUNC DECL\n");
                }
                (yyval) = NEWNODE(TK_FUNC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[-1]);

                (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));

                IS_SYNTAX_ERROR = 1;
                LOG_ERROR(STR_SEMI, yylineno);
            }
#line 3048 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 886 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR = 1;LOG_ERROR(STR_SEMI, (yyvsp[-1])->lineno); }
#line 3054 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 886 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_SEMI
                if(DEBUG){
                    printf("PARSING FUNC DECL\n");
                }
                (yyval) = NEWNODE(TK_FUNC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-4]);
                (yyval)->child[1] = (yyvsp[-2]);

                (yyval)->lineno = MIN((yyvsp[-4]), (yyvsp[-2]));
            }
#line 3071 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 900 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_FUNCTION TK_COLON
                if(DEBUG){
                    printf("PARSING TK_FUNCTINO HEAD\n");
                }
                (yyval) = NEWNODE(TK_FUNC_HEAD);
                (yyval)->child = MALLOC((yyval),3);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[-2]);
                (yyval)->child[2] = NEWNODE(TK_TYPE_DECL);
                (yyval)->child[2]->lineno = (yyvsp[0])->lineno;
                (yyval)->child[2]->child = MALLOC((yyval), 1);
                (yyval)->child[2]->child[0] = (yyvsp[0]);

                (yyval)->lineno = MIN((yyvsp[-3]),(yyvsp[-2]));
                (yyval)->lineno = MIN((yyval),(yyvsp[0]));

            }
#line 3094 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 918 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COLON, yylineno); }
#line 3100 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 918 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_FUNCTION TK_COLON
                if(DEBUG){
                    printf("PARSING TK_FUNCTINO HEAD\n");
                }
                (yyval) = NEWNODE(TK_FUNC_HEAD);
                (yyval)->child = MALLOC((yyval),3);
                (yyval)->child[0] = (yyvsp[-4]);
                (yyval)->child[1] = (yyvsp[-3]);
                (yyval)->child[2] = NEWNODE(TK_TYPE_DECL);
                (yyval)->child[2]->lineno = (yyvsp[-1])->lineno;
                (yyval)->child[2]->child = MALLOC((yyval), 1);
                (yyval)->child[2]->child[0] = (yyvsp[-1]);

                (yyval)->lineno = MIN((yyvsp[-4]),(yyvsp[-3]));
                (yyval)->lineno = MIN((yyval),(yyvsp[-1]));

            }
#line 3123 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 938 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_SEMI PROCEDURE_DECL IS 'TK_PROC_DECL'
                if(DEBUG){
                    printf("PARSING PROC DECL\n");
                }
                (yyval) = NEWNODE(TK_PROC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[-1]);

                (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
            }
#line 3140 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 950 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_SEMI PROCEDURE_DECL IS 'TK_PROC_DECL'
                if(DEBUG){
                    printf("PARSING PROC DECL\n");
                }
                (yyval) = NEWNODE(TK_PROC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[-1]);

                (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));

                IS_SYNTAX_ERROR = 1;
                LOG_ERROR(STR_SEMI, yylineno);
            }
#line 3160 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 965 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR = 1;LOG_ERROR(STR_SEMI, (yyvsp[-1])->lineno); }
#line 3166 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 965 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_SEMI PROCEDURE_DECL IS 'TK_PROC_DECL'
                if(DEBUG){
                    printf("PARSING PROC DECL\n");
                }
                (yyval) = NEWNODE(TK_PROC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-4]);
                (yyval)->child[1] = (yyvsp[-2]);

                (yyval)->lineno = MIN((yyvsp[-4]), (yyvsp[-2]));
            }
#line 3183 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 979 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_PROCEDURE  PROCEDURE_HEAD IS 'TK_PROC_HEAD'
                if(DEBUG){
                    printf("PARSING PROC HEAD\n");
                }
                (yyval) = NEWNODE(TK_PROC_HEAD);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-1]);
                (yyval)->child[1] = (yyvsp[0]);

                (yyval)->lineno = MIN((yyvsp[-1]), (yyvsp[0]));
            }
#line 3200 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 993 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: PARAMETERS IS 'TK_PARA', IGNORE TK_LP TK_RP
                if(DEBUG){
                    printf("PARSING PARA\n");
                }
                (yyval) = (yyvsp[-1]);
            }
#line 3212 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 1000 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: PARAMETERS IS 'TK_PARA', IGNORE TK_LP TK_RP
                if(DEBUG){
                    printf("PARSING PARA\n");
                }
                (yyval) = (yyvsp[-1]);

                IS_SYNTAX_ERROR=1; 
                LOG_ERROR(STR_RP, yylineno); 
            }
#line 3227 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 1010 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: PARAMETERS IS 'TK_PARA'
                if(DEBUG){
                    printf("PARSING PARA NULL\n");
                }
                (yyval) = NULL;
            }
#line 3239 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 1019 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_SEMI PARA_DECL_LIST IS 'PARA_DL'
                if(DEBUG){
                    printf("PARSING PARA DECL LIST\n");
                }
                (yyval) = (yyvsp[-2]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
            }
#line 3261 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 1036 "syntax.y" /* yacc.c:1646  */
    {  IS_SYNTAX_ERROR = 1; LOG_ERROR(STR_SEMI, yylineno); }
#line 3267 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 1036 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_SEMI PARA_DECL_LIST IS 'PARA_DL'
                if(DEBUG){
                    printf("PARSING PARA DECL LIST\n");
                }
                (yyval) = (yyvsp[-3]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                    (yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[-1]);

                free(tmp);
            }
#line 3289 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 1053 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_SEMI PARA_DECL_LIST IS 'PARA_DL'
                if(DEBUG){
                    printf("PARSING PARA DECL LIST : FIRST ONE\n");
                }
                (yyval) = NEWNODE(TK_PARA_DL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);

                (yyval)->lineno = (yyvsp[0])->lineno;
            }
#line 3305 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 1066 "syntax.y" /* yacc.c:1646  */
    {
                    //NOTE: IGNORE TK_COLON PARA_TYPE_LIST IS 'PARA_TL'
                    if(DEBUG){
                        printf("PARSING TK_COLON\n");
                    }
                    (yyval) = NEWNODE(TK_PARA_TL_VAR);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-2]);
                    (yyval)->child[1] = NEWNODE(TK_TYPE_DECL);
                    (yyval)->child[1]->lineno = (yyvsp[0])->lineno;
                    (yyval)->child[1]->child = MALLOC((yyval), 1);
                    (yyval)->child[1]->child[0] = (yyvsp[0]);

                    (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
                }
#line 3325 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 1081 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COLON, yylineno); }
#line 3331 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 1081 "syntax.y" /* yacc.c:1646  */
    {
                    //NOTE: IGNORE TK_COLON PARA_TYPE_LIST IS 'PARA_TL'
                    if(DEBUG){
                        printf("PARSING TK_COLON\n");
                    }
                    (yyval) = NEWNODE(TK_PARA_TL_VAR);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-3]);
                    (yyval)->child[1] = NEWNODE(TK_TYPE_DECL);
                    (yyval)->child[1]->lineno = (yyvsp[-1])->lineno;
                    (yyval)->child[1]->child = MALLOC((yyval), 1);
                    (yyval)->child[1]->child[0] = (yyvsp[-1]);

                    (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
                }
#line 3351 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 1096 "syntax.y" /* yacc.c:1646  */
    {
                    //NOTE: IGNORE TK_COLON PARA_TYPE_LIST IS 'PARA_TL'
                    if(DEBUG){
                        printf("PARSING TK_COLON\n");
                    }
                    (yyval) = NEWNODE(TK_PARA_TL_VAL);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-2]);
                    (yyval)->child[1] = NEWNODE(TK_TYPE_DECL);
                    (yyval)->child[1]->lineno = (yyvsp[0])->lineno;
                    (yyval)->child[1]->child = MALLOC((yyval), 1);
                    (yyval)->child[1]->child[0] = (yyvsp[0]);

                    (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
                }
#line 3371 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1111 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COLON, yylineno); }
#line 3377 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1111 "syntax.y" /* yacc.c:1646  */
    {
                    //NOTE: IGNORE TK_COLON PARA_TYPE_LIST IS 'PARA_TL'
                    if(DEBUG){
                        printf("PARSING TK_COLON\n");
                    }
                    (yyval) = NEWNODE(TK_PARA_TL_VAL);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-3]);
                    (yyval)->child[1] = NEWNODE(TK_TYPE_DECL);
                    (yyval)->child[1]->lineno = (yyvsp[-1])->lineno;
                    (yyval)->child[1]->child = MALLOC((yyval), 1);
                    (yyval)->child[1]->child[0] = (yyvsp[-1]);

                    (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
                }
#line 3397 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1128 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_VAR VAR_PARA_LIST IS "TK_VAR"
                if(DEBUG){
                    printf("PARSING VAR LIST\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 3409 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1137 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING VAL PARA LIST\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 3420 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1145 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ROUTINE BODY\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 3431 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1153 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING STMT LIST\n");
            }
            if((yyvsp[-2])==NULL){
          		(yyval) = NEWNODE(TK_STMT_LIST);
          		(yyval)->child = MALLOC((yyval), 1);
          		(yyval)->child[0] = (yyvsp[-1]);

          		(yyval)->lineno = (yyvsp[-1])->lineno;
            }
          	else{
          		(yyval) = (yyvsp[-2]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[-1]);

                free(tmp);
          	}
        }
#line 3461 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1178 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING STMT LIST\n");
            }
            if((yyvsp[-2])==NULL){
                (yyval) = NEWNODE(TK_STMT_LIST);
                (yyval)->child = MALLOC((yyval), 1);
                (yyval)->child[0] = (yyvsp[-1]);

                (yyval)->lineno = (yyvsp[-1])->lineno;
            }
            else{
                (yyval) = (yyvsp[-2]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                    (yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[-1]);

                free(tmp);
            }

            IS_SYNTAX_ERROR = 1;
            LOG_ERROR(STR_SEMI, (yyvsp[-1])->lineno);
        }
#line 3494 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1206 "syntax.y" /* yacc.c:1646  */
    {
              if(DEBUG){
                  printf("PARSING STMT LIST NULL\n");
              }
              (yyval)=NULL;
        }
#line 3505 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1214 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: IGNORE TK_COLON
        if(DEBUG){
            printf("PARSING STMT\n");
        }
        (yyval) = NEWNODE(TK_STMT_LABEL);
         (yyval)->child = MALLOC((yyval),2);
         (yyval)->child[0] = (yyvsp[-2]);
         (yyval)->child[1] = (yyvsp[0]);

         (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
    }
#line 3522 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1226 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COLON, (yyvsp[-1])->lineno); }
#line 3528 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1226 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: IGNORE TK_COLON
        if(DEBUG){
            printf("PARSING STMT\n");
        }
        (yyval) = NEWNODE(TK_STMT_LABEL);
         (yyval)->child = MALLOC((yyval),2);
         (yyval)->child[0] = (yyvsp[-3]);
         (yyval)->child[1] = (yyvsp[-1]);

         (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
    }
#line 3545 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1238 "syntax.y" /* yacc.c:1646  */
    {
         //NOTE: IGNORE TK_COLON
         if(DEBUG){
             printf("PARSING NON LABEL STMT\n");
         }
         (yyval) = NEWNODE(TK_STMT);
         (yyval)->child = MALLOC((yyval),1);
         (yyval)->child[0] = (yyvsp[0]);

         (yyval)->lineno = (yyvsp[0])->lineno;
     }
#line 3561 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1251 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING ASSIGN STMT\n");
                    }
                    (yyval) = NEWNODE(TK_STMT_ASSIGN);
                    (yyval)->child = MALLOC((yyval), 1);
                    (yyval)->child[0] = (yyvsp[0]);

                    (yyval)->lineno = (yyvsp[0])->lineno;
                }
#line 3576 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1261 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING PROC STMT\n");
                    }
                    (yyval) = NEWNODE(TK_STMT_PROC);
                    (yyval)->child = MALLOC((yyval), 1);
                    (yyval)->child[0] = (yyvsp[0]);

                    (yyval)->lineno = (yyvsp[0])->lineno;
                }
#line 3591 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1271 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING CP STMT\n");
                    }
                    (yyval) = NEWNODE(TK_STMT_CP);
                    (yyval)->child = MALLOC((yyval), 1);
                    (yyval)->child[0] = (yyvsp[0]);

                    (yyval)->lineno = (yyvsp[0])->lineno;
                }
#line 3606 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1281 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING IF STMT\n");
                    }
                    (yyval) = (yyvsp[0]);
                }
#line 3617 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1287 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING REPEAT STMT\n");
                    }
                    (yyval) = (yyvsp[0]);
                }
#line 3628 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1293 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING WHILE STMT\n");
                    }
                    (yyval) = (yyvsp[0]);
                }
#line 3639 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 1299 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING FOR STMT\n");
                    }
                    (yyval) = (yyvsp[0]);
                }
#line 3650 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1305 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING CASE STMT\n");
                    }
                    (yyval) = (yyvsp[0]);
                }
#line 3661 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1311 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING GOTO STMT\n");
                    }
                    (yyval) = (yyvsp[0]);
                }
#line 3672 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1319 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_ASSIGN
                if(DEBUG){
                    printf("PARSING ASSIGN\n");
                }
                (yyval) = NEWNODE(TK_ASSIGN_ID);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-2]);
                (yyval)->child[1] = (yyvsp[0]);

                (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
            }
#line 3689 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1331 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_ASSIGN TK_LB TK_RB
                if(DEBUG){
                    printf("PARSING ASSIGN\n");
                }
                (yyval) = NEWNODE(TK_ASSIGN_ID_EXPR);
                (yyval)->child = MALLOC((yyval),3);
                (yyval)->child[0] = (yyvsp[-5]);
                (yyval)->child[1] = (yyvsp[-3]);
                (yyval)->child[2] = (yyvsp[0]);

                (yyval)->lineno = MIN((yyvsp[-5]), (yyvsp[-3]));
                (yyval)->lineno = MIN((yyval), (yyvsp[0]));
            }
#line 3708 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1345 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_RB, yylineno);}
#line 3714 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1345 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_ASSIGN TK_LB TK_RB
                if(DEBUG){
                    printf("PARSING ASSIGN\n");
                }
                (yyval) = NEWNODE(TK_ASSIGN_ID_EXPR);
                (yyval)->child = MALLOC((yyval),3);
                (yyval)->child[0] = (yyvsp[-6]);
                (yyval)->child[1] = (yyvsp[-4]);
                (yyval)->child[2] = (yyvsp[-1]);

                (yyval)->lineno = MIN((yyvsp[-6]), (yyvsp[-4]));
                (yyval)->lineno = MIN((yyval), (yyvsp[-1]));
            }
#line 3733 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1359 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_ASSIGN TK_LB TK_RB
                if(DEBUG){
                    printf("PARSING ASSIGN\n");
                }
                (yyval) = NEWNODE(TK_ASSIGN_DD);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-4]);
                (yyval)->child[1] = (yyvsp[0]);

                (yyval)->lineno = MIN((yyvsp[-4]), (yyvsp[0]));

                (yyvsp[-4])->record = (yyvsp[-2]);
            }
#line 3752 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1375 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_ID);
           (yyval)->child = MALLOC((yyval),1);
           (yyval)->child[0] = (yyvsp[0]);

           (yyval)->lineno = (yyvsp[0])->lineno;
        }
#line 3767 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1385 "syntax.y" /* yacc.c:1646  */
    {
           //NOTE: IGNROE TK_LP TK_RP
           if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_ID_ARGS);
           (yyval)->child = MALLOC((yyval),2);
           (yyval)->child[0] = (yyvsp[-3]);
           (yyval)->child[1] = (yyvsp[-1]);

           (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
          }
#line 3784 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1397 "syntax.y" /* yacc.c:1646  */
    {
           //NOTE: IGNROE TK_LP TK_RP
           if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_ID_ARGS);
           (yyval)->child = MALLOC((yyval),2);
           (yyval)->child[0] = (yyvsp[-3]);
           (yyval)->child[1] = (yyvsp[-1]);

           (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));

           IS_SYNTAX_ERROR=1;
           LOG_ERROR(STR_RP, yylineno);
          }
#line 3804 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1412 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_SYS);
           (yyval)->child = MALLOC((yyval),1);
           (yyval)->child[0] = (yyvsp[0]);

           (yyval)->lineno = (yyvsp[0])->lineno;
        }
#line 3819 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1422 "syntax.y" /* yacc.c:1646  */
    {
           //NOTE: IGNROE TK_LP TK_RP
           if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_SYS_ARGS);
           (yyval)->child = MALLOC((yyval),2);
           (yyval)->child[0] = (yyvsp[-3]);
           (yyval)->child[1] = (yyvsp[-1]);

           (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
          }
#line 3836 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1434 "syntax.y" /* yacc.c:1646  */
    {
           //NOTE: IGNROE TK_LP TK_RP
           if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_SYS_ARGS);
           (yyval)->child = MALLOC((yyval),2);
           (yyval)->child[0] = (yyvsp[-3]);
           (yyval)->child[1] = (yyvsp[-1]);

           (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));

           IS_SYNTAX_ERROR=1;
           LOG_ERROR(STR_RP, yylineno);
          }
#line 3856 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1451 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING CP STMT\n");
            }
            (yyval) = (yyvsp[-1]);
        }
#line 3867 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1459 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_IF TK_THEN
            if(DEBUG){
                printf("PARSING IF STMT\n");
            }
            (yyval) = NEWNODE(TK_IF);
            (yyval)->child = MALLOC((yyval),3);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-1]);
            (yyval)->child[2] = (yyvsp[0]);

            (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
            (yyval)->lineno = MIN((yyval), (yyvsp[0]));
        }
#line 3886 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1476 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ELSE CLAUSE\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 3897 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1482 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ELSE CLAUSE NULL\n");
                }
                (yyval) = NULL;
            }
#line 3908 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1490 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_REPEAR TK_UNTIL
                if(DEBUG){
                    printf("PARSING REPEAT STMT\n");
                }
                (yyval) = NEWNODE(TK_REPEAT);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-2]);
                (yyval)->child[1] = (yyvsp[0]);

                (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
            }
#line 3925 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1502 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_UNTIL, yylineno);}
#line 3931 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1502 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_REPEAR TK_UNTIL
                if(DEBUG){
                    printf("PARSING REPEAT STMT\n");
                }
                (yyval) = NEWNODE(TK_REPEAT);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[-1]);

                (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
            }
#line 3948 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1516 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_WHILE TK_DO
                if(DEBUG){
                    printf("PARSING WHILE STMT\n");
                }
                (yyval) = NEWNODE(TK_WHILE);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-2]);
                (yyval)->child[1] = (yyvsp[0]);

                (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
            }
#line 3965 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1528 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_DO, yylineno); }
#line 3971 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1528 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_WHILE TK_DO
                if(DEBUG){
                    printf("PARSING WHILE STMT\n");
                }
                (yyval) = NEWNODE(TK_WHILE);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[-1]);

                (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
            }
#line 3988 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1542 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_FOR TK_ASSIGN TK_DO
            if(DEBUG){
                printf("PARSING FOR STMT\n");
            }
            (yyval) = NEWNODE(TK_FOR);
            (yyval)->child = MALLOC((yyval),5);
            (yyval)->child[0] = (yyvsp[-6]);
            (yyval)->child[1] = (yyvsp[-4]);
            (yyval)->child[2] = (yyvsp[-3]);
            (yyval)->child[3] = (yyvsp[-2]);
            (yyval)->child[4] = (yyvsp[0]);

            (yyval)->lineno = MIN((yyvsp[-6]), (yyvsp[-4]));
            (yyval)->lineno = MIN((yyval), (yyvsp[-3]));
            (yyval)->lineno = MIN((yyval), (yyvsp[-2]));
            (yyval)->lineno = MIN((yyval), (yyvsp[0]));
        }
#line 4011 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1560 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_ASSIGN, (yyvsp[-2])->lineno); }
#line 4017 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1560 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_FOR TK_ASSIGN TK_DO
            if(DEBUG){
                printf("PARSING FOR STMT\n");
            }
            (yyval) = NEWNODE(TK_FOR);
            (yyval)->child = MALLOC((yyval),5);
            (yyval)->child[0] = (yyvsp[-7]);
            (yyval)->child[1] = (yyvsp[-5]);
            (yyval)->child[2] = (yyvsp[-4]);
            (yyval)->child[3] = (yyvsp[-3]);
            (yyval)->child[4] = (yyvsp[-1]);

            (yyval)->lineno = MIN((yyvsp[-7]), (yyvsp[-5]));
            (yyval)->lineno = MIN((yyval), (yyvsp[-4]));
            (yyval)->lineno = MIN((yyval), (yyvsp[-3]));
            (yyval)->lineno = MIN((yyval), (yyvsp[-1]));
        }
#line 4040 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1578 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_TO_OR_DOWNTO, yylineno); }
#line 4046 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1578 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_FOR TK_ASSIGN TK_DO
            if(DEBUG){
                printf("PARSING FOR STMT\n");
            }
            (yyval) = NEWNODE(TK_FOR);
            (yyval)->child = MALLOC((yyval),5);
            (yyval)->child[0] = (yyvsp[-7]);
            (yyval)->child[1] = (yyvsp[-5]);
            (yyval)->child[2] = (yyvsp[-4]);
            (yyval)->child[3] = (yyvsp[-3]);
            (yyval)->child[4] = (yyvsp[-1]);

            (yyval)->lineno = MIN((yyvsp[-7]), (yyvsp[-5]));
            (yyval)->lineno = MIN((yyval), (yyvsp[-4]));
            (yyval)->lineno = MIN((yyval), (yyvsp[-3]));
            (yyval)->lineno = MIN((yyval), (yyvsp[-1]));
        }
#line 4069 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1596 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_DO, yylineno); }
#line 4075 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1596 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_FOR TK_ASSIGN TK_DO
            if(DEBUG){
                printf("PARSING FOR STMT\n");
            }
            (yyval) = NEWNODE(TK_FOR);
            (yyval)->child = MALLOC((yyval),5);
            (yyval)->child[0] = (yyvsp[-7]);
            (yyval)->child[1] = (yyvsp[-5]);
            (yyval)->child[2] = (yyvsp[-4]);
            (yyval)->child[3] = (yyvsp[-3]);
            (yyval)->child[4] = (yyvsp[-1]);

            (yyval)->lineno = MIN((yyvsp[-7]), (yyvsp[-5]));
            (yyval)->lineno = MIN((yyval), (yyvsp[-4]));
            (yyval)->lineno = MIN((yyval), (yyvsp[-3]));
            (yyval)->lineno = MIN((yyval), (yyvsp[-1]));
        }
#line 4098 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1616 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: THERE IS NO DIR
            if(DEBUG){
                printf("PARSING DIR TO\n");
            }
            (yyval) = (yyvsp[0]);
        }
#line 4110 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1623 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: THERE IS NO DIR
            if(DEBUG){
                printf("PARSING DIR DOWNTO\n");
            }
            (yyval) = (yyvsp[0]);
        }
#line 4122 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1632 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_CASE TK_OF TK_END
            if(DEBUG){
                printf("PARSING CASE STMT\n");
            }
            (yyval) = NEWNODE(TK_CASE);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-1]);

            (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));

        }
#line 4140 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1645 "syntax.y" /* yacc.c:1646  */
    { IS_SYNTAX_ERROR=1; LOG_ERROR(STR_OF, yylineno);}
#line 4146 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1645 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_CASE TK_OF TK_END
            if(DEBUG){
                printf("PARSING CASE STMT\n");
            }
            (yyval) = NEWNODE(TK_CASE);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-4]);
            (yyval)->child[1] = (yyvsp[-2]);

            (yyval)->lineno = MIN((yyvsp[-4]), (yyvsp[-2]));

        }
#line 4164 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1660 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: CASE_EXPR_LIST IS 'TK_CASE_EL'
            if(DEBUG){
                printf("PARSING CASE EXPR LIST\n");
            }
            	(yyval) = (yyvsp[-1]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
        }
#line 4186 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1677 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: CASE_EXPR_LIST IS 'TK_CASE_EL'
            if(DEBUG){
                printf("PARSING CASE EXPR LIST : FIRST ONE\n");
            }
            (yyval) = NEWNODE(TK_CASE_EL);
            (yyval)->child = MALLOC((yyval),1);
            (yyval)->child[0] = (yyvsp[0]);

            (yyval)->lineno = (yyvsp[0])->lineno;
        }
#line 4202 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1690 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING CASE EXPR\n");
            }
            (yyval) = NEWNODE(TK_CASE_EXPR);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-1]);

            (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));

        }
#line 4220 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1703 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING CASE EXPR\n");
            }
            (yyval) = NEWNODE(TK_CASE_EXPR);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-1]);

            (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));

            IS_SYNTAX_ERROR = 1;
            LOG_ERROR(STR_SEMI, (yyvsp[-1])->lineno);

        }
#line 4241 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1719 "syntax.y" /* yacc.c:1646  */
    {
         //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING CASE EXPR\n");
            }
            (yyval) = NEWNODE(TK_CASE_EXPR_END);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-1]);

            (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
        }
#line 4258 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1731 "syntax.y" /* yacc.c:1646  */
    {
         //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING CASE EXPR\n");
            }
            (yyval) = NEWNODE(TK_CASE_EXPR_END);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-1]);

            (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));

            IS_SYNTAX_ERROR = 1;
            LOG_ERROR(STR_SEMI, (yyvsp[-1])->lineno);
        }
#line 4278 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1748 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: GOTO STMT IS ACTUALLY TK_INTEGER
            if(DEBUG){
                printf("PARSING GOTO STMT\n");
            }
            (yyval) = (yyvsp[0]);
            (yyval)->type = TK_GOTO;
           	setName((yyval), TK_GOTO);
        }
#line 4292 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1757 "syntax.y" /* yacc.c:1646  */
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
#line 4308 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1771 "syntax.y" /* yacc.c:1646  */
    {
                    //NOTE: IGNORE TK_COMMA
                    if(DEBUG){
                        printf("PARSING EXP LIST\n");
                    }
                    (yyval) = (yyvsp[-2]);
                	int old_child_number = (yyval)->child_number;
                	NODE** tmp = (yyval)->child;
                	(yyval)->child = MALLOC((yyval), (1+old_child_number));
                	int i;
                	for(i=0;i<old_child_number;i++){
                		(yyval)->child[i] = tmp[i];
                	}
                	(yyval)->child[i] = (yyvsp[0]);

                	free(tmp);
                }
#line 4330 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1788 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING EXP LIST : FIRST ONE\n");
                    }
                    (yyval) = NEWNODE(TK_EXP_LIST);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[0]);

                    (yyval)->lineno = (yyvsp[0])->lineno;
                }
#line 4345 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1800 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_GE TK_GT TK_LE TK_LT TK_EQUAL TK_UNEQUAL
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_GE);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-2]);
                (yyval)->child[1] = (yyvsp[0]);

                (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
           }
#line 4362 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1812 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_GT);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-2]);
                (yyval)->child[1] = (yyvsp[0]);

                (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
           }
#line 4378 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1823 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_LE);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-2]);
                (yyval)->child[1] = (yyvsp[0]);

                (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
           }
#line 4394 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1834 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_LT);
                (yyval)->child = MALLOC((yyval),2);
                                (yyval)->child[0] = (yyvsp[-2]);
                                (yyval)->child[1] = (yyvsp[0]);

                (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
           }
#line 4410 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1845 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_EQUAL);
                (yyval)->child = MALLOC((yyval),2);
                                (yyval)->child[0] = (yyvsp[-2]);
                                (yyval)->child[1] = (yyvsp[0]);
                 (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
           }
#line 4425 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1855 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_UNEQUAL);
                (yyval)->child = MALLOC((yyval),2);
                                (yyval)->child[0] = (yyvsp[-2]);
                                (yyval)->child[1] = (yyvsp[0]);
                                (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
           }
#line 4440 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1865 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION : FIRST ONE\n");
                }
                (yyval) = NEWNODE(TK_EXP);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->lineno = (yyvsp[0])->lineno;
           }
#line 4454 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1876 "syntax.y" /* yacc.c:1646  */
    {
     //NOTE: expr IS EXPR, expression IS EXP, IGNORE TK_PLUS
         if(DEBUG){
             printf("PARSING EXPR : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_PLUS);
         (yyval)->child = MALLOC((yyval),2);
                         (yyval)->child[0] = (yyvsp[-2]);
                         (yyval)->child[1] = (yyvsp[0]);
                         (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
     }
#line 4470 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1887 "syntax.y" /* yacc.c:1646  */
    {
     //NOTE: expr IS EXPR, expression IS EXP, IGNORE TK_MINUS
         if(DEBUG){
             printf("PARSING EXPR : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_MINUS);
         (yyval)->child = MALLOC((yyval),2);
                         (yyval)->child[0] = (yyvsp[-2]);
                         (yyval)->child[1] = (yyvsp[0]);
                         (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
     }
#line 4486 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1898 "syntax.y" /* yacc.c:1646  */
    {
     //NOTE: expr IS EXPR, expression IS EXP, IGNORE TK_OR
         if(DEBUG){
             printf("PARSING EXPR : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_OR);
         (yyval)->child = MALLOC((yyval),2);
                         (yyval)->child[0] = (yyvsp[-2]);
                         (yyval)->child[1] = (yyvsp[0]);
                         (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
     }
#line 4502 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1909 "syntax.y" /* yacc.c:1646  */
    {
     //NOTE: expr IS EXPR, expression IS EXP
         if(DEBUG){
             printf("PARSING EXPR : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_EXPR);
         (yyval)->child = MALLOC((yyval),1);
         (yyval)->child[0] = (yyvsp[0]);

         (yyval)->lineno = (yyvsp[0])->lineno;
     }
#line 4518 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1922 "syntax.y" /* yacc.c:1646  */
    {
         if(DEBUG){
             printf("PARSING TK_MUL\n");
         }
         (yyval) = NEWNODE(TK_MUL);
         (yyval)->child = MALLOC((yyval),2);
                                  (yyval)->child[0] = (yyvsp[-2]);
                                  (yyval)->child[1] = (yyvsp[0]);
                                  (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
     }
#line 4533 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1932 "syntax.y" /* yacc.c:1646  */
    {
         if(DEBUG){
             printf("PARSING TK_DIV\n");
         }
         (yyval) = NEWNODE(TK_DIV);
        (yyval)->child = MALLOC((yyval),2);
                                 (yyval)->child[0] = (yyvsp[-2]);
                                 (yyval)->child[1] = (yyvsp[0]);
                                 (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
     }
#line 4548 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1942 "syntax.y" /* yacc.c:1646  */
    {
               if(DEBUG){
                   printf("PARSING TK_REM\n");
               }
               (yyval) = NEWNODE(TK_REM);
              (yyval)->child = MALLOC((yyval),2);
                                       (yyval)->child[0] = (yyvsp[-2]);
                                       (yyval)->child[1] = (yyvsp[0]);
                                       (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
           }
#line 4563 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1952 "syntax.y" /* yacc.c:1646  */
    {
         if(DEBUG){
             printf("PARSING TK_MOD\n");
         }
         (yyval) = NEWNODE(TK_MOD);
        (yyval)->child = MALLOC((yyval),2);
                                 (yyval)->child[0] = (yyvsp[-2]);
                                 (yyval)->child[1] = (yyvsp[0]);
                                 (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
     }
#line 4578 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1962 "syntax.y" /* yacc.c:1646  */
    {
         if(DEBUG){
             printf("PARSING TK_AND\n");
         }
         (yyval) = NEWNODE(TK_AND);
         (yyval)->child = MALLOC((yyval),2);
                                  (yyval)->child[0] = (yyvsp[-2]);
                                  (yyval)->child[1] = (yyvsp[0]);
                                  (yyval)->lineno = MIN((yyvsp[-2]), (yyvsp[0]));
     }
#line 4593 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1972 "syntax.y" /* yacc.c:1646  */
    {
         if(DEBUG){
             printf("PARSING TERM : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_TERM);
         (yyval)->child = MALLOC((yyval),1);
         (yyval)->child[0] = (yyvsp[0]);

         (yyval)->lineno = (yyvsp[0])->lineno;
     }
#line 4608 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1985 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: THERE IS NO TK_FACTOR BUT 'TK_FACTOR' FOLLOWED BY A TYPE
        if(DEBUG){
            printf("PARSING FACTOR\n");
        }
        (yyval) = NEWNODE(TK_FACTOR_ID);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[0]);

        (yyval)->lineno = (yyvsp[0])->lineno;
    }
#line 4624 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1996 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: IGNORE TK_LP TK_RP
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_ID_ARGS);
        (yyval)->child = MALLOC((yyval),2);
        (yyval)->child[0] = (yyvsp[-3]);
        (yyval)->child[1] = (yyvsp[-1]);
        (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
    }
#line 4640 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 2007 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: IGNORE TK_LP TK_RP
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_SYS_FUNCT);
        (yyval)->child = MALLOC((yyval),2);
        (yyval)->child[0] = (yyvsp[-3]);
        (yyval)->child[1] = (yyvsp[-1]);
        (yyval)->lineno = MIN((yyvsp[-3]), (yyvsp[-1]));
    }
#line 4656 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 2018 "syntax.y" /* yacc.c:1646  */
    {
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_CONST);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[0]);
        (yyval)->lineno = (yyvsp[0])->lineno;
    }
#line 4670 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 2027 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: IGNORE TK_LP TK_RP
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_EXP);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[-1]);
        (yyval)->lineno = (yyvsp[-1])->lineno;
    }
#line 4685 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 2037 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: IGNORE TK_LP TK_RP
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_EXP);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[-1]);
        (yyval)->lineno = (yyvsp[-1])->lineno;

        IS_SYNTAX_ERROR = 1;
        LOG_ERROR(STR_RP, yylineno);
    }
#line 4703 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 2050 "syntax.y" /* yacc.c:1646  */
    {
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_NOT);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[0]);
        (yyval)->lineno = (yyvsp[0])->lineno;
    }
#line 4717 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 2059 "syntax.y" /* yacc.c:1646  */
    {
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_MINUS);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[0]);
        (yyval)->lineno = (yyvsp[0])->lineno;
    }
#line 4731 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 2068 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: IGNORE TK_LB TK_RB
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_ID_EXP);
        (yyval)->child = MALLOC((yyval),2);
        (yyval)->child[0] = (yyvsp[-3]);
        (yyval)->child[1] = (yyvsp[-1]);
        (yyval)->lineno = MIN((yyvsp[-3]),(yyvsp[-1]));
    }
#line 4747 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 2079 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: IGNORE TK_LB TK_RB
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_ID_EXP);
        (yyval)->child = MALLOC((yyval),2);
        (yyval)->child[0] = (yyvsp[-3]);
        (yyval)->child[1] = (yyvsp[-1]);
        (yyval)->lineno = MIN((yyvsp[-3]),(yyvsp[-1]));

        IS_SYNTAX_ERROR = 1;
        LOG_ERROR(STR_RB ,yylineno);
    }
#line 4766 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 2093 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: ID->ID IS IN ONE NODE
        if(DEBUG){
            printf("PARSING FACTOR FOR ID->ID\n");
        }
        (yyval) = NEWNODE(TK_FACTOR_DD);
        (yyval)->child = MALLOC((yyval),2);
        (yyval)->child[0] = (yyvsp[-2]);
        (yyval)->child[1] = (yyvsp[0]);
        (yyval)->lineno = (yyvsp[-2])->lineno;
        (yyvsp[-2])->record = (yyvsp[0]);
    }
#line 4783 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 2107 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COMMA
            if(DEBUG){
                printf("PARSING ARGS LIST\n");
            }
            	(yyval) = (yyvsp[-2]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
        }
#line 4805 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 2124 "syntax.y" /* yacc.c:1646  */
    {IS_SYNTAX_ERROR=1; LOG_ERROR(STR_COMMA, yylineno);}
#line 4811 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 2124 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COMMA
            if(DEBUG){
                printf("PARSING ARGS LIST\n");
            }
                (yyval) = (yyvsp[-3]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                    (yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[-1]);

                free(tmp);
        }
#line 4833 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 2141 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING ARGS LIST : FIRST ONE\n");
            }
            (yyval) = NEWNODE(TK_ARGS_LIST);
            (yyval)->child = MALLOC((yyval),1);
            (yyval)->child[0] = (yyvsp[0]);
            (yyval)->lineno = (yyvsp[0])->lineno;
        }
#line 4847 "yy.tab.cpp" /* yacc.c:1646  */
    break;


#line 4851 "yy.tab.cpp" /* yacc.c:1646  */
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
#line 2152 "syntax.y" /* yacc.c:1906  */


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
