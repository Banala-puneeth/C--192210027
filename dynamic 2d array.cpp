#include <iostream>
int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> cols;
    int **dynamic2DArray = new int *[rows];

    for (int i = 0; i < rows; ++i) {
        dynamic2DArray[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            dynamic2DArray[i][j] = i * 10 + j;
        }
    }
    std::cout << "Values in the dynamic 2D array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << dynamic2DArray[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < rows; ++i) {
        delete[] dynamic2DArray[i];
    }
    delete[] dynamic2DArray;

    return 0;
}

