#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string &str, int i, int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        checkPalindrome(str,i+1,j-1);
    }
}

int main(){
    string name= "ramganga";
    cout << endl;

    bool isPalindrome= checkPalindrome(name, 0, name.size()-1);
    if(isPalindrome){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}