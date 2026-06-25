/*🎯 What is a Friend Function?
A friend function is a function that is not a member of a class but is allowed to access private and protected members of that 

⭐ Why Use Friend Functions?
To access private data of multiple classes

To perform operations involving two objects

To implement operator overloading

To allow external functions to work closely with a class */


#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    void setData(float r, float i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Friend function declaration
    friend Complex add(Complex c1, Complex c2);
};

// Friend function definition
Complex add(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;   // accessing private members
    temp.imag = c1.imag + c2.imag;
      // OR temp.setData(c1.real + c2.real, c1.imag + c2.imag);
    return temp;
}

int main() {
    Complex c1, c2, c3;

    c1.setData(3.5, 2.5);
    c2.setData(1.5, 4.5);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    c3 = add(c1, c2);   // calling friend function

    cout << "Sum = ";
    c3.display();

    return 0;
}


/*Key Points (Exam‑Ready)
Friend function is not a member of the class

Declared inside class using friend

Defined outside class without scope resolution

Can access private and protected members

Called like a normal function; not with object*/