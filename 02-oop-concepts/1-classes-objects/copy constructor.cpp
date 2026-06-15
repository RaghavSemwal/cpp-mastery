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
