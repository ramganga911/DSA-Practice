#include<bits/stdc++.h>
using namespace std;
class Example{
    public:
    // Default constructor
    Example(){
        cout << "Default constructor called" << endl;
    }
    // Parameterized constructor
    Example(int x){
        cout << "Parameterized constructor called with value: " << x << endl;
    }
    // Copy constructor
    Example(const Example &obj){
        cout << "Copy constructor called" << endl;
    }
    ~Example(){
        cout << "Destructor called" << endl;
    }
    
};
int main(){
    Example obj1; // Default constructor called
    Example obj2(10); // Parameterized constructor called with value: 10
    Example obj3 = obj1; // Copy constructor called

    return 0;
}