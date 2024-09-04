#include <iostream>
using namespace std;

class Base1 {
public:
    void display() {
        cout << "Base1 display()" << endl;
    }
};

class Base2 {
public:
    void display() {
        cout << "Base2 display()" << endl;
    }
};

class Derived : public Base1, public Base2 {
    // No additional members or methods
};

int main() {
    Derived obj;
    // obj.display(); // Error: Ambiguous

    // Resolving ambiguity
    obj.Base1::display(); // Calls Base1's display
    obj.Base2::display(); // Calls Base2's display

    return 0;
}
