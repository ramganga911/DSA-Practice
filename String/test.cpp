#include<bits/stdc++.h>
using namespace std;
string fun(string &s){
    int n = s.size();
    for(int i=0; i<n; i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A'&&s[i]<='Z')){
            if(i==0 || i==n-1) return "false";
            if(s[i-1] =='+' && s[i+1]=='+') return "True";
        }
    }
    return "false";

}

int main(){
    string str="+d+=3=+s+";
    cout<< fun(str);
    
    return 0;
}