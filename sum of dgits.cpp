#include <iostream>

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;  
    }

    int originalNumber = number;
    int digitSum = 0;

    while (number > 0) {
        int digit = number % 10;
        digitSum += digit;
        number /= 10;
    }


    std::cout << "The sum of digits in " << originalNumber << " is: " << digitSum << std::endl;

    return 0; 
}

