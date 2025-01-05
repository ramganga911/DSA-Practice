#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
    int n1 =0, n2 =1, n3;
    cout << "Fibo Number is:" <<" ";
    for(int i=1; i<=n; i++){
        cout << n1 << " ";
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
    }
    cout <<endl;
}
int main(){
    int n;
    cout << "Enter Number ";
    cin>>n;
    if(n<=0){
        cout <<"Enter Positive no: ";
    }else{
        fibo(n);
    }
    return 0;
}