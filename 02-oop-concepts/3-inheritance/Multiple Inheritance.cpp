/*What is Multiple Inheritance?
Definition: A derived class inherits from two or more base classes.

Purpose: Allows combining features from multiple classes into one.*/

// #include <iostream>     
// using namespace std;

// class base1 {
//     protected :
//     int num1;
//     public:
//     void setNum1(int n1) {
//         num1 = n1;
//     }
// };

// class base2 {
//     protected :
//     int num2;
//     public:
//     void setNum2(int n2) {
//         num2 = n2;
//     }
// };

// class derive :public base1,public base2 {
//     public:
//     void display() {
//         cout << "Num1: " << num1 << endl;
//         cout << "Num2: " << num2 << endl;
//     }
//     void sum() {
//         cout << "Sum: " << num1 + num2 << endl;
//     }
// };

// int main() {
//     derive d;
//     d.setNum1(10);  // from base1
//     d.setNum2(20);  // from base2
//     d.display();    // shows both numbers
//     d.sum();        // shows sum of both numbers
//     return 0;
// }







#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    Employee(int i) { id = i; }
    void showEmployee() { cout << "Employee ID: " << id << endl; }
};

class Coder {
public:
    string language;
    Coder(string lang) { language = lang; }
    void showCoder() { cout << "Coding Language: " << language << endl; }
};

class Programmer : public Employee, public Coder {
public:
    float salary;
    Programmer(int i, string lang, float s) : Employee(i), Coder(lang) {
        salary = s;
    }
    void showProgrammer() {
        cout << "Programmer ID: " << id
             << ", Language: " << language
             << ", Salary: " << salary << endl;
    }
};

int main() {
    Programmer p1(101, "C++", 60000);
    p1.showEmployee();   // from Employee
    p1.showCoder();      // from Coder
    p1.showProgrammer(); // from Programmer
    return 0;
}




