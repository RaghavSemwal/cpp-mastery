#include <iostream>
using namespace std;

// Function Prototype
int add(int, int);

void greet(); // prototype for void function

int main() {
    int a = 5, b = 7;

    // Function call before definition
    cout << "Sum = " << add(a, b) << endl;

    greet(); // calling void function

    return 0;
}

// Function Definition
int add(int x, int y) {
    return x + y;
}

void greet() {
    cout << "Hello from a function!" << endl;
}
