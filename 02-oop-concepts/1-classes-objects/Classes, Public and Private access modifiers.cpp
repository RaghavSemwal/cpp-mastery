/*⭐ 1. What is a Class?
A class is a user‑defined data type that groups:

Data members (variables)

Member functions (methods)

It acts as a blueprint for creating objects.

🔐 2. Access Modifiers
Access modifiers control visibility of class members.

C++ provides three:

public

private

protected (used mainly in inheritance)

For now, we focus on public and private.

🟦 Public Members
Accessible from anywhere in the program.

Usually used for functions that provide controlled access to private data.

🟥 Private Members
Accessible only inside the class.

Not accessible directly from outside.

Used to protect data (encapsulation).

🧱 3. Why Use Private?
Prevents accidental modification

Enforces controlled access

Supports encapsulation (core OOP pillar)*/

#include <iostream>
using namespace std;    

class employee {
    private: // private access modifier
        
        float salary; // private data member

    public: // public access modifier
        int empId;
        void setData( float s);
        void getdata()
        {
            cout << "Employee ID: " << empId << endl;
            cout << "Employee Salary: " << salary << endl;
        }
    };

    void employee::setData(float s) {
        salary = s; // setting private data member
    };

    int main() {
        employee emp1;
        emp1.empId = 101; // accessing public data member
        emp1.setData(50000); // setting private data member using public method
        emp1.getdata(); // accessing private data member using public method

        return 0;
    }



  