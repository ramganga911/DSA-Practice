#include <bits/stdc++.h>
using namespace std;
// bool areAnagram(string &s1, string &s2)
// {
//     sort(s1.begin(), s1.end());
//     sort(s2.begin(), s2.end());
//     return s1 == s2;
// }
bool areAnagram(string &s1, string &s2)
{
    unordered_map<char, int> charCount;
    for (char ch : s1)
    {
        charCount[ch]++;
    }
    for (char ch : s2)
    {
        charCount[ch]--;
    }
    for (auto &pair : charCount)
    {
        if (pair.second != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1 = "geeks";
    string s2 = "kseeg";
    cout << (areAnagram(s1, s2) ? "true" : "false") << endl;
    return 0;
}