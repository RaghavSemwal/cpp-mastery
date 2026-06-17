#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    float salary;

    Employee(int i) {
        id = i;
        salary = 50000; // default salary
    }
};

class Programmer : public Employee {
private:
    string language;

public:
    // Constructor chaining: call Employee constructor
    Programmer(int i, string lang) : Employee(i) {
        language = lang;
    }

    void display() {
        cout << "ID: " << id
             << ", Salary: " << salary
             << ", Language: " << language << endl;
    }
};

int main() {
    Programmer p1(101, "C++");
    p1.display();
    return 0;
}





/* ⭐ Inheritance Syntax & Visibility Modes in C++
| Visibility Mode      | Effect on Base Class Members in Derived Class                           | Example                                   |
|----------------------|-------------------------------------------------------------------------|-------------------------------------------|
| **Default (private)**| If you don’t specify, inheritance is **private** by default. Public & protected members of base become **private** in derived. | class Dog : Animal { };    |
| **Public**           | Public → Public, Protected → Protected, Private → Not inherited         | class Dog : public Animal { };            |
| **Protected**        | Public → Protected, Protected → Protected, Private → Not inherited      | class Dog : protected Animal { };         |
| **Private**          | Public → Private, Protected → Private, Private → Not inherited          | class Dog : private Animal { };           |
*/