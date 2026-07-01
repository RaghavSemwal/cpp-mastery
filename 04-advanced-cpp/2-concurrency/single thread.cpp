/*
⭐ Single‑Threaded Process in C++
🎯 Definition
A single‑threaded process is a program that executes with only one thread of control.

It means only one sequence of instructions runs at a time.

No parallel execution — the CPU executes tasks one after another.

⭐ Characteristics
One thread only → no concurrency inside the process.

Sequential execution → instructions run in order.

Simpler design → no need for synchronization (locks, mutexes).

Less efficient for tasks that could benefit from parallelism (e.g., heavy computation + I/O).*/


#include <iostream>
using namespace std;

void task1() {
    cout << "Task 1 running..." << endl;
}

void task2() {
    cout << "Task 2 running..." << endl;
}

int main() {
    // Single-threaded execution: tasks run one after another
    task1();
    task2();
    cout << "All tasks finished!" << endl;
    return 0;
}


/* Notice: task1() must finish before task2() starts — no overlap*/

