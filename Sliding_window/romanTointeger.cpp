#include<bits/stdc++.h>
using namespace std;
// Roman to Integer
int romanToInteger(string s){ // time complexity: O(n) and space complexity: O(1)
    unordered_map<char, int> romanValue = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int n = s.size();
    int total =0;
    for(int i=0; i<n; i++){
        int value = romanValue[s[i]];
        if(i+1<n && value < romanValue[s[i+1]]){
            total-=value;
        }else{
            total+=value;
        }
    }
    return total;
}
int main(){
    string s = "MCMXCIV";
    int ans = romanToInteger(s);
    cout << "Integer value of Roman number: " << ans;
    return 0;
}