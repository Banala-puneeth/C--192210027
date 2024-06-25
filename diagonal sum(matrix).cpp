#include <iostream>
int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> cols;
    if (rows != cols) {
        std::cerr << "Error: The matrix must be square to find the sum of diagonals." << std::endl;
        return 1;
    }
    int **matrix = new int *[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element at position [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
    int primaryDiagonalSum = 0;
    for (int i = 0; i < rows; ++i) {
        primaryDiagonalSum += matrix[i][i];
    }
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < rows; ++i) {
        secondaryDiagonalSum += matrix[i][cols - 1 - i];
    }
    std::cout << "Sum of the primary diagonal: " << primaryDiagonalSum << std::endl;
    std::cout << "Sum of the secondary diagonal: " << secondaryDiagonalSum << std::endl;
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

