#include <iostream>
#include <cctype>
using namespace std;
int main() {
  char ch;

  cout << "Enter an alphabet: ";
  cin >> ch;

  if (!isalpha(ch)) {
    cout << ch << " is not an alphabet." << endl;
    return 1; 
  }

  ch = tolower(ch);
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    cout << ch << " is a vowel." << endl;
  } else {
    cout << ch << " is a consonant." << endl;
  }
   return 0; 
}
