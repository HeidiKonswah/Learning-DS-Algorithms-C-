#include <iostream> 
#include <string.h> 
using namespace std;

class Rsrc {
    private: 
    string str; 
    public: 
    Rsrc(string s):str(s) {
        cout << "constructing: " << str << endl; 
    }
    ~Rsrc(){
        cout << "deconstructing: " << str << endl;
    }
    void setStr(string s){
        str = s; 
    }
    string getStr() const {
        return str;
    }
};