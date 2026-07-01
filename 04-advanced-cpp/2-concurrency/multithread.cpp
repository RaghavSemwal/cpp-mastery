#include <iostream>

// 1. Comment out or remove the broken standard thread header
// #include <thread> 

// 2. Include the workaround header using quotes "" because it's in your local directory
#include "mingw.thread.h" 

using namespace std;

void myfunc(){
   cout << "so,we are there yet ?" << endl;
}

int main(){
    // 3. Explicitly use std::thread (mingw.thread.h injects it into the std namespace)
    std::thread t1(myfunc);
   // t1.join();
    t1.detach();

    if(t1.joinable()){
         t1.join();
          cout << "thread is joinable" << endl;
    }
  
    return 0;
}