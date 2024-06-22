#include <iostream>
using namespace std;

class MyClass {
private:
    static int objectCount;

public:
    MyClass() {
        objectCount++;
    }
    static void showcount() {
        cout << "Number of objects created: " << objectCount << endl;
    }
};
int MyClass::objectCount = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;
    MyClass::showcount();

    return 0;
}

