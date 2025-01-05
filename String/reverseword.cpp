#include <bits/stdc++.h>
using namespace std;
// string reverseWords(string &s){
//     stringstream ss(s);
//     string token ="";
//     string result="";
//     while(ss>>token){
//         result+= token+" "+ result;
//     }
//     return result.substr(0,result.size()-1);
// }
string reverseWords(string &s)
{
    int i = 0, l = 0, r = 0, n = s.size();
    reverse(s.begin(), s.end());
    while (i < n)
    {
        while (i < n && s[i] != ' ')
        {
            s[r] = s[i];
            i++;
            r++;
        }
        if (l < r)
        {
            reverse(s.begin() + l, s.begin() + r);
            s[r] = ' ';
            r++;
            l = r;
        }
        i++;
    }
    s = s.substr(0, r - 1);
    return s;
}
int main()
{
    string str = "i like this program very  much";

    cout << reverseWords(str) << endl;
    return 0;
}