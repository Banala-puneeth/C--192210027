#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    int* arr = new int[n];
    std::cout << "Enter " << n << " integers:" << std::endl;
    for(int i = 0; i < n; ++i) {
        std::cin >> *(arr + i);
    }
    std::cout << "You entered: ";
    for(int i = 0; i < n; ++i) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
    delete[] arr;

    return 0;
}



