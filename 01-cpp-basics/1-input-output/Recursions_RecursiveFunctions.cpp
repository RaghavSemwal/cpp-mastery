// #include <iostream>
// using namespace std;

// // Factorial using recursion
// int factorial(int n) {
//     if (n == 0 || n == 1)  // base case
//         return 1;
//     else
//         return n * factorial(n - 1); // recursive case
// }

// // Fibonacci using recursion
// int fibonacci(int n) {
//     if (n == 0) return 0;   // base case
//     if (n == 1) return 1;   // base case
//     return fibonacci(n - 1) + fibonacci(n - 2); // recursive case
// }

// int main() {
//     cout << "Factorial of 5 = " << factorial(5) << endl;
//     cout << "Fibonacci of 6 = " << fibonacci(6) << endl;
//     return 0;
// }



#include <iostream>
using namespace std;

// Recursive Fibonacci function
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive function to calculate sum of first n Fibonacci numbers
int sumFibonacci(int n) {
    if (n == 0) return 0; // base case
    return fibonacci(n) + sumFibonacci(n - 1); // recursive case
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Sum of first " << n << " Fibonacci numbers = " << sumFibonacci(n) << endl;

    return 0;
}
