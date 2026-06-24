#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr; // points to first element

    cout << "Array elements using indexing: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Array elements using pointer arithmetic: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " "; // dereference with  offset
    }
    cout << endl;

    // Demonstrating pointer increment
    cout << "\nPointer increment demo:" << endl;
    cout << "p points to value: " << *p << endl;
    p++; // move to next element
    cout << "After p++, p points to value: " << *p << endl;

    return 0;
}
