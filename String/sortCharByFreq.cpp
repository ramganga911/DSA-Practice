#include<bits/stdc++.h>
using namespace std;
// Sort Characters By Frequency
string sortCharByFreq(string s){
    unordered_map<char, int>mp;
    for(auto x : s){
        mp[x]++;
    }
    priority_queue<pair<int, char>>pq;
    for(auto x : mp){
        pq.push({x.second, x.first});
    }
    string ans ="";
    while(!pq.empty()){
        int freq = pq.top().first;
        int ch = pq.top().second;
        pq.pop();
        while(freq--){
            ans+=ch;
        }
    }
    return ans;
}
int main(){
    string s = "indivisibility";
    string ans = sortCharByFreq(s);
    cout << ans;
    return 0;
}