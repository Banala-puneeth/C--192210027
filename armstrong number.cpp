#include <iostream>
#include <cmath>
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        ++count;
    }
    return count;
}

bool isArmstrongNumber(int number) {
    int originalNumber = number;
    int result = 0;
    int digits = countDigits(number);

    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        result += std::pow(digit, digits);
        originalNumber /= 10;
    }

    return (result == number);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isArmstrongNumber(num)) {
        std::cout << num << " is an Armstrong number." << std::endl;
    } else {
        std::cout << num << " is not an Armstrong number." << std::endl;
    }

    return 0;
}

