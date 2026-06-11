/*2. Passing Objects as Function Arguments
Objects can be passed:

By value (copy of object)

By reference (original object)

By pointer (address of object)*/

//Example: Passing Object to a Function

// #include <iostream>
// using namespace std;

// class Employee {
// private:
//     int id;
//     float salary;

// public:
//     void setData(int i, float s) {
//         id = i;
//         salary = s;
//     }

//     void display() {
//         cout << "ID: " << id << ", Salary: " << salary << endl;
//     }
// };

// // Function to print employee details (object passed as argument)
// void show(Employee e) {
//     cout << "Showing from function: ";
//     e.display();
// }

// int main() {
//     Employee emp[3];   // array of 3 objects

//     emp[0].setData(101, 50000);
//     emp[1].setData(102, 55000);
//     emp[2].setData(103, 60000);

//     for (int i = 0; i < 3; i++) {
//         emp[i].display();   // calling member function
//         show(emp[i]);       // passing object to function
//     }

//     return 0;
// }


// //passing Object by Reference (Example)
// #include <iostream>
// using namespace std;

// class Employee {
// private:
//     int id;
//     float salary;

// public:
//     void setData(int i, float s) {
//         id = i;
//         salary = s;
//     }

//     void display() {
//         cout << "ID: " << id << ", Salary: " << salary << endl;
//     }

//     // A helper to update salary
//     void updateSalary(float s) {
//         salary = s;
//     }
// };

// // Function that receives object BY REFERENCE
// void update(Employee &e) {
//     cout << "Updating salary inside function..." << endl;
//     e.updateSalary(99999);   // modifies original object
// }

// int main() {
//     Employee e1;

//     e1.setData(101, 50000);
//     cout << "Before update: ";
//     e1.display();

//     update(e1);   // passing object by reference

//     cout << "After update: ";
//     e1.display();

//     return 0;
// }


/*Why This Is Important
✔ Passing by Value
Makes a copy

Original object does NOT change

✔ Passing by Reference
No copy

Function works on original object

Changes are permanents

*/


//program: Adding Two Complex Numbers (Passing Object as Argument)
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

    // Function to add two complex numbers
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setData(3.5, 2.5);
    c2.setData(1.5, 4.5);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    c3 = c1.add(c2);   // passing object as argument

    cout << "Sum = ";
    c3.display();

    return 0;
}
