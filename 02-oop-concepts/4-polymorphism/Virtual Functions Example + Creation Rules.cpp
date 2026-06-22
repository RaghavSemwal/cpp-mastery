/*⭐ Virtual Functions Recap
Declared in the base class using virtual.

Allow runtime polymorphism: the correct function is chosen based on the object type, not the pointer type.

If not virtual → base pointer calls base version (static binding).

If virtual → base pointer calls derived version (dynamic binding).

⭐ Rules for Virtual Functions (from your notes)
They cannot be static.

They are accessed using object pointers.

They can be friends of another class.

A virtual function in base class might not be used.

If defined in base, no need to redefine in derived (optional).*/

#include <iostream>
using namespace std;

class CWH {
protected:
    string title;
    float rating;
public:
    CWH(string s, float r) {
        title = s;
        rating = r;
    }
    virtual void display() {   // virtual function
        cout << "Base class display (generic content)\n";
    }
};

class CWHVideo : public CWH {
    float videoLength;
public:
    CWHVideo(string s, float r, float vl) : CWH(s, r) {
        videoLength = vl;
    }
    void display() override {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH {
    int words;
public:
    CWHText(string s, float r, int w) : CWH(s, r) {
        words = w;
    }
    void display() override {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Number of words in this tutorial: " << words << endl;
    }
};

int main() {
    CWHVideo video("C++ OOP Tutorial", 4.8, 15.5);
    CWHText text("Polymorphism Notes", 4.6, 1200);

    // Base class pointer
    CWH *ptr;

    // Pointing to video object
    ptr = &video;
    ptr->display();   // calls CWHVideo::display()

    // Pointing to text object
    ptr = &text;
    ptr->display();   // calls CWHText::display()

    return 0;
}


/*
TODO:⭐ One‑Line Definition
Pointers to base classes combined with virtual functions allow runtime polymorphism,
 where the correct derived class function is executed depending on the object being pointed to.*/