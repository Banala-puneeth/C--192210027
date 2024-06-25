#include <iostream>

int main() {
   
    int n;

    std::cout << "Enter the number of terms in the Fibonacci series: ";
    std::cin >> n;
    int firstTerm = 0, secondTerm = 1;

    std::cout << "Fibonacci series up to " << n << " terms:\n";

    for (int i = 0; i < n; ++i) {x
        std::cout << firstTerm << " ";

        int nextTerm = firstTerm + secondTerm;

        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    return 0; 
}

