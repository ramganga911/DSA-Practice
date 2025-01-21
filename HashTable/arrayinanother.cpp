#include<bits/stdc++.h>
using namespace std;
// Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int,int>mp;
        for(auto it: a){
            mp[it]++;
        }
        int n= b.size();
        for(int i=0; i<n; i++){
            if(mp.find(b[i])==mp.end()){
                return  false;
            }else{
                mp[b[i]]--;
            }
        }
        return true;
    }
int main(){
    vector<int>a = {11, 1, 13, 21, 3, 7};
    vector<int>b = {11, 3, 7, 1};
    bool ans = isSubset(a, b);
    cout << ans << endl;
    return 0;
}