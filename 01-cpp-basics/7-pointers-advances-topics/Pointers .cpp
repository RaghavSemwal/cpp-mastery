#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p = &x;   // pointer to int

    cout << "Value of x = " << x << endl;
    cout << "Address of x = " << &x << endl;
    cout << "Pointer p = " << p << endl;
    cout << "Value at pointer (*p) = " << *p << endl;

    double y = 3.14;
    double *q = &y; // pointer to double
    cout << "\nValue of y = " << y << endl;
    cout << "Value at pointer q = " << *q << endl;

    return 0;
}
