#include<bits/stdc++.h>
using namespace std;
void findDuplicate(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        int index = arr[i]%n;
        arr[index]+= n;
    }
    for(int i=0; i<n; i++){
        if((arr[i]/n)>=2){
            cout << i <<" ";
        }
    }
}

// void printArray(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size(); ++i)
//         cout << arr[i] << " ";
//     cout << "\n";
// }
int main(){
    vector<int> arr={1,2,3,4,2,5,3,7};
    findDuplicate(arr);
    // printArr(arr);
    return 0;
}