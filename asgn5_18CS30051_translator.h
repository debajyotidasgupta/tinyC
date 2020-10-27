/**
 * Authors  : Debajyoti Dasgupta (18CS30051) [debajyotidasgupta6#gmail.com]
 *            Siba Smarak Panigrahi (18CS10069) [sibasmarak.p@gmail.com]
 * Language : C++14
 * Desc     : header file for the translation statements
 * Date     : 24.10.2020
 * Project  : TinyC
 * Course   : CS39003 Compilers Laboratory
 */

#ifndef TRANSLATOR
#define TRANSLATOR

#include <list>
#include <stack>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

#define CHAR_SIZE           1
#define INT_SIZE            4
#define DOUBLE_SIZE         8
#define POINTER_SIZE        4

extern FILE* yyin;
extern int yyparse();
// extern int yydebug;

//--------------------------------------------------//
//                  Class Declarations              //
//--------------------------------------------------//
class quad;                                                                         // Element in quad array
class symElem;                                                                      // Element in a symbol table
class symType;                                                                      // Type of the Element (in a symbol table)
class quadArray;                                                                    // Array of quads
class symTable;                                                                     // Symbol Table


//----------------------------------------------//
//              global variables                //
//----------------------------------------------//
extern symTable* table;                                                              // Current Symbol Table
extern symTable* globalTable;                                                        // Global Symbol Table
extern quadArray q;                                                                  // Array of Quads
extern symElem* currentSymbol;                                                       // Pointer to just encountered symbol

//----------------------------------------------//
//     Defination of the expression type        //
//----------------------------------------------//
struct expression {
    string type;                                                                     // Storing expression type
    symElem* loc;                                                                    // pointer to the symbol table entry
    symElem* ptr;                                                                    // Pointer to the symbol in the symbol table entry
    vector<int> truelist;                                                            // list of the quads that exit on the true statement for Boolean Expression
    vector<int> falselist;                                                           // list of the quads that exit on the false statement for Boolean Expression
    vector<int> nextlist;                                                            // nextlist of the dangling exit statements
};

//--------------------------------------------------//
//      Defination of the struct of quad element    //
//--------------------------------------------------//

class quad {
public:
    string op;                                                                        // Operator
    string arg1;                                                                      // Argument 1
    string arg2;                                                                      // Argument 2
    string result;                                                                    // Result
    void print();                                                                     // Print Quad
    quad (string result, string op, string arg1, string arg2 = "");                   //constructors
};


//------------------------------------------------------//
//          Class defination for the Symbol Table       //
//------------------------------------------------------//
class symTable {
public:
    string name;                                                                     // Name of Table
    vector<symElem> table;                                                           // The table of symbols
    int tmp;                                                                         // counter for the number of temporaries inserted
    symTable* parent;                                                                // Immediate parent of the symbol table

    symTable (string name="NULL");                                                   // constructor of the symbol table
    symElem* lookup (string name);                                                   // Lookup for a symbol in symbol table
    void print();                                                                    // Print the symbol table
    void update();                                                                   // Update different entries of symbol table
};

//--------------------------------------------------//
//      Defination of the type of symbol            //
//--------------------------------------------------//
class symType {
public:
    string type;                                                                     // Type of the element
    int width;                                                                       // Size of array / number of elements (in case of arrays)
    symType* ptr;                                                                    // pointer to type of the array or pointer for pinter type, 1D and 2D arrays
    symType(string type, symType* ptr = NULL, int width = 1);                        // Constructor
};

//----------------------------------------------------------------------//
//      Defination of structure of each element of the symbol table     //
//----------------------------------------------------------------------//
class symElem {
public:
    string name;                                                                     // Name of the symbol
    symType *type;                                                                   // Type of the Symbol
    string initial_value;                                                            // Symbol initial valus (if any)
    int size;                                                                        // Size of the symbol
    int offset;                                                                      // Offset of symbol
    symTable* nested;                                                                // Pointer to nested symbol table

    symElem (string name, string t="INTEGER", symType* ptr = NULL, int width = 0);   //constructor declaration
    symElem* update(symType *t);                                                     // A method to update different fields of an existing entry.
};

//----------------------------------------------------------//
//          Defination of the quad array type               //
//----------------------------------------------------------//
class quadArray {
public:
    vector <quad> array;                                                             // Array of quad elements
    void print ();                                                                   // Print the quad array
};

//--------------------------------------------------------------//
//          Defination of statements with dangling exits        //
//--------------------------------------------------------------//
struct statement {
    vector<int> nextlist;                                                            // Nextlist for statement
};

//--------------------------------------------------------------//
//          Attributes of the array type element                //
//--------------------------------------------------------------//
struct array {
    string cat;
    symElem* ptr;                                                                    // Temporary used for computing array address
    symElem* array;                                                                  // Pointer to symbol table
    symType* type;                                                                   // type of the subarray generated
};

//------------------------------------------------------------------//
//          Overloaded emit function used by the parser             //
//------------------------------------------------------------------//
void emit(string op, string result, int arg1, string arg2 = "");                     //emits for adding quads to quadArray (arg1 is int)
void emit(string op, string result, float arg1, string arg2 = "");                   //emits for adding quads to quadArray (arg1 is float)
void emit(string op, string result, string arg1="", string arg2 = "");               //emits for adding quads to quadArray

//----------------------------------------------------------------------//
//          Other global functions required for TAC generation          //
//----------------------------------------------------------------------//
symElem* gentemp (symType* t,string init="");                                        // Generate a temporary variable and insert it in current symbol table
symElem* conv (symElem*, string);                                                    // TAC for Type conversion in program
bool typecheck(symElem* &s1, symElem* &s2);                                          // Checks if two symbols have same type
bool typecheck(symType* t1, symType* t2);                                            // Checks if two symtype objects have same type

int size_type (symType*);                                                            // Calculate size of any symbol type
string print_type(symType*);                                                         // For printing type of symbol recursive printing of type

vector<int> makelist (int i);                                                        // Make a new list contaninig an integer
void backpatch (vector<int> lst, int i);                                             // Backpatch all the elements of the list with the given address
vector<int> merge (vector<int> &lst1, list <int> &lst2);                             // Merge two lists into a single list

expression* convert_int_to_bool (expression*);                                       // convert any expression (int) to bool
expression* convert_bool_to_int (expression*);                                       // convert bool to expression (int)
void changeTable (symTable* newtable);                                               // For changing the current sybol table
int nextinstr();                                                                     // Returns the next instruction number

#endif