#include <iostream>

bool isPerfectNumber(int number) {
    int sum = 1;
    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return (sum == number);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isPerfectNumber(num)) {
        std::cout << num << " is a perfect number." << std::endl;
    } else {
        std::cout << num << " is not a perfect number." << std::endl;
    }

    return 0;
}

