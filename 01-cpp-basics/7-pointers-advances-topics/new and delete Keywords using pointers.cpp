/*⭐ Why new and delete Exist
C++ gives you manual control over memory.

new → allocates memory from heap at runtime

delete → frees that memory

This is different from stack variables, which are automatically created and destroyed.*/

#include <iostream>
using namespace std;

// Demo class to show constructor & destructor calls during dynamic allocation
class Demo {
public:
    Demo() {
        cout << "Constructor of Demo called" << endl;
    }
    ~Demo() {
        cout << "Destructor of Demo called" << endl;
    }
};

int main() {

    cout << "---- Single Variable with new/delete ----" << endl;

    // 'new' allocates memory on HEAP and returns pointer
    int *p = new int;      

    *p = 42;   // store value in dynamically allocated memory
    cout << "Value stored at p: " << *p << endl;

    delete p;  // 'delete' frees heap memory (prevents memory leak)
    p = nullptr;  // good practice: avoid dangling pointer


    cout << "\n---- Single Variable with Initialization ----" << endl;

    // new int(100) initializes memory at allocation time
    int *q = new int(100); 
    cout << "Value stored at q: " << *q << endl;

    delete q;  
    q = nullptr;


    cout << "\n---- Dynamic Array using new[] and delete[] ----" << endl;

    int n = 5;

    // new[] allocates array on heap (size decided at runtime)
    int *arr = new int[n]; 

    for(int i = 0; i < n; i++)
        arr[i] = (i + 1) * 10;   // fill array

    cout << "Array elements: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    delete[] arr;   // delete[] is required for arrays
    arr = nullptr;


    cout << "\n---- Dynamic Object using new/delete ----" << endl;

    // new calls constructor, returns pointer to object
    Demo *d = new Demo();  

    delete d;  // delete calls destructor
    d = nullptr;


    cout << "\n---- Array of Objects using new[] and delete[] ----" << endl;

    // new[] calls constructor for each object
    Demo *objArr = new Demo[3]; 

    // delete[] calls destructor for each object
    delete[] objArr;            
    objArr = nullptr;

    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {

//     // ---------------- BASIC POINTER EXAMPLE ----------------
//     int a = 4;
//     int* ptr = &a;   // ptr stores address of a (stack memory)
//     cout << "The value of a is " << *(ptr) << endl;  // dereferencing pointer


//     // ---------------- USING new KEYWORD ----------------
//     // 'new' allocates memory on HEAP and returns a pointer

//     // int *p = new int(40);   // dynamic int with initialization
//     float *p = new float(40.78);  // dynamic float with initialization
//     cout << "The value at address p is " << *(p) << endl;

//     delete p;   // free heap memory (prevents memory leak)
//     p = nullptr; // avoid dangling pointer


//     // ---------------- DYNAMIC ARRAY USING new[] ----------------
//     int *arr = new int[3];   // dynamic array of size 3 (heap memory)

//     // storing values
//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;

//     cout << "Dynamic array values: ";
//     cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

//     delete[] arr;   // delete[] is required for arrays
//     arr = nullptr;  // avoid dangling pointer

//     return 0;
// }










                                     // NO
    /*
 !WHY DO WE NEED DYNAMIC MEMORY (new/delete) IN C++?

1. Static (manual) memory has fixed size
   - When we write: int arr[10];
     The size must be known at compile time.
   - But in real programs, size often depends on user input.
   - Dynamic memory allows: int *arr = new int[n]; where n is decided at runtime.

2. Static variables die when the function ends
   - Example:
        int* fun() {
            int a = 10;   // stored on stack
            return &a;    // ERROR: memory destroyed after function ends
        }
   - Stack memory is temporary.
   - Dynamic memory stays alive until we delete it:
        int* fun() {
            int *p = new int(10);  // heap memory
            return p;              // valid
        }

3. Objects need flexible lifetime
   - Sometimes we want objects to exist beyond a function.
   - Example:
        Demo *d = new Demo();  // constructor runs
        delete d;              // destructor runs when we decide
   - Stack objects are destroyed automatically, but heap objects give us control.

4. Large data cannot fit on stack
   - Stack memory is small (1–8 MB).
   - Example:
        int big[10000000];  // stack overflow
   - But:
        int *big = new int[10000000];  // works (heap is large)

5. Advanced data structures require dynamic memory
   - Linked List, Trees, Graphs, Queues, Stacks, Heaps
   - These structures grow and shrink during runtime.
   - Example (Linked List):
        Node *temp = new Node();
   - Without dynamic memory, these structures cannot exist.

6. Static memory gives no control
   - Static memory is created and destroyed automatically.
   - Dynamic memory gives full control:
        - create when needed
        - destroy when needed
        - resize when needed

7. Summary
   - Static memory = fixed, temporary, limited, inflexible.
   - Dynamic memory = flexible size, longer lifetime, large data handling, supports complex data structures.

ONE-LINE DEFINITION:
Dynamic memory is needed because static memory cannot adapt to runtime requirements, cannot survive outside functions, and cannot support large or flexible data structures.

                                */    