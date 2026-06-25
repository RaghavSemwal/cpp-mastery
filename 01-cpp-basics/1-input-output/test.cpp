#include <iostream>
using namespace std;

int main() {
    // Test message
    cout << "Test Code Running Successfully!" << endl;

    // Simple arithmetic test
    int a ,b;
    cout<<"enter two numbers:"<<endl;
    cin>>a;
    cin>>b;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;

    // Input test
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "You entered: " << x << endl;

    return 0;
}
