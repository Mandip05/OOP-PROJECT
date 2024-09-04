#include <iostream>
using namespace std;
class Rectangle {
private:
    int width, height;
public:
    Rectangle(int w = 0, int h = 0) : width(w), height(h) {}
    Rectangle operator+(const Rectangle& other) const {
        return Rectangle(width + other.width, height + other.height);
    }
    void display() const {
        cout << "Rectangle: Width = " << width << ", Height = " << height << endl;
    }
};
int main() {
    Rectangle r1(8, 8);
    Rectangle r2(9, 9);
    cout << "Initial rectangles:" << endl;
    r1.display();
    r2.display();
    Rectangle r3 = r1 + r2;
    cout << "After addition:" << endl;
    r3.display();
    return 0;
}
