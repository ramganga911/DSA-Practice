#include<bits/stdc++.h>
using namespace std;
// Write a function to find maximum number of meetings in one room
int countMeeting(vector<int>&start, vector<int>& end){ // time complexity: O(nlogn)
    int n = start.size();
    vector<pair<int,int>> meet;
    for(int i=0; i<n; i++){
        meet.push_back({end[i],start[i]});
    }
    sort(meet.begin(), meet.end());
    int count =0, lastEndTime =-1;
    for(auto x:meet){
        if(x.second > lastEndTime){
            count++;
            lastEndTime = x.first;
        }
    }
    return count;
}
int main(){
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
    int ans = countMeeting(start, end);
    cout << "Maximum number of meetings:" << ans;
    return 0;
}