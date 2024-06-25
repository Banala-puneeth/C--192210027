#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Displaying address using arrays:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Address of arr[" << i << "]: " << &arr[i] << std::endl;
    }

    return 0;
}

