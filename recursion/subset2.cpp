class Solution {
public:
    void subset(vector<int>&arr, int i, vector<vector<int>>&result, vector<int>&ans){
        if(i>=arr.size()){
            result.push_back(ans);
            return;
        }
        ans.push_back(arr[i]);
        subset(arr, i+1, result, ans);
        ans.pop_back();
        int idx = i+1;
        while(idx<arr.size() && arr[idx]==arr[idx-1]){
            idx++;
        }
        subset(arr,idx, result, ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> result;
        vector<int> ans;
        subset(arr, 0,result,ans);
        return result;
    }
};