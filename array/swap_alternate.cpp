#include<iostream>
using namespace std;
//reverse an arry


void reverse(int arr[], int n){

    for (int i = 0; i < n; i+=2)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        
    }  
    
}


void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

 
int main(){
    int arr[5]= {9,5,7,23,6};
    int brr[6]= {4,6,8,2,5,3};
    
    reverse(arr,5);
    reverse(brr,6);
    print(arr,5);
    print(brr,6);
  
    return 0;

}