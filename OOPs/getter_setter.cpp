#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int age;

    Student(string name, int age, int rollNo)
    {
        this->name = name;
        this->age = age;
        this->rollNo = rollNo;
    }
    int getName()
    {
        return rollNo;
    }
    void setName(int rollNo)
    {
        this->rollNo = rollNo;
    }

private:
    int rollNo;
};
int main()
{
    Student s("John", 20, 101);
    s.setName(102);
    cout << s.getName() << endl;
    return 0;
}