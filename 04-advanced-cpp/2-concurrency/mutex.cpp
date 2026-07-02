/*⭐ Mutex in C++
🎯 Definition
Mutex stands for Mutual Exclusion.

It is a synchronization primitive used to protect shared resources from concurrent access by multiple threads.

Only one thread can lock the mutex at a time; other threads must wait until it is unlocked.

⭐ Key Operations
lock() → Acquires the mutex. If already locked, the thread waits.

unlock() → Releases the mutex.

try_lock() → Attempts to acquire the mutex without waiting; returns immediately with success/failure.

lock_guard → RAII wrapper that automatically locks on creation and unlocks when it goes out of scope (preferred for safety).
*/


// #include <iostream>
// #include <thread>
// using namespace std;

// int counter = 0;  // shared resource

// void increment() {
    
//         counter++;  // race condition possible
    
// }

// int main() {
//     thread t1(increment);
//     thread t2(increment);

//     t1.join();
//     t2.join();

//     cout << "Final counter value: " << counter << endl;
//     return 0;
// }




#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0;  
mutex mtx;        // declare a mutex

void increment() {
   
        mtx.lock();     // lock before accessing shared resource
        counter++;
        mtx.unlock();   // unlock after done
    
}

int main() {
    thread t1(increment);
    thread t2(increment);

    t1.join();
    t2.join();

    cout << "Final counter value: " << counter << endl;
    return 0;
}


/*⭐ One‑Line Exam Answer
A mutex in C++ is a synchronization tool that ensures mutual exclusion, allowing only one thread at a time to access a
 shared resource, preventing race conditions.*/
