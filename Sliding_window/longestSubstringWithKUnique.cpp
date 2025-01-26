#include<bits/stdc++.h>
using namespace std;
int longestUniqueSubstring(string s, int k){
    int n = s.size();
    int i=0, j=0;
    int maxLen =0;
    unordered_map<char, int>mp;
    while(j<n){
        mp[s[j]]++;
        while(mp.size()>k){
            mp[s[i]]--;
            if(mp[s[i]]==0){
                mp.erase(s[i]);
            }
            i++;
        }
        if(mp.size()==k){
            maxLen = max(maxLen, j-i+1);
        }
        j++;
    }
    return maxLen;

}
int main(){
    string s = "aabacbebebe";
    int ans = longestUniqueSubstring(s, 3);
    cout << ans;
    return 0;
}