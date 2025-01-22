#include<bits/stdc++.h>
using namespace std;
// Function to count subarrays with 1s and 0s.
long long int countSubarrWithEqualZeroAndOne(vector<int>&arr, int n)
{
    unordered_map<int, int> mp;
    mp[0] = 1;
    int sum = 0;
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        sum+= (arr[i]==1)?1:-1;
        if (mp.find(sum) != mp.end())
        {
            count += mp[sum];
            mp[sum]++;
        }
        else
        {
            mp[sum] = 1;
        }
    }
    return count;
}
// Function to find the length of largest subarray with 0 sum
int maxLen(vector<int>& arr) {
        // code here
        int ans =0;
        int sum =0;
        unordered_map<int, int>mp;
        int n = arr.size();
        mp[0]=-1;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(mp.find(sum)!=mp.end()){
                ans = max(ans,i-mp[sum]);
            }else{
                mp[sum]=i;
            }
        }
        return ans;
    }
    // Function to count subarray with 0 sum
    int findSubarray(vector<int> &arr)
    {
        int n = arr.size();
        int count = 0;
        int sum = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (mp.find(sum) != mp.end())
            {
                count += mp[sum];
            }
            mp[sum]++;
        }
        return count;
    }
int main(){
    vector<int> arr = {1, 0, 0, 1, 0, 1, 1};
    int n = arr.size();
    long long ans = countSubarrWithEqualZeroAndOne(arr, n);
    cout << ans << endl;
    
    return 0;
}