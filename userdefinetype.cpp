#include <iostream>
using namespace std;
class Temperature {
private:
    int celsius;
public:
    Temperature(int temp = 0) : celsius(temp) {}
    Temperature(double fahrenheit) {
        celsius = static_cast<int>((fahrenheit - 32) * 5 / 9);
    }
    operator int() const {
        return celsius;
    }
    void display() const {
        cout << "Temperature: " << celsius << "°C" << endl;
    }
};
int main() {
    Temperature temp1(25);
    cout << "Temperature 1: ";
    temp1.display();
    int celsius = temp1;
    cout << "Temperature in Celsius: " << celsius << "°C" << endl;
    Temperature temp2(98.6);
    cout << "Temperature 2: ";
    temp2.display();
    return 0;
}