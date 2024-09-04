#include <iostream>
using namespace std;
class Rectangle {
private:
    int width, height;
public:
    Rectangle(int w = 0, int h = 0) : width(w), height(h) {}

    friend Rectangle operator+(const Rectangle& r1, const Rectangle& r2);
    friend void display(const Rectangle& r);
};
Rectangle operator+(const Rectangle& r1, const Rectangle& r2) {
    return Rectangle(r1.width + r2.width, r1.height + r2.height);
}
void display(const Rectangle& r) {
    cout << "Rectangle: Width = " << r.width << ", Height = " << r.height << endl;
}
int main() {
    Rectangle r1(5, 10);
    Rectangle r2(3, 7);
    cout << "Initial rectangles:" << endl;
    display(r1);
    display(r2);
    Rectangle r3 = r1 + r2;
    cout << "After addition:" << endl;
    display(r3);
    return 0;
}