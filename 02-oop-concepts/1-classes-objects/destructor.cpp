/* ⭐ Destructor in C++
🎯 Definition
A destructor is a special member function of a class that:

Has the same name as the class, preceded by a tilde (~)

Has no return type and no parameters

Is automatically called when an object goes out of scope or is deleted

Used to release resources (like memory, files, connections)*/

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks;

public:
    // Parameterized Constructor
    Student(int r, float m) {
        roll = r;
        marks = m;
        cout << "Constructor Called!" << endl;
    }

    // Copy Constructor
    Student(const Student &s) {
        roll = s.roll;
        marks = s.marks;
        cout << "Copy Constructor Called!" << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor Called for Roll: " << roll << endl;
    }

    void display() {
        cout << "Roll: " << roll << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1(101, 95.5);   // constructor runs
    Student s2(s1);          // copy constructor runs

    s1.display();
    s2.display();

    // destructors will be called automatically at end of scope
    return 0;
}


/*
⭐ Key Points (Exam‑Ready)
Destructor is called automatically when object goes out of scope.

Only one destructor per class (cannot be overloaded).

Useful for freeing memory or closing files.

Syntax: ~ClassName()

Order: Constructors run when object is created → Destructor runs when object is destroyed.



⭐ One‑Line Definition
A destructor is a special member function that cleans up when an object is destroyed,
 automatically called at the end of its lifetime.

*/




 