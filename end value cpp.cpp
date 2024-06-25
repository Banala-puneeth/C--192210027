#include <iostream>
using namespace std; 

int main() {
    int start = 1, end; 
  
    cout << "Enter the end value: ";
    cin >> end; 
    for (int i = start; i <= end; ++i) {
        for (int j = start; j <= end; ++j) {
            cout << i * j << "\t"; 
        }
        cout << endl; 
    }
    
    return 0; 
}

