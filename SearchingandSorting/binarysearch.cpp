#include <bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int> &arr, int x)
{
    int s = 0, e = arr.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
        {
            return true;
        }
        if (arr[mid] > x)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return false;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int x = 10;
    if (binarySearch(arr, x))
    {
        cout << "Present h\n";
    }
    else
    {
        cout << "Present nhi h\n";
    }
    return 0;
}