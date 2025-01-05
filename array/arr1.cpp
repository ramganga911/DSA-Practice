#include<iostream>
using namespace std;

// void printarr(char arr[],int size){
//     cout << "printing the arr "<< endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout<< arr[i]<<" ";
//     }
//     cout << "printing Done"<<endl;
    
// }

// int getMax(int num[],int n){
//         int max = INT_MIN;

//         for (int i = 0; i < n; i++)
//         {
//         if (num[i] > max)
//         {
//             max = num[i];
//         }
        
//         }
//     return max;
// }
// int getMin(int num[],int n){

//     int min = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (num[i]<min)
//         {
//             min = num[i];
//         }
        
//     }
//     return min;
// }

int main(){
    // int arr[10] = {1,2,3,4,5,6};
    // int arra[4] = {1,2,3,4};
    // printarr(arr,10);
    // printarr(arr,4);
    // int arrasize = sizeof(arra)/sizeof(int);
    // cout << " sizeof fifth is " << arrasize <<endl;

    // char ch[5] = {'a','b','c','d','e'};
    // printarr(ch,5);
    int size;
    cin >>size;
    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    
    // cout << "Maximum value is "<< getMax(num,size);
    // cout << "Minimum value is "<< getMin(num,size);

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + num[i];
    }
    cout << sum << endl;


    


    return 0;
}