#include<iostream>
using namespace std;

// void insertionsort(int arr[], int n){
//     for(int i = 1; i<n; i++){
//         int temp = arr[i];
//         int j = i-1;
//         while (j>=0 && arr[j]>temp)
//         {
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = temp;
        
//     }
// }

void insertionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        int mini = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[mini]){
                mini =j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
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
    insertionSort(arr,7);
    print(arr,7);
    cout << "After selection sort: " << "\n";
    print(arr, 7);
    return 0;
}