/*The Diamond Problem
Imagine this structure:
       A
      / \
     B   C
      \ /
       D
B and C both inherit from A.

D inherits from both B and C.

Without virtual inheritance, D gets two copies of A → ambiguity when accessing members of A */


// class A {
// public:
//     void display() { cout << "Class A display()" << endl; }
// };

// class B : virtual public A { };
// class C : virtual public A { };

// class D : public B, public C { };

// int main() {
//     D obj;
//     obj.display();   // ✔ Only one copy of A
//     return 0;
// }







#include <iostream>
using namespace std;

class student {
protected:
    int roll;
public:
    void setroll(int r) {
        roll = r;
    }
    void display_roll() {
        cout << "Roll no. of student: " << roll << endl;
    }
};

class test : virtual public student {
protected:
    float physics, maths;
public:
    void setmarks(float m1, float m2) {
        physics = m1;
        maths = m2;
    }
    void display_marks() {
        cout << "Marks in Physics: " << physics << endl;
        cout << "Marks in Maths: " << maths << endl;
    }
};

class sports : virtual public student {
protected:
    float score;
public:
    void setscore(float s) {
        score = s;
    }
    void display_score() {
        cout << "Sports Score: " << score << endl;
    }
};

// Final derived class combining test + sports
class result : public test, public sports {
public:
    void display_result() {
        display_roll();
        display_marks();
        display_score();
        cout << "Total = " << (physics + maths + score) << endl;
    }
};

int main() {
    result r;
    r.setroll(101);
    r.setmarks(85, 90);
    r.setscore(15);
    r.display_result();
    return 0;
}

/*
⭐ Key Points (Exam‑Ready)
Virtual base class ensures only one copy of the base class is inherited, even if multiple paths exist.

Prevents ambiguity in the diamond problem.

Constructors of virtual base classes are called only once, no matter how many times they are inherited.

⭐ Advantages
Resolves ambiguity in multiple inheritance.

Saves memory by avoiding duplicate base class objects.

Ensures consistent access to base class members.*/