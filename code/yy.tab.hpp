/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
