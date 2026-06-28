/*
⭐ Function Templates in C++
🎯 What They Are
A function template is a generic function that works with different data types without rewriting code.

The compiler generates the actual function when you call it with a specific type.
*/





// #include <iostream>
// using namespace std;

// template <class T>
// T add(T a, T b) {
//     return a + b;
// }

// int main() {
//     cout << add<int>(3, 4) << endl;       // works with int
//     cout << add<float>(3.5, 4.2) << endl; // works with float
//     return 0;
// }


//🔹 Example 2: Function Template with Parameters of Different Types
// #include <iostream>
// using namespace std;

// template <class T1, class T2>
// float funcAverage(T1 a, T2 b) {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// int main() {
//     cout << "Average = " << funcAverage(5, 2) << endl;       // int + int
//     cout << "Average = " << funcAverage(5.5, 2) << endl;     // float + int
//     cout << "Average = " << funcAverage(3.2, 4.8) << endl;   // float + float
//     return 0;
// }

#include <iostream>
using namespace std;

template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int c = 2, d = 3;
    swapValues(c, d);   // ✅ no conflict
    cout << c << " " << d << endl;
    return 0;
}


/*
⭐ What Went Wrong
Function name conflict

The C++ Standard Library already has a function called std::swap.

Since you wrote your own swap() in the global namespace, it can cause confusion or warnings depending on your compiler.

Best practice issue

It’s better to avoid naming your own function exactly the same as a standard one.

Otherwise, the compiler may complain or you might accidentally call the wrong version.*/