#include<bits/stdc++.h>
using namespace std;

// Given an array nums of distinct integers, return all the possible  permutations.
// You can return the answer in any order.
//Input: nums = [1,2,3]
//Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void getPermutations(vector<int>&nums, int idx, vector<vector<int>>&ans){
    if(idx >= nums.size()){
        ans.push_back({nums});
    }
    for(int i=idx; i<nums.size(); i++){
        swap(nums[i], nums[idx]);
        getPermutations(nums,idx+1, ans);
        swap(nums[i], nums[idx]); //backtrack
    }
}

int main(){
    vector<int>nums={1,2,3};
    vector<vector<int>>ans;
    getPermutations(nums,0, ans);
    for(auto v:ans){
        for(auto ele:v){
            cout << ele << " ";
        }
    }
    return 0;
}