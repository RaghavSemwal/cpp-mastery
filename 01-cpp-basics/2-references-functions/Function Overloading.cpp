#include <iostream>
using namespace std;

// Overloaded functions
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Add two ints: " << add(5, 10) << endl;
    cout << "Add two doubles: " << add(3.5, 2.5) << endl;
    cout << "Add three ints: " << add(1, 2, 3) << endl;
    return 0;
}



#include <iostream>
using namespace std;

// Volume of Cube
double volume(double side) {
    return side * side * side;
}

// Volume of Cylinder
double volume(double radius, double height) {
    return 3.14159 * radius * radius * height;
}

// Volume of Sphere
double volume(double radius, char type) {
    // 'type' parameter just distinguishes this overload
    return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
}

int main() {
    cout << "Volume of Cube (side=5): " << volume(5.0) << endl;
    cout << "Volume of Cylinder (r=3, h=7): " << volume(3.0, 7.0) << endl;
    cout << "Volume of Sphere (r=4): " << volume(4.0, 's') << endl;

    return 0;
}
