%{ /* C Declarations and Definitions */
#include <stdio.h>
#include <sstream>
#include "asgn5_18CS30051_translator.h"
extern int line;
extern int yylex();
extern char* yytext;
void yyerror(const char*);
%}

%union {
  int intval;
  float floatval;
  char* charval;
  int instr;
  symElem* symp;
  symType* symtp;
  expression* expr;
  statement* stmt;
  array* arr;
  char unaryOperator;
}

/* Add all the tokens */

%token IF       
%token DO       
%token FOR      
%token INT      
%token ELSE     
%token CHAR     
%token CASE     
%token GOTO     
%token LONG     
%token VOID     
%token SHORT    
%token BREAK    
%token CONST   
%token FLOAT    
%token UNION    
%token WHILE    
%token SWITCH
%token INLINE
%token STATIC   
%token STRUCT   
%token EXTERN   
%token SIZEOF   
%token DOUBLE   
%token RETURN   
%token TYPEDEF  
%token DEFAULT  
%token RESTRICT
%token VOLATILE
%token CONTINUE 

%token PP       
%token MM       
%token RS        
%token LS        
%token LE        
%token GE        
%token EE        
%token NE        
%token AA        
%token OO        
%token DE        
%token PE        
%token AE        
%token XE        
%token OE        
%token RSE      
%token LSE      
%token ARROW     
%token MOD_EQ    
%token MULT_EQ   
%token MINUS_EQ  
%token ELLIPSIS  

%token <symp> IDENTIFIER
%token <intval> INTEGER_CONST
%token <floatval> FLOAT_CONST
%token <charval> CHAR_CONST
%token <charval> STRING

%right THEN ELSE

// all the expressions
%type <expr>
	expression
	expression_opt
	primary_expression 
	multiplicative_expression
	additive_expression
	shift_expression
	relational_expression 
	equality_expression
	AND_expression
	exclusive_OR_expression
	inclusive_OR_expression
	logical_AND_expression
	logical_OR_expression
	conditional_expression
	assignment_expression
	expression_statement

%type <unaryOperator> unary_operator
%type <symp> constant initializer
%type <symp> direct_declarator init_declarator declarator
%type <symtp> pointer

// array types
%type <arr> postfix_expression
	unary_expression
	cast_expression

%type <intval> argument_expression_list

// auxillary M and N
%type <instr> M
%type <stmt> N

// statements
%type <stmt>  statement
	labeled_statement 
	compound_statement
	selection_statement
	iteration_statement
	jump_statement
	block_item
	block_item_list
	block_item_list_opt

%start translation_unit

%%

constant: INTEGER_CONST
        {
            // printf("constant -> integer_constant\n"); 
            $$ = gentemp(new symType("INTEGER"), to_string($1));
			emit("EQUAL", $$->name, to_string($1));
        }
        | FLOAT_CONST
        { 
            // printf("constant -> float_constant\n");
            $$ = gentemp(new symType("DOUBLE"), to_string($1));
			emit("EQUAL", $$->name, to_string($1));
        }
        | CHAR_CONST
        { 
            // printf("constant -> character_constant\n"); 
            $$ = gentemp(new symType("CHAR"), $1);
			emit("EQUAL", $$->name, string($1));
        }
        ;

primary_expression: IDENTIFIER
                { 
                    $$ = new expression();
                    $$->ptr = $1;
                    $$->type = "NONBOOL";
                    // printf("primary_expression -> identifier\n"); 
                }
                | constant
				{ 
                    $$ = new expression();
		        	$$->ptr = $1;
                    // printf("primary_expression -> constant\n"); 
                }
                | STRING
                { 
                    $$ = new expression();
					symType* tmp = new symType("PTR");
					$$->ptr = gentemp(tmp, $1);
					$$->ptr->type->ptr = new symType("CHAR");
					// printf("primary_expression -> string\n"); 
                }
                | '(' expression ')'
                {
                    $$ = $2; 
                    // printf("primary_expression -> ( expression )\n"); 
                }
                ;

postfix_expression: primary_expression
                { 
                    // printf("postfix_expression -> primary_expression\n");
                    $$ = new array ();
					$$->array = $1->ptr;
					$$->ptr = $1->ptr;
					$$->type = $1->ptr->type; 
                }
                | postfix_expression '[' expression ']'
                { 
                        // printf("postfix_expression -> postfix_expression [ expression ]\n"); 
                        $$ = new array();
                        $$->array = $1->ptr;					// copy the base
                        $$->type = $1->type->ptr;				// type = type of element
                        $$->ptr = gentemp(new symType("INTEGER"));		// store computed address
                        
                        // New address = (if only) already computed + $3 * new width
						
                        if ($1->cat == "ARR") 
						{						
								// if already computed
                                symElem* t = gentemp(new symType("INTEGER"));		
                                emit ("MULT", t->name, $3->ptr->name, to_string(size_type($$->type)));
                                emit ("ADD", $$->ptr->name, $1->ptr->name, t->name);
                        }
                        else 
						{
                                emit("MULT", $$->ptr->name, $3->ptr->name, to_string(size_type($$->type)));
                        }

                        // Mark that it contains array address and first time computation is done
                        $$->cat = "ARR";
                }
                | postfix_expression '(' ')'
                {
                    // No semantic required
                }
                | postfix_expression '(' argument_expression_list ')'
                { 
                        // printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n");
                        $$ = new array();
                        $$->array = gentemp($1->type);
                        stringstream strs;
                        strs << $3;
                        string temp_str = strs.str();
                        char* intStr = (char*) temp_str.c_str();
                        string str = string(intStr);		
                        emit("CALL", $$->array->name, $1->array->name, str);
                }
                | postfix_expression '.' IDENTIFIER
                { 
                    // printf("postfix_expression -> postfix_expression . IDENTIFIER\n"); 
                }
                | postfix_expression ARROW IDENTIFIER
                { 
                    // printf("postfix_expression -> postfix_expression -> IDENTIFIER\n"); 
                }
                | postfix_expression PP
                { 
                    // printf("postfix_expression -> postfix_expression ++\n");
                    $$ = new array();
                    // copy $1 to $$
                    $$->array = gentemp($1->array->type);
                    emit ("EQUAL", $$->array->name, $1->array->name);
					// Increment $1
                    emit ("ADD", $1->array->name, $1->array->name, "1");
                }
                | postfix_expression MM
                { 
                    // printf("postfix_expression -> postfix_expression --\n");
                    $$ = new array();

                    // copy $1 to $$
                    $$->array = gentemp($1->array->type);
                    emit ("EQUAL", $$->array->name, $1->array->name);
					// Increment $1
                    emit ("SUB", $1->array->name, $1->array->name, "1");
                }
                | '(' type_name ')' '{' initializer_list '}'
                { 
					// printf("postfix_expression -> ( type_name ) { initializer_list }\n"); 
					$$ = new array();
					$$->array = gentemp(new symType("INTEGER"));
					$$->ptr = gentemp(new symType("INTEGER"));
				}
                | '(' type_name ')' '{' initializer_list ',' '}'
                { 
					// printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); 
					$$ = new array();
					$$->array = gentemp(new symType("INTEGER"));
					$$->ptr = gentemp(new symType("INTEGER"));
				}
                ;

argument_expression_list: assignment_expression
                        { 
                            // printf("argument_expression_list -> assignment_expression\n"); 
                            emit ("PARAM", $1->ptr->name);
                            $$ = 1;
                        }
                        | argument_expression_list ',' assignment_expression
                        { 
                            // printf("argument_expression_list -> argument_expression_list , assignment_expression\n");
                            emit ("PARAM", $3->ptr->name);
                            $$ = $1+1;
                        }
                        ;

unary_expression: postfix_expression
                { 
                    // printf("unary_expression -> postfix_expression\n");
                    $$ = $1;
                }
                | PP unary_expression
                { 
                    // printf("unary_expression -> ++ unary_expression\n");
                    emit ("ADD", $2->array->name, $2->array->name, "1");
                    $$ = $2; 
                }
                | MM unary_expression
                { 
                    // printf("unary_expression -> -- unary_expression\n");
                    emit ("SUB", $2->array->name, $2->array->name, "1");
                    $$ = $2;
                }
                | unary_operator cast_expression
                { 
                    // printf("unary_expression -> unary_operator cast_expression\n");
                    $$ = new array();
                    switch ($1) {
                        case '&':
                            $$->array = gentemp((new symType("PTR")));
                            $$->array->type->ptr = $2->array->type; 
                            emit ("ADDRESS", $$->array->name, $2->array->name);
                            break;
                        case '*':
                            $$->cat = "PTR";
                            $$->ptr = gentemp ($2->array->type->ptr);
                            emit ("PTRR", $$->ptr->name, $2->array->name);
                            $$->array = $2->array;
                            break;
                        case '+':
                            $$ = $2;
                            break;
                        case '-':
                            $$->array = gentemp(new symType($2->array->type->type));
                            emit ("UMINUS", $$->array->name, $2->array->name);
                            break;
                        case '~':
                            $$->array = gentemp(new symType($2->array->type->type));
                            emit ("BNOT", $$->array->name, $2->array->name);
                            break;
                        case '!':
                            $$->array = gentemp(new symType($2->array->type->type));
                            emit ("LNOT", $$->array->name, $2->array->name);
                            break;
                        default:
                            break;
                    }
                }
                | SIZEOF unary_expression
                { 
                    // printf("unary_expression -> SIZEOF unary_expression\n"); 
                }
                | SIZEOF '(' type_name ')'
                { 
                    // printf("unary_expression -> SIZEOF ( type_name )\n"); 
                }
                ;

unary_operator: '&'
            { 
                // printf("unary_operator -> &\n");
                $$ = '&';
            } 
            | '*'
            { 
                // printf("unary_operator -> *\n");
                $$ = '+';
            } 
            | '+' 
            { 
                // printf("unary_operator -> +\n"); 
                $$ = '+';
            } 
            | '-'
            { 
                // printf("unary_operator -> -\n");
                $$ = '-';
            } 
            | '~'
            { 
                // printf("unary_operator -> ~\n");
                $$ = '~';
            } 
            | '!'
            { 
                // printf("unary_operator -> !\n");
                $$ = '!';
            } 
            ; 

cast_expression: unary_expression
                { 
                   // printf("cast_expression -> unary_expression\n");
                   $$ = $1; 
                } 
                | '(' type_name ')' cast_expression
                { 
                   // printf("cast_expression -> ( type_name ) cast_expression\n");
                   $$ = $4;
                } 
               ;

multiplicative_expression: cast_expression
                        { 
                            // printf("multiplicative_expression -> cast_expression\n");
                            $$ = new expression();
                            // Array
                            if($1->cat=="ARR") 
                            { 
                                $$->ptr = gentemp($1->ptr->type);
                                emit("ARRR", $$->ptr->name, $1->array->name, $1->ptr->name);
                            }
                            // POINTER
                            else if($1->cat=="PTR") 
                                $$->ptr = $1->ptr;
                            // otherwise
                            else
                                $$->ptr = $1->array;
                            
                        }
                        | multiplicative_expression '*' cast_expression
                        { 
                            // printf("multiplicative_expression -> multiplicative_expression * cast_expression\n");
                            if (typecheck ($1->ptr, $3->array) ) {
                                $$ = new expression();
                                $$->ptr = gentemp(new symType($1->ptr->type->type));
                                emit ("MULT", $$->ptr->name, $1->ptr->name, $3->array->name);
                            }
                            else {
                                cout << "Type Error"<< endl;
                            }
                        }
                        | multiplicative_expression '/' cast_expression
                        { 
                            // printf("multiplicative_expression -> multiplicative_expression / cast_expression\n");
                            if (typecheck ($1->ptr, $3->array) ) {
                                $$ = new expression();
                                $$->ptr = gentemp(new symType($1->ptr->type->type));
                                emit ("DIVIDE", $$->ptr->name, $1->ptr->name, $3->array->name);
                            }
                            else {
                                cout << "Type Error"<< endl;
                            }
                        }
                        | multiplicative_expression '%' cast_expression
                        { 
                            // printf("multiplicative_expression -> multiplicative_expression %% cast_expression\n");
                            if (typecheck ($1->ptr, $3->array) ) {
                                $$ = new expression();
                                $$->ptr = gentemp(new symType($1->ptr->type->type));
                                emit ("MODOP", $$->ptr->name, $1->ptr->name, $3->array->name);
                            }
                            else {
                                cout << "Type Error"<< endl;
                            }
                        }
                        ;

additive_expression: multiplicative_expression
                    { 
                       // printf("additive_expression -> multiplicative_expression\n");
                       $$ = $1;
                    }
                    | additive_expression '+' multiplicative_expression
                    { 
                       // printf("additive_expression -> additive_expression + multiplicative_expression\n");
                       if (typecheck ($1->ptr, $3->ptr) ) {
                            $$ = new expression();
                            $$->ptr = gentemp(new symType($1->ptr->type->type));
                            emit ("ADD", $$->ptr->name, $1->ptr->name, $3->ptr->name);
                        }
                        else cout << "Type Error"<< endl;
                    }
                    | additive_expression '-' multiplicative_expression
                    { 
                       // printf("additive_expression -> additive_expression - multiplicative_expression\n");
                       if (typecheck ($1->ptr, $3->ptr) ) {
                            $$ = new expression();
                            $$->ptr = gentemp(new symType($1->ptr->type->type));
                            emit ("SUB", $$->ptr->name, $1->ptr->name, $3->ptr->name);
                        }
                        else cout << "Type Error"<< endl;
                    }
                    ;

shift_expression: additive_expression
                { 
                    // printf("shift_expression -> additive_expression\n");
                    $$ = $1; 
                }
                | shift_expression LS additive_expression
                { 
                    // printf("shift_expression -> shift_expression << additive_expression\n");
                    if ($3->ptr->type->type == "INTEGER") {
                        $$ = new expression();
                        $$->ptr = gentemp (new symType("INTEGER"));
                        emit ("LEFTOP", $$->ptr->name, $1->ptr->name, $3->ptr->name);
                    }
                    else cout << "Type Error"<< endl;    
                }
                | shift_expression RS additive_expression
                { 
                    // printf("shift_expression -> shift_expression >> additive_expression\n");
                    if ($3->ptr->type->type == "INTEGER") {
                        $$ = new expression();
                        $$->ptr = gentemp (new symType("INTEGER"));
                        emit ("RIGHTOP", $$->ptr->name, $1->ptr->name, $3->ptr->name);
                    }
                    else cout << "Type Error"<< endl;
                }
                ;

relational_expression: shift_expression
                    { 
                        // printf("relational_expression -> shift_expression\n");
                        $$ = $1;
                    }
                    | relational_expression '<' shift_expression
                    { 
                        // printf("relational_expression -> relational_expression < shift_expression\n");
                        if (typecheck ($1->ptr, $3->ptr) ) {
                            $$ = new expression();
                            $$->type = "BOOL";

                            $$->truelist = makelist (nextinstr());
                            $$->falselist = makelist (nextinstr()+1);
                            emit("LT", "", $1->ptr->name, $3->ptr->name);
                            emit ("GOTOOP", "");
                        }
                        else cout << "Type Error"<< endl;
                    }
                    | relational_expression '>' shift_expression
                    { 
                        // printf("relational_expression -> relational_expression > shift_expression\n");
                        if (typecheck ($1->ptr, $3->ptr) ) {
                            $$ = new expression();
                            $$->type = "BOOL";

                            $$->truelist = makelist (nextinstr());
                            $$->falselist = makelist (nextinstr()+1);
                            emit("GT", "", $1->ptr->name, $3->ptr->name);
                            emit ("GOTOOP", "");
                        }
                        else cout << "Type Error"<< endl;
                    }
                    | relational_expression LE shift_expression
                    { 
                        // printf("relational_expression -> relational_expression <= shift_expression\n");
                        if (typecheck ($1->ptr, $3->ptr) ) {
                            $$ = new expression();
                            $$->type = "BOOL";

                            $$->truelist = makelist (nextinstr());
                            $$->falselist = makelist (nextinstr()+1);
                            emit("LE", "", $1->ptr->name, $3->ptr->name);
                            emit ("GOTOOP", "");
                        }
                        else cout << "Type Error"<< endl;
                    }
                    | relational_expression GE shift_expression
                    { 
                        // printf("relational_expression -> relational_expression >= shift_expression\n");
                        if (typecheck ($1->ptr, $3->ptr) ) {
                            $$ = new expression();
                            $$->type = "BOOL";

                            $$->truelist = makelist (nextinstr());
                            $$->falselist = makelist (nextinstr()+1);
                            emit("GE", "", $1->ptr->name, $3->ptr->name);
                            emit ("GOTOOP", "");
                        }
                        else cout << "Type Error"<< endl;
                    }
                    ;

equality_expression: relational_expression
                    { 
                       // printf("equality_expression -> relational_expression\n");
                       $$ = $1;
                    }
                    | equality_expression EE relational_expression
                    { 
                        // printf("equality_expression -> equality_expression == relational_expression\n");
                        if (typecheck ($1->ptr, $3->ptr)) {
                            convert_bool_to_int ($1);
                            convert_bool_to_int ($3);

                            $$ = new expression();
                            $$->type = "BOOL";

                            $$->truelist = makelist (nextinstr());
                            $$->falselist = makelist (nextinstr()+1);
                            emit("EQOP", "", $1->ptr->name, $3->ptr->name);
                            emit ("GOTOOP", "");
                        }
                        else cout << "Type Error"<< endl;
                    }
                    | equality_expression NE relational_expression
                    { 
                        // printf("equality_expression -> equality_expression != relational_expression\n");
                        if (typecheck ($1->ptr, $3->ptr) ) {
                            // If any is bool get its value
                            convert_bool_to_int ($1);
                            convert_bool_to_int ($3);

                            $$ = new expression();
                            $$->type = "BOOL";

                            $$->truelist = makelist (nextinstr());
                            $$->falselist = makelist (nextinstr()+1);
                            emit("NEOP", "", $1->ptr->name, $3->ptr->name);
                            emit ("GOTOOP", "");
                        }
                        else cout << "Type Error"<< endl;
                    }
                    ;

AND_expression: equality_expression
                { 
                  // printf("AND_expression -> equality_expression\n"); 
                  $$ = $1;
                }
                | AND_expression '&' equality_expression
                { 
                    // printf("AND_expression -> AND_expression & equality_expression\n");
                    if (typecheck ($1->ptr, $3->ptr) ) {
                        // If any is bool get its value
                        convert_bool_to_int ($1);
                        convert_bool_to_int ($3);
                        
                        $$ = new expression();
                        $$->type = "NONBOOL";

                        $$->ptr = gentemp (new symType("INTEGER"));
                        emit ("BAND", $$->ptr->name, $1->ptr->name, $3->ptr->name);
                    }
                    else cout << "Type Error"<< endl;
                }
                ;

exclusive_OR_expression: AND_expression
                        { 
                            // printf("exclusive_OR_expression -> AND_expression\n");
                            $$ = $1;
                        }
                        | exclusive_OR_expression '^' AND_expression
                        { 
                            // printf("exclusive_OR_expression -> exclusive_OR_expression ^ AND_expression\n");
                            if (typecheck ($1->ptr, $3->ptr) ) {
                                // If any is bool get its value
                                convert_bool_to_int ($1);
                                convert_bool_to_int ($3);
                                
                                $$ = new expression();
                                $$->type = "NONBOOL";

                                $$->ptr = gentemp (new symType("INTEGER"));
                                emit ("XOR", $$->ptr->name, $1->ptr->name, $3->ptr->name);
                            }
                            else cout << "Type Error"<< endl;
                        }
                        ;

inclusive_OR_expression: exclusive_OR_expression
                        { 
                            // printf("inclusive_OR_expression -> exclusive_OR_expression\n"); 
                            $$ = $1;
                        }
                        | inclusive_OR_expression '|' exclusive_OR_expression
                        { 
                            // printf("inclusive_OR_expression -> inclusive_OR_expression | exclusive_OR_expression\n"); 
                            if (typecheck ($1->ptr, $3->ptr) ) {
                                // If any is bool get its value
                                convert_bool_to_int ($1);
                                convert_bool_to_int ($3);
                                
                                $$ = new expression();
                                $$->type = "NONBOOL";

                                $$->ptr = gentemp (new symType("INTEGER"));
                                emit ("INOR", $$->ptr->name, $1->ptr->name, $3->ptr->name);
                            }
                            else cout << "Type Error"<< endl;
                        }
                       ;

logical_AND_expression: inclusive_OR_expression
                        { 
                            // printf("logical_AND_expression -> inclusive_OR_expression\n"); 
                        }
                        | logical_AND_expression N AA M inclusive_OR_expression
                        { 
                            // printf("logical_AND_expression -> logical_AND_expression && inclusive_OR_expression\n"); 
                            convert_int_to_bool($5);

                            // convert $1 to bool and backpatch using N
                            backpatch($2->nextlist, nextinstr());
                            convert_int_to_bool($1);

                            $$ = new expression();
                            $$->type = "BOOL";

                            backpatch($1->truelist, $4);
                            $$->truelist = $5->truelist;
                            $$->falselist = merge ($1->falselist, $5->falselist);
                        }
                        ;

logical_OR_expression: logical_AND_expression 
                        { 
                            // printf("logical_OR_expression -> logical_AND_expression\n");
                            $$ = $1; 
                        }
                        | logical_OR_expression N OO M logical_AND_expression
                        { 
                            // printf("logical_OR_expression -> logical_OR_expression || logical_AND_expression\n");
                            convert_int_to_bool($5);

                            // convert $1 to bool and backpatch using N
                            backpatch($2->nextlist, nextinstr());
                            convert_int_to_bool($1);

                            $$ = new expression();
                            $$->type = "BOOL";

                            backpatch ($$->falselist, $4);
                            $$->truelist = merge ($1->truelist, $5->truelist);
                            $$->falselist = $5->falselist;
                        }
                        ;
M:  %empty
    {	// To store the address of the next instruction
		$$ = nextinstr();
	}
    ;

N:  %empty 
    { 	// guard against fallthrough by emitting a goto
		$$  = new statement();
		$$->nextlist = makelist(nextinstr());
		emit ("GOTOOP","");
	}
    ;

conditional_expression: logical_OR_expression
                    { 
                        // printf("conditional_expression -> logical_OR_expression\n"); 
                        $$ = $1;
                    }
                    | logical_OR_expression N '?' M expression N ':' M conditional_expression 
                    { 
                        // printf("conditional_expression -> logical_OR_expression ? expression : conditional_expression\n");
                        $$->ptr = gentemp($5->ptr->type);
                        $$->ptr->update($5->ptr->type);
                        emit("EQUAL", $$->ptr->name, $9->ptr->name);
                        vector<int> l = makelist(nextinstr());
                        emit ("GOTOOP", "");

                        backpatch($6->nextlist, nextinstr());
                        emit("EQUAL", $$->ptr->name, $5->ptr->name);
                        vector<int> m = makelist(nextinstr());
                        l = merge (l, m);
                        emit ("GOTOOP", "");

                        backpatch($2->nextlist, nextinstr());
                        convert_int_to_bool($1);
                        backpatch ($1->truelist, $4);
                        backpatch ($1->falselist, $8);
                        backpatch (l, nextinstr()); 
                    }
                    ;

assignment_expression: conditional_expression
                    { 
                        // printf("assignment_expression -> conditional_expression\n"); 
                        $$ = $1;
                    }
                    | unary_expression assignment_operator assignment_expression
                    { 
                        // printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); 
                        if($1->cat=="ARR") {
                            $3->ptr = conv($3->ptr, $1->type->type);
                            emit("ARRL", $1->array->name, $1->array->name, $3->ptr->name);	
                            }
                        else if($1->cat=="PTR") {
                            emit("PTRL", $1->array->name, $3->ptr->name);	
                            }
                        else{
                            $3->ptr = conv($3->ptr, $1->array->type->type);
                            emit("EQUAL", $1->array->name, $3->ptr->name);
                            }
                        $$ = $3;
                    }
                    ;

assignment_operator: '='
                   { 
                       // printf("assignment_operator -> =\n"); 
                   }
                   | DE 
                   { 
                       // printf("assignment_operator -> /=\n"); 
                   }
                   | PE
                   { 
                       // printf("assignment_operator -> +=\n"); 
                   }
                   | AE
                   { 
                       // printf("assignment_operator -> &=\n"); 
                   }
                   | XE 
                   { 
                       // printf("assignment_operator -> ^=\n"); 
                   }
                   | OE
                   { 
                       // printf("assignment_operator -> |=\n"); 
                   }
                   | RSE 
                   { 
                       // printf("assignment_operator -> >>=\n"); 
                   }
                   | LSE
                   { 
                       // printf("assignment_operator -> <<=\n"); 
                   }
                   | MOD_EQ 
                   { 
                       // printf("assignment_operator -> %%=\n"); 
                   }
                   | MULT_EQ 
                   { 
                       // printf("assignment_operator -> *=\n"); 
                   }
                   | MINUS_EQ 
                   { 
                       // printf("assignment_operator -> -=\n"); 
                   }
                   ;

expression: assignment_expression
            { 
              // printf("expression -> assignment_expression\n"); 
              $$ = $1;
            }
            | expression ',' assignment_expression
            { 
                // printf("expression -> expression , assignment_expression\n"); 
            }
            ;

constant_expression: conditional_expression 
                   { 
                       // printf("constant_expression -> conditional_expression\n"); 
                   }
                   ;

declaration: declaration_specifiers init_declarator_list_opt ';'
           { 
               // printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); 
           }
           ;

init_declarator_list_opt: init_declarator_list
                        { 
                            // printf("init_declarator_list_opt -> init_declarator_list\n"); 
                        }
                        | %empty  
                        { 
                            // printf("init_declarator_list_opt -> %%empty\n"); 
                        }
                        ;

declaration_specifiers: storage_class_specifier declaration_specifiers_opt
                      { 
                          // printf("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); 
                      }
                      | type_specifier declaration_specifiers_opt
                      { 
                          // printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); 
                      }
                      | type_qualifier declaration_specifiers_opt
                      { 
                          // printf("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); 
                      }
                      | function_specifier declaration_specifiers_opt
                      { 
                          // printf("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); 
                      }
                      ;

declaration_specifiers_opt: declaration_specifiers
                          { 
                              // printf("declaration_specifiers_opt -> declaration_specifiers\n"); 
                          }
                          | %empty  
                          { 
                              // printf("declaration_specifiers_opt -> %%empty\n"); 
                          }
                          ;

init_declarator_list: init_declarator
                    { 
                        // printf("init_declarator_list -> init_declarator\n"); 
                    }
                    | init_declarator_list ',' init_declarator
                    { 
                        // printf("init_declarator_list -> init_declarator_list , init_declarator\n"); 
                    }
                    ;

init_declarator: declarator
                { 
                    // printf("init_declarator -> declarator\n"); 
                    $$ = $1;
                }
                | declarator '=' initializer
                { 
                    // printf("init_declarator -> declarator = initializer\n"); 
                    if ($3->initial_value!="") $1->initial_value = $3->initial_value;
		            emit ("EQUAL", $1->name, $3->name);
                }
                ;

storage_class_specifier: EXTERN
                       { 
                           // printf("storage_class_specifier -> EXTERN\n"); 
                       }
                       | STATIC
                       { 
                           // printf("storage_class_specifier -> STATIC\n"); 
                       }
                       ;

type_specifier: VOID
              { 
                  // printf("type_specifier -> VOID\n"); 
              }
              | CHAR
              { 
                  // printf("type_specifier -> CHAR\n"); 
              }
              | SHORT
              { 
                  // printf("type_specifier -> SHORT\n"); 
              }
              | INT
              { 
                  // printf("type_specifier -> INT\n"); 
              }
              | LONG
              { 
                  // printf("type_specifier -> LONG\n"); 
              }
              | FLOAT
              { 
                  // printf("type_specifier -> FLOAT\n"); 
              }
              | DOUBLE
              { 
                  // printf("type_specifier -> DOUBLE\n"); 
              }
              ;

specifier_qualifier_list: type_specifier specifier_qualifier_list_opt
                        { 
                            // printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); 
                        }
                        | type_qualifier specifier_qualifier_list_opt
                        { 
                            // printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); 
                        }
                        ;

specifier_qualifier_list_opt: specifier_qualifier_list
                            { 
                                // printf("specifier_qualifier_list_opt -> specifier_qualifier_list\n"); 
                            }
                            | %empty  
                            { 
                                // printf("specifier_qualifier_list_opt -> %%empty\n"); 
                            }
                            ;

type_qualifier: CONST
              { 
                  // printf("type_qualifier -> CONST\n"); 
              }
              | RESTRICT
              { 
                  // printf("type_qualifier -> RESTRICT\n"); 
              }
              | VOLATILE
              { 
                  // printf("type_qualifier -> VOLATILE\n"); 
              }
              ; 

function_specifier: INLINE
                  { 
                      // printf("function_specifier -> INLINE\n"); 
                  }
                  ;

declarator: pointer direct_declarator
            { 
                // printf("pointer_opt direct_declarator\n"); 
                symType * t = $1;
                while (t->ptr !=NULL) t = t->ptr;
                t->ptr = $2->type;
                $$ = $2->update($1);
            }
            | direct_declarator
            { 
                /* Nothing required */
            }
            ;

direct_declarator: IDENTIFIER
                    { 
                        // printf("direct_declarator -> IDENTIFIER\n"); 
                        $$ = $1->update(new symType(Type));
		                currentSymbol = $$;
                    }
                    | '(' declarator ')'
                    { 
                        // printf("direct_declarator -> ( declarator )\n");
                        $$ = $2; 
                    }
                    | direct_declarator '['  type_qualifier_list assignment_expression ']'
                    {
                        // printf("direct_declarator -> direct_declarator [ type_qualifier_list assignment_expression ]\n");
                    }
                    | direct_declarator '['  type_qualifier_list ']'
                    {
                        // printf("direct_declarator -> direct_declarator [ type_qualifier_list ]\n");
                    }
                    | direct_declarator '[' assignment_expression ']'
                    {
                        // printf("direct_declarator -> direct_declarator [ assignment_expression ]\n");
                        symType * t = $1 -> type;
                        symType * prev = NULL;
                        while (t->type == "ARR") {
                            prev = t;
                            t = t->ptr;
                        }
                        if (prev==NULL) {
                            int temp = atoi($3->ptr->initial_value.c_str());
                            symType* s = new symType("ARR", $1->type, temp);
                            $$ = $1->update(s);
                        }
                        else {
                            prev->ptr =  new symType("ARR", t, atoi($3->ptr->initial_value.c_str()));
                            $$ = $1->update ($1->type);
                        }
                    }
                    | direct_declarator '[' ']'
                    {
                        // printf("direct_declarator -> direct_declarator [ ]\n");
                        symType * t = $1 -> type;
                        symType * prev = NULL;
                        while (t->type == "ARR") {
                            prev = t;
                            t = t->ptr;
                        }
                        if (prev==NULL) {
                            symType* s = new symType("ARR", $1->type, 0);
                            $$ = $1->update(s);
                        }
                        else {
                            prev->ptr =  new symType("ARR", t, 0);
                            $$ = $1->update ($1->type);
                        }
                    }
                    | direct_declarator '[' STATIC type_qualifier_list_opt assignment_expression ']'
                    {
                        // printf("direct_declarator -> direct_declarator [ STATIC type_qualifier_list_opt assignment_expression ]\n");
                    }
                    | direct_declarator '[' type_qualifier_list_opt '*' ']'
                    {
                        // printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]\n"); 
                    }
                    | direct_declarator '(' CT parameter_type_list ')'
                    {
                        // printf("direct_declarator -> direct_declarator ( parameter_type_list )\n"); 
                        table->name = $1->name;

                        if ($1->type->type !="VOID") {
                            symElem* s = table->lookup("return");
                            s->update($1->type);		
                        }
                        $1->nested=table;

                        table->parent = globalTable;
                        changeTable (globalTable);				// Come back to globalsymbol table
                        currentSymbol = $$;
                    }
                    | direct_declarator '(' identifier_list ')'
                    {
                        // printf("direct_declarator -> direct_declarator ( identifier_list )\n");
                    }
                    | direct_declarator '(' CT ')'
                    {
                        // printf("direct_declarator -> direct_declarator ())\n");
                        table->name = $1->name;

                        if ($1->type->type !="VOID") {
                            symElem* s = table->lookup("return");
                            s->update($1->type);		
                        }
                        $1->nested=table;

                        table->parent = globalTable;
                        changeTable (globalTable);				// Come back to globalsymbol table
                        currentSymbol = $$;
                    }
                    | direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
                    { 
                        // printf("direct_declarator -> direct_declarator [ type_qualifier_list STATIC assignment_expression ]\n"); 
                    }
                    ;
CT: %empty 
	{ 															// Used for changing to symbol table for a function
		if (currentSymbol->nested==NULL) changeTable(new symTable(""));	// Function symbol table doesn't already exist
		else {
			changeTable (currentSymbol ->nested);						// Function symbol table already exists
			emit ("LABEL", table->name);
		}
	}
	;

pointer: '*'
        { 
            // printf("pointer -> *\n"); $$ = new symType("PTR"); 
        }
        | '*' type_qualifier_list
        { 
            // printf("pointer -> * type_qualifier_list\n"); 
        }
        | '*' pointer
        { 
            // printf("pointer -> * pointer\n"); $$ = new symType("PTR", $2); 
        }
        | '*' type_qualifier_list pointer
        { 
            // printf("pointer -> * type_qualifier_list pointer\n"); 
        }
        ;

type_qualifier_list_opt: type_qualifier_list
                       { 
                           // printf("type_qualifier_list_opt -> type_qualifier_list\n"); 
                       }
                       | %empty 
                       { 
                           // printf("type_qualifier_list_opt -> %%empty\n"); 
                       }
                       ;

type_qualifier_list: type_qualifier
                   { 
                       // printf("type_qualifier_list -> type_qualifier\n"); 
                   }
                   | type_qualifier_list type_qualifier
                   { 
                       // printf("type_qualifier_list -> type_qualifier_list type_qualifier\n"); 
                   }
                   ;

parameter_type_list: parameter_list
                   { 
                       // printf("parameter_type_list -> parameter_list\n"); 
                   }
                   | parameter_list ',' ELLIPSIS
                   { 
                       // printf("parameter_type_list -> parameter_list , ...\n"); 
                   }
                   ; 

parameter_list: parameter_declaration
              { 
                  // printf("parameter_list -> parameter_declaration\n"); 
              }
              | parameter_list ',' parameter_declaration
              { 
                  // printf("parameter_list -> parameter_list , parameter_declaration\n"); 
              }
              ;

parameter_declaration: declaration_specifiers declarator
                     { 
                         // printf("parameter_declaration -> declaration_specifiers declarator\n"); 
                     }
                     | declaration_specifiers
                     { 
                         // printf("parameter_declaration -> declaration_specifiers\n"); 
                     }
                     ;

identifier_list: IDENTIFIER
               { 
                   // printf("identifier_list -> IDENTIFIER\n"); 
               }
               | identifier_list ',' IDENTIFIER
               { 
                   // printf("identifier_list -> identifier_list , IDENTIFIER\n"); 
               }
               ;

type_name: specifier_qualifier_list
         { 
             // printf("type_name -> specifier_qualifier_list\n"); 
         }
         ;

initializer: assignment_expression
           { 
               // printf("initializer -> assignment_expression\n");
               $$ = $1; 
            }
           | '{' initializer_list '}'
           { 
               // printf("initializer -> { initializer_list }\n"); 
           }
           | '{' initializer_list ',' '}'
           { 
               // printf("initializer -> { initializer_list , }\n"); 
           }
           ;

initializer_list: designation_opt initializer
                { 
                    // printf("initializer_list -> designation_opt initializer\n"); 
                }
                | initializer_list ',' designation_opt initializer
                { 
                    // printf("initializer_list -> initializer_list , designation_opt initializer\n"); 
                }
                ;

designation_opt: designation
               { 
                   // printf("designation_opt -> designation\n"); 
               }
               | %empty 
               { 
                   // printf("designation_opt -> %%empty\n"); 
               }
               ;

designation: designator_list '='
           { 
               // printf("designation -> designator_list =\n"); 
           }
           ;

designator_list: designator
               { 
                   // printf("designator_list -> designator\n"); 
               }
               | designator_list designator
               { 
                   // printf("designator_list -> designator_list designator\n"); 
               }
               ;

designator: '[' constant_expression ']'
          { 
              // printf("designator -> [ constant_expression ]\n"); 
          }
          | '.' IDENTIFIER
          { 
              // printf("designator -> . IDENTIFIER\n"); 
          }
          ;

statement: labeled_statement
        { 
            // printf("statement -> labeled_statement\n"); 
        }
        | compound_statement
        { 
            // printf("statement -> compound_statement\n");
            $$ = $1; 
        }
        | expression_statement
        { 
            // printf("statement -> expression_statement\n"); 
            $$ = new statement();
		    $$->nextlist = $1->nextlist;
        }
        | selection_statement
        { 
            // printf("statement -> selection_statement\n"); 
            $$ = $1;
        }
        | iteration_statement
        { 
            // printf("statement -> iteration_statement\n"); 
            $$ = $1;
        }
        | jump_statement
        { 
            // printf("statement -> jump_statement\n"); 
            $$ = $1;
        }
        ;

labeled_statement: IDENTIFIER ':' statement
                { 
                    // printf("labeled_statement -> IDENTIFIER : statement\n"); 
                    $$ = new statement();
                }
                | CASE constant_expression ':' statement
                { 
                    // printf("labeled_statement -> CASE constant_expression : statement\n"); 
                    $$ = new statement();
                }
                | DEFAULT ':' statement
                { 
                    // printf("labeled_statement -> DEFAULT : statement\n"); 
                    $$ = new statement();
                }
                ;

compound_statement: '{' block_item_list_opt '}'
                { 
                    // printf("compound_statement -> { block_item_list_opt }\n"); 
                    $$ = $2;
                }
                ;

block_item_list_opt: block_item_list
                    { 
                        // printf("block_item_list_opt -> block_item_list\n"); 
                        $$ = new statement();
                    }
                    | %empty 
                    { 
                        // printf("block_item_list_opt -> %%empty\n"); 
                    }
                    ;

block_item_list: block_item
                { 
                    // printf("block_item_list -> block_item\n");
                    $$ = $1;
                }
                | block_item_list M block_item
                { 
                    $$ = $3;
		            backpatch ($1->nextlist, $2);
                    // printf("block_item_list -> block_item_list block_item\n"); 
                }
                ;

block_item: declaration
            { 
                // printf("block_item -> declaration\n");
                $$ = new statement(); 
            }
            | statement
            { 
                // printf("block_item -> statement\n"); 
                $$ = $1;
            }
            ;

expression_statement: expression_opt ';'
                    { 
                        // printf("expression_statement -> expression_opt ;\n"); 
                        $$ = $1;
                    }
                    ;

expression_opt: expression
                { 
                    // printf("expression_opt -> expression\n"); 
                    $$ = new expression();
                }
                | %empty 
                { 
                    // printf("expression_opt -> %%empty\n"); 
                }
                ;

selection_statement: IF '(' expression N ')' M statement N %prec THEN
                    { 
                        // printf("selection_statement -> IF ( expression ) statement\n"); 
                        backpatch ($4->nextlist, nextinstr());
                        convert_int_to_bool($3);
                        $$ = new statement();
                        backpatch ($3->truelist, $6);
                        vector<int> temp = merge ($3->falselist, $7->nextlist);
                        $$->nextlist = merge ($8->nextlist, temp);
                    }
                    | IF '(' expression N ')' M statement N ELSE M statement 
                    { 
                        // printf("selection_statement -> IF ( expression ) statement ELSE statement\n"); 
                        backpatch ($4->nextlist, nextinstr());
                        convert_int_to_bool($3);
                        $$ = new statement();
                        backpatch ($3->truelist, $6);
                        backpatch ($3->falselist, $10);
                        vector<int> temp = merge ($7->nextlist, $8->nextlist);
                        $$->nextlist = merge ($11->nextlist,temp);
                    }
                    | SWITCH '(' expression ')' statement
                    { 
                        // printf("selection_statement -> SWITCH ( expression ) statement\n"); 
                    }
                    ;

iteration_statement: WHILE M '(' expression ')' M statement 
                    { 
                        // printf("iteration_statement -> WHILE ( expression ) statement\n");
                        $$ = new statement();
                        convert_int_to_bool($4);
                        // M1 to go back to boolean again
                        // M2 to go to statement if the boolean is true
                        backpatch($7->nextlist, $2);
                        backpatch($4->truelist, $6);
                        $$->nextlist = $4->falselist;
                        // Emit to prevent fallthrough
                        stringstream strs;
                        strs << $2;
                        string temp_str = strs.str();
                        char* intStr = (char*) temp_str.c_str();
                        string str = string(intStr);

                        emit ("GOTOOP", str); 
                    }
                    | DO M statement M WHILE '(' expression ')' ';' 
                    { 
                        // printf("iteration_statement -> DO statement WHILE ( expression ) ;\n");
                        $$ = new statement();
                        convert_int_to_bool($7);
                        // M1 to go back to statement if expression is true
                        // M2 to go to check expression if statement is complete
                        backpatch ($7->truelist, $2);
                        backpatch ($3->nextlist, $4);

                        // Some bug in the next statement
                        $$->nextlist = $7->falselist; 
                    }
                    | FOR '(' declaration expression_opt ';' M expression_opt ')' M statement 
                    { 
                        // printf("iteration_statement -> FOR ( declaration expression_opt ; expression_opt ) statement\n"); 
                        $$ = new statement();
                        convert_int_to_bool($6);
                        backpatch ($6->truelist, $9);
                        backpatch ($10->nextlist, $6);
                        stringstream strs;
                        strs << $6;
                        string temp_str = strs.str();
                        char* intStr = (char*) temp_str.c_str();
                        string str = string(intStr);

                        emit ("GOTOOP", str);
                        $$->nextlist = $7->falselist;
                    }
                    | FOR '(' expression_opt ';' M expression_opt ';' M expression_opt N ')' M statement  
                    { 
                        // printf("iteration_statement -> FOR ( expression_opt ; expression_opt ; expression_opt ) statement\n"); 
                        $$ = new statement();
                        convert_int_to_bool($6);
                        backpatch ($6->truelist, $12);
                        backpatch ($10->nextlist, $5);
                        backpatch ($13->nextlist, $5);
                        stringstream strs;
                        strs << $8;
                        string temp_str = strs.str();
                        char* intStr = (char*) temp_str.c_str();
                        string str = string(intStr);
                        emit ("GOTOOP", str);
                        $$->nextlist = $6->falselist;
                    }
                    ;

jump_statement: GOTO IDENTIFIER ';'
                { 
                    // printf("jump_statement -> GOTO IDENTIFIER ;\n"); 
                    $$ = new statement();
                }
                | CONTINUE ';'
                { 
                    // printf("jump_statement -> CONTINUE ;\n"); 
                    $$ = new statement();
                }
                | BREAK ';'
                { 
                    // printf("jump_statement -> BREAK ;\n"); 
                    $$ = new statement();
                }
                | RETURN expression ';'
                {
                    // printf("jump_statement -> RETURN expression ;\n");
                    $$ = new statement();
                    emit("RETURN",$2->ptr->name);
                }
                | RETURN ';'
                {
                    $$ = new statement();
                    emit("RETURN","");
                }
                ;

translation_unit: external_declaration
                { 
                    // printf("translation_unit -> external_declaration\n"); 
                }
                | translation_unit external_declaration
                { 
                    // printf("translation_unit -> translation_unit external_declaration\n"); 
                }
                ;

external_declaration: function_definition
                    { 
                        // printf("external_declaration -> function_definition\n"); 
                    }
                    | declaration
                    { 
                        // printf("external_declaration -> declaration\n"); 
                    }
                    ;

function_definition: declaration_specifiers declarator declaration_list CT compound_statement
                    {
                        // printf("function_definition -> declaration_specifiers declarator declaration_list compound_statement\n");
                    }
                    | declaration_specifiers declarator CT compound_statement
                    {
                        // printf("function_definition -> declaration_specifiers declarator compound_statement\n");
                        table->parent = globalTable;
                        changeTable (globalTable);
                    }	
                    ;

declaration_list: declaration
                { 
                    // printf("declaration_list -> declaration\n"); 
                }
                | declaration_list declaration
                { 
                    // printf("declaration_list -> declaration_list declaration\n"); 
                }
                ;


%%

void yyerror(const char *s) {
	printf ("ERROR in line %d: %s -> %s\n", line, s, yytext);
}
