#pragma once
#include <iostream>
#include <string.h>
// #include "rsrc.h"
#include "ex.h"

using std::string;
using std::cout;
using std::endl; 


// local store -> stack 
// free store  -> heap

int main(){
    {//create a scope!
        Rsrc localRsrc("local"); 
        string localStr = localRsrc.getStr();
    }
    Rsrc* pR1 = new Rsrc("created with new"); 
    string newStr = pR1->getStr(); 
    delete pR1; 
    // string str2 = pR->getStr(); //invalid!!! we already freed this memory  


    //smart ptrs 
    // no copying -> unique_ptr
    // copying / count references -> shared_ptr 
    // peak at a shared_ptr without changing the ref count -> weak_ptr
    Person heidi("heidi", "kon", 22); 
    heidi.addR(); 
    cout << heidi.getRName() << endl;

    return 0;
}