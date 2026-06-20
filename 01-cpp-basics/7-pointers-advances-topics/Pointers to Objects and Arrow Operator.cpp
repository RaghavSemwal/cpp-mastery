// ! Important
// ? Question
// TODO: Finish this
// * Highlight 
/*
!POINTERS TO OBJECTS & ARROW OPERATOR (->) IN C++

?1. A pointer can store the address of an object just like it stores the address of a variable.
   Example:
    *   Demo obj;
    *  Demo *ptr = &obj;

?2. To access members using a normal object, we use dot operator:
    *  obj.show();

?3. To access members using a pointer to object, we use arrow operator (->):
    *  ptr->show();

?4. Why arrow operator?
   - Because ptr is not an object, it is an address.
   - So we cannot write ptr.show()
   - Arrow operator internally dereferences the pointer and accesses the member:
       ptr->show()  is same as  (*ptr).show()

?5. Dynamic object creation:
    *  p->show();
    *  delete p;

?6. Arrow operator is used for:
   - Accessing data members
   - Calling member functions
   - Working with dynamic objects
   - Working with arrays of objects created using new[]

?7. Summary:
   - Dot operator (.) → used with objects
   - Arrow operator (->) → used with pointers to objects
   - (*ptr).member  is same as  ptr->member
*/


#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    Demo(int a) {
        x = a;
        cout << "Constructor called, x = " << x << endl;
    }

    void show() {
        cout << "Value of x is: " << x << endl;
    }
};

int main() {

    // ---------------- NORMAL OBJECT ----------------
    Demo obj(10);      // object created on stack
    obj.show();        // dot operator


    // ---------------- POINTER TO OBJECT ----------------
    Demo *ptr = &obj;  // pointer storing address of object

    // Arrow operator used to access members through pointer
    ptr->show();       // same as (*ptr).show()


    // ---------------- DYNAMIC OBJECT ----------------
    Demo *p = new Demo(50);  // object created on heap
    p->show();               // arrow operator

    delete p;                // free heap memory
    p = nullptr;


    // ---------------- ARRAY OF OBJECTS USING new[] ----------------
    Demo *arr = new Demo[3] { Demo(1), Demo(2), Demo(3) };

    cout << "Accessing array of objects using pointer:" << endl;
    arr[0].show();
    arr[1].show();
    arr[2].show();

    delete[] arr;            // delete array of objects
    arr = nullptr;

    return 0;
}

/*
TODO:   ⭐ One‑Line Definition
 ?     A pointer to an object stores the object’s address, and the arrow operator (→) is used to access its members 
 ?     because the pointer is not an object itself.
*/