#include<bits/stdc++.h>
using namespace std;
// Write a function to find number of subarrays with product
int findSubarray(vector<int>&arr, int k){ // time complexity: O(n)
    if(k<=1) return 0; // if k is less than or equal to 1 then return 0
    int n = arr.size();
    int left =0;
    int prod =1;
    int ans =0;
    for(int right =0; right <n; right++){ // sliding window approach
        right*= arr[right];
        while(left<=right && prod >=k){
            prod /= arr[left];
            left++;
        }
        if(prod < k){
            int len = right - left +1;
            ans += len;
        }
    }
    return ans;
}
int main()
{
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value of K: ";
    cin >> k;
    int ans = findSubarray(arr, k);
    cout << "Number of subarrays with product less than K: " << ans;
    return 0;
}