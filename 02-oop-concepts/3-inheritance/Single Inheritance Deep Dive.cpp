// #include <iostream>
// using namespace std;

// class base{
//     int data1; // private by default
// public:
//     int data2; // public member
//     void setdata();
//     int getdata1();
//     int getdata2();
// };

// void base :: setdata(){
//     data1 = 10;
//     data2 = 20;
// }

// int base :: getdata1(){
//     return data1;
// }

// int base :: getdata2(){
//     return data2;
// }

// class derived :public base{
//     int data3;
// public:
//     void process();
//     void display();

// };

// void derived :: process(){
//     data3=data2*getdata1();
// }

// void derived :: display(){
//     cout<<"Data1: "<<getdata1()<<endl;
//     cout<<"Data2: "<<getdata2()<<endl;
//     cout<<"Data3: "<<data3<<endl;
// }

// int main(){
//     derived der;
//     der.setdata();
//     der.process();
//     der.display();
//     return 0;
// } 





#include <iostream>
using namespace std;

class base{
    int data1; // private by default
public:
    int data2; // public member
    void setdata();
    int getdata1();
    int getdata2();
};

void base :: setdata(){
    data1 = 10;
    data2 = 20;
}

int base :: getdata1(){
    return data1;
}

int base :: getdata2(){
    return data2;
}

class derived :private base{
    int data3;
public:
    void process();
    void display();

};

void derived :: process(){
   setdata();
    data3=data2*getdata1();
}

void derived :: display(){
    cout<<"Data1: "<<getdata1()<<endl;
    cout<<"Data2: "<<getdata2()<<endl;
    cout<<"Data3: "<<data3<<endl;
}

int main(){
    derived der;
    //der.setdata();
    der.process();
    der.display();
    return 0;
}








/* What is Single Inheritance?
Definition: A derived class inherits from exactly one base class.

Purpose: Promotes code reusability and allows extension of base class functionality. */



#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    float salary;

    Employee(int i) {
        id = i;
        salary = 50000; // default salary
    }

    void showEmployee() {
        cout << "Employee ID: " << id << ", Salary: " << salary << endl;
    }
};

class Programmer : public Employee {
private:
    string language;

public:
    // Constructor chaining: call Employee constructor
    Programmer(int i, string lang) : Employee(i) {
        language = lang;
    }

    void showProgrammer() {
        cout << "Programmer ID: " << id
             << ", Salary: " << salary
             << ", Language: " << language << endl;
    }
};

int main() {
    Programmer p1(101, "C++");
    p1.showEmployee();    // inherited function
    p1.showProgrammer();  // derived function
    return 0;
}








/*   Key Points (Exam‑Ready)
Single inheritance → one base, one derived.

Derived class inherits public & protected members (depending on visibility mode).

Private members of base are never inherited directly.

Base class constructor runs first, then derived class constructor.

Supports function overriding (derived class can redefine base functions).

Advantages
Simple and easy to understand.

Promotes code reuse.

Forms the foundation for more complex inheritance types (multilevel, multiple, hybrid).*/
