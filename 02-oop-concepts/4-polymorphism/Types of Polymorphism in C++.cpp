/*
TODO:  Polymorphism in C++ means “many forms” — the same function or operator behaves differently
 depending on context.
 It is mainly of two types: compile‑time polymorphism (function/operator overloading) and
 run‑time polymorphism (function overriding with virtual functions).
*/





// #include <iostream>
// using namespace std;

/* 
! 1. Compile‑Time Polymorphism (Static Binding)
Function Overloading: Same function name, different parameter lists.
Example: */

// class Math {
// public:
//     void add(int a, int b) { cout << "Sum = " << a+b << endl; }
//     void add(double a, double b) { cout << "Sum = " << a+b << endl; }
// };
// int main() {
//     Math m;
//     m.add(2, 3);       // calls int version
//     m.add(2.5, 3.5);   // calls double version
// }


//?  Operator Overloading: Redefining operators for user‑defined types.
//?  Example: Overloading + for complex numbers.

/*
!2. Run‑Time Polymorphism (Dynamic Binding)
Achieved using virtual functions in inheritance.

Base class declares a virtual function, derived classes override it.

At runtime, the correct function is chosen based on the object type. */

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Animal makes a sound\n"; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Dog says: Bow wow\n"; }
};

class Cat : public Animal {
public:
    void sound() override { cout << "Cat says: Meow\n"; }
};

int main() {
    Animal *a;       // base class pointer
    Dog d; Cat c;

    a = &d; a->sound();   // Dog’s version
    a = &c; a->sound();   // Cat’s version
}

/*
!⭐ Why Polymorphism Is Important
?Code reusability: Same interface, different implementations.

?Flexibility: Functions/operators adapt to context.

?Scalability: Easy to extend classes without changing existing code.

?Real‑world modeling: Different objects respond differently to the same action.  

| Type         | Binding Time   | Technique Used                | Example                                    |
|--------------|----------------|-------------------------------|--------------------------------------------|                                           
| Compile‑time | At compilation | Function/Operator Overloading | add(int,int) vs add(double,double)         |
| Run‑time     | At execution   | Virtual Functions, Overriding |   Animal   *a   =   &dog;   a->sound();    | 

*/