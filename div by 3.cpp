#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::string result = (number % 3 == 0) ? "divisible by 3" : "not divisible by 3";

    std::cout << "The integer is " << result << "." << std::endl;

    return 0;  
}

