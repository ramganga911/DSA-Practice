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
int main(){
    vector<int> arr = {1, 0, 0, 1, 0, 1, 1};
    int n = arr.size();
    long long ans = countSubarrWithEqualZeroAndOne(arr, n);
    cout << ans << endl;
    return 0;
}