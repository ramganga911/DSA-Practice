#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6}};
    // vector<pair<int,int>>::iterator it;
    // for(it=v_p.begin(); it!= v_p.end(); ++it){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    // for(it=v_p.begin(); it!= v_p.end(); ++it){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    vector<int> v={2,3,4,5,6};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it;
    for (auto it= v.begin(); it!=v.end(); ++it)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for(auto &val:v){
        val++;
    }
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<endl;
}