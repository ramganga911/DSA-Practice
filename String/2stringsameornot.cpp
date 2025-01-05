#include <bits/stdc++.h>
using namespace std;
bool checkSequence(string s1, string s2)
{
    if (s2.size() == 0)
    {
        return true;
    }
    if (s1.size() == 0)
    {
        return false;
    }
    if (s1[0] == s2[0])
    {
        return checkSequence(s1.substr(1), s2.substr(1));
    }
    else
    {
        return checkSequence(s1.substr(1), s2);
    }
}
int main()
{
    string s1 = "Geeks", s2 = "Geks";
    if (checkSequence(s1, s2))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}