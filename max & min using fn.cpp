#include <iostream>
int findMin(const int arr[], int size) {
    int minElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    return minElement;
}
int findMax(const int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}
int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int *array = new int[size];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element at position " << i << ": ";
        std::cin >> array[i];
    }
    int minValue = findMin(array, size);
    int maxValue = findMax(array, size);
    std::cout << "Minimum element in the array: " << minValue << std::endl;
    std::cout << "Maximum element in the array: " << maxValue << std::endl;
    delete[] array;

    return 0;
}

