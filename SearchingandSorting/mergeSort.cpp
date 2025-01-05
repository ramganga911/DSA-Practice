#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int l, int mid, int r)
{
    vector<int> temp;
    int s1 = l;
    int s2 = mid + 1;
    while (s1 <= mid && s2 <= r)
    {
        if (arr[s1] <= arr[s2])
        {
            temp.push_back(arr[s1]);
            s1++;
        }
        else
        {
            temp.push_back(arr[s2]);
            s2++;
        }
    }
    while (s1 <= mid)
    {
        temp.push_back(arr[s1]);
        s1++;
    }
    while (s2 <= r)
    {
        temp.push_back(arr[s2]);
        s2++;
    }
    for (int i = l; i <= r; i++)
    {
        arr[i] = temp[i - l];
    }
}
void mergeSort(vector<int> &arr, int l, int r)
{
    while (l >= r)
    {
        return;
    }
    int mid = l + (r - l) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}
void printArr(vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
}
int main()
{
    vector<int> arr = {1, 4, 3, 6, 5, 2, 7};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    cout << "Sorted Array: \n";
    printArr(arr);
    return 0;
}