#include <iostream>

class Matrix {
private:
  int rows;
  int cols;
  int** data;

public:

  Matrix(int r, int c) : rows(r), cols(c) {

    data = new int* [rows];
    for (int i = 0; i < rows; ++i) {
      data[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
        data[i][j] = 0;
      }
    }
  }


  ~Matrix() {
    for (int i = 0; i < rows; ++i) {
      delete[] data[i];
    }
    delete[] data;
  }

  
  void insert(int row, int col, int value) {
    if (row < 0 || row >= rows || col < 0 || col >= cols) {
      std::cerr << "Error: Index out of bounds." << std::endl;
      return;
    }
    data[row][col] = value;
  }


  int get(int row, int col) const {
    if (row < 0 || row >= rows || col < 0 || col >= cols) {
      std::cerr << "Error: Index out of bounds." << std::endl;
      return -1; 
    }
    return data[row][col];
  }


  void print() const {
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
        std::cout << data[i][j] << " ";
      }
      std::cout << std::endl;
    }
  }
};

int main() {
  Matrix m(3, 2); 

  m.insert(1, 0, 5);  
  m.insert(2, 1, 10); 

  std::cout << "Matrix elements:" << std::endl;
  m.print(); 

  int value = m.get(0, 1); 
  if (value != -1) {
    std::cout << "Element at (0, 1): " << value << std::endl;
  }

  return 0;
}
