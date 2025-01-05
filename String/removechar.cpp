#include<bits/stdc++.h>
using namespace std;
string newString(string&string1, string&string2){
    for(auto i: string2){
        while(find(string1.begin(),string1.end(),i)!= string1.end()){
            auto itr = find(string1.begin(), string1.end(),i);
            string1.erase(itr);
        }
    }
    return string1;
}
int main(){
    string s1 = "occurrence" ;
    string s2 = "car";
    cout << newString(s1,s2);
    return 0;
}