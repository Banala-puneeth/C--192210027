#include <iostream>

class class_1 {
private:
  int data1;

public:
  class_1(int value) : data1(value) {}
  friend void swap(class_1& obj1, class_2& obj2);
  int getData1() const { return data1; }
};

class class_2 {
private:
  int data2;

public:
  class_2(int value) : data2(value) {}

  friend void swap(class_1& obj1, class_2& obj2);

  int getData2() const { return data2; }
};


void swap(class_1& obj1, class_2& obj2) {
  int temp = obj1.data1;
  obj1.data1 = obj2.data2;
  obj2.data2 = temp;
}

int main() {
  class_1 obj1(10);
  class_2 obj2(20);

  std::cout << "Before swap: obj1.data1 = " << obj1.getData1() << ", obj2.data2 = " << obj2.getData2() << std::endl;

  swap(obj1, obj2);

  std::cout << "After swap: obj1.data1 = " << obj1.getData1() << ", obj2.data2 = " << obj2.getData2() << std::endl;

  return 0;
}

