#include<iostream>
using namespace std;
//selection sort 
void selectionsort(int arr[],int n){
    for(int i = 0; i < n-1; i++ ){
        int minindex = i;

        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minindex])
            {
                minindex = j;
            }
            
        }
        swap(arr[minindex],arr[i]);
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
    selectionsort(arr,7);
    print(arr,7);
    return 0;
}