#include <iostream>
using namespace std;
/*
Compile-time polymorphism (also known as static polymorphism) 
refers to the ability of a programming language to resolve method 
calls at compile time. It is achieved through method overloading 
and operator overloading. In compile-time polymorphism, 
the method to be invoked is determined at the time of 
compilation based on the method signature or operator used.
*/
// fuction overloading
class Calculator
{
public:
    // Function to add two integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // Function to add two floating-point numbers
    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator calc;

    // Calling different overloaded functions
    cout << "Sum of 2 integers: " << calc.add(10, 20) << endl;     // Calls add(int, int)
    cout << "Sum of 3 integers: " << calc.add(10, 20, 30) << endl; // Calls add(int, int, int)
    cout << "Sum of 2 doubles: " << calc.add(10.5, 20.5) << endl;  // Calls add(double, double)

    return 0;
}
