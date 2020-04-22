//implementation
#include <iostream>
#include "ex.h"


Person::Person(string first, string last, int age):
    firstName(first), lastName(last), age(age) //, pR(nullptr) --> in case u r not using smart ptr, u need to init it to nullptr // member values
    {
        cout << "Constructing: "<< getName() <<endl;
        //empty body
}

Person::Person():age(20){
    cout << "Constructing: "<< getName() <<endl;
}
Person::~Person(){
    // delete pR; 
    cout << "deconstructing: "<< getName() <<endl;
}
string Person::getName(){
    return firstName + " " + lastName;
}

void Person::setAge(int a){
    age = a; 
}
int Person::getAge(){
    return age;
}

void Person::addR(){
    // delete pR; //for re-assignment 
    pR.reset();
    // pR = new Rsrc("Resource for: "+ getName());
    pR = std::make_shared<Rsrc>("resource for: " + getName());
}
string Person::getRName() const{
    // check if it's a valid pointer
    return pR ? pR->getStr() : "";
} 
