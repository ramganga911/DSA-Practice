#include <bits/stdc++.h>
using namespace std;
string reverseStr(string s)
{
    reverse(s.begin(), s.end());

    int n = s.length();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n && s[i] != ' ')
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0)
            ans += " " + word;
    }
    return ans.substr(1);
}
int main()
{
    string str = "Hello Ram   ganga";
    cout << str << endl;
    cout << reverseStr(str);
    return 0;
}