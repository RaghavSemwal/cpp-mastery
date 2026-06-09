  #include <iostream>
#include <iomanip> // for manipulators
using namespace std;

#define PI 3.14159 // macro constant

int main() {
    // --- Constants ---
    const int MAX = 100; // const keyword
    cout << "Constant MAX = " << MAX << endl;
    cout << "Macro constant PI = " << PI << endl;

    // --- Manipulators ---
    double val = 123.456789;
    cout << "\nUsing manipulators:" << endl;
    cout << "Default: " << val << endl;
    cout << "setw(10): " << setw(10) << val << endl;
    cout << "setprecision(4): " << setprecision(4) << val << endl;
    cout << "fixed + setprecision(2): " << fixed << setprecision(2) << val << endl;

    // --- Operator Precedence ---
    int a = 5, b = 10, c = 2;
    int result = a + b * c; // * has higher precedence than +
    cout << "\nOperator precedence demo:" << endl;
    cout << "a + b * c = " << result << endl; // 5 + (10*2) = 25

    result = (a + b) * c; // parentheses change precedence
    cout << "(a + b) * c = " << result << endl; // (5+10)*2 = 30

    return 0;
}
