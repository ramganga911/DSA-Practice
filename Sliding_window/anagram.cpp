#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagram(string s, string p, vector<int> &ans)
{
    if (s.size() < p.size() || s.size() == 0)
        return ans; 

    unordered_map<char, int> table;
    for (char c : p)
    {
        table[c]++;
    }

    int begin = 0, end = 0;
    int word_size = p.size();
    int counter = table.size(); // Tracks the number of unique characters that need to match

    while (end < s.size())
    {
        char endChar = s[end];
        if (table.find(endChar) != table.end())
        {
            table[endChar]--;
            if (table[endChar] == 0)
            {
                counter--; // When a character is fully matched
            }
        }
        end++;

        // When all characters in the window match the pattern
        while (counter == 0)
        {
            if (end - begin == word_size)
            {
                ans.push_back(begin); // Record the starting index
            }

            char startChar = s[begin];
            if (table.find(startChar) != table.end())
            {
                table[startChar]++;
                if (table[startChar] > 0)
                {
                    counter++; // If the character count goes above 0, increase the counter
                }
            }
            begin++;
        }
    }

    return ans;
}

int main()
{
    // Find all anagram indices and return them
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> ans;
    findAnagram(s, p, ans);
    for (int it : ans)
    {
        cout << it << " ";
    }
    return 0;
}
