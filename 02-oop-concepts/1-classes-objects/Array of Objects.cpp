/*
When you create:

cpp
Student s[5];
You are creating 5 separate objects, stored contiguously in memory.

Each object has its own copy of data members.
*/

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks;

public:
    void setData(int r, float m) {
        roll = r;
        marks = m;
    }

    void display() {
        cout << "Roll: " << roll << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s[3];   // array of 3 objects

    s[0].setData(1, 90.5);
    s[1].setData(2, 88.0);
    s[2].setData(3, 76.5);

    for (int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}




#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks;

public:
    void setData(int r, float m) {
        roll = r;
        marks = m;
    }

    void display() {
        cout << "Roll: " << roll << ", Marks: " << marks << endl;
    }
};

int main() {
    const int TOTAL_STUDENTS = 3;
    Student s[TOTAL_STUDENTS];   // array of 3 objects

    int tempRoll;
    float tempMarks;

    // Interactive Input Loop
    cout << "=== Enter Student Details ===" << endl;
    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        cout << "\nEnter details for Student " << (i + 1) << ":" << endl;
        
        cout << "Enter Roll Number: ";
        cin >> tempRoll;
        
        cout << "Enter Marks: ";
        cin >> tempMarks;

        // Pass the user input to the object
        s[i].setData(tempRoll, tempMarks);
    }

    // Output Loop
    cout << "\n=== Displaying Student Details ===" << endl;
    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        s[i].display();
    }

    return 0;
}

// Array of Objects:
// ClassName obj[n];

// Creates n objects stored contiguously.























































// Array of Objects:
// ClassName obj[n];

// Creates n objects stored contiguously.