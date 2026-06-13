#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "=== Menu ===" << endl;
    cout << "1. Add two numbers" << endl;
    cout << "2. Check even/odd" << endl;
    cout << "3. Grade evaluation" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Sum = " << a + b << endl;
            break;
        }
        case 2: {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            if (num % 2 == 0)
                cout << num << " is Even." << endl;
            else
                cout << num << " is Odd." << endl;
            break;
        }
        case 3: {
            char grade;
            cout << "Enter your grade (A/B/C/D/F): ";
            cin >> grade;
            switch (grade) {
                case 'A': cout << "Excellent!" << endl; break;
                case 'B': cout << "Good!" << endl; break;
                case 'C': cout << "Fair." << endl; break;
                case 'D': cout << "Needs Improvement." << endl; break;
                case 'F': cout << "Fail." << endl; break;
                default: cout << "Invalid grade entered." << endl;
            }
            break;
        }
        case 4:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice! Please enter 1-4." << endl;
    }

    return 0;
}
