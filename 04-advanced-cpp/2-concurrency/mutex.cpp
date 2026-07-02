#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0;  // shared resource
std::mutex mtx;  // mutex for synchronizing access to counter

void increment() {
    
        mtx.lock();  // lock the mutex before accessing the shared resource
        counter++;  // race condition possible
        mtx.unlock();  // unlock the mutex after accessing the shared resource
    
}

int main() {
    thread t1(increment);
    thread t2(increment);

    t1.join();
    t2.join();

    cout << "Final counter value: " << counter << endl;
    return 0;
}

