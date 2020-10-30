/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 163 "ass5_18CS30051.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASS5_18CS30051_TAB_H_INCLUDED  */
