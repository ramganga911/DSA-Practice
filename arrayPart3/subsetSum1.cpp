#include <bits/stdc++.h>
using namespace std;
void subset(vector<int> &arr, int idx, vector<int> &ans, vector<vector<int>> &result)
{
    if (idx >= arr.size())
    {
        result.push_back(ans);
        return;
    }
    ans.push_back(arr[idx]);
    subset(arr, idx + 1, ans, result);
    ans.pop_back();
    subset(arr, idx + 1, ans, result);
}
int main()
{
    vector<int> arr = {2, 3};
    vector<int> ans;
    vector<vector<int>> result;
    subset(arr, 0, ans, result);
    for (auto x : result)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
    }
    cout << endl;
    vector<int> finalAns;

    for (auto y: result)
    {
        int sum = 0;
        for (int x:y)
        {
            sum += x;
        }
        finalAns.push_back(sum);
    }
    for (auto x : finalAns)
    {
        cout << x << " ";
    }
    return 0;
}