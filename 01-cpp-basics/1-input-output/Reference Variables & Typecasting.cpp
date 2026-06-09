#include <iostream>
using namespace std;

int main() {
    // --- Reference Variables ---
    int x = 10;
    int &ref = x;   // ref is a reference to x

    cout << "Original x = " << x << endl;
    cout << "Reference ref = " << ref << endl;

    ref = 20; // changing ref also changes x
    cout << "After modifying ref, x = " << x << endl;

    x = 30;   // changing x also changes ref
    cout << "After modifying x, ref = " << ref << endl;

    // --- Typecasting ---
    int a = 7, b = 2;
    cout << "\nWithout typecasting (integer division): " << (a / b) << endl;

    // Explicit typecasting
    cout << "With typecasting (float division): " << (float)a / b << endl;

    // Static cast (preferred modern C++ style)
    cout << "Using static_cast<float>: " << static_cast<float>(a) / b << endl;

    // Example: char to int
    char ch = 'A';
    cout << "\nCharacter ch = " << ch << endl;
    cout << "ASCII value of ch (int) = " << (int)ch << endl;
    cout << "ASCII value using static_cast<int> = " << static_cast<int>(ch) << endl;

    return 0;
}
