#include <iostream>
#include <vector>

class Matrix {
private:
    int rows;
    int cols;
    std::vector<std::vector<int  >> data;

public:
    
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(r, std::vector<int>(c, 0));
    }

  
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            throw std::runtime_error("Matrix dimensions are incompatible for multiplication");
        }

        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                for (int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    // Overload the << operator for output
    friend std::ostream& operator<<(std::ostream& os, const Matrix& m) {
        for (int i = 0; i < m.rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                os << m.data[i][j] << " ";
            }
            os << std::endl;
        }
        return os;
    }

    // Set a value in the matrix
    void set(int r, int c, int val) {
        data[r][c] = val;
    }
};

int main() {
    Matrix m1(2, 3);
    m1.set(0, 0, 1);
    m1.set(0, 1, 2);
    m1.set(0, 2, 3);
    m1.set(1, 0, 4);
    m1.set(1, 1, 5);
    m1.set(1, 2, 6);

    Matrix m2(3, 2);
    m2.set(0, 0, 7);
    m2.set(0, 1, 8);
    m2.set(1, 0, 9);
    m2.set(1, 1, 10);
    m2.set(2, 0, 11);
    m2.set(2, 1, 12);

    Matrix m3 = m1 * m2;

    std::cout << "Matrix 1:" << std::endl;
    std::cout << m1 << std::endl;

    std::cout << "Matrix 2:" << std::endl;
    std::cout << m2 << std::endl;

    std::cout << "Matrix 1 * Matrix 2:" << std::endl;
    std::cout << m3 << std::endl;

    return 0;
}
