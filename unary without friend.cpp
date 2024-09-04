#include<iostream>
using namespace std;
class student{
    public:
    int age;
  student (int age){
    this->age=age;
  }
  student operator++(){
    age++;
    return student(age);
  }
};
int main(){
    student s1(30);
    ++s1;
    cout<<"age ="<<s1.age<<endl;
    return 0;
}