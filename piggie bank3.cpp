#include <iostream> 
using namespace std; 
class AddAmount { 
private: 
int amount; 
public: 
 Add Amount (): amount (50) {} 
 Add Amount (int additional Amount): amount (50 + additional Amount) {} 
void display Amount () const { 
cout << "Amount in the Piggie Bank: $" << amount << endl; 
} 
}; 
int main() { 
AddAmount piggieBank1;            
AddAmount piggieBank2(7);         
cout << "PiggieBank1: "; 
piggieBank1.displayAmount(); 
cout << "PiggieBank2: "; 
piggieBank2.displayAmount(); 
return 0; 
} 
