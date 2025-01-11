#include <bits/stdc++.h>
using namespace std;
int maximumSubarraySym(vector<int> &arr)
{
    int n = arr.size();
    int maxSum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxSum = max(maxSum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxSum;
}
int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int ans = maximumSubarraySym(arr);
    cout << ans << endl;
    return 0;
}