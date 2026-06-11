//Objects Memory Allocation & using Arrays in Classes 
#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks[5];   // array inside class

public:
    void input() {
        cout << "Enter roll: ";
        cin >> roll;

        cout << "Enter 5 marks: ";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";
        cout << endl;
    }
};

int main() {
    Student s[3];   // array of 3 objects

    for (int i = 0; i < 3; i++) {
        cout << "Enter data for student " << i+1 << endl;
        s[i].input();
    }

    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i+1 << " details:\n";
        s[i].display();
    }
}


/*📌 Key Takeaways
Each object gets its own memory for data members.

Arrays can be:

Inside a class (marks[5])

Array of objects (Student s[10])
*/

/* 
                    Memory Diagram:
Object s1:                     Object s2:
+-----------------------+      +-----------------------+
| roll   (4B)           |      | roll   (4B)           |
+-----------------------+      +-----------------------+
| marks  (4B)           |      | marks  (4B)           |
+-----------------------+      +-----------------------+


Student s[3];

Index 0 (s[0])              Index 1 (s[1])              Index 2 (s[2])
+-------------+             +-------------+             +-------------+
| roll (4B)   |             | roll (4B)   |             | roll (4B)   |
+-------------+             +-------------+             +-------------+
| marks (4B)  |             | marks (4B)  |             | marks (4B)  |
+-------------+             +-------------+             +-------------+

<--------- contiguous memory block --------->

✔ All objects stored back‑to‑back in memory

✔ Total memory = 3 × sizeof(Student) 
*/









#include <iostream>
using namespace std;

class Shop {
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) {
        counter = 0;
    }

    void setPrice(void) {
        cout << "Enter ID of item no. " << counter + 1 << ": ";
        cin >> itemId[counter];

        cout << "Enter Price of item: ";
        cin >> itemPrice[counter];

        counter++;
    }

    void displayPrice(void) {
        cout << "\n--- Price List ---\n";
        for (int i = 0; i < counter; i++) {
            cout << "Item ID: " << itemId[i]
                 << "  Price: " << itemPrice[i] << endl;
        }
    }
};

int main() {
    Shop s;
    s.initCounter();

    int n;
    cout << "How many items do you want to enter? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        s.setPrice();
    }

    s.displayPrice();

    return 0;
}
