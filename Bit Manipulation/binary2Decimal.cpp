#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "1101";
    int num =0, pow = 1;
    int n = s.size();
    for(int i=n-1; i>=0; i--){
        if(s[i]=='1'){
            num = num + pow;
        }
        pow = pow*2;
    }
    cout << num;

    return 0;
}