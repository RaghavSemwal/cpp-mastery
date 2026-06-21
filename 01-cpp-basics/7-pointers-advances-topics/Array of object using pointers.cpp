/*
? ARRAY OF OBJECTS USING POINTERS (C++ THEORY)

!1. We can create an array of objects dynamically using pointers:
       ShopItem *ptr = new ShopItem[size];

!2. Why use dynamic array of objects?
   - Size is decided at runtime.
   - Objects are created on HEAP.
   - Useful when number of items is unknown before execution.

!3. When we write:
       ShopItem *ptr = new ShopItem[size];
   - 'size' objects are created.
   - Constructor runs 'size' times.

!4. Accessing objects:
       ptr->setData(...);   // using arrow operator
       ptr++;               // move pointer to next object

!5. Important:
TODO:   - Always store original pointer in a temp pointer:
TODO:         ShopItem *ptrTemp = ptr;
TODO:     Because ptr++ moves the pointer forward.

!6. After finishing:
    TODO:     ptr = ptrTemp;   // restore original address
    TODO:     delete[] ptr;    // destructor runs for all objects

!7. Arrow operator (->):
   - Used with pointers to objects.
   - ptr->member is same as (*ptr).member
*/

#include <iostream>
using namespace std;

class ShopItem {
    int id;
    float price;

public:
    void setData(int a, float b) {
        id = a;
        price = b;
    }

    void getData() {
        cout << "Item ID: " << id << "  Price: " << price << endl;
    }
};

int main() {

    int size;
    cout << "Enter number of items: ";
    cin >> size;

    // Create dynamic array of objects on HEAP
    ShopItem *ptr = new ShopItem[size];

    // Save original pointer (because ptr++ will change it)
    ShopItem *ptrTemp = ptr;

    int p;
    float q;

    // Input loop
    for (int i = 0; i < size; i++) {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;

        // ptr->setData(p, q) is same as (*ptr).setData(p, q)
        ptr->setData(p, q);

        ptr++;  // move pointer to next object
    }

    // Restore pointer to original location
    ptr = ptrTemp;

    cout << "\nDisplaying items:\n";

    // Output loop
    for (int i = 0; i < size; i++) {
        ptr->getData();
        ptr++;
    }

    // Restore again before deleting
    ptr = ptrTemp;

    delete[] ptr;   // delete array of objects

    return 0;
}

/*
?⭐Why ptrTemp is Needed?
?   Because:
!   ptr++ moves the pointer forward
!   After the loop, ptr no longer points to the start of the array.
If you call:
delete[] ptr;
on a shifted pointer → undefined behavior.
*/