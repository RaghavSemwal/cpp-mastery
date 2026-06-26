/*
⭐ Writing Our First C++ Template in VS Code
1. What is a Template?
A template allows writing generic code that works with any data type (int, float, double, etc.).

Supports code reusability and type safety.

Two types:

Function Templates

Class Templates*/


// #include <iostream>
// using namespace std;

// template <class T>
// T add(T a, T b) {
//     return a + b;
// }

// int main() {
//     cout << "Int sum: " << add<int>(3, 4) << endl;
//     cout << "Float sum: " << add<float>(3.5, 4.2) << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

template <class T>
class Vector {
public:
    T *arr;
    int size;

    Vector(int m) {
        size = m;
        arr = new T[size];
    }

    T dotproduct(Vector &v) {
        T d = 0;
        for (int i = 0; i < size; i++) {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main() {
    Vector<float> v1(3);
    v1.arr[0] = 1.1; v1.arr[1] = 2.2; v1.arr[2] = 3.3;

    Vector<float> v2(3);
    v2.arr[0] = 1.0; v2.arr[1] = 2.0; v2.arr[2] = 3.0;

    cout << "Dot product = " << v1.dotproduct(v2) << endl;
    return 0;
}

/*5. Key Points
Templates must be defined in header files (or same .cpp) so compiler can instantiate them.

Use template<class T> or template<typename T> (both are valid).

Compiler generates code when template is instantiated with a type.

Saves time, avoids code duplication.

⭐ One‑Line Definition
A C++ template is a blueprint for writing generic functions or classes that work with any data type, 
enabling code reusability and type safety.*/