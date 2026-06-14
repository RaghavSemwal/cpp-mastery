/*
⭐ Dynamic Initialization of Objects Using Constructors
🎯 Meaning
Dynamic initialization means initializing object data members at runtime using values provided by the user (via cin) or computed during program execution.
This is usually done with parameterized constructors.
*/
// #include <iostream>
// #include <cmath>
// using namespace std;

// class Circle {
// private:
//     double radius;
//     double area;

// public:
//     // Constructor dynamically calculates area
//     Circle(double r) {
//         radius = r;
//         area = M_PI * pow(radius, 2);
//     }

//     void display() {
//         cout << "Radius: " << radius << ", Area: " << area << endl;
//     }
// };

// int main() {
//     double r;
//     cout << "Enter radius: ";
//     cin >> r;

//     Circle c(r);   // dynamic initialization
//     c.display();

//     return 0;
// }


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
   // BankDeposit() {}

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
  //  BankDeposit bd1, bd2;

    int p, y, R;
    float r;

    // Example 1: Interest rate as float
    cout << "Enter principal, years, and interest rate (float): ";
    cin >> p >> y >> r;
    BankDeposit bd1=BankDeposit(p, y, r);
    bd1.show();

    // Example 2: Interest rate as integer percentage
    cout << "\nEnter principal, years, and interest rate (int %): ";
    cin >> p >> y >> R;
     BankDeposit bd2=BankDeposit(p, y, R);
    bd2.show();

    return 0;
}
