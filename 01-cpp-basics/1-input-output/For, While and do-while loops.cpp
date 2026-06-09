#include <iostream>
using namespace std;

int main() {
    // --- For Loop ---
    cout << "For loop (1 to 5): ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // --- While Loop ---
    cout << "While loop (1 to 5): ";
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    // --- Do-While Loop ---
    cout << "Do-While loop (1 to 5): ";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl;

    return 0;
}
