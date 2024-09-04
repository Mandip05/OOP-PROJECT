#include <iostream>
using namespace std;
class Celsius {
private:
    float temperature;
public:
    Celsius(float temp = 0) : temperature(temp) {}
    float getTemperature() const {
        return temperature;
    }
};
class Fahrenheit {
private:
    float temperature;
public:
    Fahrenheit(float temp = 0) : temperature(temp) {}
    Fahrenheit(const Celsius& c) {
        temperature = (c.getTemperature() * 9 / 5) + 32;
    }
    explicit Fahrenheit(const Celsius& c, bool explicitConversion) {
        if (explicitConversion) {
            temperature = (c.getTemperature() * 9 / 5) + 32;
        } else {
            temperature = 0;
        }
    }
    void display() const {
        cout << "Temperature in Fahrenheit: " << temperature << "°F" << endl;
    }
};
int main() {
    Celsius c(25);
    Fahrenheit f1 = c;
    f1.display();
    Fahrenheit f2(c, true);
    f2.display();
    return 0;
}
