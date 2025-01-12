#include <bits/stdc++.h>
using namespace std;
string reverseWord(string &s)
{
    int n = s.size();
    string result = "", word = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            if (!word.empty())
            {
                if (!result.empty())
                    result = " " + result;
                result = word + result;
                word = "";
            }
        }
        else
        {
            word += s[i];
        }
    }
    if (!word.empty())
    { // for last word
        if (!result.empty())
            result = " " + result;
        result = word + result;
    }
    return result;
}
int main()
{
    string s = "i like this program very much";
    string ans = reverseWord(s);
    cout << s << endl;
    cout << ans;
    return 0;
}