#include<bits/stdc++.h>
using namespace std;
// void printF(int ind, vector<int> &ds, int arr[], int n){
//     if(ind==n){
//         for(auto it:ds){
//             cout<< it <<" ";
//         }
//         cout<<endl;
//         return ;
//     }
//     ds.push_back(arr[ind]);
//     printF(ind+1, ds, arr, n);
//     ds.pop_back();
//     printF(ind+1, ds, arr,n);
// }

// bool printF(int i, vector<int> &ds, int arr[], int n,int s, int sum)
// {
//     if (i == n)
//     {
//         // condtion true
//         if(s == sum){
//             for(auto it:ds){
//                 cout << it <<" ";
//             }
//             return true;
//         }
//         else{
//             return false;
//         }

//     }
//     ds.push_back(arr[i]);
//     s+= arr[i];
//     if(printF(i + 1, ds, arr, n,s,sum)==true) return true;
//     ds.pop_back();
//     s-=arr[i];
//     if(printF(i + 1, ds, arr, n,s,sum)==true) return true;
//     return false;
// }


int printF(int i, int arr[], int n, int s, int sum){
    if(i==n){
        if(s==sum){
            return 1;
        }else{
            return 0;
        }
    }
    s+=arr[i];
    int l=printF(i+1, arr, n, s, sum);
    s-=arr[i];
    int r = printF(i+1, arr, n, s, sum);
    return l+r;

}

int main(){
    int arr[]={1,2,1};
    vector<int> ds;
    int n=3;
    cout<< printF(0,arr, n, 0, 2);
    return 0;
}