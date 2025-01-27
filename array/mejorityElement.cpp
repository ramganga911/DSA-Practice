#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int,int> mp;
    for(int num:nums){
        mp[num]++;
    }
    vector<int>ans;
    for(auto val: mp){
        if(val.second > n/3){
            ans.push_back(val.first);
        }
    }
    return ans;
}
int main(){
    vector<int> v = {3,2,3};
    vector<int> ans = majorityElement(v);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    
    return 0;
}