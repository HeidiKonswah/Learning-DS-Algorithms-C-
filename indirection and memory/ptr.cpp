#include <iostream> 
#include "ex.h"
using namespace std;

int main(){
    //int ref
    //a ref must be initialized 
    int a = 3; 
    int& rA = a; //referance to a (no special syntax to indicate that we're assigning this to the reference's target)
    // cout << "a is: " << a << endl; // 3
    rA = 5; 
    // cout << "a is: " << a << endl; //5

    //Person ref
    Person heidi("heidi", "konswah", 22); 
    Person& rHeidi = heidi; 
    // cout << "age: " << rHeidi.getAge() << endl; // 22
    rHeidi.setAge(33);
    // cout << "age: " << rHeidi.getAge() << endl; // 33
    // cout << "age: " << heidi.getAge() << endl; // 33
 

    //pointers 
    int* pA = &a; 
    *pA = 4; //de-refernce
    cout << "a = " << a << endl; //4
    int anotherInt = 100; 
    pA = &anotherInt; //unlike ref, u can reassign pointers 
    (*pA)++; // === anotherInt++; 
    cout << "anotherInt = " << anotherInt << endl;
    //to init an a null ptr
    // a ptr that's pointing to nothing -> nullptr -->  
    int* ptr = nullptr; 
    if(ptr){ // check that a ptr isn't null before using it!
        *ptr = 3; 
        cout << ptr << endl; 
    }


    //pointer to an object 
    Person* pHeidi = &heidi; 
    // (*pHeidi).setAge(40);  //rarely used 
    pHeidi->getName();

    return 0; 
}