#include<bits/stdc++.h>
using namespace std;
bool checkRotation(string s1, string s2){
    // return (s1.size() == s2.size()) && (s1 + s1).contains(s2);
    // return (s1.size() == s2.size()) && ((s1 + s1).find(s2) != string::npos);

    if(s1.size()!= s2.size()){
        return false;
    }
    string temp = s1 + s1;
    return (temp.find(s2) != string::npos);
}
int main(){
    string s1 = "ABCD";
    string s2 = "CDAB";
    bool ans = checkRotation(s1,s2);
    cout << ans;
    return 0;
}