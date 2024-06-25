#include <iostream>

using namespace std;

int main() {
    float radius;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    float area = 3.14 * radius * radius;
    
    cout << "Area of the circle: " << area << endl;
    
    return 0;
}

