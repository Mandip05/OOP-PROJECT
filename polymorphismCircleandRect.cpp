#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double area() = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() override {
        return length * width;
    }
};

int main() {
    Shape* shape;

    Circle circle(9.0);
    shape = &circle;
    std::cout << "Area of Circle: " << shape->area() << std::endl;

    Rectangle rectangle(8.0, 9.0);
    shape = &rectangle;
    std::cout << "Area of Rectangle: " << shape->area() << std::endl;

    return 0;
}