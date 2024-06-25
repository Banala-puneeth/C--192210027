#include <iostream>
int main() {
    int rows1, cols1, rows2, cols2;

    std::cout << "Enter the number of rows for the first matrix: ";
    std::cin >> rows1;

    std::cout << "Enter the number of columns for the first matrix: ";
    std::cin >> cols1;
    std::cout << "Enter the number of rows for the second matrix: ";
    std::cin >> rows2;

    std::cout << "Enter the number of columns for the second matrix: ";
    std::cin >> cols2;
    if (cols1 != rows2) {
        std::cerr << "Error: Matrix multiplication is not possible with the given dimensions." << std::endl;
        return 1;
    }
    int **matrix1 = new int *[rows1];
    for (int i = 0; i < rows1; ++i) {
        matrix1[i] = new int[cols1];
    }
    int **matrix2 = new int *[rows2];
    for (int i = 0; i < rows2; ++i) {
        matrix2[i] = new int[cols2];
    }
    std::cout << "Enter the elements of the first matrix:" << std::endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            std::cout << "Enter element at position [" << i << "][" << j << "]: ";
            std::cin >> matrix1[i][j];
        }
    }
    std::cout << "Enter the elements of the second matrix:" << std::endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            std::cout << "Enter element at position [" << i << "][" << j << "]: ";
            std::cin >> matrix2[i][j];
        }
    }
    int **resultMatrix = new int *[rows1];
    for (int i = 0; i < rows1; ++i) {
        resultMatrix[i] = new int[cols2];
    }
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    std::cout << "Resultant matrix after multiplication:" << std::endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            std::cout << resultMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < rows1; ++i) {
        delete[] matrix1[i];
    }
    delete[] matrix1;

    for (int i = 0; i < rows2; ++i) {
        delete[] matrix2[i];
    }
    delete[] matrix2;

    for (int i = 0; i < rows1; ++i) {
        delete[] resultMatrix[i];
    }
    delete[] resultMatrix;

    return 0;
}

