#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
int solve(int i,int j,string&s,string&t){
    int n = s.length();
    int m = t.length();
    if(i>=n||j>=m)return 0;
    if(dp[i][j]!=-1) return 0;

    if(s[i]==t[j]){
        return dp[i][j] = 1+solve(i+1,j+1,s,t);
    }else{
        return dp[i][j] = max(solve(i+1,j,s,t),solve(i,j+1,s,t));
    }

}
int LCS(string &s,string&t){
    int n=s.length();
    int m=t.length();
    dp.resize(n+1, vector<int>(m+1,-1));
    return solve(0,0,s,t);

}

int main(){
    string s="abcyz";
    string t="abdcx";
    cout<<LCS(s,t)<<endl;
    
    return 0;
}