#include<bits/stdc++.h>
using namespace std;
string minWindow(string s, string t)
{
    int n = s.size();
    if (t.size() > n)
        return "";
    unordered_map<char, int> table;
    for (char c : t)
    {
        table[c]++;
    }

    int start = 0, end = 0;
    int window_size = INT_MAX;
    int counter = table.size();
    int minStart = 0;

    while (end < n)
    {
        char endChar = s[end];
        if (table.find(endChar) != table.end())
        {
            table[endChar]--;
            if (table[endChar] == 0)
            {
                counter--;
            }
        }
        end++;

        while (counter == 0)
        {
            if (end - start < window_size)
            {
                window_size = end - start;
                minStart = start;
            }
            char startChar = s[start];
            if (table.find(startChar) != table.end())
            {
                table[startChar]++;
                if (table[startChar] > 0)
                    counter++;
            }
            start++;
        }
    }
    return (window_size == INT_MAX) ? "" : s.substr(minStart, window_size);
}
int main(){
    string s ="ADOBECODEBANC";
    string t ="ABC";
    //OUTPUT "BANC";
    cout << minWindow(s, t);
    return 0;
}