#include <iostream> 
#include <string.h>
using namespace std; 
// temp function 
template <class T> 
T maxt(T a, T b){
    return a>b? a : b; 
};
//template class 
template <class A> 
class Accum {
    private:
    A total; 
    public: 
    Accum(A start): total(start){};
    A operator+=(A const& num){return total = total + num;}; 
    A getTotal() const {return total;};
};

int main(){
    // cout << maxt<int>(2, 4) << endl; 
    // cout << maxt<string>("hi", "tie") << endl; 
    // cout << maxt<double>(2.2, 5.0) << endl;

    Accum<int> nums(10); 
    Accum<string> strings("hi");

    nums += 10; 
    strings += " bye";

    cout << "nums -> " << nums.getTotal() << endl; 
    cout << "strings -> " << strings.getTotal() << endl; 
    

    return 0; 
}