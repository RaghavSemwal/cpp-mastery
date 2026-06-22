/* ⭐ Theory: Pointers to Derived Classes

Base Class Pointer → Derived Class Object

A base class pointer can point to a derived class object.

But it can only access members that are defined in the base class (unless virtual functions are used).

Why Useful?

Enables runtime polymorphism (virtual functions).

Allows writing generic code that works with multiple derived classes.

Access Rules

Base pointer → can access base class members.

If a function is virtual, base pointer calls the derived version.

If not virtual, base pointer calls base version (static binding).

Derived Class Pointer

A derived class pointer can access both base and derived members.

But if you assign a base object to a derived pointer → ❌ not allowed (unsafe).

*/
#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class function\n";
    }

    virtual void display() {   // virtual for polymorphism
        cout << "Display from Base\n";
    }
};

class Derived : public Base {
public:
    void showDerived() {
        cout << "Derived class function\n";
    }

    void display() override{  // overrides base version
        cout << "Display from Derived\n";
    }
};

int main() {
    Derived d;

    // Base class pointer pointing to Derived object
    Base *bptr = &d;

    bptr->showBase();   // ✅ allowed (base member)
    // bptr->showDerived(); ❌ not allowed (not in base)

    bptr->display();    // ✅ calls Derived version (runtime polymorphism) by virtual

    // Derived class pointer
    Derived *dptr = &d;
    dptr->showBase();     // ✅ inherited base member
    dptr->showDerived();  // ✅ derived member
    dptr->display();      // ✅ derived version

    return 0;
}

/*
⭐ One‑Line Definition
A base class pointer can point to a derived class object, but it can 
only access base members unless virtual functions are used — enabling runtime polymorphism.
*/