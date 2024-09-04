#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    Point() : x(0), y(0) {}
    friend istream& operator>>(istream& is, Point& p);
    friend ostream& operator<<(ostream& os, const Point& p);
};
istream& operator>>(istream& is, Point& p) {
    is >> p.x >> p.y;
    return is;
}
ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}
int main() {
    Point p;
    cout << "Enter coordinates (x y): ";
    cin >> p;
    cout << "The point is: " << p << endl;
    return 0;
}
