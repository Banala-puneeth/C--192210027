#include <iostream>
using namespace std;

class Shape {
public:
    
    virtual double area() const = 0;
};

class Square : public Shape {
private:
    double side;
public:
    
    Square(double s) : side(s) {}

    double area() const override {
        return side * side;
    }
};


class Circle : public Shape {
private:
    double radius;
public:
    
    Circle(double r) : radius(r) {}

    
    double area() const override {
        return 3.14159 * radius * radius; 
    }
};

int main() {
    double radius, side;

  
    cout << "Enter radius of the circle: ";
    cin >> radius;

   
    cout << "Enter the length of the square: ";
    cin >> side;

    
    Square square(side);
    Circle circle(radius);

    cout<<"Area of square:"<<square.area()<<endl;
    cout<<"Area of circle:"<<circle.area()<<endl;
    
    return 0;
}

