/* ⭐ Why Ambiguity Happens
Ambiguity occurs when:

A derived class inherits from multiple base classes that have members with the same name.

The compiler cannot decide which base class’s member to use. */

#include <iostream>
using namespace std;

class base1 {
    public:
    void greeting() {
        cout << "how are you?" << endl;
    }
};

class base2 {
    public:
    void greeting() {
        cout << "kaise ho?" << endl;
    }
};

class derived : public base1, public base2 {
    public:
    void greeting() {
        // To resolve ambiguity, we can specify which base class's greeting to use
        base1::greeting(); // Calls greeting from base1
       
    }
};

int main() {
    base1 base1_obj;
    base2 base2_obj;
    derived derived_obj;

    base1_obj.greeting(); // Calls greeting from base1
    base2_obj.greeting(); // Calls greeting from base2
    derived_obj.greeting(); // Calls the greeting function which resolves ambiguity
    return 0;
}