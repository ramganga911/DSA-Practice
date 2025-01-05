#include<iostream>
using namespace std;

// bubble sort 

void bubblesort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
            
        }
        if (swapped == false)
        {
            break;
        }
        
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
    bubblesort(arr,7);
    print(arr,7);

    return 0;
}