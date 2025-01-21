#include<bits/stdc++.h>
using namespace std;
string uncommonChars(string& s1, string& s2) {
        // code here
        unordered_set<char> set1(s1.begin(), s1.end());
        unordered_set<char> set2(s2.begin(), s2.end());
        vector<char> ans;
        // find character in s1 which is not present in s2
        for(auto &ch: set1){
            if(set2.find(ch)==set2.end()){
                ans.push_back(ch);
            }
        }
        // find character in s2 which is not present in s1
        for(auto &ch: set2){
            if(set1.find(ch)==set1.end()){
                ans.push_back(ch);
            }
        }
        sort(ans.begin(), ans.end());
        
        return string(ans.begin(), ans.end());
    }
int main(){
    string s1 = "characters";
    string s2 = "alphabets";
    string ans = uncommonChars(s1, s2);
    cout << ans << endl;
    return 0;
}