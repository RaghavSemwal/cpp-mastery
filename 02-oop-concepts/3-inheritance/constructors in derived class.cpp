//⭐ Case 1: Single Inheritance

//#include <iostream>
//using namespace std;

/*
Case1:
class B: public A {
    // Order of execution of constructor -> first A() then B()
};
*/

// class A {
// public:
//     A() { cout << "Constructor of A\n"; }
// };

// class B : public A {
// public:
//     B() { cout << "Constructor of B\n"; }
// };

// int main() {
//     B obj;  // Output: A then B
//     return 0;
// }




//⭐ Case 2: Multiple Inheritance
// #include <iostream>
// using namespace std;

// /*
// Case2:
// class A: public B, public C {
//     // Order of execution of constructor -> B() then C() and finally A()
// };
// */

// class B {
// public:
//     B() { cout << "Constructor of B\n"; }
// };

// class C {
// public:
//     C() { cout << "Constructor of C\n"; }
// };

// class A : public B, public C {
// public:
//     A() { cout << "Constructor of A\n"; }
// };

// int main() {
//     A obj;  // Output: B then C then A
//     return 0;
// }



//⭐ Case 3: Virtual Base Class
// #include <iostream>
// using namespace std;

/*
Case3:
class A: public B, virtual public C {
    // Order of execution of constructor -> C() (virtual base first), then B(), then A()
};
*/

// class C {
// public:
//     C() { cout << "Constructor of C (virtual base)\n"; }
// };

// class B {
// public:
//     B() { cout << "Constructor of B\n"; }
// };

// class A : public B, virtual public C {
// public:
//     A() { cout << "Constructor of A\n"; }
// };

// int main() {
//     A obj;  // Output: C then B then A
//     return 0;
// }



//⭐ Case 4: Special Syntax (Multiple Base Constructors with Arguments)
#include <iostream>
using namespace std;

/*
Special Syntax:
Derived-Constructor(arg1, arg2, arg3, arg4) : Base1(arg1, arg2), Base2(arg3, arg4) {
    // Body executes after both base constructors finish
}
*/

class Base1 {
public:
    Base1(int x) { cout << "Base1 constructor with " << x << endl; }
};

class Base2 {
public:
    Base2(int y) { cout << "Base2 constructor with " << y << endl; }
};

class Derived : public Base1, public Base2 {
    int d1, d2;
public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b) {
        d1 = c;
        d2 = d;
        cout << "Derived constructor with " << d1 << " and " << d2 << endl;
    }
};

int main() {
    Derived obj(10, 20, 30, 40);
    return 0;
}
