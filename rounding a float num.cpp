#include <iostream>
#include <cmath>

int main() {
    double floatingNumber;

    std::cout << "Enter a floating-point number: ";
    std::cin >> floatingNumber;

    int roundedDown = static_cast<int>(std::floor(floatingNumber));
    int roundedUp = static_cast<int>(std::ceil(floatingNumber));

    std::cout << "Original number: " << floatingNumber << std::endl;
    std::cout << "Rounded down: " << roundedDown << std::endl;
    std::cout << "Rounded up: " << roundedUp << std::endl;

    return 0; 

}
