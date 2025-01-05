#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2; 
    }
    return s;  
}
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    
}
int main(){
    int arr[5]= {5,4,1,2,3};

    cout << pivot(arr,5) << endl;

    return 0;
}