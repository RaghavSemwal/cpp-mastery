/* Protected Access Modifier
🔹 Definition
A protected member of a class is accessible:

Inside the same class

Inside derived classes (through inheritance)

But not accessible directly from outside the class (like private). */
#include <iostream>
using namespace std;

class Base {
protected:
    int value;   // protected member


    Base(int v) {
        value = v;
    }
};

class Derived : public Base {
public:
    Derived(int v) : Base(v) {}

    void show() {
        cout << "Value (accessible in derived): " << value << endl;
    }
};

int main() {
    Derived d(42);
    d.show();        // ✔ works
    // cout << d.value;  // ❌ ERROR: protected, not accessible outside
    return 0;
}



/*
⭐ Key Points (Exam‑Ready)
Protected vs Private:

Private → accessible only inside the class itself.

Protected → accessible inside the class and derived classes.

Protected vs Public:

Public → accessible everywhere.

Protected → restricted to class + derived classes only.

Useful when you want derived classes to use base members, but don’t want them exposed to the outside world.

| Member Type        | Public Derivation | Private Derivation | Protected Derivation |
|--------------------|-------------------|--------------------|----------------------|
| **Private members**   | Not Inherited     | Not Inherited      | Not Inherited        |
| **Protected members** | Protected         | Private            | Protected            |
| **Public members**    | Public            | Private            | Protected            |

*/