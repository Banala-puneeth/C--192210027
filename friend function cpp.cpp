#include <iostream>

class Number {
private:
    int value;

public:

    Number(int v) : value(v) {}

    friend int findMax(const Number& n1, const Number& n2);
};


int findMax(const Number& n1, const Number& n2) {
    return (n1.value > n2.value) ? n1.value : n2.value;
}

int main() {
    int val1, val2;

    std::cout << "Enter first number: ";
    std::cin >> val1;
    std::cout << "Enter second number: ";
    std::cin >> val2;

    
    Number num1(val1);
    Number num2(val2);

   
    int max = findMax(num1, num2);

    std::cout << "The maximum of " << val1 << " and " << val2 << " is " << max << "." << std::endl;

    return 0;
}
