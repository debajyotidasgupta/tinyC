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

#ifndef YY_YY_ASGN5_18CS30051_TAB_H_INCLUDED
# define YY_YY_ASGN5_18CS30051_TAB_H_INCLUDED
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASGN5_18CS30051_TAB_H_INCLUDED  */
