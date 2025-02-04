#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int index =nums.size();
    int start =0;
    int end = nums.size()-1;
    while(start<= end){
        int mid = start + (end-start)/2;
        if(nums[mid] == target){
            index = mid;
            break;
        }else if(nums[mid] < target){
            start = mid+1;

        }else{
            index = mid;
            end = mid-1;
        }
    }
    return index;
}
int main(){
    vector<int> arr = {1,3,5,6};
    int target = 5;
    int ans = searchInsert(arr,target);
    cout << ans;
    return 0;
}