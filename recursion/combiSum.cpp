#include <bits/stdc++.h>
using namespace std;
void combinatorSum(vector<int> &arr, int target, int idx, vector<int> &ans, vector<vector<int>> &result)
{
    if (idx == arr.size())
    {
        if (target == 0)
        {
            result.push_back(ans);
        }
        return;
    }
    if (arr[idx] <= target)
    {
        ans.push_back(arr[idx]);
        combinatorSum(arr, target - arr[idx], idx, ans, result);
        ans.pop_back();
    }
    combinatorSum(arr, target, idx + 1, ans, result);
}
int main()
{
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result;
    vector<int> ans;
    combinatorSum(arr, target, 0, ans, result);
    for (auto x : result)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
    }
    return 0;
}