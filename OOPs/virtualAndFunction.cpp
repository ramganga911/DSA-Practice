#include <iostream>
using namespace std;
/*
Dynamic Polymorphism (also known as runtime polymorphism) 
refers to the ability of a program to resolve method calls
 at runtime. This is typically achieved through inheritance 
 and virtual functions in C++. The method that gets invoked
  is determined at runtime based on the actual type of the 
  object, not the type of the reference or pointer.
*/
// Base class
class Animal
{
public:
    // Virtual function
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }

    // Virtual destructor (important for proper cleanup of derived class objects)
    virtual ~Animal() {}
};

// Derived class
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

// Another Derived class
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    // Pointer to base class
    Animal *animalPtr;

    // Pointing to a Dog object
    Dog dog;
    animalPtr = &dog;
    animalPtr->sound(); // Output: Dog barks

    // Pointing to a Cat object
    Cat cat;
    animalPtr = &cat;
    animalPtr->sound(); // Output: Cat meows

    return 0;
}
