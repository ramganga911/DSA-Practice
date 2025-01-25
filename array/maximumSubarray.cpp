#include<bits/stdc++.h>
using namespace std;
int maximumSubarray(vector<int>&arr){
    int n = arr.size();
    int maxSum = arr[0];
    int currentSum = arr[0];
    for(int i=0; i<n; i++){
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if(currentSum<0){
            currentSum =0;
        }
    }
    return maxSum;
}
int main(){
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maximumSubarray(v);
    return 0;
}