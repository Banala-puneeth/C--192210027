#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {5, 2, 8, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::sort(arr, arr + n);

    std::cout << "Array in non-decreasing order:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
