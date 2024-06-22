#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);
    for (std::size_t i = 0; i < inputString.length(); ++i) {
        inputString[i] = std::tolower(inputString[i]);
    }

    std::size_t start = 0;
    std::size_t end = inputString.length() - 1;
    bool isPalindrome = true;
    while (start < end) {
        while (!std::isalnum(inputString[start]) && start < end) {
            ++start;
        }
        while (!std::isalnum(inputString[end]) && start < end) {
            --end;
        }
        if (inputString[start] != inputString[end]) {
            isPalindrome = false;
            break;
        }
        ++start;
        --end;
    }

    if (isPalindrome) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0; 
}


