#include <iostream>
using namespace std;

int main() {
    // --- Break Example ---
    cout << "Break demo (stop at 5): ";
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // exits loop when i == 5
        }
        cout << i << " ";
    }
    cout << endl;

    // --- Continue Example ---
    cout << "Continue demo (skip 5): ";
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // skips printing 5
        }
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
