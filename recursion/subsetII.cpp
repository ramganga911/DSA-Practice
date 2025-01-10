#include <bits/stdc++.h>
using namespace std;
void subset2(vector<int> &arr, int idx, vector<int> &ans, vector<vector<int>> &result)
{
    if (idx >= arr.size())
    {
        result.push_back(ans);
        return;
    }
    ans.push_back(arr[idx]);
    subset2(arr, idx + 1, ans, result);
    ans.pop_back();
    int i = idx + 1;
    while (i <= arr.size() && arr[i] == arr[i - 1])
    {
        i++;
    }
    subset2(arr, i, ans, result);
    return;
}
int main()
{
    vector<int> arr = {1, 2, 1};
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    vector<int> ans;
    subset2(arr, 0, ans, result);

    for (auto x : result)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
    }
    return 0;
}