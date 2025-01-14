#include<bits/stdc++.h>
using namespace std;
// Convert a decimal number to binary number
int main(){
    int n = 13;
    string ans = "";
    while(n>0){
        if(n%2==1){
            ans = "1"+ ans;
        }else{
            ans = "0"+ ans;
        }
        n = n/2;

    }
    cout << ans;
    return 0;
}