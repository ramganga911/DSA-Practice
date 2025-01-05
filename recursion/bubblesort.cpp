#include<bits/stdc++.h>
using namespace std;
void sortElement(int *arr, int n){
    if(n==1 || n==0){
        return;
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortElement(arr, n-1);
}

int main(){
    int arr[5]={2,4,3,6,5};
    sortElement(arr,5);
    for(int i=0; i<5; i++){
        cout<< arr[i]<<" ";
    }

    return 0;

}