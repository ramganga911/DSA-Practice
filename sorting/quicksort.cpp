#include<iostream>
using namespace std;

int partition(int arr[],int n,int l, int r){
    int i = l;
    int j = r;
    int pivot = arr[i];
    while(i<j){
    while(arr[i]<= pivot)i++;
    while(arr[j]>pivot)j--;
    if (i<j)
    {
        swap(arr[i],arr[j]);
    }
    }
    swap(arr[j],arr[l]);
    return j;
}

void quicksort(int arr[], int n, int l,int h){
    if (l<h)
    {
        int pivot = partition(l,h);
        quicksort(l,pivot-1);
        quicksort(pivot+1,h);
    }
    
}

void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main(){
    int arr[7] = {2,5,3,7,4,1,9};
    print(arr,7);
    partition(arr,7,2,9);
    quicksort(arr,7,2,9);
    print(arr,7);
    return 0;
}