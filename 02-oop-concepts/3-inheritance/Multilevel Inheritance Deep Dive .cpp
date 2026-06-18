/*⭐ What is Multilevel Inheritance?
Definition: A derived class becomes the base class for another derived class.

Structure: Base → Derived → Further Derived.

Purpose: Models hierarchical relationships, promotes step‑by‑step extension of functionality.*/


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




#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    Employee(int i) { id = i; }
    void showEmployee() { cout << "Employee ID: " << id << endl; }
};

class Manager : public Employee {
public:
    string dept;
    Manager(int i, string d) : Employee(i) { dept = d; }
    void showManager() { cout << "Manager of Dept: " << dept << endl; }
};

class TeamLead : public Manager {
public:
    int teamSize;
    TeamLead(int i, string d, int t) : Manager(i, d) { teamSize = t; }
    void showLead() {
        cout << "TeamLead ID: " << id
             << ", Dept: " << dept
             << ", Team Size: " << teamSize << endl;
    }
};

int main() {
    TeamLead tl(101, "AI Research", 5);
    tl.showEmployee();   // from Employee
    tl.showManager();    // from Manager
    tl.showLead();       // from TeamLead
    return 0;
}

/*
⭐ Key Points (Exam‑Ready)
Multilevel inheritance → chain of classes.

Each derived class inherits members from its immediate base.

Constructors are called in order of inheritance chain (Base → Derived1 → Derived2).

Supports function overriding at any level.

Useful for modeling progressive specialization (Employee → Manager → TeamLead).



⭐ Advantages
Clear hierarchical modeling.

Stepwise extension of features.

Promotes layered abstraction.*/





