#include <iostream>
using namespace std;

int main() {
    int num;  
    
    cout << "Enter an integer: "; 
    cin >> num;
    if(num%3==0){
    	cout<<num<<"is divisible ny 3."<<endl;
	}else{
		cout<<num<<"is not divisible by 3."<<endl;
	}
	return 0;
}
    

