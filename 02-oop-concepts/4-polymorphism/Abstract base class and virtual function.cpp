/*
!⭐ Abstract Base Class (ABC)
A class that contains at least one pure virtual function.

Cannot be instantiated directly.

Serves as a blueprint for derived classes.

Forces derived classes to implement specific functions.

!⭐ Pure Virtual Function
Declared in the base class with = 0.

example:
virtual void display() = 0;
This means: “Every derived class must provide its own version of display().”

If a derived class does not override it → that derived class also becomes abstract.

!⭐ Why Use Abstract Classes?
To define a common interface for all derived classes.

To enforce implementation of certain functions in derived classes.

To achieve runtime polymorphism with base class pointers.

*/

#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;  
    virtual void perimeter() = 0;
};

// Derived Class: Circle
class Circle : public Shape {
    float radius;
public:
    Circle(float r) { radius = r; }
    void area() override {
        cout << "Circle area = " << 3.14 * radius * radius << endl;
    }
    void perimeter() override {
        cout << "Circle perimeter = " << 2 * 3.14 * radius << endl;
    }
};

// Derived Class: Rectangle
class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) { length = l; breadth = b; }
    void area() override {
        cout << "Rectangle area = " << length * breadth << endl;
    }
    void perimeter() override {
        cout << "Rectangle perimeter = " << 2 * (length + breadth) << endl;
    }
};

int main() {
    // Base class pointer
    Shape *s;

    Circle c(5);
    Rectangle r(4, 6);

    s = &c;
    s->area();
    s->perimeter();

    s = &r;
    s->area();
    s->perimeter();

    return 0;
}




// #include <iostream>
// using namespace std;

// class CWH {
// protected:
//     string title;
//     float rating;
// public:
//     CWH(string s, float r) {
//         title = s;
//         rating = r;
//     }
//     virtual void display()=0;
// };

// class CWHVideo : public CWH {
//     float videoLength;
// public:
//     CWHVideo(string s, float r, float vl) : CWH(s, r) {
//         videoLength = vl;
//     }
//     void display() override {
//         cout << "This is an amazing video with title " << title << endl;
//         cout << "Ratings: " << rating << " out of 5 stars" << endl;
//         cout << "Length of this video is: " << videoLength << " minutes" << endl;
//     }
// };

// class CWHText : public CWH {
//     int words;
// public:
//     CWHText(string s, float r, int w) : CWH(s, r) {
//         words = w;
//     }
//     void display() override {
//         cout << "This is an amazing text tutorial with title " << title << endl;
//         cout << "Ratings: " << rating << " out of 5 stars" << endl;
//         cout << "Number of words in this tutorial: " << words << endl;
//     }
// };

// int main() {
//     CWHVideo video("C++ OOP Tutorial", 4.8, 15.5);
//     CWHText text("Polymorphism Notes", 4.6, 1200);

//     // Base class pointer
//     CWH *ptr;

//     // Pointing to video object
//     ptr = &video;
//     ptr->display();   // calls CWHVideo::display()

//     // Pointing to text object
//     ptr = &text;
//     ptr->display();   // calls CWHText::display()

//     return 0;
// }

/*
!⭐ One‑Line Definition
An abstract base class is a class with at least one pure virtual function (=0),
 used to enforce that derived classes implement specific behavior, enabling runtime polymorphism.*/


 