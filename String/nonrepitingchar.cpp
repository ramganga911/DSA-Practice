#include <bits/stdc++.h>
using namespace std;
// char nonRepitingChar(string &str)
// {
//     int n = str.size();
//     for (int i = 0; i < n; i++)
//     {
//         bool found = false;
//         for (int j = 0; j < n; j++)
//         {
//             if (i != j && str[i] == str[j])
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (found == false)
//         {
//             return str[i];
//         }
//     }
//     return '$';
// }
const int MAX_CHAR = 26;
char nonRepitingChar(string &str)
{
    vector<int> freq(MAX_CHAR, 0);
    for (char c : str)
    {
        freq[c - 'a']++;
    }
    // find the first charactor with freq 1
    for (int i = 0; i < str.size(); i++)
    {
        if (freq[str[i] - 'a'] == 1)
        {
            return str[i];
        }
    }
    return '$';
}
int main()
{
    string str = "racecar";
    cout << nonRepitingChar(str);
    return 0;
}