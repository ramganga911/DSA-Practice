#include<iostream>
using namespace std;

int main(){
    int arr[6] = {2, 5, 2, 9, 5, 7,};
    int n, i;

    for(int i = 1; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << "Sorted array " << arr[i] << endl;
    return 0;
}