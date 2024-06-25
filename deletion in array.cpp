#include <iostream>

void deleteElement(int arr[], int& size, int position) {
    if (position < 0 || position >= size) {
        std::cout << "Invalid position. Element not deleted." << std::endl;
        return;
    }
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    --size;
}

int main() {
    const int maxSize = 100; 
    int arr[maxSize];
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int position;
    std::cout << "Enter the position to delete the element: ";
    std::cin >> position;
    deleteElement(arr, size, position);
    std::cout << "Modified array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

