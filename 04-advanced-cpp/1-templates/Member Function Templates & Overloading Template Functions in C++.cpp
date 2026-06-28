/*
!⭐ 1. Member Function Templates in C++
🎯 What It Means
A member function template is a template inside a class.
It allows one specific function of a class to be generic, even if the class itself is not a template.

This is useful when:

The class stores one type

But a function inside the class must work with many types
*/

#include <iostream>
using namespace std;

class MyClass {
public:
    int data;

    MyClass(int x) {
        data = x;
    }

    // Member function template
    template <class T>
    void show(T value) {
        cout << "Data = " << data << endl;
        cout << "Value = " << value << endl;
    }
};

int main() {
    MyClass obj(10);

    obj.show(3.14);     // T = float
    obj.show('A');      // T = char
    obj.show("Raghav"); // T = const char*

    return 0;
}
