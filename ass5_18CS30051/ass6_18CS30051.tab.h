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

#ifndef YY_YY_ASS6_18CS30051_TAB_H_INCLUDED
# define YY_YY_ASS6_18CS30051_TAB_H_INCLUDED
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
    RESTRICT = 258,
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
    RETURN = 277,
    SHORT = 278,
    SIGNED = 279,
    SIZEOF = 280,
    STATIC = 281,
    STRUCT = 282,
    SWITCH = 283,
    TYPEDEF = 284,
    UNION = 285,
    UNSIGNED = 286,
    VOID = 287,
    VOLATILE = 288,
    WHILE = 289,
    _BOOL = 290,
    _COMPLEX = 291,
    _IMAGINARY = 292,
    IDENTIFIER = 293,
    INTEGER_CONSTANT = 294,
    FLOATING_CONSTANT = 295,
    CHARACTER_CONSTANT = 296,
    STRING_LITERAL = 297,
    SQUARE_BRACKET_OPEN = 298,
    SQUARE_BRACKET_CLOSE = 299,
    ROUND_BRACKET_OPEN = 300,
    ROUND_BRACKET_CLOSE = 301,
    CURLY_BRACKET_OPEN = 302,
    CURLY_BRACKET_CLOSE = 303,
    DOT = 304,
    IMPLIES = 305,
    INC = 306,
    DEC = 307,
    BITWISE_AND = 308,
    MUL = 309,
    ADD = 310,
    SUB = 311,
    BITWISE_NOT = 312,
    EXCLAIM = 313,
    DIV = 314,
    MOD = 315,
    SHIFT_LEFT = 316,
    SHIFT_RIGHT = 317,
    BIT_SL = 318,
    BIT_SR = 319,
    LTE = 320,
    GTE = 321,
    EQ = 322,
    NEQ = 323,
    BITWISE_XOR = 324,
    BITWISE_OR = 325,
    AND = 326,
    OR = 327,
    QUESTION = 328,
    COLON = 329,
    SEMICOLON = 330,
    DOTS = 331,
    ASSIGN = 332,
    STAR_EQ = 333,
    DIV_EQ = 334,
    MOD_EQ = 335,
    ADD_EQ = 336,
    SUB_EQ = 337,
    SL_EQ = 338,
    SR_EQ = 339,
    BITWISE_AND_EQ = 340,
    BITWISE_XOR_EQ = 341,
    BITWISE_OR_EQ = 342,
    COMMA = 343,
    HASH = 344
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "ass6_18CS30051.y"
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

#line 160 "ass6_18CS30051.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASS6_18CS30051_TAB_H_INCLUDED  */
