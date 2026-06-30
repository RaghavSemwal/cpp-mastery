/*
In C++ STL, a Function Object (Functor) is simply an object that behaves like a function because 
it overloads the operator(). They are widely used in STL algorithms and containers for tasks like sorting, 
comparisons, and predicates.

!⭐ What is a Function Object (Functor)?
A function object (or functor) is any object that can be called like a function using operator().

Unlike normal functions, functors can store state and be passed as objects.

They are often used in STL algorithms (sort, find_if, remove_if) and as comparison criteria in 
associative containers (map, set).

!⭐ Advantages of Functors
Can hold state (e.g., counters, thresholds).

Type-safe and can be used as template parameters.

Efficient because they can be inlined by the compiler.

Flexible — can be customized for specific behavior.
*/

#include <iostream>
#include <vector>
#include <algorithm>   // for sort, find_if
#include <functional>  // for built-in functors like greater<int>
using namespace std;

// -------------------------------
// 1. Custom Functor (User-defined)
// -------------------------------
class Square {
public:
    // Overload operator() so object can be "called" like a function
    int operator()(int x) {
        return x * x;
    }
};

// -------------------------------
// 2. Predicate Functor (returns bool)
// -------------------------------
class GreaterThanFive {
public:
    bool operator()(int x) {
        return x > 5;   // returns true if x > 5
    }
};

int main() {
    // -------------------------------
    // Using our custom functor
    // -------------------------------
    Square sq;                 // Create functor object
    cout << "Square of 4 = " << sq(4) << endl;  // Calls operator()(4)

    // -------------------------------
    // Using functor with STL algorithm
    // -------------------------------
    vector<int> v = {1, 6, 3, 8, 2};

    // Find first element greater than 5 using our predicate functor
    auto it = find_if(v.begin(), v.end(), GreaterThanFive());
    if (it != v.end())
        cout << "First element > 5: " << *it << endl;

    // -------------------------------
    // Using built-in STL functor
    // -------------------------------
    cout << "Vector before sorting: ";
    for (int i=0;i<v.size();i++){

     cout<<v.at(i)<<" ";
   }
 cout<<"\n";
    // Sort in descending order using built-in functor greater<int>()
    sort(v.begin(), v.end(), greater<int>());

    cout << "Vector after sorting (descending): ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}
