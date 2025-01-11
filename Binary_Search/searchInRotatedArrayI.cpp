#include<bits/stdc++.h>
using namespace std;
int searchInRotatedArray(vector<int>&arr,int target){
    int n = arr.size();
    int low =0;
    int high = n-1;
    while(low<=high){ // 
        int mid = low+(high-low)/2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[low] < arr[mid]){ // left half is sorted
            if (arr[low] <= target && target < arr[mid]){ // target is in left half
                high = mid -1;
            }else{ // target is in right half
                low = mid+1;
            }
        }else{ // right half is sorted
            if(arr[mid]<target && target <= arr[high]){  // target is in right half
                low = mid+1;
            }else{ // target is in left half
                high = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr= {4,5,6,7,0,1,2};
    int target =0;
    int ans = searchInRotatedArray(arr,target);
    cout << ans << endl;
    return 0;
}