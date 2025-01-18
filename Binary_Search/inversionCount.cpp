#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:

    int merge(vector<int> &arr, int st, int mid, int end)
    {
        int l = st, r = mid + 1;
        int countInver = 0;
        vector<int> temp;
        while (l <= mid && r <= end)
        {
            if (arr[l] <= arr[r])
            {
                temp.push_back(arr[l]);
                l++;
            }
            else
            {
                temp.push_back(arr[r]);
                r++;
                countInver += (mid - l + 1);
            }
        }
        while (l <= mid)
        {
            temp.push_back(arr[l]);
            l++;
        }
        while (r <= end)
        {
            temp.push_back(arr[r]);
            r++;
        }
        for (int i = 0; i < temp.size(); i++)
        {
            arr[i + st] = temp[i];
        }
        return countInver;
    }
    int mergeSort(vector<int> &arr, int st, int end)
    {
        if (st < end)
        {
            int mid = st + (end - st) / 2;
            int leftInver = mergeSort(arr, st, mid);
            int rightInver = mergeSort(arr, mid + 1, end);
            int inver = merge(arr, st, mid, end);
            return leftInver + rightInver + inver;
        }
        return 0;
    }
    int inversionCount(vector<int> &arr)
    {
        int ans = mergeSort(arr, 0, arr.size() - 1);
        return ans;
    }
};
int main(){
    vector<int> arr={2,4,1,3,5};
    Solution obj;
    cout<<obj.inversionCount(arr);
    return 0;
}