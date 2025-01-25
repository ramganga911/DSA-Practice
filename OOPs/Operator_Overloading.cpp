#include <bits/stdc++.h>
using namespace std;
// implementation of friends function
class EquilateralTriangle
{
private:
    float a;
    float area;
    float circumference;

public:
    void setA(float length)
    {
        a = length;
        circumference = 3 * a;
        area = (sqrt(3) / 4) * a * a;
    }
    //friend void printResult(EquilateralTriangle);
    friend class Homework;
};
class Homework
{
    public: 
    void printResult(EquilateralTriangle e)
    {
        cout << "Area of Equilateral Triangle: " << e.area << endl;
        cout << "Circumference of Equilateral Triangle: " << e.circumference << endl;
    }
};
int main()
{
    EquilateralTriangle e1;
    e1.setA(5);
    Homework h;
    h.printResult(e1);
    return 0;
}