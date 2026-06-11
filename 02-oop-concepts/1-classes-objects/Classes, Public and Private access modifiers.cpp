// #include <iostream>
// using namespace std;    

// class employee {
//     private: // private access modifier
        
//         float salary; // private data member

//     public: // public access modifier
//         int empId;
//         void setData( float s);
//         void getdata()
//         {
//             cout << "Employee ID: " << empId << endl;
//             cout << "Employee Salary: " << salary << endl;
//         }
//     };

//     void employee::setData(float s) {
//         salary = s; // setting private data member
//     };

//     int main() {
//         employee emp1;
//         emp1.empId = 101; // accessing public data member
//         emp1.setData(50000); // setting private data member using public method
//         emp1.getdata(); // accessing private data member using public method

//         return 0;
//     }



    #include <iostream>
using namespace std;

class Student {
private:
    int roll;        // private data
    float marks;

public:
    // Setter function (public)
    void setData(int r, float m) {
        roll = r;
        marks = m;
    }

    // Getter function (public)
    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    // s1.roll = 10;  // ❌ ERROR: roll is private
    s1.setData(10, 92.5);  // ✔ allowed
    s1.display();

    return 0;
}
