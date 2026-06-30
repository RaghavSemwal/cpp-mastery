/*
!🎯 What It Is
std::list is a sequence container that implements a doubly linked list.

Unlike vector or array, elements are not stored contiguously.

Each node contains:

->The data

->A pointer to the previous node

->A pointer to the next node


⭐ Key Features
Dynamic size: grows/shrinks as needed.

Fast insertion/deletion at any position (O(1) if iterator is known).

No random access: accessing by index is O(n).

Bidirectional iteration: supports forward and backward traversal.

*/


#include <iostream>
#include <list>   // Header file for std::list
using namespace std;

// Utility function to display elements of a list
void display(list<int> &lst) {
    list<int>::iterator it;   // Iterator to traverse the list
    for (it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";   // Dereference iterator to access element
    }
    cout << endl;
}

int main() {
    // -------------------------------
    // 1. Create and fill list1
    // -------------------------------
    list<int> list1;          // Empty list of integers

    list1.push_back(5);       // Add element at the end
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    // Sort the list in ascending order
    list1.sort();
    cout << "List1 after sorting: ";
    display(list1);           // Output: 1 5 7 9 12

    // -------------------------------
    // 2. Remove elements from list1
    // -------------------------------
    list1.pop_front();        // Remove first element (1)
    list1.pop_back();         // Remove last element (12)
    list1.remove(9);          // Remove all occurrences of 9

    cout << "List1 after removals: ";
    display(list1);           // Output: 5 7

    // -------------------------------
    // 3. Create list2 with user input
    // -------------------------------
    list<int> list2;
    int a; // Temporary variable to hold input

    cout << "Enter 4 numbers for list2: ";
    for (int i = 0; i < 4; i++) {
        cin >> a;             // Read input
        list2.push_back(a);   // Add to list2
    }

    cout << "List2 contains: ";
    for (int num : list2) {
        cout << num << " ";
    }
    cout << endl;

    // -------------------------------
    // 4. Merge list2 into list1
    // -------------------------------
    list1.merge(list2);       // Merge requires both lists to be sorted
    cout << "List1 after merging with list2: ";
    display(list1);

    // -------------------------------
    // 5. Reverse list1
    // -------------------------------
     list1.reverse();
    cout << "List1 after reversing : ";
    display(list1);

    return 0;
}



/*⭐ When to Use std::list
When you need frequent insertions/deletions in the middle or at both ends.

When random access is not required.

Example: implementing queues, stacks, or maintaining ordered sequences with frequent modifications.

⭐ One‑Line Exam Definition
In C++ STL, std::list is a doubly linked list container that allows fast insertion and deletion anywhere 
in the sequence but does not support random access.*/
