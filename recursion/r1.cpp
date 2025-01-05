#include<iostream>
using namespace std;
void f(int i,int x){
    if (i>x)
    {
        return;
    }
    cout<<"ramganga "<<" ";
    f(i+1,x);   
}
int main(){
    int x;
    cin>> x;
    f(1,x);
    return 0;
}