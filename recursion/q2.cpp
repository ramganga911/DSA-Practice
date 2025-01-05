#include<bits/stdc++.h>
using namespace std;
bool find(int i, string str){
    if(i>=str.size()/2) return true;
    if(str[i]!= str[str.size()-i-1]) return false;
    return find(i+1,str);
}
int main(){
    string str = "aara";
    cout << find(0,str);
    return 0;
}