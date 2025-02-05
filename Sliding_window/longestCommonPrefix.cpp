#include<bits/stdc++.h>
using namespace std;
string findCommonPrefix(vector<string> &strs)
{
    string check = "";
    int len = INT_MAX;
    int n = strs.size();

    for (int i = 0; i < n; i++)
    {
        if (len > strs[i].length())
        {
            len = strs[i].length();
            check = strs[i];
        }
    }
    string prefix = "";
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (check[i] != strs[j][i])
                return prefix;
        }
        prefix += check[i];
    }
    return prefix;
}
int main(){
    vector<string> strs = {"flower","flow","flight"};
    string ans = findCommonPrefix(strs);
    cout << "Longest common prefix: " << ans;
    return 0;
}