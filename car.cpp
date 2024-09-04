#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    int speed;
    int cc;
    string color;
public:
    Car(int spd, int capacity, const string& col) 
        : speed(spd), cc(capacity), color(col) {}
    void Start() {
        speed = 0;
        cout << "Car is starting\n";
    }
    void Step() {
        speed += 10;
        cout << "Stepping on the gas pedal...\n";
        cout << "Current speed: " << speed << " km/h\n";
    }
    void Accelerate() {
        speed += 20;
        cout << "Accelerating...\n";
        cout << "Current speed: " << speed << " km/h\n";
    }
    void DisplayDetails() const {
        cout << "Car Details:\n";
        cout << "Color: " << color << "\n";
        cout << "Engine Capacity: " << cc << " cc\n";
        cout << "Current Speed: " << speed << " km/h\n";
    }
};
int main() {
    Car myCar(0, 999, "Blue");
    myCar.DisplayDetails();
    myCar.Start();
    myCar.Step();
    myCar.Accelerate();
    myCar.DisplayDetails();
    return 0;
}
    