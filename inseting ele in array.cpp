#include <iostream>
void insertElement(int arr[], int& size, int position, int value) {
    if (position < 0 || position > size) {
        std::cout << "Invalid position. Element not inserted." << std::endl;
        return;
    }
    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    ++size;
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
    int position, value;
    std::cout << "Enter the position to insert the element: ";
    std::cin >> position;

    std::cout << "Enter the value to insert: ";
    std::cin >> value;
    insertElement(arr, size, position, value);
    std::cout << "Modified array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

