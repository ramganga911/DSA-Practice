#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "<<endl;
    }
    cout<<endl;
    
}
int main(){
    // pair<int,string>p;
    // p=make_pair(2,"ram");
    // p={3,"ramganga"};
    // cout<<p.first <<" "<< p.second<<endl;
    // vector<int> v(10,3);
    // // int n;
    // // cin>>n;
    // // for (int i = 0; i < n; i++)
    // // {
    // //     int x;
    // //     cin>>x;
    // //     r.push_back(x);
    // // }
    // vector<pair<int,int>> v={{1,2},{3,4},{5,6}};
    // printVec(v);
    // int N;
    // cin>>N;
    // for (int i = 0; i < N; i++)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     v.push_back({x,y});
    // }
    // printVec(v);
    int N;
    cin>>N;
    // vector ka array
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
    
    
    
}