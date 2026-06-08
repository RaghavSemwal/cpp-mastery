#include <iostream>
#include <string>

int main() {
    // Fast I/O optimize for competitive programming / engineering streams
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string programmer_name;
    
    std::cout << "Enter your name to initialize core systems: ";
    std::cin >> programmer_name;

    // Use \n instead of std::endl as it prevents unnecessary flushing of the stream buffer
    std::cout << "\n====================================\n";
    std::cout << "System initialized successfully.\n";
    std::cout << "Welcome aboard, " << programmer_name << "!\n";
    std::cout << "====================================\n";

    return 0;
}