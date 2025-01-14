#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 13;
    int i=2;
    //left shift
    // if(n&(1<<i)!=0){
    //     cout << "Yes";
    // }else{
    //     cout << "No";
    // }
    //right shift
    if((n>>i)&1){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}