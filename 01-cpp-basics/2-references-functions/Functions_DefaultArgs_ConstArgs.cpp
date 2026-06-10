#include <iostream>
using namespace std;

// Inline Function
inline int square(int x) {
    return x * x;
}

// Function with Default Argument
int add(int a, int b = 5) {
    return a + b;
}

// Function with Constant Argument
void show(const string &msg) {
    // msg cannot be modified here
    cout << "Message: " << msg << endl;
}

int main() {
    // Inline Function
    cout << "Square of 4 = " << square(4) << endl;

    // Default Argument
    cout << "Add with one arg (10): " << add(10) << endl;       // b=5 by default
    cout << "Add with two args (10, 20): " << add(10, 20) << endl;

    // Constant Argument
    string message = "Hello, World!";
    show(message);

    return 0;
}
