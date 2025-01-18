#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int partition(vector<int> &arr, int low, int high)
    {
        int i = low - 1;
        int pivot = arr[high];
        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        i++;
        swap(arr[i], arr[high]);
        return i;
    }
    void quickSort(vector<int> &arr, int low, int high)
    {
        if (low < high)
        {
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot - 1);
            quickSort(arr, pivot + 1, high);
        }
    }
};
int main(){
    vector<int> arr={2,5,8,9,27,35,24,6,7};
    Solution obj;
    obj.quickSort(arr, 0, arr.size()-1);
    for(int i: arr){
        cout << i<<" ";
    }
    return 0;
}