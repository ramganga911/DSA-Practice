#include<iostream>
using namespace std;
int getsum(int arr[],int n){
    if(n==0){
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }
    int remainingPart = getsum(arr+1, n-1);
    int sum = arr[0]+remainingPart;
    return sum;
    
}
int main(){
    int arr[5] = {2,4,9,8,1};
    int size = 5;
    int sum = getsum(arr,size);
    cout << "sum is " << sum <<endl;
    return 0;
}