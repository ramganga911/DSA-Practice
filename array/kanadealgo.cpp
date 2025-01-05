#include<iostream>
#include<climits>
using namespace std;

int kanadesum(int arr[],int n){
    int sum = 0;
    int Maxsum = INT_MIN;
    for (int i = 0; i < n-1; i++)
    {
        sum = sum +arr[i];
        Maxsum = max(Maxsum,sum);
    }
    if (sum <0)
    {
        sum =0;
    }
    return Maxsum;
}

int main(){
    int arr[7] = {1,-2,-3,4,-1,2,1};
    
    cout << kanadesum(arr,7);
    return 0;
}