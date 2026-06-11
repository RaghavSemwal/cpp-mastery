//Objects Memory Allocation & using Arrays in Classes 
#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks[5];   // array inside class

public:
    void input() {
        cout << "Enter roll: ";
        cin >> roll;

        cout << "Enter 5 marks: ";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";
        cout << endl;
    }
};

int main() {
    Student s[3];   // array of 3 objects

    for (int i = 0; i < 3; i++) {
        cout << "Enter data for student " << i+1 << endl;
        s[i].input();
    }

    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i+1 << " details:\n";
        s[i].display();
    }
}
