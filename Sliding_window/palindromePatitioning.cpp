#include <bits/stdc++.h>
using namespace std;
int expandAroundCenter(string s, int left, int right)
{
    int n = s.size();
    while (left >= 0 && right < n && s[left] == s[right])
    {
        left--;
        right++;
    }
    return right - left - 1;
}
string longestPalindromeSubstring(string s)
{
    if (s.size() == 0)
        return "";
    int n = s.size();
    int start = 0, maxLen = 1;
    for (int i = 0; i < n; i++)
    {
        int len1 = expandAroundCenter(s, i, i);
        int len2 = expandAroundCenter(s, i, i + 1);
        int len = max(len1, len2);
        if (len > maxLen)
        {
            maxLen = len;
            start = i - (len - 1) / 2;
        }
    }
    return s.substr(start, maxLen);
}
int main()
{
    string s = "babad";
    string ans = longestPalindromeSubstring(s);
    cout << ans;
    return 0;
}