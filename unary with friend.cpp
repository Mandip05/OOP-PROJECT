#include<iostream>
using namespace std;
class student{
    public:
    int age;
    student(int age){
        this->age=age;
    }
    friend student operator++(student s);
};
        student operator++(student s){
            ++s.age;
            return student(s.age);
        }
int main(){
student s(40);
student s1 = ++s;
cout<<"Age is "<<s1.age;
return 0;
}