#include<bits/stdc++.h>
using namespace std;
//class vs struct
// By default, all members of a struct are public,
// while in a class, they default to private.
// The only difference between a struct and a class is that
// members of a struct are public by default, while members of a class are private
// by default. In all other respects, structs and classes are the same.
// The following example demonstrates the difference between a struct and a class:
// Defining a struct
struct ExampleStruct
{
    int data;
    void setData(int value)
    {
        data = value;
    }
    int getData()
    {
        return data;
    }
};
class ExampleClass
{
private:
    int data;
public:
    void setData(int value)
    {
        data = value;
    }
    int getData(){
        return data;
    }

};
int main()
{
    ExampleClass obj;
    obj.setData(5);
    cout << "Data is: " << obj.getData() << endl;
    return 0;
}