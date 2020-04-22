//implementation
#include <iostream>
#include "tweeter.h"

Tweeter::Tweeter(string first, string last, int age, string handle):
    Person(first, last, age), 
    handle(handle) {
        std::cout << "constructing tweeter.. " << handle << std::endl;
    };

Tweeter::~Tweeter(){

};