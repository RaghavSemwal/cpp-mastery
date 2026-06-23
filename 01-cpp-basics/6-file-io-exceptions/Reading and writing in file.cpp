
/*
!⭐ File I/O in C++ — Two Ways to Open Files
?1. Using Constructors
You can open a file directly when creating the stream object:

ofstream out("sample.txt");   // open for writing
ifstream in("sample.txt");    // open for reading


?2. Using open() Member Function
You can first declare the stream object, then open the file later:


ofstream out;
out.open("sample.txt");       // open for writing

ifstream in;
in.open("sample.txt");        // open for reading
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string st = "hello raghav";
    string st2;

    // Writing to file
    ofstream out("sample.txt");
    out << st;
    out.close();   // ✅ always close after writing

    cout << "Data written successfully." << endl;

    // Reading from file
    ifstream in("sample.txt");
    getline(in, st2);   // read into st2
    cout << "Data read from file: " << st2 << endl;

    in.close();   // ✅ close after reading
    return 0;
}

/*
⭐ Key Points
Always close files after use (.close()).

Use getline() for reading full lines (instead of >> which stops at spaces).

You can use ios::in, ios::out, ios::app, ios::binary with open() for more control.

⭐ One‑Line Definition
File I/O in C++ lets you read and write data using ifstream, ofstream, and fstream, with files opened
 either via constructors or the open() member function.
 */