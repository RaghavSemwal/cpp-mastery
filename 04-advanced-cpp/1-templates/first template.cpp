#include <iostream>
using namespace std;


template<class T>
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
            d += this->arr[i] * v.arr[i];   // ✅ multiply with v’s array
        }
        return d;
    }
};

int main() {
    Vector <float> v1(3);
    v1.arr[0] = 1.09;
    v1.arr[1] = 2.9;
    v1.arr[2] = 3.4;

    Vector <float> v2(3);
    v2.arr[0] = 1.44;
    v2.arr[1] = 2.999;
    v2.arr[2] = 3.09;

    float a = v1.dotproduct(v2);
    cout << "Dot product = " << a << endl;

    return 0;
}


