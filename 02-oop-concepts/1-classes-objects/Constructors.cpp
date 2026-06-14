/*🎯 What is a Constructor?
A constructor is a special member function of a class that:

Has the same name as the class

Has no return type (not even void)

Is automatically called when an object is created

Is used to initialize data members

⭐ Why Constructors Are Needed
To assign initial values

To allocate memory

To prepare an object before use

to avoid garbage/uninitialized values */


#include <iostream>
#include <string>

class VideoGame {
public:
    std::string title;
    int releaseYear;

    // Default Constructor
    VideoGame() {
        title = "Unknown Game";
        releaseYear = 2026;
        //std::cout << "Default Constructor Called! Object initialized." << std::endl;
    }
};

int main() {
    std::cout << "Creating game1..." << std::endl;

    VideoGame game1;  // constructor is called automatically

    std::cout << "Game Title: " << game1.title << std::endl;
    std::cout << "Release Year: " << game1.releaseYear << std::endl;

    return 0;
}
