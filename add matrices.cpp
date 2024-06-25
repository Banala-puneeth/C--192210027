#include <iostream>
int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> cols;
    int **matrix1 = new int *[rows];
    for (int i = 0; i < rows; ++i) {
        matrix1[i] = new int[cols];
    }
    int **matrix2 = new int *[rows];
    for (int i = 0; i < rows; ++i) {
        matrix2[i] = new int[cols];
    }
    std::cout << "Enter the elements of the first matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element at position [" << i << "][" << j << "]: ";
            std::cin >> matrix1[i][j];
        }
    }
    std::cout << "Enter the elements of the second matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element at position [" << i << "][" << j << "]: ";
            std::cin >> matrix2[i][j];
        }
    }
    int **resultMatrix = new int *[rows];
    for (int i = 0; i < rows; ++i) {
        resultMatrix[i] = new int[cols];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    std::cout << "Resultant matrix after addition:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << resultMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < rows; ++i) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] resultMatrix[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] resultMatrix;

    return 0;
}

