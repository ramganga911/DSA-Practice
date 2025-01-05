#include<bits/stdc++.h>
using namespace std;
void printSubset(vector<int> &arr, int idx, vector<int> &ans){
    if(idx >= arr.size()){
        for(int num:ans){
            cout<< num<<" ";
        }cout<<endl;
        return;
    }
    //include
    ans.push_back(arr[idx]);
    printSubset(arr, idx+1, ans);
    ans.pop_back(); //back tacking
    //exclude
    printSubset(arr, idx+1, ans);
}

int main(){
    vector<int>arr={1,2,3};
    vector<int>ans;
    printSubset(arr, 0,ans);
    return 0;
}