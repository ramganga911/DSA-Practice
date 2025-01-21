#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>&s){ //Time complexity O(n*m) where n is the number of strings and m is the length of the smallest string
    int n = s.size();
    int len = INT_MAX;
    string check ="";
    for(int i=0; i<n; i++){
        if(len > s[i].size()){
            len = s[i].size();
            check = s[i];
        }
    }
    string prefix = "";
    for(int i=0; i<len; i++){
        for(int j=0; j<n; j++){
            if(check[i]!= s[j][i]) return prefix;
            
        }
        prefix+=check[i];
    }
    return prefix;
}
int main(){
    vector<string> s ={ "flower", "flow", "flight"};
    string ans = longestCommonPrefix(s);
    cout << ans << endl;
    return 0;
}