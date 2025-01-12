#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    string check = "";
    int len = INT_MAX;
    for (auto x : strs)
    {
        len = min(len, (int)x.size());
        check = x;
    }
    string prefix = "";
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < strs.size(); j++)
        {
            if (check[i] != strs[j][i])
            { // if the character at ith index of check is not equal to the character at ith index of strs[j]
                return prefix;
            }
        }
        prefix += check[i];
    }
    return prefix;
}
int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs);

    return 0;
}