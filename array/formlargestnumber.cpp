#include<bits/stdc++.h>
using namespace std;
string findLargest(vector<int> &arr) {
        // code here
        
        auto myCompare=[](const string&s1, const string&s2){
            return s1+s2 > s2+s1;
        };
        int n = arr.size();
        vector<string> number;
        
        for(int i=0; i<n; i++){
            number.push_back(to_string(arr[i]));
        }
        sort(number.begin(), number.end(), myCompare);
        if(number[0]=="0"){
            return "0";
        }
        string ans = "";
        for(string &s:number){
            ans.append(s);
        }
        return ans;
    }
int main(){
    vector<int> arr={3,30,34,5,9};
    cout<<findLargest(arr);
    return 0;
}