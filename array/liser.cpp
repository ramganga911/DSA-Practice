#include<bits/stdc++.h>
using namespace std;

// bool linearsearch(int arr[],int n, int k){
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==k)
//         {
//             return 1;
//         }
//     }
//     return 0;
    
// }
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout <<endl;
}
void reversearr(int arr[],int n){
    int s = 0, e = n-1;
    while (s<e)
    {
        int tem = arr[e];
        arr[e]=arr[s];
        arr[s]= tem;
        s++;
        e--; 
    }   
}
void swapalar(int arr[],int n){
    int s = 0, e = 1;
    while (e < n)
    {
        int temp = arr[e];
        arr[e]=arr[s];
        arr[s]= temp;
        s+=2;
        e+=2; 
    }   
}




int main(){
    int arr[8]= {2,3,4,6,9,7,10,12};
    // bool ls = linearsearch(arr,8,6);
    // if (ls)
    // {
    //     cout<<"found";
    // }
    // else
    // {
    //     cout<<"Not found";
    // }
    print(arr,8);
    swapalar(arr,8);
    print(arr,8);
    reversearr(arr,8);
    print(arr,8);
    

    return 0;
}