/*
⭐ C++ Templates: Templates with Multiple Parameters
🎯 What It Means
A template can take more than one type parameter.
This allows you to create classes or functions that work with two or more different data types at the same time.

Think of it as a generic blueprint that accepts multiple types*/




// #include <iostream>
// using namespace std;

// template <class T1, class T2>
// void display(T1 a, T2 b) {
//     cout << "A = " << a << ", B = " << b << endl;
// }

// int main() {
//     display<int, float>(5, 3.14f);
//     display<string, int>("Raghav", 21);
//     return 0;
// }





#include <iostream>
using namespace std;

template <class T1, class T2>
class myClass{
    public:
    T1 data1;
    T2 data2;

     myClass(T1 a, T2 b){
        data1=a;
        data2=b;
     }

     void display(){
        cout<<data1<<endl;
        cout<<data2<<endl;
       }
};

int main(){
        myClass<char,float>obj('d',3.3);
        obj.display();
        return 0;
}


/*
TODO:⭐ Why Use Multiple Template Parameters?

When your class/function needs two different types  
(e.g., key–value pairs, coordinates, maps, complex numbers)

More flexibility and reusability

Avoids writing multiple overloaded versions
*/

