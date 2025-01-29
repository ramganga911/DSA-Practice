#include <bits/stdc++.h>
using namespace std;
void allPermutation(vector<int> &arr, int idx, vector<vector<int>> &res)
{
    if (idx >= arr.size())
    {
        res.push_back({arr});
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        // recursive call
        swap(arr[i], arr[idx]);
        // push the element in ans
        allPermutation(arr, idx + 1, res);
        // backtracking
        swap(arr[i], arr[idx]);
    }
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> res;
    allPermutation(arr, 0, res);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}