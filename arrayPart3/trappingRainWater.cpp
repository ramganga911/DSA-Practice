#include <bits/stdc++.h>
using namespace std;
int trapRainWater(vector<int> &arr)
{
    int n = arr.size();
    int ans = 0;
    vector<int> left(n, 0);
    vector<int> right(n, 0);
    left[0] = arr[0];
    right[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }
    for (int j = n - 2; j >= 0; j--)
    {
        right[j] = max(right[j + 1], arr[j]);
    }
    for (int i = 0; i < n; i++)
    {
        ans += (min(left[i], right[i]) - arr[i]);
    }
    return ans;
}
int main()
{
    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int ans = trapRainWater(arr);
    cout << "Trapped rain water: " << ans;

    return 0;
}