#include <bits/stdc++.h>
using namespace std;
void findSubset(vector<int> &arr, int idx, vector<int> &ans, int tar, vector<vector<int>> &result)
{
    if (tar == 0)
    {
        result.push_back(ans);
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        if (i > idx && arr[i] == arr[i - 1])
            continue;
        if (arr[i] > tar)
            continue;
        ans.push_back(arr[i]);
        findSubset(arr, i + 1, ans, tar - arr[i], result);
        ans.pop_back();
    }
}
int main()
{
    vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    vector<int> ans;
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());
    findSubset(arr, 0, ans, target, result);
    for (auto x : result)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}