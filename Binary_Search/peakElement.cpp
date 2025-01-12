#include <bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int> &arr, int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return arr[low];
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 3, 2, 1};
    int n = arr.size();
    cout << findPeakElement(arr, n);
    return 0;
}