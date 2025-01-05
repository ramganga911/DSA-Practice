class Solution {
public:
    void subset(vector<int>& nums,int i,vector<vector<int>> &result,vector<int> &ans){
        if(i>= nums.size()){
            result.push_back(ans);
            return;
        }
        //include
        ans.push_back(nums[i]);
        subset(nums, i+1, result, ans);
        ans.pop_back();//back track
        //exclude
        subset(nums, i+1, result, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        subset(nums, 0,result, ans);
        return result;
    }
};