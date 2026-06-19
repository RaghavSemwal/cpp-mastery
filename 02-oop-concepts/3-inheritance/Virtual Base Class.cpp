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
