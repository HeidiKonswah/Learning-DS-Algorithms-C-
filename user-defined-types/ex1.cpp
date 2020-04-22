//implementation
#include <iostream>
#include "ex.h"

Person::Person(string first, string last, int age):
    firstName(first), lastName(last), age(age) // member values
    {
        cout << "Constructing: "<< getName() <<endl;
        //empty body
}

Person::Person():age(20){
    cout << "Constructing: "<< getName() <<endl;
}
Person::~Person(){
    cout << "deconstructing: "<< getName() <<endl;
}
string Person::getName(){
    return firstName + " " + lastName;
}


