#include <iostream>
// Normally you would include <thread>, but on some MinGW setups
// the standard <thread> header is broken. So you’re using a workaround:
#include "mingw.thread.h" 

using namespace std;

// A simple function to run in a separate thread
void myfunc() {
    cout << "So, are we there yet?" << endl;
}

int main() {
    // Create a thread object t1 that runs myfunc()
    std::thread t1(myfunc);

    // Option 1: join() → main waits until t1 finishes
    // t1.join();

    // Option 2: detach() → t1 runs independently, main doesn’t wait
    t1.detach();

    // Check if thread is still joinable
    if (t1.joinable()) {
        // If joinable, join it (synchronize with main)
        t1.join();
        cout << "Thread is joinable" << endl;
    }

    return 0;
}
