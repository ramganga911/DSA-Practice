// class Solution {
// public:
//     set<vector<int>>st;
//     void subsetSum(vector<int>&arr, int tar, int idx,vector<vector<int>>&result,vector<int>&ans){
//         if(idx == arr.size() || tar<0){
//             return;
//         }
//         if(tar==0){
//             if(st.find(ans)==st.end()){
//                 result.push_back(ans);
//                 st.insert(ans);
//             }
//             return;
//         }
//         ans.push_back(arr[idx]);
//         //single 
//         subsetSum(arr, tar-arr[idx], idx+1, result, ans);
//         //multiple
//         subsetSum(arr, tar-arr[idx] , idx, result, ans);
//         ans.pop_back();
//         subsetSum(arr, tar, idx+1, result, ans);
//     }
//     vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
//         vector<vector<int>> result;
//         vector<int> ans;
//         subsetSum(arr, tar, 0, result, ans);
//         return result;
//     }
// };


#include<bits/stdc++.h>
using namespace std;
int minimumOperations(vector<int>& nums) {
    int n=nums.size();
    int op=0;
    for(int i=0;i<n;i+=3){
        int len=n-i+1;
        if(len<3)return op;
        set<int>st;
        bool flag=false;
        for(int j=i;j<n;j++){
            if(st.find(nums[j])!=st.end()){
                flag=true;
                break;
            }
            st.insert(nums[j]);
        }
        if(flag)
        
        if(st.size()==len){
            return op;
        }
        op++;

    }
    return op;
        
}
int main(){
    vector<int>nums={1,2,3,4,2,3,3,5,7};
    cout<<minimumOperations(nums);
    return 0;
}
