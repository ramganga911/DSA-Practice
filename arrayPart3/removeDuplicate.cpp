#include <bits/stdc++.h>
using namespace std;
int removeDuplicate(vector<int> &arr)
{
    int j = 1, i = 0;
    int n = arr.size();
    while (j < n)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
        j++;
    }
    return i + 1;
}
int main()
{
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    int ans = removeDuplicate(arr);
    cout << ans << endl;
    for (int i = 0; i < ans; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}