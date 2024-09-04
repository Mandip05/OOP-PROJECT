#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string student_name;
    int student_roll;
    int student_age;
public:
    string getName() const {
        return student_name;
    }
    void setName(const string& name) {
        student_name = name;
    }
    int getAge() const {
        return student_age;
    }
    void setAge(int age) {
        student_age = age;
    }
    int getRoll() const {
        return student_roll;
    }
    void setRoll(int roll) {
        student_roll = roll;
    }
    void displayDetails() const {
        cout << "Name: " << student_name << "\n";
        cout << "Roll Number: " << student_roll << "\n";
        cout << "Age: " << student_age << "\n";
    }
};
int main() {
    Student student;
    student.setName("Mandip Chaudhary");
    student.setRoll(44);
    student.setAge(20);
    student.displayDetails();
    return 0;
}
