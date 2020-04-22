#include <string>
#include "ex.h"

class Tweeter :
    public Person 
    {
        private:
            string handle;
        public: 
            Tweeter(string first, string last, int age, string handle);
            ~Tweeter();
    };