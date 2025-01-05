#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout << num << endl;
    cout << "Address of num " << &num << endl;
    int *ptr = &num;
    cout << ptr << endl;
    cout << endl;
    char ch = 'a';
    cout << &ch;
    char *ptra = &ch;
    cout << endl;
    cout << ptra <<endl << *ptra << endl;

    cout << "Size of pointer " << sizeof(ptr) <<endl;
    cout << "Size of pointer " << sizeof(*ptr) <<endl;
    cout << "Size of pointer " << sizeof(*ptra) <<endl;
    cout << "Size of pointer " << sizeof(num) <<endl;
    cout << "Size of pointer " << sizeof(ch) <<endl;


    return 0;
}