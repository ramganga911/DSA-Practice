#include<bits/stdc++.h>
using namespace std;
// int missingNumber(vector<int>&arr, int n){
//     vector<int> hash(n+1,0);
//     for(int i=0; i<n-1; i++){
//         hash[arr[i]]++;
//     }
//     for(int i=1; i<=n; i++){
//         if(hash[i]==0){
//             return i;
//         }
//     }
//     return -1;
// }
int missingNumber(vector<int>&arr, int n){
    int xor1 =0, xor2=0;
    for(int i=0; i<n-1;i++){
        xor2^= arr[i];
    }
    for(int i=1; i<=n; i++){
        xor1^= i;
    }
    return xor1^xor2;
}
int main(){
    vector<int> arr = {1,2,3,5};
    int n = 5;
    cout << missingNumber(arr,n);
    return 0;
}