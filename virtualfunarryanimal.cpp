#include <iostream>

using namespace std;

class Animal {
public:
  virtual void speak() = 0;
};

class Dog: public Animal {
public:
  void speak() {
    cout << "Dog is barking" << endl;;
  };
};


class Cat: public Animal {
public:
  void speak() {
    cout << "Cat is purring" << endl;;
  };
};

int main() {
  Animal* animal[2];

  animal[0] = new Dog();
  animal[1] = new Cat();

  for (int i = 0; i < 2; i++) {
    animal[i] -> speak();
  }

  delete animal[0];
  delete animal[1];

  return 0;

}