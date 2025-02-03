#include<bits/stdc++.h>
using namespace std;
int countPlatform(vector<int>& arr, vector<int>&dep){ // time complexity: O(nlogn)
    int n = arr.size();
    int m = dep.size();
    int i=0,j=0;
    int platform =0;
    int maxPlatform =0;
    while(i<n && j<m){
        if(arr[i] <= dep[j]){ //A train arrives before the previous one departs
            platform++;
            i++;
            maxPlatform = max(maxPlatform, platform);
        }else{
            platform--; //A train departs before the next one arrives
            j++;
        }
    }
    return maxPlatform;

}
int main(){
    vector<int> arr = {900, 940, 950, 1100, 1500, 1800};
    vector<int> dep = {910, 1200, 1120, 1130, 1900, 2000};
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    int ans = countPlatform(arr,dep);
    cout << ans;
    return 0;
}