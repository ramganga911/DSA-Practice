#include<bits/stdc++.h>
using namespace std;
// Largest subarray with 0 sum
class Solution{
    public:
        int maxLen(vector<int> &arr)
        {
            // code here
            int maxi = 0;
            int sum = 0;
            unordered_map<int, int> mp;
            int n = arr.size();
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
                if (sum == 0)
                {
                    maxi = i + 1;
                }
                else
                {
                    if (mp.find(sum) != mp.end())
                    {
                        maxi = max(maxi, i - mp[sum]);
                    }
                    else
                    {
                        mp[sum] = i;
                    }
                }
            }
            return maxi;
        }
};
int main(){
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    Solution obj;
    cout << obj.maxLen(arr);
    return 0;
}