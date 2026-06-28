/*
!⭐ 1. Member Function Templates in C++
🎯 What It Means
A member function template is a template inside a class.
It allows one specific function of a class to be generic, even if the class itself is not a template.

This is useful when:

The class stores one type

But a function inside the class must work with many types
*/

// #include <iostream>
// using namespace std;

// class MyClass {
// public:
//     int data;

//     MyClass(int x) {
//         data = x;
//     }

//     // Member function template
//     template <class T>
//     void show(T value) {
//         cout << "Data = " << data << endl;
//         cout << "Value = " << value << endl;
//     }
// };

// int main() {
//     MyClass obj(10);

//     obj.show(3.14);     // T = float
//     obj.show('A');      // T = char
//     obj.show("Raghav"); // T = const char*

//     return 0;
// }


/*

⭐ Key Points
->Class is not a template.

->Only the function show() is a template.

->Compiler generates different versions of show() depending on the argument type. 
  */


  /*
  ⭐ 2. Overloading Template Functions
🎯 What It Means
You can overload a template function by:

Writing a normal function with the same name

Writing another template with different parameters

The compiler chooses the best match.*/

#include <iostream>
using namespace std;

// Template function
template <class T>
void display(T x) {
    cout << "Template display: " << x << endl;
}

// Normal overloaded function
void display(int x) {
    cout << "Normal display (int): " << x << endl;
}

int main() {
    display(10);       // calls normal function (best match)
    display(3.14);     // calls template
    display('A');      // calls template

    return 0;
}
