#include <iostream> 
#include <string> 
using namespace std; 
class Student { 
private: 
string name; 
public: 
Student() : name("Unknown") {} 
Student(string n) : name(n) {} 
void display() const { 
cout << "Student name: " << name << endl; 
} 
}; 
int main() { 
Student student1;                
Student student2("john");       
student1.display(); 
student2.display(); 
return 0; 
} 
