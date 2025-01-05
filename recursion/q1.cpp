#include<bits/stdc++.h>
using namespace std;
void  reverse (int arr[],int l, int n){
    if(l>=n/2){
        return ;
    }
    swap(arr[l], arr[n-l-1]);
    reverse(arr,l+1,n);
}
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0; i<5; i++){
        cout << arr[i]<<" ";
    }
    cout<< endl;
    reverse(arr,0,5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}