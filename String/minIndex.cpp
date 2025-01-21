#include<bits/stdc++.h>
using namespace std;
// Function to find the minimum indexed character.
int minIndexChar(string &s1, string &s2)
{
    // Your code here
    unordered_map<char, int> minIndexChar;
    int n = s1.size();
    int m = s2.size();
    for (int i = 0; i < n; i++)
    {
        if (minIndexChar.find(s1[i]) == minIndexChar.end())
        {
            minIndexChar[s1[i]] = i;
        }
    }
    int minIndex = INT_MAX;
    for (int j = 0; j < m; j++)
    {
        if (minIndexChar.find(s2[j]) != minIndexChar.end())
        {
            minIndex = min(minIndex, minIndexChar[s2[j]]);
        }
    }
    return (minIndex == INT_MAX) ? -1 : minIndex;
}
int main(){
    string s1 = "geeksforgeeks";
    string s2 = "set";
    int ans = minIndexChar(s1, s2);
    cout << ans << endl;
    return 0;
}