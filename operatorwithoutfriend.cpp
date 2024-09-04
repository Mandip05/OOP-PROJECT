#include <iostream>
using namespace std;
class Counter {
private:
    int value;
public:
    Counter(int initial = 0) : value(initial) {}
    Counter& operator++() {
        ++value;
        return *this;
    }
    Counter& operator--() {
        --value;
        return *this;
    }
    void display() const {
        cout << value << endl;
    }
};
int main() {
    Counter c(8);
    c.display();
    ++c;					//Output:
    c.display();
    --c;
    c.display();
    return 0;
} 
