#include <iostream>
#include <cmath> 

int findGCD(int num1, int num2) {
    int gcd;
    num1 = std::abs(num1);
    num2 = std::abs(num2);
    do {
        gcd = num1 % num2;
        num1 = num2;
        num2 = gcd;
    } while (num2 != 0);

    return num1;
}

int main() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;
    int gcd = findGCD(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << std::endl;

    return 0;
}

