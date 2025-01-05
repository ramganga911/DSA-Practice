#include<bits/stdc++.h>
using namespace std;
string lonestSubstring(string s){
    unordered_map<char,int> seen;
    int len=0;
    int begin =0, end=0;
    string ans ="";

    while(end <s.size()){
        char current = s[end];
        if(seen.count(current)==1 && seen[current] >=begin){
            begin = seen[current]+1;
        }else{
            seen[current] = end;
            end++;
        }

        if(end- begin >len){
            len = end- begin;
            ans = s.substr(begin, end-begin);
        }
    }
    return ans;
}
int main(){
    string str = "abcabcbb";
    string ans = lonestSubstring(str);
    cout << ans;
    return 0;
}

