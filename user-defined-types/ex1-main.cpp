#include <iostream>
#include "tweeter.h"
#include "status.h"
// using namespace std;

int main(){
    Person p1("heidi", "konswah", 22);
    {
        Person p2("jon", "doe", 30); 
    }
    {
        Tweeter t1("tfirst", "tlast", 22, "tweeeet"); 
    }
    cout << "inner block ends" << endl;
    string name = p1.getName(); 
    Status s = pending;
    s = cancelled; 
    FileError fe = FileError::notfound;
    NetworkError ne = NetworkError::ok;
    cout << "s " << s << endl;
    //Unlike an unscoped enumeration,
    //a scoped enumeration is not implicitly convertible to its integer value. 
    //You need to explicitly convert it to an integer using a cast
    cout <<"ne "<<static_cast<underlying_type<NetworkError>::type>(ne) << endl;

    cout << "fe " <<static_cast<underlying_type<FileError>::type>(fe) << endl;
    fe = FileError::ok; 
    cout << "fe " <<static_cast<underlying_type<FileError>::type>(fe) << endl;
    // cout << s << fe << ne << endl;
    return 0;
}

