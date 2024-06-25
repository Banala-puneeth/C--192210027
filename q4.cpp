#include <iostream>

const int m = 3;
const int n = 3;

void addMatrices(int a[][n], int b[][n], int c[][n]) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void displayMatrix(int mat[][n]) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int a[m][n] = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};

    int b[m][n] = {{9, 8, 7},
                                {6, 5, 4},
                                {3, 2, 1}};

    int c[m][n];

  
    addMatrices(a,b,c);

    std::cout << "Matrix 1:" << std::endl;
    displayMatrix(a);
    std::cout << std::endl;

    std::cout << "Matrix 2:" << std::endl;
    displayMatrix(b);
    std::cout << std::endl;

    std::cout << "Sum of matrices:" << std::endl;
    displayMatrix(c);

    return 0;
}

