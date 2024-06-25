#include <iostream>

class Counter {
private:
  int count;

public:
  Counter(int initialValue = 0) : count(initialValue) {}


  Counter& operator++() {
    ++count;
    return *this; 
  }

  int getCount() const {
    return count;
  }
};

int main() {
  Counter c(6);
  std::cout << "Count before increment: " << c.getCount() << std::endl;


  ++c;

  std::cout << "Count after increment: " << c.getCount() << std::endl;

  return 0;
}
