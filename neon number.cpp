#include <iostream>
bool isNeonNumber(int number) {
    int square = number * number;
    int digitSum = 0;

    while (square != 0) {
        digitSum += square % 10;
        square /= 10;
    }

    return (digitSum == number);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isNeonNumber(num)) {
        std::cout << num << " is a Neon number." << std::endl;
    } else {
        std::cout << num << " is not a Neon number." << std::endl;
    }

    return 0;
}

