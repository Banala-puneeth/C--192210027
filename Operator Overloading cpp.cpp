#include <iostream>

class Complex {
private:
  double real;
  double imag;

public:
  // Constructor
  Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

  // Overload the + operator for complex number addition
  Complex operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
  }

  // Friend function for easy printing of complex numbers (optional)
  friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
  }
};

int main() {
  Complex c1(2.0, 3.0);
  Complex c2(1.0, -2.0);

  Complex c3 = c1 + c2;  // Use the overloaded + operator

  std::cout << "c1 = " << c1 << std::endl;
  std::cout << "c2 = " << c2 << std::endl;
  std::cout << "c3 = c1 + c2 = " << c3 << std::endl;

  return 0;
}
