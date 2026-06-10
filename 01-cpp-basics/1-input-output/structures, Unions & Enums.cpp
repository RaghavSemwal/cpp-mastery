#include <iostream>
using namespace std;

// Structure
struct Student {
    int roll;
    char name[20];
    float marks;
};

// Union
union Data {
    int intVal;
    float floatVal;
    char charVal;
};

// Enum
enum Weekday { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {
    // --- Structure Example ---
    struct Student s1 = {101, "Raghav", 92.5};
    cout << "Structure Example:" << endl;
    cout << "Roll: " << s1.roll << ", Name: " << s1.name << ", Marks: " << s1.marks << endl;

    // --- Union Example ---
 
   union Data d;
    d.intVal = 10;
    cout << "\nUnion Example:" << endl;
    cout << "intVal: " << d.intVal << endl;
    d.floatVal = 3.14; // overwrites intVal
    cout << "floatVal: " << d.floatVal << endl;
    d.charVal = 'A';   // overwrites floatVal
    cout << "charVal: " << d.charVal << endl;

    // --- Enum Example ---
    Weekday today = WEDNESDAY;
    cout << "\nEnum Example:" << endl;
    cout << "Today is day number: " << today << endl; // prints 2 (since MONDAY=0)

    return 0;
}
