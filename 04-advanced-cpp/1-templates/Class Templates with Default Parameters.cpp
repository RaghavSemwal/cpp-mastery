/*
⭐ C++ Templates: Class Templates with Default Parameters

🎯 What Are Default Template Parameters?
Just like functions can have default arguments, templates can also have default type parameters.

This means:

If the user does not specify a type, the compiler uses the default type.

It makes templates easier to use and reduces typing.  
*/

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class MyClass {
public:
    T1 data1;
    T2 data2;

    MyClass(T1 a, T2 b) {
        data1 = a;
        data2 = b;
    }

    void display() {
        cout << data1 << endl;
        cout << data2 << endl;
    }
};

int main() {
    MyClass<> obj1(10, 3.14);       // uses default types: int, float
    obj1.display();

    MyClass<char, double> obj2('A', 9.99);
    obj2.display();

    return 0;
}


/*
!⭐ One‑Line Exam Definition

Class templates with default parameters allow you to assign default data types to template 
arguments so that users can omit them when creating objects.*/