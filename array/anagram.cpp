#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1, string s2){
    if(s1.length()!= s2.length()) return false;
    int charCount[256];
    for(char ch : s1){
        charCount[ch]++;
    }
    for(char ch : s2){
        charCount[ch]--;
        if(charCount[ch]<0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1 = "Ramganga";
    string s2 = "gangaRam";
    if(isAnagram(s1,s2)){
        cout << "Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}