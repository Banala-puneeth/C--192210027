#include<iostream>
int main() {
	char ch;
	std::cout << "Enter the character: ";
    std::cin >> ch;
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) {

    std::cout << "This character is a vowel";
   }
    else {
    std::cout <<"This character is a consonant";
	}
	return 0;
}
