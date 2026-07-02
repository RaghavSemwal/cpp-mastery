/*
🎯 Definition
lock_guard is a lightweight RAII wrapper around a std::mutex.

It locks the mutex when the lock_guard object is created, and automatically unlocks when the object goes out of scope.

This ensures safe and exception‑proof mutex handling.

⭐ Key Properties
Acquires the lock immediately on construction.

Releases the lock automatically when destroyed (end of scope).

Cannot be explicitly unlocked.

Cannot be copied or assigned (to avoid double unlocking).
*/
// ⭐ Example Code: Without lock_guard
// #include <iostream>
// #include <thread>
// #include <mutex>
// using namespace std;

// mutex mtx;
// int counter = 0;

// void task(const string& name) {
//     for (int i = 0; i < 5; i++) {
//         mtx.lock();              // must remember to unlock manually
//         counter++;
//         cout << name << " -> " << counter << endl;
//         mtx.unlock();            // if you forget this, deadlock happens
//     }
// }

// int main() {
//     thread t1(task, "Thread 1");
//     thread t2(task, "Thread 2");

//     t1.join();
//     t2.join();

//     return 0;
// }




#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;
int counter = 0;

void task(const string& name) {
    for (int i = 0; i < 5; i++) {
        lock_guard<mutex> lock(mtx); // locks automatically
        counter++;
        cout << name << " -> " << counter << endl;
        // lock is released automatically when 'lock' goes out of scope
    }
}

int main() {
    thread t1(task, "Thread 1");
    thread t2(task, "Thread 2");

    t1.join();
    t2.join();

    return 0;
}


/*⭐ Why lock_guard is Better
No need to manually call unlock().

Prevents forgetting unlock (avoids deadlocks).

Exception‑safe: even if an exception is thrown, the destructor unlocks the mutex.

⭐ One‑Line Exam Answer
In C++ STL, std::lock_guard is an RAII wrapper for std::mutex that locks a mutex on creation and 
automatically unlocks it when the object goes out of scope, ensuring safe and exception‑proof synchronization.*/