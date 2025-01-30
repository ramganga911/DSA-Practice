#include<bits/stdc++.h>
using namespace std;
int findMajorityElement(vector<int>& nums){ // Time complexity O(n) and space complexity O(1)
    int n = nums.size();
    int freq =0, ans = 0;
    for(int i=0; i<n; i++){
        if(freq ==0){
            ans = nums[i];
        }else if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int> ans = {2,2,1,1,1,2,2};
    int x = findMajorityElement(ans);
    cout << x;
    return 0;
}