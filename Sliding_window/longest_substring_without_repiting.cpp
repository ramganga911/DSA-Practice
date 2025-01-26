#include <bits/stdc++.h>
using namespace std;
// string longestSubstring(string s){
//     unordered_map<char,int> seen;
//     int len=0;
//     int begin =0, end=0;
//     string ans ="";

//     while(end <s.size()){
//         char current = s[end];
//         if(seen.count(current)==1 && seen[current] >=begin){
//             begin = seen[current]+1;
//         }else{
//             seen[current] = end;
//             end++;
//         }

//         if(end- begin >len){
//             len = end- begin;
//             ans = s.substr(begin, end-begin);
//         }
//     }
//     return ans;
// }

int longestSubstring(string &s)
{
    int n = s.size();
    int start = 0, end = 0, len = 0;
    unordered_set<char> st;

    while (end < n)
    {
        char current = s[end];

        // If current character is already in the set, remove from the start
        while (st.find(current) != st.end())
        {
            st.erase(s[start]);
            start++;
        }

        // Add current character to the set and move the end pointer
        st.insert(current);
        end++;

        // Update the maximum length
        len = max(len, end - start);
    }
    return len;
}
int main()
{
    string str = "abcabcbb";
    int ans = longestSubstring(str);
    cout << ans;
    return 0;
}
