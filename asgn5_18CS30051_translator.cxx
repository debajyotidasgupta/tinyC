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

symTable::symTable(string _name=""):name(_name){}                              // constructor for the symbol table

symElem* symTable::lookup(string _name){                                       // lookup for a symbol in the symbol table
    for(int i=0;i<table.size();i++){                                           // Do a linear search among all the elements
        if(table[i].name==_name)return &table[i];                              // return the address of the element if the match if found
    }
    table.push_back(symElem(_name));                                           // If the element is not found then insert a new entry in the table
    return &table.back();                                                      // return the address of the new table
}

void symTable::print(){}

void symTable::update(){}

symElem::symElem(string name, string t, symType* ptr = NULL, int width = 0){
    symType *cur = new symType(t,ptr,width);
    initial_value = "";
    nested = nullptr;
    offset = 0;
    size = size_type(type);
}

symElem* symElem::update(symType *t){
    type = t;
    size = size_type(t);
    return this;
}













extern FILE* yyin;
// extern int yydebug;

int main(){
    // yydebug = 5;
    yyin = fopen("asgn4_18CS30051_test.c", "r");
    printf("\
            ##############################################\n\
            ##                                          ##\n\
            ##           PARSING STARTS HERE            ##\n\
            ##                                          ##\n\
            ##############################################\n");

    printf("\n\n============================== Parsing line 1 ============================== \n\n");
    yyparse();

     printf("\n\n\
            ##############################################\n\
            ##                                          ##\n\
            ##             PARSING FINISHED             ##\n\
            ##                                          ##\n\
            ##############################################\n");
    return 0;
}