//there are two types of header files
//1. system header files: it comes with the compiler
#include <iostream>
//2. user defined header files: it is written by the programmer
// #include "this.h" // this will produce an error if this.h is not present in the current directory    

using namespace std;

int main() {
    int a = 10, b = 3;

    // 1. Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    // 2. Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    // 3. Logical Operators
    cout << "\nLogical Operators:" << endl;
    cout << "(a > 5 && b < 5) : " << ((a > 5) && (b < 5)) << endl;
    cout << "(a > 5 || b > 5) : " << ((a > 5) || (b > 5)) << endl;
    cout << "!(a > b) : " << (!(a > b)) << endl;

    // 4. Bitwise Operators
    cout << "\nBitwise Operators:" << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    // 5. Assignment Operators
    cout << "\nAssignment Operators:" << endl;
    int c = a;
    cout << "c = a : " << c << endl;
    c += b; cout << "c += b : " << c << endl;
    c -= b; cout << "c -= b : " << c << endl;
    c *= b; cout << "c *= b : " << c << endl;
    c /= b; cout << "c /= b : " << c << endl;
    c %= b; cout << "c %= b : " << c << endl;

    // 6. Increment/Decrement Operators
    cout << "\nIncrement/Decrement Operators:" << endl;
   ++a;
cout << "++a = " << a << endl;

cout << "b++ = " << b << endl;
b++;
cout << "After increment b = " << b << endl;

--a;
cout << "--a = " << a << endl;

cout << "b-- = " << b << endl;
b--;
cout << "After decrement b = " << b << endl;


    

    
    return 0;
}
