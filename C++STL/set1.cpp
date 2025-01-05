#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s){
    for(string val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    for(auto it = s.begin(); it!=s.end(); ++it){
        cout<<(*it)<<" ";
    }

}
int main(){
    set<string>s;
    s.insert("anc");
    s.insert("ram");
    s.insert("kumar");
    s.insert("Ganga");
    auto it = s.find("abc");
    print(s);
}