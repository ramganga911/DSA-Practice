#include<iostream>
using namespace std;

int peakelement(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;

    while (s<e)
    {
        if (arr[mid]<arr[mid+1])
        {
            s= mid+1;
        }
        if (arr[mid]>arr[mid+1])
        {
            e = mid;
        }
        mid = (s+e)/2;
    }
    return s;


}


int main(){
    int arr[5]= {1,2,4,3,1};

    int peak = peakelement(arr,5);
    cout << "Peak element at index " << peak <<endl;;
    cout << "peak element value is "<< arr[peak];

    return 0;
}