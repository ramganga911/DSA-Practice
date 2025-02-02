#include <bits/stdc++.h>
using namespace std;
set<vector<int>> st;
void combinationSum(vector<int> &arr, int idx, vector<int> &ans, vector<vector<int>> &result, int tar)
{
    if (idx == arr.size() || tar < 0)
    {
        return;
    }
    if (tar == 0)
    {
        if (st.find(ans) == st.end())
        {
            st.insert(ans);
            result.push_back(ans);
        }
    }
    ans.push_back(arr[idx]);
    combinationSum(arr, idx + 1, ans, result, tar - arr[idx]); // include the current element
    combinationSum(arr, idx, ans, result, tar - arr[idx]);     // include multiple time the current element
    ans.pop_back();
    combinationSum(arr, idx + 1, ans, result, tar); // exclude the current element
}
int main()
{
    vector<int> arr = {2, 3, 5};
    int target = 8;
    vector<int> ans;
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());
    combinationSum(arr, 0, ans, result, target);
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