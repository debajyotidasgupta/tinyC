#include <sstream>
#include "asgn5_18CS30051_translator.h"

using namespace std;


//----------------------------------------------//
//              global variables                //
//          (Referance from the headers)        //
//----------------------------------------------//
symTable* table;                                                              // Current Symbol Table
symTable* globalTable;                                                        // Global Symbol Table
quadArray q;                                                                  // Array of Quads
symElem* currentSymbol;                                                       // Pointer to just encountered symbol

quad::quad(string _result, string _op, string _arg1, string _arg2 = ""):
    result(_result),arg1(_arg1),arg2(_arg2),op(_op){}                          // constructor defination



int main(){

}