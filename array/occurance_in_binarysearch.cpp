#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    int ans =-1;
    while (start <end)
    {
        if (arr[mid]==key)
        {
            ans = mid;
            end = mid-1;
        }
        if (key > arr[mid])
        {
            start = mid +1;
        }
        if (key < arr[mid])
        {
            end = mid -1;
        }
        
        mid = (start+end)/2;
        
    }
    return ans;
}
int lastocc(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    int ans =-1;
    while (start <end)
    {
        if (arr[mid]==key)
        {
            ans = mid;
            start = mid+1;
        }
        if (key > arr[mid])
        {
            start = mid +1;
        }
        if (key < arr[mid])
        {
            end = mid -1;
        }
        
        mid = (start+end)/2;
        
    }
    return ans;
}


int main(){
    int arr[10] = {1,2,3,3,3,3,3,3,4,5};

    int index = firstocc(arr,10,3);
    cout << "first Occurance of 3 is at index " << index << endl;
    int inde = lastocc(arr,10,3);
    cout << "last Occurance of 3 is at index " << inde << endl;
    
    int total = (inde - index)+1;
    cout << "total no of occurance is " << total <<endl;
    return 0;
}