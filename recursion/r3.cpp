#include<iostream>
using namespace std;
void f(int i,int x){
    if (i<1)
    {
        return;
    }
    cout<< i <<" ";
    f(i-1,x);
    
}
int main(){
    int x;
    cin>> x;
    f(x,x);
    return 0;
}