%{
    /* C Declarations and Definations*/
    #include <stdio.h>
    #include "asgn5_18CS30051.tab.h"
    extern YYSTYPE yylval;
    extern int line;
    int line = 1;
%}

/* Regular Expression Definations */
LETTER          [a-zA-Z]
DIGIT           [0-9]
NON_ZERO        [1-9]
DIGIT_SEQ       {DIGIT}{DIGIT}*
ESCAPE_SEQ      "\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
C_CHAR          [^\'\\\n]|{ESCAPE_SEQ}
S_CHAR          [^\"\\\n]|{ESCAPE_SEQ}
CHAR_SEQ        {C_CHAR}{C_CHAR}*
STRING_SEQ      {S_CHAR}{S_CHAR}*

SPECIAL_SYMBOL  "("|")"|"{"|"}"|"["|"]"
IDENTIFIER      ({LETTER}|"_")({LETTER}|{DIGIT}|"_")*
OPERATOR        "#"|"."|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<"|">"|","|"="|"?"|"^"|"|"|":"

FRAC            {DIGIT_SEQ}\.|\.{DIGIT_SEQ}|{DIGIT_SEQ}\.{DIGIT_SEQ}
FLOAT_CONST     ({FRAC}|{DIGIT_SEQ})([Ee]([-+]{DIGIT_SEQ}|{DIGIT_SEQ}))|{FRAC}|"0"*\."0"*
INT_CONST       {NON_ZERO}{DIGIT}*|"0"+
CHAR_CONST      \'{CHAR_SEQ}\'

PUNC            [;]|{SPECIAL_SYMBOL}|{OPERATOR}
STRING          \"{STRING_SEQ}\"|\"\"
COMMENT_LINE    "//".*
COMMENT_MULTI   "/*"([^*]|\*+[^/*])*\**(\*"/")? 
WS              [ \t]
NEWLINE         [\n]

%%

{COMMENT_LINE}          { printf("This single line comment will be ignored by the parser\n"); }
{COMMENT_MULTI}         { printf("This multi line comment will be ignored by the parser\n"); }

"if"                    { return IF;       }
"do"                    { return DO;       }
"for"                   { return FOR;      }
"int"                   { return INT;      }
"else"                  { return ELSE;     }
"char"                  { return CHAR;     }
"case"                  { return CASE;     }
"goto"                  { return GOTO;     }
"long"                  { return LONG;     }
"void"                  { return VOID;     }
"short"                 { return SHORT;    }
"float"                 { return FLOAT;    }
"break"                 { return BREAK;    }
"const"                 { return CONST;    }
"union"                 { return UNION;    }
"while"                 { return WHILE;    }
"switch"                { return SWITCH;   }
"static"                { return STATIC;   }
"struct"                { return STRUCT;   }
"extern"                { return EXTERN;   }
"sizeof"                { return SIZEOF;   }
"inline"                { return INLINE;   }
"double"                { return DOUBLE;   }
"return"                { return RETURN;   }
"typedef"               { return TYPEDEF;  }
"default"               { return DEFAULT;  }
"volatile"              { return VOLATILE; }
"restrict"              { return RESTRICT; }
"continue"              { return CONTINUE; }

"++"                    { return PP;        }
"--"                    { return MM;        }
"->"                    { return ARROW;     }
"<<"                    { return RS;        }
">>"                    { return LS;        }
"<="                    { return LE;        }
">="                    { return GE;        }
"=="                    { return EE;        }
"!="                    { return NE;        }
"&&"                    { return AA;        }
"||"                    { return OO;        }
"*="                    { return MULT_EQ;   }
"/="                    { return DE;        }
"%="                    { return MOD_EQ;    }
"+="                    { return PE;        }
"-="                    { return MINUS_EQ;  }
"&="                    { return AE;        }
"^="                    { return XE;        }
"|="                    { return OE;        }
"..."                   { return ELLIPSIS;  }
"<<="                   { return RSE;       }
">>="                   { return LSE;       }

{INT_CONST}             { return INTEGER_CONST; /* Constant Rule */ }
{CHAR_CONST}            { return CHAR_CONST; /* Constant Rule */ }
{FLOAT_CONST}           { return FLOAT_CONST; /* Constant Rule */ }

{IDENTIFIER}            { return IDENTIFIER; /* Identifier Rule */ }

{STRING}                { return STRING; /* String-literal */ }

{PUNC}                  { return yytext[0]; /* Punctuator Rule */}

{WS}                    { /*White-space Rule*/ }

{NEWLINE}               { printf("\n\n============================== Parsing line %d ============================== \n\n", ++line ); }

%%

int yywrap(){ return 1; }