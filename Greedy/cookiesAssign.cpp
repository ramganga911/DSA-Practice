#include<bits/stdc++.h>
using namespace std;
// Write a function to find the maximum number of children that can be satisfied
int findContentChildren(vector<int>&g, vector<int>&s){ // time complexity: O(nlogn)
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i=0,j=0;
    int n = g.size(), m= s.size();
    while(i<n && j<m){
        if(g[i] <= s[i]){
            i++;
        }
        j++;
    }
    return i;
}
int main(){
    vector<int> g = {1, 2, 3};
    vector<int> s = {1, 1};
    int ans = findContentChildren(g,s);
    cout << "Maximum number of children: " << ans;
    return 0;
}