#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr, int st, int end){
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int k=3;
    int n = arr.size();
    k = k%n;
    reverse(arr,0, n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(auto x: arr){
        cout << x <<" ";
    }
    return 0;
}