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



#include <iostream>
#include <vector>
using namespace std;


int main(){
     vector<int> v1;
     vector<int> v2(3,5);
     vector<int> v3={1,2,3};

     v1.push_back(10);
     v1.push_back(20);

     cout<<"size of of v1:"<<v1.size()<<endl;
     cout<<"v2 element :";

     for(int i=0;i<3;i++){
         cout <<v2[i]<< " "<<endl;
        
     }

     cout<<"element at index 1 in v3 :"<<v3.at(1)<<endl;
     return 0;
}


