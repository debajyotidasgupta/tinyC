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


//--------------------------------------------------//
//      Implementation of the quad functions        //
//--------------------------------------------------//
quad::quad(string _result, string _op, string _arg1, string _arg2 = ""):
    result(_result),arg1(_arg1),arg2(_arg2),op(_op){}                          // constructor defination

//------------------------------------------------------//
//      Implementation of the Symbol Table functions    //
//------------------------------------------------------//

symTable::symTable(string _name=""):name(_name){}                              // constructor for the symbol table

symElem* symTable::lookup(string _name){                                       // lookup for a symbol in the symbol table
    for(int i=0;i<table.size();i++){                                           // Do a linear search among all the elements
        if(table[i].name==_name)return &table[i];                              // return the address of the element if the match if found
    }
    table.push_back(symElem(_name));                                           // If the element is not found then insert a new entry in the table
    return &table.back();                                                      // return the address of the new table
}

void symTable::print(){}

void symTable::update(){                                                       // Update the offsets of the tables
	int _offset = 0;                                                           // initial offset will be 0
	for (symElem &it:table) {                                                  // iterate through all elements in the symbol table
		it.offset = _offset;                                                   // update the offset for the current entry
		_offset += it.size;                                                    // update the offset for next value
		if (it.nested!=NULL) it.nested->update();                              // recursively update the nested tables as well
	}
}

//-----------------------------------------------------------//
//      Implementation of the Symbol Type Class functions    //
//-----------------------------------------------------------//

symType::symType(string type, symType* ptr, int width): type (type), 
                                                        ptr (ptr), 
                                                        width (width) {};       // Construictor for the type of the sumbol

//--------------------------------------------------------------//
//      Implementation of the Symbol Element Class functions    //
//--------------------------------------------------------------//

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

//--------------------------------------------------------------//
//        Implementation of the Quad Array Class functions      //
//--------------------------------------------------------------//

void quadArray::print() {}

//------------------------------------------------------------------//
//          Overloaded emit function used by the parser             //
//------------------------------------------------------------------//

void emit(string op, string result, string arg1, string arg2) {
	q.array.push_back(quad(result,op,arg1,arg2));
}

void emit(string op, string result, int arg1, string arg2) {
	q.array.push_back(quad(result,op,to_string(arg1),arg2));
}

void emit(string op, string result, float arg1, string arg2) {
	q.array.push_back(quad(result,op,to_string(arg1),arg2));
}

//----------------------------------------------------------------------//
//          Other global functions required for TAC generation          //
//----------------------------------------------------------------------//

symElem* conv (symElem* s, string t) {
	symElem* temp = gentemp(new symType(t));
	if (s->type->type=="INTEGER" ) {
		if (t=="DOUBLE") {
			emit ("EQUAL", temp->name, "int_to_double(" + s->name + ")");
			return temp;
		}
		else if (t=="CHAR") {
			emit ("EQUAL", temp->name, "int_to_char(" + s->name + ")");
			return temp;
		}
		return s;
	}
	else if (s->type->type=="DOUBLE" ) {
		if (t=="INTEGER") {
			emit ("EQUAL", temp->name, "double_to_int(" + s->name + ")");
			return temp;
		}
		else if (t=="CHAR") {
			emit ("EQUAL", temp->name, "double_to_char(" + s->name + ")");
			return temp;
		}
		return s;
	}
	else if (s->type->type=="CHAR") {
		if (t=="INTEGER") {
				emit ("EQUAL", temp->name, "char_to_int(" + s->name + ")");
				return temp;
			}
		if (t=="DOUBLE") {
				emit ("EQUAL", temp->name, "char_to_double(" + s->name + ")");
				return temp;
			}
		return s;
	}
	return s;
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