/*⭐ open() Function
Used to open a file explicitly after declaring a stream object.

Syntax:

cpp
ifstream in;
in.open("sample.txt", ios::in);   // open for reading

ofstream out;
out.open("sample.txt", ios::out); // open for writing
Modes (ios::):

ios::in → read

ios::out → write

ios::app → append

ios::binary → binary mode

ios::trunc → overwrite existing file

⭐ eof() Function
Stands for End Of File.

Returns true when the file pointer reaches the end of the file.

Commonly used in loops to stop reading when the file ends.*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out;
    out.open("sample.txt");
    out << "Hello Raghav\nThis is File I/O demo\n";
    out.close();

    ifstream in;
    in.open("sample.txt");

    string line;
    while (in.eof()==0) {        // loop until end of file
        getline(in, line);
        cout << line << endl;
    }

    in.close();
    return 0;
}


/*
⭐ Key Points
Always close files after use (.close()).

open() gives flexibility to reuse the same stream object for multiple files.

eof() is often used, but better practice is while(getline(in, line)) because eof() can sometimes lead to reading empty lines at the end.

⭐ One‑Line Definition
In C++, open() is used to explicitly open files with modes (ios::in, ios::out, etc.), 
while eof() checks whether the end of the file has been reached during reading.  


⭐ What eof() Does
eof() returns true when the file pointer has reached the end of the file.

So while (!in.eof()) means “keep looping until end of file is reached.”

⭐ The Problem
Using while (!in.eof()) can lead to reading one extra empty line or processing invalid data,
 because eof() only becomes true after a failed read attempt.
So you often end up with an extra iteration.



⭐ Better Practice
Instead of checking eof() directly, check the read operation itself:

cpp
string line;
while (getline(in, line)) {   // ✅ preferred way
    cout << line << endl;
}
This way:

The loop continues only if getline() succeeds.

No extra empty line at the end.

Cleaner and safer. 
*/


