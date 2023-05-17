#include <iostream>
#include <iomanip>

int main() {
    float a = 0.1f;
    float b = 0.2f;
    float sum = a + b;

    std::cout << "Sum: " << sum << std::endl;

    std::cout << std::setprecision(20);
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}