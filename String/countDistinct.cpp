#include <bits/stdc++.h>
using namespace std;
vector<int> countDistinct(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> ans;
    unordered_map<int, int> mp;
    int distinct = 0;
    for (int i = 0; i < k; i++)
    {
        if (mp[arr[i]] == 0)
        {
            distinct++;
        }
        mp[arr[i]]++;
    }
    ans.push_back(distinct);
    for (int i = k; i < n; i++)
    {
        if (mp[arr[i - k]] == 1)
        {
            distinct--;
        }
        mp[arr[i - k]]--;
        if (mp[arr[i]] == 0)
        {
            distinct++;
        }
        mp[arr[i]]++;
        ans.push_back(distinct);
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    int k = 4;
    vector<int> ans = countDistinct(arr, k);
    for (auto &x : ans)
    {
        cout << x << " ";
    }

    return 0;
}