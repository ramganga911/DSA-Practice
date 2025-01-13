#include <bits/stdc++.h>
using namespace std;
void subsetSum(vector<int> &arr, int idx, int sum, vector<int> &ans)
{
    if (idx >= arr.size())
    {
        ans.push_back(sum);
        return;
    }
    subsetSum(arr, idx + 1, sum + arr[idx], ans);
    subsetSum(arr, idx + 1, sum, ans);
}
int main()
{
    vector<int> arr = {1, 2, 1};
    vector<int> ans;
    int sum = 0;
    subsetSum(arr, 0, sum, ans);
    sort(ans.begin(), ans.end());
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}