#include<bits/stdc++.h>
using namespace std;
//COunt subarray sum equal to k
int countSubarraySumK(vector<int>& arr, int k){
    int n = arr.size();
    int count =0;
    unordered_map<int,int> mp;
    mp[0]=1;
    int cumSum =0;
    for(int i=0; i<n; i++){
        cumSum +=arr[i];
        int reqSum = cumSum - k;
        if(mp.find(reqSum)!=mp.end()){
            count+=mp[reqSum];
        }
        mp[cumSum]++;
    }
    return count;
}
int main(){
    vector<int> arr ={1,2,3};
    int k = 3;
    cout << countSubarraySumK(arr, k);
    return 0;
}