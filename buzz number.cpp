#include <iostream>

bool isBuzzNumber(int number) {
    return (number % 7 == 0 || number % 10 == 7);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isBuzzNumber(num)) {
        std::cout << num << " is a Buzz number." << std::endl;
    } else {
        std::cout << num << " is not a Buzz number." << std::endl;
    }

    return 0;
}

