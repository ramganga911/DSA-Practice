#include<bits/stdc++.h>
using namespace std;
// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
vector<int> majorityEle(vector<int>&arr){
    int n = arr.size();
    unordered_map<int,int> mp;
    for(auto num:arr){
        mp[num]++;
    }
    vector<int> ans;
    for(auto val :mp){
        if(val.second>n/3){
            ans.push_back(val.first);
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {3,2,3};
    vector<int> ans = majorityEle(arr);
    for(auto it: ans){
        cout << it << " ";
    }
    return 0;
}