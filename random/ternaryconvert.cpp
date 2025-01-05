#include<bits/stdc++.h>
using namespace std;

int TernaryConvert(int num){
    string digit="";
    while(num>0){
        int mod = num%3;
        num=num/3;
        digit+=mod+'0';
    }
    reverse(digit.begin(),digit.end());
    
    int ans= stoi(digit);
    return ans;
}

int main(){
    int num = 21; 
    cout << TernaryConvert(num);
    return 0;
}