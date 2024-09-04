#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    int emp_id;
    string emp_name;
    double emp_salary;
public:
    Employee(int id, const string& name, double salary)
        : emp_id(id), emp_name(name), emp_salary(salary) {}
    void displayDetails() const {
        cout << "Employee Details:\n";
        cout << "ID: " << emp_id << "\n";
        cout << "Name: " << emp_name << "\n";
        cout << "Salary: " << emp_salary << "\n";
    }
};
int main() {
    Employee emp(84898, "top G", 400000.00);
    emp.displayDetails();
    return 0;
}