#include <bits/stdc++.h>
using namespace std;

class Student {
private:
  int id;
  std::string name;

public:
  Student(string iname,int iid){
  	id = iid;
  	name = iname;
  }

  friend std::ostream& operator<<(std::ostream& os, const Student& student) {
    os << "ID: " << student.id << ", Name: " << student.name;
    return os;
  }
};

int main() {
	string name1;
	cin>>name1;
	int id1;
	cin>>id1;
	string name2;
	cin>>name2;
	int id2;
	cin>>id2;
	
  Student student1(name1,id1);
  Student student2(name2,id2);

  cout << "Student 1: " << student1 << endl;
  cout << "Student 2: " << student2 << endl;

  return 0;
}
