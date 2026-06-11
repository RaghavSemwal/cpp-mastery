/*🔹 1. Static Data Members
A static data member is a variable that:

Belongs to the class, not to individual objects

Has only one copy shared by all objects

Is stored in global/static memory, not inside each object

Must be defined outside the class

Why use static data members?
To store values common to all objects

To count number of objects

To maintain shared configuration


🔹 2. Static Member Functions
A static function:

Can be called without creating an object

Can access only static data members

Belongs to the class, not objects

*/

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks;

    // Static data member
    static int count;

public:
    void setData(int r, float m) {
        roll = r;
        marks = m;
        count++;   // increment shared counter
    }

    void display() {
        cout << "Roll: " << roll << ", Marks: " << marks << endl;
    }

    // Static member function
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.setData(1, 90.5);
    s2.setData(2, 88.0);
    s3.setData(3, 76.5);

    s1.display();
    s2.display();
    s3.display();

    // Calling static function (no object needed)
    Student::showCount();

    return 0;
}

/* 4. Key Takeaways (Exam‑Ready)
Static Data Member:
One copy shared by all objects

Must be defined outside class

Useful for counters, shared values

Static Member Function:
Can be called using class name

Can access only static members

Does not need an object 
*/