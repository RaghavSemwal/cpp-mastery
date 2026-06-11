/*⭐ What is Encapsulation?
Encapsulation is the binding of data and functions that operate on that data into a single unit (class).

It also protects data by restricting direct access using access modifiers.

In simple words:

Encapsulation = Data Hiding + Controlled Access


🔐 Why Encapsulation?
Protects data from accidental modification

Ensures security

Allows controlled access through getter/setter functions

Makes code modular and maintainable

🟥 Private Members
Cannot be accessed directly from outside the class

Used to hide sensitive data

🟦 Public Members
Accessible from anywhere

Used to provide controlled access to private data
*/

#include <iostream>
using namespace std;

class Employee {
private:
    int salary;      // private data (hidden)
    string name;

public:
    // Setter function (public)
    void setData(string n, int s) {
        name = n;
        salary = s;
    }

    // Getter function (public)
    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1;

    // e1.salary = 50000;  // ❌ ERROR: salary is private

    e1.setData("Raghav", 50000);  // ✔ allowed
    e1.display();

    return 0;
}
