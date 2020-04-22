// declaration

#include <string.h>
#include <memory>
#include "rsrc.h"
using namespace std;


class Person {
    
    private:
        string firstName;
        string lastName; 
        int age; 
        std::shared_ptr<Rsrc> pR;
    public: 
        string getName();
        void setAge(int a); 
        int getAge();
        void addR();
        string getRName() const;
        Person(string first, string last, int age); //constructor -> acquire resources
        
        //  default constructor -> to allow user to create an empty instance
        //  the default keyword asks the complier to generate a default implementation
        // Person()=default; 
        Person(); 
        //destructor-> release resources
        ~Person();
};

