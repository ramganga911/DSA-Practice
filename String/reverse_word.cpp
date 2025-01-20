#include<bits/stdc++.h>
using namespace std;
string reverseWords(string &s)
{
    // code here
    int n = s.size();
    string result = "";
    string word = "";
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
    {
        if (!result.empty())
            result = " " + result;
        result = word + result;
    }
    return result;
}
int main(){
    string s = "i like this program very much";
    cout << reverseWords(s) << endl;
    return 0;
}