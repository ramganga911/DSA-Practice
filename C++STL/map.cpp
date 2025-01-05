#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main(){
    map<int,string> m;
    m[1]="ram";
    m[4]="ganga";
    m[3]="Kumar";
    m.insert(make_pair(7,"rinki"));
    m.insert({6,"kumari"});
    // map<int,string>::iterator it;
    // for(auto it=m.begin(); it!=m.end();++it){
    //     cout<< it->first <<" "<<it->second <<endl;
    // }
    // print(m);
    auto it = m.find(3);
    if(it== m.end()){
        cout<< "No value";
    }
    else{
        cout<<it->first<<" "<<it->second <<endl;
    }
}