/*⭐ Copy Constructor
🎯 Definition
A copy constructor is a special constructor that creates a new object as a copy of an existing object.

⭐ Why Copy Constructor Exists
To initialize one object from another

Ensures proper copying of data members

Useful when objects contain dynamic memory (to avoid shallow copy probl
*/




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
        cout << "Parameterized Constructor Called!" << endl;
    }

    // Copy Constructor
    Student( Student &s) {
        roll = s.roll;
        marks = s.marks;
        cout << "Copy Constructor Called!" << endl;
    }

    void display() {
        cout << "Roll: " << roll << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1(101, 95.5);   // parameterized constructor
    Student s2(s1);          // copy constructor (s2 is copy of s1)

    s1.display();
    s2.display();

    return 0;
}

/*Copy constructor takes a reference to another object of the same class.

Default copy constructor is provided by compiler (does shallow copy).

You can define your own for deep copy (important when using pointers).

Called when:

A new object is created from an existing one (Student s2(s1);)

Passed by value to a function

Returned from a function */