/*
⭐ Dynamic Initialization of Objects Using Constructors
🎯 Meaning
Dynamic initialization means initializing object data members at runtime using values provided by the user (via cin) or computed during program execution.
This is usually done with parameterized constructors.
*/
#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;
    double area;

public:
    // Constructor dynamically calculates area
    Circle(double r) {
        radius = r;
        area = M_PI * pow(radius, 2);
    }

    void display() {
        cout << "Radius: " << radius << ", Area: " << area << endl;
    }
};

int main() {
    double r;
    cout << "Enter radius: ";
    cin >> r;

    Circle c(r);   // dynamic initialization
    c.display();

    return 0;
}


/*Key Points (Exam‑Ready)
Dynamic initialization = runtime values used in constructors.

Achieved using parameterized constructors.

Values can come from user input or runtime calculations.

Ensures objects are initialized with meaningful data, not fixed defaults.

*/







#include <iostream>
using namespace std;

class BankDeposit {
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    // Default Constructor
    BankDeposit() {}

    // Constructor when interest rate is given as a float (e.g., 0.04)
    BankDeposit(int p, int y, float r) {
        principal = p;
        years = y;
        interestRate = r;
        returnValue = principal;

        for (int i = 0; i < y; i++) {
            returnValue = returnValue * (1 + interestRate);
        }
    }

    // Constructor when interest rate is given as an integer percentage (e.g., 14)
    BankDeposit(int p, int y, int r) {
        principal = p;
        years = y;
        interestRate = float(r) / 100;   // convert percentage to decimal
        returnValue = principal;

        for (int i = 0; i < y; i++) {
            returnValue = returnValue * (1 + interestRate);
        }
    }

    void show() {
        cout << endl << "Principal amount was " << principal << endl
             << "Return value after " << years << " years is " << returnValue << endl;
    }
};

int main() {
    BankDeposit bd1, bd2;

    int p, y, R;
    float r;

    // Example 1: Interest rate as float
    cout << "Enter principal, years, and interest rate (float): ";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    // Example 2: Interest rate as integer percentage
    cout << "\nEnter principal, years, and interest rate (int %): ";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}












/*If you remove the default constructor (BankDeposit() {}) from your code, your program will fail to compile, 
throwing a specific compilation error.

Here is exactly what happens and why.

The Immediate Error
If you comment out or delete BankDeposit() {}, your compiler will scream at this line in main():

BankDeposit bd1, bd2; // ❌ Compilation Error!

The error message will look something like this:
error: no matching function for call to 'BankDeposit::BankDeposit()'

Why does this happen?
1. The "No-Longer-Implicit" Default Constructor Rule
In C++, if you write a class with no constructors at all, the compiler generously provides a hidden,
 implicit default constructor for you.

However, the moment you define any parameterized constructor (like your BankDeposit(int p, int y, float r)), 
C++ assumes you want full control over how your objects are born. 
It completely withdraws its automatic default constructor.

2. The Way You Declared Your Objects
In your main() function, you wrote:
BankDeposit bd1, bd2;
This syntax tells the compiler: "Hey, create two BankDeposit objects using the default constructor." 
But since you removed the default constructor, the compiler has no idea how to create bd1 and bd2 without parameters
, leading to the compilation error.

*/