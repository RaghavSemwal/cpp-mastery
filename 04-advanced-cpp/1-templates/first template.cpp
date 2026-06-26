/*
⭐ Writing Our First C++ Template in VS Code
1. What is a Template?
A template allows writing generic code that works with any data type (int, float, double, etc.).

Supports code reusability and type safety.

Two types:

Function Templates

Class Templates*/
#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Int sum: " << add<int>(3, 4) << endl;
    cout << "Float sum: " << add<float>(3.5, 4.2) << endl;
    return 0;
}
