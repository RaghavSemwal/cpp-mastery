/* ⭐ Why Ambiguity Happens
Ambiguity occurs when:

A derived class inherits from multiple base classes that have members with the same name.

The compiler cannot decide which base class’s member to use. */

// #include <iostream>
// using namespace std;

// class base1 {
//     public:
//     void greeting() {
//         cout << "how are you?" << endl;
//     }
// };

// class base2 {
//     public:
//     void greeting() {
//         cout << "kaise ho?" << endl;
//     }
// };

// class derived : public base1, public base2 {
//     public:
//     void greeting() {
//         // To resolve ambiguity, we can specify which base class's greeting to use
//         base1::greeting(); // Calls greeting from base1
       
//     }
// };

// int main() {
//     base1 base1_obj;
//     base2 base2_obj;
//     derived derived_obj;

//     base1_obj.greeting(); // Calls greeting from base1
//     base2_obj.greeting(); // Calls greeting from base2
//     derived_obj.greeting(); // Calls the greeting function which resolves ambiguity
//     return 0;
// }







/* Overriding: Derived class provides its own definition of a base class function.

Base class function is hidden unless explicitly called.

To call base class version, use scope resolution */




// #include <iostream>
// using namespace std;

// class A {
// public:
//       void say(){
//         cout<<"hello"<<endl;
//       }
//     };

//  class B:public A { 
//     public:
//     void say(){
//         cout<<"hello beautiful"<<endl;
//       }
//     };

//     int main() {
//         B obj;
//         obj.say(); // Calls the say function from class B
//         return 0;
//     }








#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "Class A show()" << endl; }
};

class B {
public:
    void show() { cout << "Class B show()" << endl; }
};

class C : public A, public B {
    // inherits show() from both A and B
};

int main() {
    C obj;
    // obj.show();   ❌ ERROR: Ambiguity (which show()? A or B?)
    obj.A::show();   // ✔ resolves ambiguity
    obj.B::show();   // ✔ resolves ambiguity
    return 0;
}
