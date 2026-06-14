/*⭐ Constructor Overloading
🎯 Definition
Constructor overloading means having multiple constructors in the same class, each with different parameter lists.
This allows objects to be initialized in different ways.

*/



#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks;

public:
    // Default Constructor
    Student() {
        roll = 0;
        marks = 0.0;
        cout << "Default Constructor Called!" << endl;
    }

    // Parameterized Constructor (1 argument)
    Student(int r) {
        roll = r;
        marks = 0.0;
        cout << "Parameterized Constructor (1 arg) Called!" << endl;
    }

    // Parameterized Constructor (2 arguments)
    Student(int r, float m) {
        roll = r;
        marks = m;
        cout << "Parameterized Constructor (2 args) Called!" << endl;
    }

    void display() {
        cout << "Roll: " << roll << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1;              // Default constructor
    Student s2(101);         // Parameterized constructor (1 arg)
    Student s3(102, 95.5);   // Parameterized constructor (2 args)

    s1.display();
    s2.display();
    s3.display();

    return 0;
}



/*
⭐ Exam‑Ready One‑Liners
Constructors can be overloaded just like functions.

Overloading is based on number or type of parameters.

Helps in flexible initialization of objects.

Return type is not allowed for constructors.

Copy constructor is also a form of constructor overloading.
*/