#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // --- If-Else ---
    if (num > 0) {
        cout << "Number is positive." << endl;
    } else if (num < 0) {
        cout << "Number is negative." << endl;
    } else {
        cout << "Number is zero." << endl;
    }

    // --- Switch-Case ---
    char grade;
    cout << "\nEnter your grade (A/B/C/D/F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        case 'C':
            cout << "Fair." << endl;
            break;
        case 'D':
            cout << "Needs Improvement." << endl;
            break;
        case 'F':
            cout << "Fail." << endl;
            break;
        default:
            cout << "Invalid grade entered." << endl;
    }

    return 0;
}
            