#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 4;
    int b = 5;
    cout << a << " " << b << endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout << a << " " << b << endl;

    a = a+b;
    b = a-b;
    a = a-b;

    cout << a << " " << b << endl;
    return 0;
}