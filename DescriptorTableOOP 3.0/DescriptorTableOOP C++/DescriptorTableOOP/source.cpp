#include <iostream>
#include "HashTable.h"
#include <string>
#include <fstream>



using namespace std;


int main(){

        LexicalUnit lu[5];

        HashTable H;
        
       
        lu[0] = LexicalUnit("i", "int", lu[0].setDescriptor(), 0);
        lu[1] = LexicalUnit("delta", "float", lu[1].setDescriptor(), lu[0].setAddress("int"));
        lu[2] = LexicalUnit("varch", "char", lu[2].setDescriptor(), lu[2].setAddress("float"));
        lu[3] = LexicalUnit("alpha", "double", lu[3].setDescriptor(), lu[3].setAddress("char"));
        lu[4] = LexicalUnit("atled", "long", lu[4].setDescriptor(), lu[4].setAddress("double"));
        
        
        H.AddLexUnit(lu[0]);
        H.AddLexUnit(lu[1]);
        H.AddLexUnit(lu[2]);
        H.AddLexUnit(lu[3]);
        H.AddLexUnit(lu[4]);
        H.Delete("alpha");
        H.Print();
        H.Search("beta");
        

        return 0;
}


