#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int age;
    int rollNo;
    Student()
    {
    }
    Student(string name, int age, int rollNo)
    {
        this->name = name;
        this->age = age;
        this->rollNo = rollNo;
    }
    void display()
    {
        cout << this->name << " " << this->age << " " << this->rollNo << endl;
    }
};
int main()
{
    Student s1("john", 20, 101);
    Student* s2 = new Student("Ram", 21, 141);
    Student s3;
    s3.name = "Shy";
    s3.age = 22;
    s3.rollNo = 131;
    Student s4 = s1; // Deep Copy
    s4.name = "Deep";
    Student s5(s1); // copy constructor
    s5.name = "Raj";
    // s1.display();
    // s4.display();
    s2->display();
    // s3.display();
    int *ptr= new int(10);
    cout<<*ptr<<endl;
    return 0;
}