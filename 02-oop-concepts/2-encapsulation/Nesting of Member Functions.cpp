/*⭐ What is Nesting of Member Functions?
When one member function of a class calls another member function of the same class, it is called nesting.

This helps:

Break large tasks into smaller internal functions

Keep helper functions private

Improve encapsulation*/

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks;

    void calculateGrade() {
        if (marks >= 90)
            cout << "Grade: A\n";
        else if (marks >= 75)
            cout << "Grade: B\n";
        else
            cout << "Grade: C\n";
    }

public:
    void getdata() {
        cout << "Enter roll and marks: ";
        cin >> roll >> marks;
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
        calculateGrade();   // nested member function
    }
};

int main() {
    Student s;
    s.getdata();
    s.display();
    return 0;
}
