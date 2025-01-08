#include <iostream>

// Overloaded function for integers
void print(int x) {
    std::cout << "Integer: " << x << std::endl;
}

// Overloaded function for strings
void print(const std::string& str) {
    std::cout << "String: " << str << std::endl;
}

int main() {
    print(10);            // Calls print(int)
    print("Hello C++");   // Calls print(string)
    return 0;
}
