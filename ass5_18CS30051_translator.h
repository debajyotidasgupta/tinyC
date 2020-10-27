/**
 * Authors  : Debajyoti Dasgupta (18CS30051) [debajyotidasgupta6#gmail.com]
 *            Siba Smarak Panigrahi (18CS10069) [sibasmarak.p@gmail.com]
 * Language : C++14
 * Desc     : header file for the translation statements
 * Date     : 24.10.2020
 * Project  : TinyC
 * Course   : CS39003 Compilers Laboratory
 */


#ifndef _TRANSLATE_H
#define _TRANSLATE_H

#include <bits/stdc++.h>

extern  char* yytext;
extern  int yyparse();

using namespace std;
#define lsit list<sym>::iterator
#define listi list<int>
#define lstsym list<sym>

//--------------------------------------------------//
//                  Class Declarations              //
//--------------------------------------------------//

class sym;                                                                                 // stands for an entry in ST
class quad;                                                                                // stands for a single entry in the quad Array
class symtable;                                                                            // stands for ST
class symboltype;                                                                          // stands for the type of a symbol in ST
class quadArray;                                                                           // stands for the Array of quads

typedef sym s;
typedef symboltype symtyp;

//----------------------------------------------//
//              global variables                //
//----------------------------------------------//

extern symtable* ST;                                                                       // denotes the current Symbol Table
extern symtable* globalST;                                                                 // denotes the Global Symbol Table
extern s* currSymbolPtr;                                                                   // denotes the latest encountered symbol
extern quadArray Q;                                                                        // denotes the quad Array
extern basicType bt;                                                                       // denotes the Type ST
extern long long int instr_count;                                                          // denotes count of instr
extern bool debug_on;                                                                      // bool for printing debug output

//----------------------------------------------------------------------//
//      Defination of structure of each element of the symbol table     //
//----------------------------------------------------------------------//
class sym 
{                                                                                          // For an entry in ST, we have
	public:
        string name;                                                                       // denotes the name of the symbol
        symboltype *type;                                                                  // denotes the type of the symbol
        int size;                                                                          // denotes the size of the symbol
        int offset;                                                                        // denotes the offset of symbol in ST
        symtable* nested;                                                                  // points to the nested symbol table
        string val;                                                                        // initial value of the symbol if specified
          
        sym (string , string t="int", symboltype* ptr = NULL, int width = 0);              // constructor
        sym* update(symboltype*); 	                                                       // Method to update different fields of an existing entry.
};

//--------------------------------------------------//
//      Defination of the type of symbol            //
//--------------------------------------------------//
class symboltype 
{                                                                                           // Class to store the type of the symbol
    public:
        string type;                                                                        // stores the type of symbol. 
        int width;                                                                          // stores the size of Array (if we encounter an Array) and it is 1 in default case
        symboltype* arrtype;                                                                // for storing the typr of the array in recursive manner
        
		symboltype(string , symboltype* ptr = NULL, int width = 1);                         // Constructor
};

class symtable 
{ 					//For the Symbol Table Class, we have
	public:
		string name;				//Name of the Table
		int count;					//Count of the temporary variables
		lstsym table; 			//The table of symbols which is essentially a list of sym
		symtable* parent;			//Parent ST of the current ST
		//Constructor
		symtable (string name="NULL");
		//Lookup for a symbol in ST
		s* lookup (string);		
		//Print the ST						
		void print();	
		//Update the ST				            			
		void update();						        			
};
class quad 
{ 			//A single quad has four components:
	public:
		string res;					// Result
		string op;					// Operator
		string arg1;				// Argument 1
		string arg2;				// Argument 2

		//Print the Quad
		void print();	
		void type1();      //common printing types
		void type2();

		//Constructors							
		quad (string , string , string op = "=", string arg2 = "");			
		quad (string , int , string op = "=", string arg2 = "");				
		quad (string , float , string op = "=", string arg2 = "");			
};

class quadArray 
{ 		//Quad Array
	public:
		vector<quad> Array;		                    //Simply an Array (vector) of quads
		//Print the quadArray
		void print();								
};

class basicType 
{                        //To denote a basic type
	public:
		vector<string> type;                    //type name
		vector<int> size;                       //size
		void addType(string ,int );
};

string convertIntToString(int );
string convertFloatToString(float );
void generateSpaces(int );
//Different Attributes for Different Types and Extra Functions

s* gentemp (symboltype* , string init = "");	  //generate a temporary variable and insert it in the current ST

//Emit Functions
void emit(string , string , string arg1="", string arg2 = "");  
void emit(string , string , int, string arg2 = "");		  
void emit(string , string , float , string arg2 = "");   

//Backpatching and related functions
void backpatch (list <int> , int );
listi makelist (int );							    // Make a new list contaninig an integer
listi merge (list<int> &l1, list <int> &l2);		// Merge two lists into a single list

int nextinstr();										// Returns the next instruction number
void update_nextinstr();

void debug();											// Used for printing debugging output
//Type checking and conversion functions
s* convertType(sym*, string);								// for type conversion
bool compareSymbolType(sym* &s1, sym* &s2);				// check for same type of two symbol table entries
bool compareSymbolType(symboltype*, symboltype*);	// check for same type of two symboltype objects
int computeSize (symboltype *);						// calculate size of symbol type
string printType(symboltype *);							// print type of symbol
void changeTable (symtable* );					//to change current table

//Other structures
struct Statement {
	listi nextlist;					//nextlist for Statement
};

struct Array {
	string atype;				//Used for type of Array: may be ptr or arr
	s* loc;					//Location used to compute address of Array
	s* Array;					//pointer to the symbol table entry
	symboltype* type;			//type of the subarr1 generated (important for multidimensional arr1s)
};

struct Expression {
	s* loc;								//pointer to the symbol table entry
	string type; 							//to store whether the expression is of type int or bool or float or char
	listi truelist;						//fruelist for boolean expressions
	listi falselist;					//falselist for boolean expressions
	listi nextlist;						//for statement expressions
};
typedef Expression* Exps;
Exps convertIntToBool(Exps);				// convert int expression to boolean
Exps convertBoolToInt(Exps);				// convert boolean expression to int

#endif