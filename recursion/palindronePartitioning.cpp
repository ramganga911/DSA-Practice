#include<bits/stdc++.h>
using namespace std;
//Given a string s, partition s such that every substring of the partition is a palindrome. 
//Return all possible palindrome partitioning of s.
//A palindrome string is a string that reads the same backward as forward.
//Example: Input: s = "aab"
//Output: [["a","a","b"],["aa","b"]]

bool isPalin(string s){ // time complexity: O(n)
    string s1 = s;
    reverse(s1.begin(), s1.end());
    return s1==s;
}
void getAllPartitions(string s, vector<string> &partition, vector<vector<string>>&ans){ // time complexity: O(2^n)
    if(s.size() == 0){
        ans.push_back(partition);
        return;
    }
    for(int i=0; i<s.size(); i++){
        string prefix = s.substr(0,i+1);
        if(isPalin(prefix)){
            partition.push_back(prefix);
            getAllPartitions(s.substr(i+1), partition, ans);
            partition.pop_back();
        }
    }
}
int main(){
    string s = "aab";
    vector<vector<string>> ans;
    vector<string> partition;
    getAllPartitions(s,partition,ans);
    for(auto x: ans){ // time complexity: O(n)
        for(auto y: x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}