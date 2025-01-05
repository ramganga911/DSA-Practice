#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>&arr){
    int n = arr.size();
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
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
    insertionSort(arr);
    cout << "Sorted Array: \n";
    printArr(arr);
    return 0;
}