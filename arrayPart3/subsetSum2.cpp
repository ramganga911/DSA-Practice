#include <bits/stdc++.h>
using namespace std; 
// Overall Time complexity: O(2^n)
void subset(vector<int> &arr, int idx, vector<int> &ans, vector<vector<int>> &result) // time complexity: O(2^n)
{
    if (idx >= arr.size())
    {
        result.push_back(ans);
        return;
    }
    ans.push_back(arr[idx]);
    subset(arr, idx + 1, ans, result);
    ans.pop_back();
    int i = idx + 1;
    while (i < arr.size() && arr[i] == arr[i - 1])
    {
        i++;
    }
    subset(arr, i, ans, result);
}
int main()
{
    vector<int> arr = {1, 2, 2};
    sort(arr.begin(), arr.end()); // time complexity: O(nlogn)
    vector<int> ans;
    vector<vector<int>> result;
    subset(arr, 0, ans, result);

    for (auto x : result)
    {
        
        for (int y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}