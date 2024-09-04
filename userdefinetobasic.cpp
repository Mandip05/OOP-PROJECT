#include <iostream>
using namespace std;
class Fraction {
private:
    int numerator, denominator;
public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {}
    operator float() const {
        return static_cast<float>(numerator) / denominator;
    }
    void display() const {
        cout << "Fraction: " << numerator << "/" << denominator << endl;
    }
};
int main() {
    Fraction frac(8, 9);
    frac.display();
    float value = frac;
    cout << "Fraction as float: " << value << endl;
    return 0;
}
