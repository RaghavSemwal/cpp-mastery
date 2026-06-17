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
  // setdata();
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