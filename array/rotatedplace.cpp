#include<bits/stdc++.h>
using namespace std;
// void rotateArr(vector<int>&arr, int d){
//     int n = arr.size();
//     for(int i=0; i<d; i++){
//         int first = arr[0];
//         for(int j=0; j<n-1; j++){
//             arr[j] = arr[j+1];
//         }
//         arr[n-1] = first;
//     }
// }
// void rotateArr(vector<int>&arr, int d){
//     int n= arr.size();
//     d%=n;
//     vector<int> temp(n);
//     //copy last n-d element to the front of temp
//     for(int i=0; i<n-d; i++){
//         temp[i] = arr[d+i];
//     }
//     // copy the first d element to the temp
//     for(int i=0; i<d; i++){
//         temp[n-d+i] = arr[i];
//     }
//     // copying the element to arr
//     for(int i=0; i<n; i++){
//         arr[i] = temp[i];
//     }

// }
void rotateArr(vector<int>&arr, int d){
    int n = arr.size();
    d%=n;
    // reverse the fisrt d element
    reverse(arr.begin(),arr.begin()+d);
    // reverse the remaining n-d element
    reverse(arr.begin()+d, arr.end());
    // reverse the entire arr
    reverse(arr.begin(),arr.end());
}
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int d = 2;
    rotateArr(arr,d);
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}