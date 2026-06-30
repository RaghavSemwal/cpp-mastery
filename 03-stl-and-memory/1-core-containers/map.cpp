/*
In C++ STL, std::map is an associative container that stores key–value pairs in sorted order (by default ascending),
with unique keys. It is usually implemented as a self‑balancing Red‑Black Tree, giving efficient O(log n) insertion,
deletion, and search

⭐ Key Characteristics of std::map
Header file: <map>

Syntax:cpp
std::map<KeyType, ValueType> mapName;


Unique keys: No duplicate keys allowed.

Sorted order: Keys are automatically sorted using std::less<Key> by default.

Underlying structure: Typically a Red‑Black Tree.

Iterators: Bidirectional; traversal is in ascending order of keys
*/

#include <iostream>
#include <map>
using namespace std;

int main() {
    // Create and initialize map
    map<int, string> students;
    students[101] = "Raghav";
    students[102] = "Amit";
    students[103] = "Priya";

    // Display all elements
    cout << "Student list:" << endl;
    for (auto &p : students) {
        cout << p.first << " -> " << p.second << endl;
    }

    // Find element
    auto it = students.find(102);
    if (it != students.end())
        cout << "Found: " << it->first << " -> " << it->second << endl;

    // Erase element
    students.erase(103);

    cout << "After erasing key 103:" << endl;
    for (auto &p : students) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}








