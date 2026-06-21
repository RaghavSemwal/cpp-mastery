/*THIS POINTER (C++ THEORY)

1. 'this' is a special pointer available inside every non-static member function.

2. 'this' stores the address of the current object (the object that called the function).

3. Why do we need 'this'?
   - To differentiate between local variables and data members when they have the same name.
   - To return the current object.
   - To chain member functions.
   - To access the current object's members inside a class.

4. Example:
       this->x means "x of the current object".

5. When is 'this' used automatically?
   - When accessing data members inside a class.
   - Compiler internally uses: this->x

6. Important:
   - 'this' pointer is not available in static functions.
   - 'this' always points to the object that invoked the function.

7. One-line definition:
   'this' is a pointer that stores the address of the calling object.

*/
#include <iostream>
using namespace std;

class Demo {
    int x;
public:

    // Constructor using 'this' to differentiate
    Demo(int x) {
        this->x = x;   // this->x = object's x, x = parameter
    }

    void show() {
        cout << "Value of x = " << this->x << endl;
        cout << "Address of current object = " << this << endl;
    }

    // Returning current object using 'this'
    Demo& increment() {
        this->x++;
       return *this;   // return current object
    }
};

int main() {

    Demo obj(10);
    obj.show();

    cout << "\nChaining using this pointer:" << endl;
    obj.increment().increment().show();

    return 0;
}
