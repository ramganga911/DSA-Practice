#include <bits/stdc++.h>
using namespace std;
Bubble Sort
void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }

        }
        if (!isSwap)
        {
            return;
        }
    }
}
Selection Sort
void selection(int arr[],int n){
    for(int i=0; i<n-1; i++){
        int SI = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[SI]){
                SI = j;
            }
        }
        swap(arr[i],arr[SI]);
    }
}
Insertion Sort
void insertion(int arr[],int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >=0 && arr[prev]> curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}
MergeSort
void merge(vector<int>&arr, int l, int mid, int r)
{
    vector<int> nums;
    int i=l;
    int j = mid+1;

    while(i<=mid && j<=r){
        if(arr[i]>=arr[j]){
            nums.push_back(arr[j]);
            j++;
        }else{
            nums.push_back(arr[i]);
            i++;
        }
    }
    while(i<=mid){
        nums.push_back(arr[i]);
        i++;
    }
    while(j<=r){
        nums.push_back(arr[j]);
        j++;
    }
    for(int x=l; x<=r; x++){
        arr[x] = nums[x-l];
    }
}
void mergeSort(vector<int>&arr,int l,int r){

    if(l>=r){
        return;
    }
    int mid = l+(r-l)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
Swap Function
void swap(vector<int> &arr, int l, int r)
{
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
}
QuickSort 
int partition(vector<int> &arr, int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}
void quickSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}
Print 
void printArr(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {2, 4, 1, 5, 3};
    int n = 5;
    // bubbleSort(arr,5);
    // selection(arr,5);
    // insertion(arr,5);
    // printArr(arr,5);
    // mergeSort(arr,0,n-1);
    quickSort(arr, 0, n - 1);
    printArr(arr, n);
    return 0;
}