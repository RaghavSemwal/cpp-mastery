/* ⭐ Initialization List in Constructors (Deep Dive)
Takeaway:  
An initialization list initializes data members before the constructor body executes.

Syntax: 
ClassName(parameters) : member1(value1), member2(value2) {
    // constructor body
}
*/

#include <iostream>
using namespace std;

class Test {
    int a;
    int b;

public:

    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(i + b) --> RED FLAG: this will create problems because 'a' is initialized first

    // Let's implement one valid constructor:
    Test(int i, int j) : a(i), b(a + j) {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    Test obj(10, 20);
    return 0;
}

/* ⭐ Why the RED FLAG Happens
Even if you write:
C++ ignores the order in the initializer list.

👉 Members are always initialized in the order they are declared in the class, not the order you write in the list.
*/



/*
⭐ Why Initialization Lists Are Needed
Initialization lists are used because:

1️⃣ They initialize members BEFORE the constructor body runs
This is crucial for:

const data members

Reference variables

Objects of other classes (composition)

2️⃣ More efficient than assignment inside the constructor
Because:

Initialization happens once

Assignment happens twice (default → overwrite)

3️⃣ Required when base class has parameterized constructor
Derived class must call base constructor using an initialization list. */

/*

⭐ Example 1: Basic Initialization List
class Demo {
    int x;
    int y;
public:
    Demo(int a, int b) : x(a), y(b) {
        cout << "Constructor executed\n";
    }
};

✔ x and y are initialized before the constructor body.


⭐ Example 2: Initialization List with const & reference
class Test {
    const int a;
    int &b;
public:
    Test(int x, int &y) : a(x), b(y) { }
};

✔ a (const) and b (reference) must be initialized in the list.
❌ You cannot assign them inside the constructor body.


⭐ Example 3: Initialization List in Inheritance
class Base {
public:
    Base(int x) { cout << "Base: " << x << endl; }
};

class Derived : public Base {
public:
    Derived(int x, int y) : Base(x) {
        cout << "Derived: " << y << endl;
    }
};

✔ Base constructor is called using initialization list.
✔ Required when base has no default constructor.

⭐ Example 4: Multiple Base Classes (Special Syntax)
class Base1 {
public:
    Base1(int x) { cout << "Base1: " << x << endl; }
};

class Base2 {
public:
    Base2(int y) { cout << "Base2: " << y << endl; }
};

class Derived : public Base1, public Base2 {
public:
    Derived(int a, int b, int c, int d)
        : Base1(a), Base2(b)   // special syntax
    {
        cout << "Derived: " << c << ", " << d << endl;
    }
};

✔ Base1 constructed first
✔ Base2 constructed second
✔ Then Derived

⭐ Example 5: Virtual Base Class Initialization
class A {
public:
    A(int x) { cout << "A: " << x << endl; }
};

class B : virtual public A {
public:
    B() : A(10) { cout << "B\n"; }
};

class C : virtual public A {
public:
    C() : A(20) { cout << "C\n"; }
};

class D : public B, public C {
public:
    D() : A(30) { cout << "D\n"; }
};

✔ Virtual base class A is initialized only once  
✔ And always before B and C
*/

   