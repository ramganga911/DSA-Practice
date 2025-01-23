#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<vector<int>> mergeInterval(vector<vector<int>>& arr){
        int n = arr.size();
        vector<vector<int>> ans;
        if(n == 0) return ans;
        sort(arr.begin(), arr.end());
        ans.push_back(arr[0]); 
        for(int i=1; i<n; i++){ 
            vector<int>& last = ans.back();
            vector<int>& current = arr[i];
            if(last[1]>= current[0]){
                last[1] = max(last[1], current[1]);
            }else{
                ans.push_back(current);
            }
        }
        return ans;

    }
};
int main(){
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    Solution obj;
    for(auto i: intervals){
        for(auto j: i){
            cout<<j<<" ";
        }
    } cout << endl;
    vector<vector<int>> ans = obj.mergeInterval(intervals);
    for(auto i: ans){
        for(auto j: i){
            cout<<j<<" ";
        }
        
    }
    return 0;
}