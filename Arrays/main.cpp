#include <iostream> 
#include "IntArray.h"

using std::cout; 
using std::cin; 
using std::endl;

int main(){
    IntArray a = IntArray(); 
    IntArray b = IntArray(10); 
    if(a.isEmpty()){
        // cout << "a has: " << a.size() << " element(s)" << endl;
    }
    if(!b.isEmpty()){
        // cout << "b has: " << b.size() << " element(s)" << endl;
    }

    // c[0] = 10; // compiler needs a ref to the target element, not just a copy of its value!
    // so we will return int& instead of int in the operator[] function
    IntArray c = IntArray(10);
    // cout << c[1] << endl; 
    c[1] = 10;
    // cout << c[1] << endl;


    //bound checking
    try{
        int i; 
        IntArray arr = IntArray(3);
        cin >> i; 
        cout << "value of arr[" << i << "] is: " << arr[i] << endl;
    }catch(const OutOfBoundsException& e){
        cout << "ERROR: Index Out Of Bounds" << endl;
    }




    return 0; 
}