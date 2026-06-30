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

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     // Create and initialize map
//     map<int, string> students;
//     students[101] = "Raghav";
//     students[102] = "Amit";
//     students[103] = "Priya";

//     // Display all elements
//     cout << "Student list:" << endl;
//     for (auto &p : students) {
//         cout << p.first << " -> " << p.second << endl;
//     }

//     // Find element
//     auto it = students.find(102);
//     if (it != students.end())
//         cout << "Found: " << it->first << " -> " << it->second << endl;

//     // Erase element
//     students.erase(103);

//     cout << "After erasing key 103:" << endl;
//     for (auto &p : students) {
//         cout << p.first << " -> " << p.second << endl;
//     }

//     return 0;
// }

/*
⭐ Advantages
Automatic sorting of keys.

Efficient search, insert, and delete (O(log n)).

Useful for dictionaries, symbol tables, and associative lookups.

⭐ Limitations
No duplicate keys (use multimap if duplicates are needed).

Slower than unordered_map for average‑case lookups (since unordered_map uses hashing with O(1) average).*/


#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // -------------------------------
    // 1. Create a map of string -> int
    // -------------------------------
    map<string, int> marksmap;

    // Insert elements using operator []
    marksmap["harry"] = 98;
    marksmap["jack"]  = 59;
    marksmap["rohan"] = 2;

    // -------------------------------
    // 2. Insert multiple elements at once
    // -------------------------------
    marksmap.insert({{"raghav", 99}, {"raju", 22}});

    // -------------------------------
    // 3. Traverse map using iterator
    // -------------------------------
    map<string, int>::iterator iter;
    cout << "Marks of students:" << endl;
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++) {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    // -------------------------------
    // 4. Map properties
    // -------------------------------
    cout << "The size is: " << marksmap.size() << endl;        // number of elements
    cout << "The max size is: " << marksmap.max_size() << endl; // maximum possible elements (system dependent)
    cout << "Is map empty? " << marksmap.empty() << endl;       // returns 0 (false) if not empty

    return 0;
}





