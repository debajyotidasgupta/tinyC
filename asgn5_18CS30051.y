%{ /* C Declarations and Definitions */
#include <stdio.h>
extern int yylex();
extern int line;
extern char* yytext;
void yyerror(const char*);
%}

/* Add all the tokens */

%token INTEGER_CONST
%token FLOAT_CONST
%token CHAR_CONST
%token STRING


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
%token IDENTIFIER


%start translation_unit

%%

constant: INTEGER_CONST
        { 
                printf("constant -> integer_constant\n"); 
                $$ = gentemp(new symType("INTEGER"), to_string($1));
		emit("EQUAL", $$->name, to_string($1));
        }
        | FLOAT_CONST
        { 
                printf("constant -> float_constant\n");
                $$ = gentemp(new symtype("DOUBLE"), to_string($1));
		emit("EQUAL", $$->name, to_string($1));
        }
        | CHAR_CONST
        { 
                printf("constant -> character_constant\n"); 
                $$ = gentemp(new symtype("CHAR"), $1);
		emit("EQUAL", $$->name, to_string($1));
        }
        ;

primary_expression: IDENTIFIER
                { 
                    $$ = new expression();
                    $$->ptr = $1;
                    $$->type = "NONBOOL";
                    printf("primary_expression -> identifier\n"); 
                }
                | constant
				{ 
                    $$ = new expression();
		        	$$->ptr = $1;
                    printf("primary_expression -> constant\n"); 
                }
                | STRING
                { 
                    $$ = new expression();
					symType* tmp = new symType("PTR");
					$$->ptr = gentemp(tmp, $1);
					$$->ptr->type->ptr = new symType("CHAR");
					printf("primary_expression -> string\n"); 
                }
                | '(' expression ')'
                {
                    $$ = $2; 
                    printf("primary_expression -> ( expression )\n"); 
                }
                ;

postfix_expression: primary_expression
                { 
                    printf("postfix_expression -> primary_expression\n");
                    $$ = new array ();
					$$->array = $1->ptr;
					$$->loc = $$->array;
					$$->type = $1->ptr->type; 
                }
                | postfix_expression '[' expression ']'
                { 
                        printf("postfix_expression -> postfix_expression [ expression ]\n"); 
                        $$ = new array();
                        $$->array = $1->ptr;					// copy the base
                        $$->type = $1->type->ptr;				// type = type of element
                        $$->ptr = gentemp(new symtype("INTEGER"));		// store computed address
                        
                        // New address = (if only) already computed + $3 * new width
						
                        if ($1->cat=="ARR") 
						{						
								// if already computed
                                sym* t = gentemp(new symType("INTEGER"));
                                stringstream strs;
                                strs << size_type($$->type);
                                string temp_str = strs.str();
                                char* intStr = (char*) temp_str.c_str();
                                string str = string(intStr);				
                                emit ("MULT", t->name, $3->ptr->name, str);
                                emit ("ADD", $$->ptr->name, $1->ptr->name, t->name);
                        }
                        else 
						{
                                stringstream strs;
                                strs << size_type($$->type);
                                string temp_str = strs.str();
                                char* intStr1 = (char*) temp_str.c_str();
                                string str1 = string(intStr1);		
                                emit("MULT", $$->ptr->name, $3->ptr->name, str1);
                        }

                        // Mark that it contains array address and first time computation is done
                        $$->cat = "ARR";
                }
                | postfix_expression '(' argument_expression_list_opt ')'
                { 
                        printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n");
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
                { printf("postfix_expression -> postfix_expression . IDENTIFIER\n"); }
                | postfix_expression ARROW IDENTIFIER
                { printf("postfix_expression -> postfix_expression -> IDENTIFIER\n"); }
                | postfix_expression PP
                { 
                    printf("postfix_expression -> postfix_expression ++\n");
                    $$ = new array();

                    // copy $1 to $$
                    $$->array = gentemp($1->array->type);
                    emit ("EQUAL", $$->array->name, $1->array->name);
					// Increment $1
                    emit ("ADD", $1->array->name, $1->array->name, "1");
                }
                | postfix_expression MM
                { 
                    printf("postfix_expression -> postfix_expression --\n");
                    $$ = new array();

                    // copy $1 to $$
                    $$->array = gentemp($1->array->type);
                    emit ("EQUAL", $$->array->name, $1->array->name);
					// Increment $1
                    emit ("SUB", $1->array->name, $1->array->name, "1");
                }
                | '(' type_name ')' '{' initializer_list '}'
                { 
					printf("postfix_expression -> ( type_name ) { initializer_list }\n"); 
					$$ = new array();
					$$->array = gentemp(new symtype("INTEGER"));
					$$->ptr = gentemp(new symtype("INTEGER"));
				}
                | '(' type_name ')' '{' initializer_list ',' '}'
                { 
					printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); 
					$$ = new array();
					$$->array = gentemp(new symtype("INTEGER"));
					$$->ptr = gentemp(new symtype("INTEGER"));
				}
                ;

argument_expression_list_opt: argument_expression_list
                            {   printf("argument_expression_list_opt -> argument_expression_list\n"); 
                                $$ = new array();

                                // copy $1 to $$
                                $$->array = gentemp($1->array->type);
                            }
                            | %empty  
                            { printf("argument_expression_list_opt -> %%empty\n"); }
                            ;

argument_expression_list: assignment_expression
                        { printf("argument_expression_list -> assignment_expression\n"); }
                        | argument_expression_list ',' assignment_expression
                        { printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); }
                        ;

unary_expression: postfix_expression
                { printf("unary_expression -> postfix_expression\n"); }
                | PP unary_expression
                { printf("unary_expression -> ++ unary_expression\n"); }
                | MM unary_expression
                { printf("unary_expression -> -- unary_expression\n"); }
                | unary_operator cast_expression
                { printf("unary_expression -> unary_operator cast_expression\n"); }
                | SIZEOF unary_expression
                { printf("unary_expression -> SIZEOF unary_expression\n"); }
                | SIZEOF '(' type_name ')'
                { printf("unary_expression -> SIZEOF ( type_name )\n"); }
                ;

unary_operator: '&'
              { printf("unary_operator -> &\n"); } 
              | '*'
              { printf("unary_operator -> *\n"); } 
              | '+' 
              { printf("unary_operator -> +\n"); } 
              | '-'
              { printf("unary_operator -> -\n"); } 
              | '~'
              { printf("unary_operator -> ~\n"); } 
              | '!'
              { printf("unary_operator -> !\n"); } 
              ; 

cast_expression: unary_expression
               { printf("cast_expression -> unary_expression\n"); } 
               | '(' type_name ')' cast_expression
               { printf("cast_expression -> ( type_name ) cast_expression\n"); } 
               ;

multiplicative_expression: cast_expression
                         { printf("multiplicative_expression -> cast_expression\n"); }
                         | multiplicative_expression '*' cast_expression
                         { printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }
                         | multiplicative_expression '/' cast_expression
                         { printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }
                         | multiplicative_expression '%' cast_expression
                         { printf("multiplicative_expression -> multiplicative_expression %% cast_expression\n"); }
                         ;

additive_expression: multiplicative_expression
                   { printf("additive_expression -> multiplicative_expression\n"); }
                   | additive_expression '+' multiplicative_expression
                   { printf("additive_expression -> additive_expression + multiplicative_expression\n"); }
                   | additive_expression '-' multiplicative_expression
                   { printf("additive_expression -> additive_expression - multiplicative_expression\n"); }
                   ;

shift_expression: additive_expression
                { printf("shift_expression -> additive_expression\n"); }
                | shift_expression LS additive_expression
                { printf("shift_expression -> shift_expression << additive_expression\n"); }
                | shift_expression RS additive_expression
                { printf("shift_expression -> shift_expression >> additive_expression\n"); }
                ;

relational_expression: shift_expression
                     { printf("relational_expression -> shift_expression\n"); }
                     | relational_expression '<' shift_expression
                     { printf("relational_expression -> relational_expression < shift_expression\n"); }
                     | relational_expression '>' shift_expression
                     { printf("relational_expression -> relational_expression > shift_expression\n"); }
                     | relational_expression LE shift_expression
                     { printf("relational_expression -> relational_expression <= shift_expression\n"); }
                     | relational_expression GE shift_expression
                     { printf("relational_expression -> relational_expression >= shift_expression\n"); }
                     ;

equality_expression: relational_expression
                   { printf("equality_expression -> relational_expression\n"); }
                   | equality_expression EE relational_expression
                   { printf("equality_expression -> equality_expression == relational_expression\n"); }
                   | equality_expression NE relational_expression
                   { printf("equality_expression -> equality_expression != relational_expression\n"); }
                   ;

AND_expression: equality_expression
              { printf("AND_expression -> equality_expression\n"); }
              | AND_expression '&' equality_expression
              { printf("AND_expression -> AND_expression & equality_expression\n"); }
              ;

exclusive_OR_expression: AND_expression
                       { printf("exclusive_OR_expression -> AND_expression\n"); }
                       | exclusive_OR_expression '^' AND_expression
                       { printf("exclusive_OR_expression -> exclusive_OR_expression ^ AND_expression\n"); }
                       ;

inclusive_OR_expression: exclusive_OR_expression
                       { printf("inclusive_OR_expression -> exclusive_OR_expression\n"); }
                       | inclusive_OR_expression '|' exclusive_OR_expression
                       { printf("inclusive_OR_expression -> inclusive_OR_expression | exclusive_OR_expression\n"); }
                       ;

logical_AND_expression: inclusive_OR_expression
                      { printf("logical_AND_expression -> inclusive_OR_expression\n"); }
                      | logical_AND_expression AA inclusive_OR_expression
                      { printf("logical_AND_expression -> logical_AND_expression && inclusive_OR_expression\n"); }
                      ;

logical_OR_expression: logical_AND_expression 
                     { printf("logical_OR_expression -> logical_AND_expression\n"); }
                     | logical_OR_expression OO logical_AND_expression
                     { printf("logical_OR_expression -> logical_OR_expression || logical_AND_expression\n"); }
                     ;

conditional_expression: logical_OR_expression
                      { printf("conditional_expression -> logical_OR_expression\n"); }
                      | logical_OR_expression '?' expression ':' conditional_expression
                      { printf("conditional_expression -> logical_OR_expression ? expression : conditional_expression\n"); }
                      ;

assignment_expression: conditional_expression
                     { printf("assignment_expression -> conditional_expression\n"); }
                     | unary_expression assignment_operator assignment_expression
                     { printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
                     ;

assignment_operator: '='
                   { printf("assignment_operator -> =\n"); }
                   | DE 
                   { printf("assignment_operator -> /=\n"); }
                   | PE
                   { printf("assignment_operator -> +=\n"); }
                   | AE
                   { printf("assignment_operator -> &=\n"); }
                   | XE 
                   { printf("assignment_operator -> ^=\n"); }
                   | OE
                   { printf("assignment_operator -> |=\n"); }
                   | RSE 
                   { printf("assignment_operator -> >>=\n"); }
                   | LSE
                   { printf("assignment_operator -> <<=\n"); }
                   | MOD_EQ 
                   { printf("assignment_operator -> %%=\n"); }
                   | MULT_EQ 
                   { printf("assignment_operator -> *=\n"); }
                   | MINUS_EQ 
                   { printf("assignment_operator -> -=\n"); }
                   ;

expression: assignment_expression
          { printf("expression -> assignment_expression\n"); }
          | expression ',' assignment_expression
          { printf("expression -> expression , assignment_expression\n"); }
          ;

constant_expression: conditional_expression 
                   { printf("constant_expression -> conditional_expression\n"); }
                   ;

declaration: declaration_specifiers init_declarator_list_opt ';'
           { printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
           ;

init_declarator_list_opt: init_declarator_list
                        { printf("init_declarator_list_opt -> init_declarator_list\n"); }
                        | %empty  
                        { printf("init_declarator_list_opt -> %%empty\n"); }
                        ;

declaration_specifiers: storage_class_specifier declaration_specifiers_opt
                      { printf("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); }
                      | type_specifier declaration_specifiers_opt
                      { printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }
                      | type_qualifier declaration_specifiers_opt
                      { printf("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); }
                      | function_specifier declaration_specifiers_opt
                      { printf("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); }
                      ;

declaration_specifiers_opt: declaration_specifiers
                          { printf("declaration_specifiers_opt -> declaration_specifiers\n"); }
                          | %empty  
                          { printf("declaration_specifiers_opt -> %%empty\n"); }
                          ;

init_declarator_list: init_declarator
                    { printf("init_declarator_list -> init_declarator\n"); }
                    | init_declarator_list ',' init_declarator
                    { printf("init_declarator_list -> init_declarator_list , init_declarator\n"); }
                    ;

init_declarator: declarator
               { printf("init_declarator -> declarator\n"); }
               | declarator '=' initializer
               { printf("init_declarator -> declarator = initializer\n"); }
               ;

storage_class_specifier: EXTERN
                       { printf("storage_class_specifier -> EXTERN\n"); }
                       | STATIC
                       { printf("storage_class_specifier -> STATIC\n"); }
                       ;

type_specifier: VOID
              { printf("type_specifier -> VOID\n"); }
              | CHAR
              { printf("type_specifier -> CHAR\n"); }
              | SHORT
              { printf("type_specifier -> SHORT\n"); }
              | INT
              { printf("type_specifier -> INT\n"); }
              | LONG
              { printf("type_specifier -> LONG\n"); }
              | FLOAT
              { printf("type_specifier -> FLOAT\n"); }
              | DOUBLE
              { printf("type_specifier -> DOUBLE\n"); }
              ;

specifier_qualifier_list: type_specifier specifier_qualifier_list_opt
                        { printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }
                        | type_qualifier specifier_qualifier_list_opt
                        { printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); }
                        ;

specifier_qualifier_list_opt: specifier_qualifier_list
                            { printf("specifier_qualifier_list_opt -> specifier_qualifier_list\n"); }
                            | %empty  
                            { printf("specifier_qualifier_list_opt -> %%empty\n"); }
                            ;

type_qualifier: CONST
              { printf("type_qualifier -> CONST\n"); }
              | RESTRICT
              { printf("type_qualifier -> RESTRICT\n"); }
              | VOLATILE
              { printf("type_qualifier -> VOLATILE\n"); }
              ; 

function_specifier: INLINE
                  { printf("function_specifier -> INLINE\n"); }
                  ;

declarator: pointer_opt direct_declarator
          { printf("pointer_opt direct_declarator\n"); }
          ;

pointer_opt: pointer
           { printf("pointer_opt -> pointer\n"); }
           | %empty  
           { printf("pointer_opt -> %%empty\n"); }
           ;

direct_declarator: IDENTIFIER
                 { printf("direct_declarator -> IDENTIFIER\n"); }
                 | '(' declarator ')'
                 { printf("direct_declarator -> ( declarator )\n"); }
                 | direct_declarator '[' type_qualifier_list_opt assignment_expression_opt ']'
                 { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]\n"); }
                 | direct_declarator '[' STATIC type_qualifier_list_opt assignment_expression ']'
                 { printf("direct_declarator -> direct_declarator [ STATIC type_qualifier_list_opt assignment_expression ]\n"); }
                 | direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
                 { printf("direct_declarator -> direct_declarator [ type_qualifier_list STATIC assignment_expression ]\n"); }
                 | direct_declarator '[' type_qualifier_list_opt '*' ']'
                 { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]\n"); }
                 | direct_declarator '(' parameter_type_list ')'
                 { printf("direct_declarator -> direct_declarator ( parameter_type_list )\n"); }
                 | direct_declarator '(' identifier_list_opt ')'
                 { printf("direct_declarator -> direct_declarator ( identifier_list_opt )\n"); }
                 ;

assignment_expression_opt: assignment_expression
                         { printf("assignment_expression_opt -> assignment_expression\n"); }
                         | %empty 
                         { printf("assignment_expression_opt -> %%empty\n"); }
                         ;

identifier_list_opt: identifier_list
                   { printf("identifier_list_opt -> identifier_list\n"); }
                   | %empty 
                   { printf("identifier_list_opt -> %%empty\n"); }
                   ;

pointer: '*' type_qualifier_list_opt
       { printf("pointer -> * type_qualifier_list_opt\n"); }
       | '*' type_qualifier_list_opt pointer
       { printf("pointer -> * type_qualifier_list_opt pointer\n"); }
       ;

type_qualifier_list_opt: type_qualifier_list
                       { printf("type_qualifier_list_opt -> type_qualifier_list\n"); }
                       | %empty 
                       { printf("type_qualifier_list_opt -> %%empty\n"); }
                       ;

type_qualifier_list: type_qualifier
                   { printf("type_qualifier_list -> type_qualifier\n"); }
                   | type_qualifier_list type_qualifier
                   { printf("type_qualifier_list -> type_qualifier_list type_qualifier\n"); }
                   ;

parameter_type_list: parameter_list
                   { printf("parameter_type_list -> parameter_list\n"); }
                   | parameter_list ',' ELLIPSIS
                   { printf("parameter_type_list -> parameter_list , ...\n"); }
                   ; 

parameter_list: parameter_declaration
              { printf("parameter_list -> parameter_declaration\n"); }
              | parameter_list ',' parameter_declaration
              { printf("parameter_list -> parameter_list , parameter_declaration\n"); }
              ;

parameter_declaration: declaration_specifiers declarator
                     { printf("parameter_declaration -> declaration_specifiers declarator\n"); }
                     | declaration_specifiers
                     { printf("parameter_declaration -> declaration_specifiers\n"); }
                     ;

identifier_list: IDENTIFIER
               { printf("identifier_list -> IDENTIFIER\n"); }
               | identifier_list ',' IDENTIFIER
               { printf("identifier_list -> identifier_list , IDENTIFIER\n"); }
               ;

type_name: specifier_qualifier_list
         { printf("type_name -> specifier_qualifier_list\n"); }
         ;

initializer: assignment_expression
           { printf("initializer -> assignment_expression\n"); }
           | '{' initializer_list '}'
           { printf("initializer -> { initializer_list }\n"); }
           | '{' initializer_list ',' '}'
           { printf("initializer -> { initializer_list , }\n"); }
           ;

initializer_list: designation_opt initializer
                { printf("initializer_list -> designation_opt initializer\n"); }
                | initializer_list ',' designation_opt initializer
                { printf("initializer_list -> initializer_list , designation_opt initializer\n"); }
                ;

designation_opt: designation
               { printf("designation_opt -> designation\n"); }
               | %empty 
               { printf("designation_opt -> %%empty\n"); }
               ;

designation: designator_list '='
           { printf("designation -> designator_list =\n"); }
           ;

designator_list: designator
               { printf("designator_list -> designator\n"); }
               | designator_list designator
               { printf("designator_list -> designator_list designator\n"); }
               ;

designator: '[' constant_expression ']'
          { printf("designator -> [ constant_expression ]\n"); }
          | '.' IDENTIFIER
          { printf("designator -> . IDENTIFIER\n"); }
          ;

statement: labeled_statement
         { printf("statement -> labeled_statement\n"); }
         | compound_statement
         { printf("statement -> compound_statement\n"); }
         | expression_statement
         { printf("statement -> expression_statement\n"); }
         | selection_statement
         { printf("statement -> selection_statement\n"); }
         | iteration_statement
         { printf("statement -> iteration_statement\n"); }
         | jump_statement
         { printf("statement -> jump_statement\n"); }
         ;

labeled_statement: IDENTIFIER ':' statement
                 { printf("labeled_statement -> IDENTIFIER : statement\n"); }
                 | CASE constant_expression ':' statement
                 { printf("labeled_statement -> CASE constant_expression : statement\n"); }
                 | DEFAULT ':' statement
                 { printf("labeled_statement -> DEFAULT : statement\n"); }
                 ;

compound_statement: '{' block_item_list_opt '}'
                  { printf("compound_statement -> { block_item_list_opt }\n"); }
                  ;

block_item_list_opt: block_item_list
                   { printf("block_item_list_opt -> block_item_list\n"); }
                   | %empty 
                   { printf("block_item_list_opt -> %%empty\n"); }
                   ;

block_item_list: block_item
               { printf("block_item_list -> block_item\n"); }
               | block_item_list block_item
               { printf("block_item_list -> block_item_list block_item\n"); }
               ;

block_item: declaration
          { printf("block_item -> declaration\n"); }
          | statement
          { printf("block_item -> statement\n"); }
          ;

expression_statement: expression_opt ';'
                    { printf("expression_statement -> expression_opt ;\n"); }
                    ;

expression_opt: expression
              { printf("expression_opt -> expression\n"); }
              | %empty 
              { printf("expression_opt -> %%empty\n"); }
              ;

selection_statement: IF '(' expression ')' statement
                   { printf("selection_statement -> IF ( expression ) statement\n"); }
                   | IF '(' expression ')' statement ELSE statement
                   { printf("selection_statement -> IF ( expression ) statement ELSE statement\n"); }
                   | SWITCH '(' expression ')' statement
                   { printf("selection_statement -> SWITCH ( expression ) statement\n"); }
                   ;

iteration_statement: WHILE '(' expression ')' statement
                   { printf("iteration_statement -> WHILE ( expression ) statement\n"); }
                   | DO statement WHILE '(' expression ')' ';'
                   { printf("iteration_statement -> DO statement WHILE ( expression ) ;\n"); }
                   | FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement
                   { printf("iteration_statement -> FOR ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }
                   | FOR '(' declaration expression_opt ';' expression_opt ')' statement
                   { printf("iteration_statement -> FOR ( declaration expression_opt ; expression_opt ) statement\n"); }
                   ;

jump_statement: GOTO IDENTIFIER ';'
              { printf("jump_statement -> GOTO IDENTIFIER ;\n"); }
              | CONTINUE ';'
              { printf("jump_statement -> CONTINUE ;\n"); }
              | BREAK ';'
              { printf("jump_statement -> BREAK ;\n"); }
              | RETURN expression_opt ';'
              { printf("jump_statement -> RETURN expression_opt ;\n"); }
              ;

translation_unit: external_declaration
                { printf("translation_unit -> external_declaration\n"); }
                | translation_unit external_declaration
                { printf("translation_unit -> translation_unit external_declaration\n"); }
                ;

external_declaration: function_definition
                    { printf("external_declaration -> function_definition\n"); }
                    | declaration
                    { printf("external_declaration -> declaration\n"); }
                    ;

function_definition: declaration_specifiers declarator declaration_list_opt compound_statement
                   { printf("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); }
                   ;

declaration_list_opt: declaration_list
                    { printf("declaration_list_opt -> declaration_list\n"); }
                    | %empty 
                    { printf("declaration_list_opt -> %%empty\n"); }
                    ;

declaration_list: declaration
                { printf("declaration_list -> declaration\n"); }
                | declaration_list declaration
                { printf("declaration_list -> declaration_list declaration\n"); }
                ;


%%

void yyerror(const char *s) {
	printf ("ERROR in line %d: %s -> %s\n", line, s, yytext);
}
