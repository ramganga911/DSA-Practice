#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> arr, int target)
{
    int n = arr.size();
    map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int remain = target - arr[i];
        if (mp.find(remain) != mp.end())
        {
            ans.push_back(mp[remain]);
            ans.push_back(i);
            return ans;
        }
        mp[arr[i]] = i;
    }
    return {-1, -1};
}
int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = twoSum(arr, target);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}