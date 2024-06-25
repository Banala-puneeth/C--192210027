#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}


    friend Complex add(const Complex &c1, const Complex &c2);


    void display() const {
        std::cout << real << " + " << imag << "i";
    }
};


Complex add(const Complex &c1, const Complex &c2) {
    double realSum = c1.real + c2.real;
    double imagSum = c1.imag + c2.imag;
    return Complex(realSum, imagSum);
}

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(2.0, 1.5);

    std::cout << "Complex Number 1: ";
    c1.display();
    std::cout << std::endl;

    std::cout << "Complex Number 2: ";
    c2.display();
    std::cout << std::endl;

    Complex sum = add(c1, c2);
    std::cout << "Sum of Complex Numbers: ";
    sum.display();
    std::cout << std::endl;

    return 0;
}
