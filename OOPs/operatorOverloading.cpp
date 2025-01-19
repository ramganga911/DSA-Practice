#include <iostream>
using namespace std;
//operator overloading
class Complex
{
public:
    double real, imag;

    Complex(double r, double i) : real(r), imag(i) {}

    // Overloading the '+' operator
    Complex operator+(const Complex &other)
    {
        return Complex(real + other.real, imag + other.imag);
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(1.5, 2.5), c2(2.0, 3.0);

    // Using overloaded '+' operator
    Complex c3 = c1 + c2;

    c3.display(); // Output: 3.5 + 5.5i

    return 0;
}
