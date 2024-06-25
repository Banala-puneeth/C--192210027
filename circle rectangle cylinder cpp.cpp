#include <iostream>
#include <cmath>

using namespace std;
class Shape {
public:
    double radius;
    double length;
    double breadth;
    double height;
    Shape() : radius(0), length(0), breadth(0), height(0) {}
    virtual ~Shape() {}
};
class CircleRectangle : public Shape {
public:
    double areaCircle() {
        return M_PI * radius * radius;
    }
    double areaRectangle() {
        return length * breadth;
    }
};
class Cylinder : public CircleRectangle {
public:
    double volumeCylinder() {
        return M_PI * radius * radius * height;
    }
};

int main() {
    
    Cylinder cylinder;
    cylinder.radius = 5;
    cylinder.length = 4;
    cylinder.breadth = 6;
    cylinder.height = 10;

    cout << "Area of Circle: " << cylinder.areaCircle() << endl;
    cout << "Area of Rectangle: " << cylinder.areaRectangle() << endl;


    cout << "Volume of Cylinder: " << cylinder.volumeCylinder() << endl;

    return 0;
}

