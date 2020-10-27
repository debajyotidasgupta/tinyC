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
quad::quad(string _result, string _op, string _arg1, string _arg2):
    result(_result),arg1(_arg1),arg2(_arg2),op(_op){}                          // constructor defination

//------------------------------------------------------//
//      Implementation of the Symbol Table functions    //
//------------------------------------------------------//

symTable::symTable(string _name):name(_name),tmp(0){}                          // constructor for the symbol table

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

symElem::symElem(string name, string t, symType* ptr, int width){
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

symElem* gentemp (symType* t, string init) {
    char n[10];
    sprintf(n, "t%02d", table->tmp++);
    symElem s(n);
    s.type = t;
    s.size=size_type(t);
    s.initial_value = init;
    table->table.push_back (s);
    return &table->table.back();
}

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

bool typecheck(symElem*& s1, symElem*& s2){
    symType* type1 = s1->type;
    symType* type2 = s2->type;
    if ( typecheck (type1, type2) ) return true;
    else if (s1 = conv (s1, type2->type) ) return true;
    else if (s2 = conv (s2, type1->type) ) return true;
    else return false;
}

bool typecheck(symType* t1, symType* t2){
	if (t1 != NULL || t2 != NULL) {
		if (t1==NULL) return false;
		else if (t2==NULL) return false;
		else if (t1->type==t2->type) return typecheck(t1->ptr, t2->ptr);
		else return false;
	}
	return true;
}


int size_type (symType* t){
    if(t->type=="VOID")	return 0;
    else if(t->type=="CHAR") return CHAR_SIZE;
    else if(t->type=="INTEGER")return INT_SIZE;
    else if(t->type=="DOUBLE") return  DOUBLE_SIZE;
    else if(t->type=="PTR") return POINTER_SIZE;
    else if(t->type=="ARR") return t->width * size_type (t->ptr);
    else if(t->type=="FUNC") return 0;
    return -1;
}

string print_type (symType* t){
    if (t==NULL) return "null";
    if(t->type=="VOID")	return "void";
    else if(t->type=="CHAR") return "char";
    else if(t->type=="INTEGER") return "integer";
    else if(t->type=="DOUBLE") return "double";
    else if(t->type=="PTR") return "ptr("+ print_type(t->ptr)+")";
    else if(t->type=="ARR") return "arr(" + to_string(t->width) + ", "+ print_type (t->ptr) + ")";
    else if(t->type=="FUNC") return "function";
    else return "_";
}

vector<int> makelist (int i) {
    vector<int>lst(1,i);
    return lst;
}

void backpatch (vector<int> l, int addr) {
    string address = to_string(addr);
    for (int &it:l) q.array[it].result = address;
}

vector<int> merge (vector<int> &a, vector<int> &b) {
	a.insert(a.end(),b.begin(),b.end());
	return a;
}

expression* convert_int_to_bool (expression* e) {
    if (e->type!="BOOL") {
        e->falselist = makelist (nextinstr());
        emit ("EQOP", "", e->loc->name, "0");
        e->truelist = makelist (nextinstr());
        emit ("GOTOOP", "");
    }
    return e;
}

expression* convert_bool_to_int (expression* e) {
    if (e->type=="BOOL") {
        e->loc = gentemp(new symType("INTEGER"));
        backpatch (e->truelist, nextinstr());
        emit ("EQUAL", e->loc->name, "true");
        stringstream strs;
        strs << nextinstr()+1;
        string temp_str = strs.str();
        char* intStr = (char*) temp_str.c_str();
        string str = string(intStr);
        emit ("GOTOOP", str);
        backpatch (e->falselist, nextinstr());
        emit ("EQUAL", e->loc->name, "false");
    }
    return e;
}

void changeTable (symTable* newtable) {
	table = newtable;
} 

int nextinstr() {
	return q.array.size();
}

int main(){
    // yydebug = 5;
    // yyin = fopen("asgn4_18CS30051_test.c", "r");
    printf("\
            ##############################################\n\
            ##                                          ##\n\
            ##           PARSING STARTS HERE            ##\n\
            ##                                          ##\n\
            ##############################################\n");

    printf("\n\n============================== Parsing line 1 ============================== \n\n");
    
    globalTable = new symTable("Global");
	table = globalTable;
	yyparse();
	globalTable->update();
	globalTable->print();
	q.print();

    printf("\n\n\
            ##############################################\n\
            ##                                          ##\n\
            ##             PARSING FINISHED             ##\n\
            ##                                          ##\n\
            ##############################################\n");
    return 0;
}