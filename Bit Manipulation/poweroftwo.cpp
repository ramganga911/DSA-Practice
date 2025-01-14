#include<bits/stdc++.h>
using namespace std;
bool isPowerofTwo(int n){
    if( n== 0) return false;
    if(n==1) return true;
    if(n%2!=0) return false;
    return isPowerofTwo(n/2);
}
int main(){
    int  n = 16;
    if(isPowerofTwo(n)){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}