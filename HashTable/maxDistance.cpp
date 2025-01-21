#include<bits/stdc++.h>
using namespace std;
int maxDistance(vector<int> &arr) {
        //Max distance between same elements
        int n = arr.size();
        int max_distance = 0;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=i;
            }else{
                max_distance = max(max_distance,i- mp[arr[i]]);
            }
        }
        return max_distance;
    }
int main(){
    vector<int> arr = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
    int ans = maxDistance(arr);
    cout << ans << endl;
    return 0;
}