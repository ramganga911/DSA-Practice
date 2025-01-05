#include<iostream>
using namespace std;

int getSum(int *arr,int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout << "enter number" << endl;
    cin >> n;

    //variable size array
    int * arr = new int [n];

    //taking input in array
    cout << "Enter element " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = getSum(arr, n);

    cout << "answer is equal to " << ans << endl;


    return 0;
}