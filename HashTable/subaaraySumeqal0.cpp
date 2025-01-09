#include<bits/stdc++.h>
using namespace std;
// largest subarray with sum 0
int largestSubarraySum(vector<int>&arr){
    int n = arr.size();
    int maxi =0;
    int sum =0;
    unordered_map<int,int>mp;
    mp[0]=-1;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum==0){
            maxi = i+1;
        }else{
            if(mp.find(sum)!=mp.end()){
                maxi = max(maxi, i-mp[sum]);
            }else{
                mp[sum]=i;
            }
        }
    }
    return maxi;
}
int main(){
    vector<int>arr = {15,-2,2,-8,1,7,10,23};
    cout << largestSubarraySum(arr);
    return 0;
}