#include <iostream>
using namespace std;

class student {
    protected:
        int roll_no; // protected member
public:
    void setRollNo(int r) {
        roll_no = r;
    }
    void getRollNo() {
        cout << "Roll No: " << roll_no << endl;
    }
};

class exam : public student {
    protected:
        float maths_marks; // protected member
        float physics_marks; // protected member
public:
    void setMarks(float m, float p) {
        maths_marks = m;
        physics_marks = p;
    }
    void getMarks() {
        cout << "Maths Marks: " << maths_marks << endl;
        cout << "Physics Marks: " << physics_marks << endl;
    }
};

class grade : public exam {
    public: 
         void display() {
            cout << "percentage: " << (maths_marks + physics_marks) / 2 << "%" << endl;
           }
    void display_grade(){
        float percentage = (maths_marks + physics_marks) / 2;
        if(percentage >= 90) {
            cout << "Grade: A+" << endl;
        } else if(percentage >= 80) {
            cout << "Grade: A" << endl;
        } else if(percentage >= 70) {
            cout << "Grade: B+" << endl;
        } else if(percentage >= 60) {
            cout << "Grade: B" << endl;
        } else if(percentage >= 50) {
            cout << "Grade: C" << endl;
        } else {
            cout << "Grade: F" << endl;
        }
    }  
};


int main(){
    grade raghav;
    raghav.setRollNo(101);
    raghav.setMarks(85.5, 92.0);
    raghav.getRollNo();
    raghav.getMarks();
    raghav.display();
    raghav.display_grade();
    return 0;
}