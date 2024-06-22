#include <iostream>

int main() {
    const int maxSize = 100; 
    int arr[maxSize];
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    std::cout << "Sum of all elements in the array: " << sum << std::endl;

    return 0;
}

