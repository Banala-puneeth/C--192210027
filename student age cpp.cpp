#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    Student(const std::string& n, int a) : name(n), age(a) {
        std::cout << "Student created: " << name << std::endl;
    }
    ~Student() {
        std::cout << "Student destroyed: " << name << std::endl;
    }
    std::string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
};

int main() {
    Student student1("John", 20);
    std::cout << "Student name: " << student1.getName() << std::endl;
    std::cout << "Student age: " << student1.getAge() << std::endl;

    Student student2("Jane", 21);
    std::cout << "Student name: " << student2.getName() << std::endl;
    std::cout << "Student age: " << student2.getAge() << std::endl;

    return 0;
}
