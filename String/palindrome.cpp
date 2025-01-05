#include <bits/stdc++.h>
using namespace std;
bool isPalin(string &s)
{
    int i = 0, r = s.size() - 1;
    while (i < r)
    {
        if (s[i] != s[r])
        {
            return false;
        }
        i++;
        r--;
    }
    return true;
}
int main()
{
    string str = "madam";
    if (isPalin(str))
    {
        cout << "PalinStrig\n";
    }
    else
    {
        cout << "NotPalin\n";
    }
    return 0;
}