#include <iostream>

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; 
    }

    bool isPrime = true;

    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;  
}

