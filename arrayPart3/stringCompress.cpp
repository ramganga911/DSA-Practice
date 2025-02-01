#include<bits/stdc++.h>
using namespace std;
string compressString(string s){
    int n = s.size();
    string str="";
    int count =1;
    for(int i=0; i<n; i++){
        if(i+1 < n-1 && s[i]==s[i+1]){
            count++;
        }else{
            str += s[i] + to_string(count);
            count = 1;
        }
    }
    return str.size() < n ? str : s; // if compressed string is smaller than original string then 
                                        //return compressed string else return original string
}
int main(){
    string s = "aaabbbcccddeef";
    string str = compressString(s);
    int n = str.size();
    for(int i=0; i<n; i++){
        cout << str[i];
    }
    return 0;
}