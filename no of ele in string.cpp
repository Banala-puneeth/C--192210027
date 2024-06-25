#include <iostream>
int countElements(const std::string& str) {
    return static_cast<int>(str.length());
}
int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int elementCount = countElements(input);
    std::cout << "Number of elements in the string: " << elementCount << std::endl;

    return 0;
}

