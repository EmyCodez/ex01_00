#include <iostream>

template <typename T>
class Box {
private:
    T value;
public:
    Box(T val) : value(val) {}

    void showValue() {
        std::cout << "Box value: " << value << std::endl;
    }
};

int main() {
    Box<int> intBox(10);    // Create Box of int
    Box<double> dblBox(3.14); // Create Box of double

    intBox.showValue();
    dblBox.showValue();

    return 0;
}
