#include <iostream>

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

bool isHarshadNumber(int number) {
    int digitSum = sumOfDigits(number);
    return (number % digitSum == 0);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isHarshadNumber(num)) {
        std::cout << num << " is a Harshad number." << std::endl;
    } else {
        std::cout << num << " is not a Harshad number." << std::endl;
    }

    return 0;
}

