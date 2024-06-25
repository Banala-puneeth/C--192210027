#include <iostream>
using namespace std;
class Person{
private:
    string name;
    int age;
public:
    Person(string n, int a): name(n),age(a){}
    friend ostream& operator<<(ostream& os, const Person& p) {
        os << "Name: " << p.name << ", Age: " << p.age;
        return os;
    }
};
int main() {
    int age;
    string name;
    int age1;
    string name1;
    cout<<"Enter the person1 name:";
    cin>>name;
    cout<<"Enter the person1 age:";
    cin>>age1;
    cout<<"Enter the person2 name:";
    cin>>name1;
    cout<<"Enter the person2 age:";
    cin>>age;
    cout << "Person 1:Name is " << name<<",age is"<<age << endl;
    cout << "Person 2:Name is  " <<  age1<<",age is "<< name1<< endl;

    return 0;
}
