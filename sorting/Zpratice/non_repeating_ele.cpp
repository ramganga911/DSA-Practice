#include<bits/stdc++.h>
using namespace std;
void nonRepeating(vector<int>&num){
    int n = num.size();
    bool chk;
    for(int i=0; i<n; i++){
        chk = false;
        for(int j=0; j<n; j++){
            if(i!=j && num[i]==num[j]){
                chk = true;
            }
        }
        if(!chk) cout << num[i] << " ";
    }
}
int main(){
    vector<int> num = {1,2,-1,1,3,1};
    nonRepeating(num);
    return 0;
}