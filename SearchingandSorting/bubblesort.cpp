#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&arr){
    int n = arr.size();
    bool swapped;
    for(int i=0; i<n-1; i++){
        swapped = false;
        for(int j=0; j< n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}
void printArr(vector<int>&arr){
    for(int num : arr){
        cout<< num <<" ";
    }
}
int main(){
    vector<int> arr = {1,4,3,6,5,2,7};
    bubblesort(arr);
    cout<< "Sorted Array: \n";
    printArr(arr);
    return 0;
}