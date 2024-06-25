#include <iostream>
using namespace std;
int findGreatest(int *a, int *b, int *c) {
    int greatest = *a;
    if (*b > greatest) {
        greatest = *b; 
    }
    if (*c > greatest) {
        greatest = *c; 
    }
    return greatest;
}

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    int greatest = findGreatest(&num1, &num2, &num3);
    cout << "The greatest number is: " << greatest << endl;
    
    return 0;
}


