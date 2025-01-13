#include<bits/stdc++.h>
using namespace std;
void printSubset(vector<int> &arr, int idx, vector<int> &ans, vector<vector<int>> &result){
    if(idx >= arr.size()){
        // for(int num:ans){
        //     cout<< num<<" ";
        // }cout<<endl;
        result.push_back(ans);
        return;
    }
    //include
    ans.push_back(arr[idx]);
    printSubset(arr, idx+1, ans, result);
    ans.pop_back(); //back tacking
    //exclude
    printSubset(arr, idx+1, ans, result);
}

int main(){
    vector<int>arr={1,2,3};
    vector<int>ans;
    vector<vector<int>>result;
    printSubset(arr, 0,ans, result);
    for(auto x:result){
        for(auto y:x){
            cout<<y<<" ";
        }
    }
    return 0;
}