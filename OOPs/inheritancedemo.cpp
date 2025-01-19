#include <bits/stdc++.h>
using namespace std;
// Demonstrating multiple inheritance
//  Base class
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
    Animal(){
        cout << "Animal constructor called" << endl;
    }
};
// base class
class Mammal
{
public:
    void walk()
    {
        cout << "Mammal is walking" << endl;
    }
    Mammal(){
        cout << "Mammal constructor called" << endl;
    }
};

// Derived class
class Dog : public Animal, public Mammal
{
public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
    Dog(){
        cout << "Dog constructor called" << endl;
    }
};
int main()
{
    Dog dog;
    dog.eat();  // Output: Animal is eating
    dog.walk(); // Output: Mammal is walking
    dog.bark(); // Output: Dog is barking

    return 0;
}