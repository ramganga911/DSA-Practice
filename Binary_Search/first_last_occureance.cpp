#include<bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans(2,-1);
    int high = nums.size()-1;
    int low=0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target){
            ans[0] = mid;
            high = mid-1;
        }
        else if(nums[mid]>target){
            high = mid-1;
        }
        else{
            low= mid+1;
        }
    }
    low=0, high = nums.size()-1;
        while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target){
            ans[1] = mid;
            low= mid+1;
        }
        else if(nums[mid]>target){
            high = mid-1;
        }
        else{
            low= mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {5,7,7,8,8,10};
    int target = 8;
    vector<int> ans = searchRange(arr,target);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}