// #include <iostream>
// using namespace std;
// int main() {
//   int a=14;
//   float pi=3.14;
//     char c='A';
// bool isTrue=true;
//     cout<<"The value of a is "<<a<<endl;
//     cout<<"The value of pi is "<<pi<<endl;
//     cout<<"The value of c is "<<c<<endl;
 //     cout<<"The value of isTrue is "<<isTrue<<endl;  
    
//     return 0;
// }


//variable scope 
// #include <iostream>
// using namespace std;
// int globalVar=100; // global variable
// void display() {
//     cout<<"Inside display function, globalVar = "<<globalVar<<endl; // accessing global variable
// }
// int main(){
//     int localVar1=50; // local variable
//     int localVar2=200; // local variable
//      display(); // function prototype
//     cout<<"Inside main function, localVar1 = "<<localVar1<<endl; // accessing local variable
//     cout<<"Inside main function, localVar2 = "<<localVar2<<endl; // accessing local variable
//  return 0;}


// can local and global variable have same name
#include <iostream>
using namespace std;

int globalVar = 100; // global variable

void display() {
    cout << "Inside display function, globalVar = " << globalVar << endl;
}

int main() {
    int globalVar = 50; // local variable shadows global
    globalVar = 200;    // ✅ update local variable instead of  redeclaring
    display();          // prints globalVar = 100
    cout << "Inside main function, globalVar = " << globalVar << endl; // prints 200
    return 0;
}

    