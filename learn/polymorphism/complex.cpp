#include <iostream>

class Complex {
public:
    int real, imag;

    Complex(int r, int i) : real(r), imag(i) {}

    // Overload + operator to add two Complex numbers
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);
    Complex c3 = c1 + c2;  // Calls overloaded + operator
    std::cout << "Complex Sum: " << c3.real << " + " << c3.imag << "i" << std::endl;
    return 0;
}
