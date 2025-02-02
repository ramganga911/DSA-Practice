#include <bits/stdc++.h>
using namespace std;
// 3 Sum
// Time complexity: O(n^2)
void ThreeSum(vector<int> &arr, vector<vector<int>> &ans)
{
    int n = arr.size();
    for (int i = 0; i < n - 2; i++)
    {
        if (i >= 0 && arr[i] == arr[i - 1])
            continue;
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right]; // found triplets
            if (sum == 0)
            {
                ans.push_back({arr[i], arr[left], arr[right]});
                // skip duplicates
                while (left < right && arr[left] == arr[left + 1])
                    left++;
                while (left < right && arr[right] == arr[right - 1])
                    right--;
                left++;
                right--;
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    ThreeSum(arr, ans);
    cout << "[";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "]";
    }
    cout << "]";

    return 0;
}