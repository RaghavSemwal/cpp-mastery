/*
in C++ STL, std::vector is a dynamic array container that automatically manages memory, grows as needed, and 
provides fast random access. It is one of the most commonly used containers in competitive programming and
 real‑world projects because of its flexibility and efficiency.
 
 !⭐ Key Features
Dynamic size: Expands/shrinks automatically.

Random access: Constant time O(1) using v[i].

Efficient insertion/removal at end: Amortized O(1) with push_back() / pop_back().

Insertion/removal in middle: Linear time O(n) because elements must shift.

Capacity management:

size() → current number of elements

capacity() → allocated memory

reserve(n) → pre‑allocate memory to avoid frequent reallocations

shrink_to_fit() → release unused memory*/



// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v1;              // empty vector
//     vector<int> v2(3, 5);        // 3 elements, all 5
//     vector<int> v3 = {1, 2, 3};  // initializer list

//     v1.push_back(10);
//     v1.push_back(20);

//     cout << "v1 size: " << v1.size() << endl;
//     cout << "v2 elements: ";
//     for (int x : v2) cout << x << " ";
//     cout << endl;

//     cout << "Element at index 1 in v3: " << v3.at(1) << endl;
//     return 0;
// }

/*
!⭐ Best Practices

Use reserve() if you know the number of elements in advance → avoids costly reallocations.

Prefer at() for safe access (throws exception if out of range).

Use shrink_to_fit() to free unused memory when vector shrinks.

For frequent insertions/removals in the middle, consider std::list instead.

⭐ One‑Line Exam Definition
In C++ STL, std::vector is a sequence container that represents a dynamic array, offering fast random access, 
efficient insertion/removal at the end, and automatic memory management.
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. Create an empty vector of integers
    vector<int> v;

    // 2. Add elements using push_back
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // 3. Display elements using range-based for loop
    cout << "Vector elements: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // 4. Access elements
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    cout << "Element at index 1: " << v.at(1) << endl;

    // 5. Insert element at position
    v.insert(v.begin() + 1, 15); // insert 15 at index 1

    cout << "After insertion: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 6. Remove last element
    v.pop_back();

    cout << "After pop_back: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 7. Erase element at position
    v.erase(v.begin()); // remove first element

    cout << "After erase: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 8. Size and capacity
    cout << "Size = " << v.size() << endl;
    cout << "Capacity = " << v.capacity() << endl;

    return 0;
}
