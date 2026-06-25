#include <iostream>
using namespace std;

int main() {
    // Test message
    cout << "Test Code Running Successfully!" << endl;

    // Simple arithmetic test
    int a = 10, b = 5;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;

    // Input test
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "You entered: " << x << endl;

    return 0;
}
