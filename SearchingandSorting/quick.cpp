#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr, int st, int end){
    int idx = st-1;
    int pivot = arr[end];
    for(int j=st; j<end; j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}
void quickSort(vector<int>&arr, int st, int end){
    if(st<end){
        int pivot = partition(arr, st, end);
        quickSort(arr, st, pivot-1);
        quickSort(arr, pivot+1, end);
    }
}
int main() {
	vector<int>arr={2,3,5,4,6,8,9};
	quickSort(arr,0, arr.size()-1);
	for(int num: arr){
	    cout<< num<<" ";
	}cout<<endl;
}