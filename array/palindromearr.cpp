#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int N){
    string str =""+N;
    int len = str.length();
    for(int i=0; i<len/2; i++){
        if(str[i]!=str[len-1-i]){
            return false;
        }
    }
    return true;
}
bool isPalinArr(int arr[], int n){
    for(int i=0; i<n; i++){
        bool ans = isPalindrome(arr[i]);
        if(ans == false){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[] = {121, 131,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool res = isPalinArr(arr, n);
    if(res){
        cout<<"PalinArr\n";
    }else{
        cout<<"Not PalinArr\n";
    }
    return 0;
}