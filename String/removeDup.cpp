#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeDups(string &s)
    {
        int n = s.size();
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            int j;
            for (j = 0; j < i; j++)
            {
                if (s[i] == s[j])
                {
                    break;
                }
            }
            if (j == i)
            {
                s[index++] = s[i];
            }
        }
        s.resize(index);
        return s;
    }
};
int main(){
    Solution obj;   
    string s = "geeksforgeeks";
    cout << obj.removeDups(s) << endl;
    return 0;
}
