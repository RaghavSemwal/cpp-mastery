/*
🎯 Definition
unique_lock is a flexible mutex ownership wrapper.

Unlike lock_guard, it gives you more control over how and when a mutex is locked/unlocked.

It supports advanced features like deferred locking, timed locking, recursive locking, and condition variables.

⭐ Key Features
Different Locking Strategies

defer_lock → Construct without locking immediately.

try_to_lock → Try to lock without blocking.

adopt_lock → Assume mutex is already locked by the thread.

Timed Locking

try_lock_for(duration) → Try to lock for a certain time.

try_lock_until(time_point) → Try until a specific time.

Unlocking

Unlike lock_guard, you can explicitly call unlock() when needed.

Moveable

Ownership of a unique_lock can be transferred (moved), but not copied.
*/
// ⭐ Example Code
// cpp
#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;

timed_mutex mtx;   // use timed_mutex instead of mutex
int counter = 0;

void task(const string& name) {
    unique_lock<timed_mutex> lock(mtx, defer_lock);

    // Try to lock for 100ms
    if (lock.try_lock_for(chrono::milliseconds(100))) {
        for (int i = 0; i < 5; i++) {
            counter++;
            cout << name << " -> " << counter << endl;
        }
        lock.unlock(); // optional, since unique_lock unlocks on destruction
    } else {
        cout << name << " could not acquire lock!" << endl;
    }
}

int main() {
    thread t1(task, "Thread 1");
    thread t2(task, "Thread 2");

    t1.join();
    t2.join();

    cout << "Final counter: " << counter << endl;
    return 0;
}
