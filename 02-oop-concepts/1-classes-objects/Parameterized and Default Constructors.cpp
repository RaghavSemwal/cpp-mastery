/*🎯 Definition
A constructor is a special member function of a class that:

Has the same name as the class

Has no return type

Is automatically called when an object is created

Used to initialize data members

⭐ 1. Default Constructor
Takes no arguments

Initializes objects with default values

⭐ 2. Parameterized Constructor
Takes arguments

Initializes objects with given values



| Feature | Default Constructor  | Parameterized Constructor |
| ---     | ---                  | ---                       |
| Arguments | None               | One or more                |
| Purpose   | Assigns default values | Assigns user‑defined values |
| Invocation| Automatic on object creation | Automatic with arguments |
| Example Call | ``Student ``s1;`` | ``Student ``s2(101, ``95.5);`` |*/








// #include <iostream>
// using namespace std;

// class complex{
//     private:
//       int real;
//       int img;
//     public:
//         complex(int r,int i);  // Parameterized Constructor declaration
//            //OR 
//            //complex(int r,int i){
//            //real=r;
//            //img=i;
//            //} // Parameterized Constructor definition
//             void display(){
//                 cout<<"complex: "<<real<<" + "<<img<<"i"<<endl;
//             }
// };

// // Parameterized Constructor definition outside the class BUT ALSO CAN BE DEFINED INSIDE THE CLASS
// complex::complex(int r,int i){  //Parameterized Constructor
//     real=r;
//     img=i;}

//  int main(){
//     complex c1(3,4);  // constructor is called automatically
//     c1.display();

//     return 0;
// }





// TAKING TWO POINT AND CALCULATING DISTANCE BETWEEN THEM
// #include <iostream>
// #include <math.h>
// #include <cmath>
// using namespace std;


// class point {
//     private:
//        int x;
//        int y;
//     public:
//         point(int a,int b){
//             x=a;
//             y=b;
//         }
//         void display(){
//             cout<<"point: ("<<x<<","<<y<<")"<<endl;
//         }
    
//         void distance(point p,point q){
//             double dist=sqrt(pow((q.x-p.x),2)+pow((q.y-p.y),2));
//             cout<<"Distance between points: "<<dist<<endl;
//         }

// };
// int main(){

//     point p1(3,4);  // constructor is called automatically
//     p1.display();
 
//     point p2(7,1);  // constructor is called automatically
//     p2.display();

//     p1.distance(p1,p2);
//     return 0;
// };

//                              //or
//  #include <iostream>
// #include <math.h>
// #include <cmath>
// using namespace std;


// class point {
//     private:
//        int x;
//        int y;
//     public:
//         point(int a,int b){
//             x=a;
//             y=b;
//         }
//         void display(){
//             cout<<"point: ("<<x<<","<<y<<")"<<endl;
//         }
    
//        friend void distance(point p,point q);

// };
//         void distance(point p,point q){
//             double dist=sqrt(pow((q.x-p.x),2)+pow((q.y-p.y),2));
//             cout<<"Distance between points: "<<dist<<endl;
//         }
 
// int main(){

//     point p1(3,4);  // constructor is called automatically
//     p1.display();
 
//     point p2(7,1);  // constructor is called automatically
//     p2.display();

//     distance(p1,p2);
//     return 0;
// };



// /*
// ⭐ Exam‑Ready One‑Liners
// Default Constructor → Initializes objects with default values, no arguments.

// Parameterized Constructor → Initializes objects with specific values, takes arguments.*/


#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    // Parameterized Constructor
    Point(int a , int b ) {
        x = a;
        y = b;
    }

  

    void display() {
        cout << "Point: (" << x << "," << y << ")" << endl;
    }

    //  calculate distance between two points
     void distance(Point p, Point q) {
        double dist = sqrt(pow(q.x - p.x, 2) + pow(q.y - p.y, 2));
        cout << "Distance between points: " << dist << endl;
    }
};

int main() {
    int x1, y1, x2, y2;

    cout << "Enter coordinates of first point (x y): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of second point (x y): ";
    cin >> x2 >> y2;

    Point p1(x1, y1);   // constructor called with user input
    Point p2(x2, y2);

    p1.display();
    p2.display();

    p1.distance(p1, p2);  // call member function

    return 0;
}
