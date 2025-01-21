#include<bits/stdc++.h>
using namespace std;
int longestSubstring(string &s, int n){
    int len =0;
    int start = 0, end=0;
    string ans ="";
    unordered_map<char, int> seen;
    while(end<n){
        char current = s[end]; // current character
        if(seen.count(current)==1 && seen[current]>= start){ // if current character is already present in the map and its index is greater than start
            start = seen[current]+1; // update start to the next index of the current character
        }else{
            seen[current] = end; // add the current character to the map
            end++; 
        }
        if(end-start > len){
            len = end - start; //update the length of the substring
            ans = s.substr(start, len); // update the substring
        }
    }
    cout << ans << endl;
    return len;
}
int main(){
    string s = "abcabcbb";
    int n = s.size();
    int ans = longestSubstring(s, n);
    cout << ans << endl;
    return 0;
}