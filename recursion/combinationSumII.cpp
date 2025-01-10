#include<bits/stdc++.h>
using namespace std;
void combinationSum2(vector<int>&arr, int idx, int target, vector<int>&ans, vector<vector<int>>&result){
    if(target ==0){
        result.push_back(ans);
        return;
    }
    for(int i=idx; i<arr.size(); i++){
        if(i>idx && arr[i]==arr[i-1]){
            continue;
        }
        if(arr[i]>target){
            break;
        }
        ans.push_back(arr[i]);
        combinationSum2(arr, i + 1, target - arr[i], ans, result);
        ans.pop_back();

    }
}
int main(){
    vector<int> arr={10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> result;
    vector<int> ans;
    sort(arr.begin(), arr.end());
    combinationSum2(arr,0, target, ans, result);
    for(auto x: result){
        for(auto y: x){
            cout << y <<" ";
        }
    }
    return 0;
}