#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient, remainder;
    if (num2 != 0) {
        quotient = num1 / num2;
        remainder = num1 % num2;
    } else {
        std::cout << "Cannot perform division and modulo with the second number being zero." << std::endl;
        return 1;  
    }

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    return 0; 
}

