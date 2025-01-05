#include<iostream>
using namespace std;
//golbal variable
//never use global variable
//because koi ishe koi bhi use kar sakta h
int n = 12;
void a(int& i){

    cout << n << endl;
}

int main(){
    int i = 5;
    cout << n << endl;
    a(i);
     

    return 0;
}