#include<bits/stdc++.h>
using namespace std;
vector<int> findTopKFreq(vector<int>& arr, int k){
    unordered_map<int,int>mp;
    for(int x: arr){
        mp[x]++;
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
    for(auto it : mp){
        int val = it.first;
        int freq = it.second;
        pq.push({freq,val});
        if(pq.size()>k){
            pq.pop();
        }
    }
    vector<int> ans;
    while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}
int main(){
    vector<int> arr ={1,1,1,2,2,3};
    int k =2;
    vector<int> ans = findTopKFreq(arr,k);
    for(int x: ans){
        cout << x << " ";
    }
    return 0;
}