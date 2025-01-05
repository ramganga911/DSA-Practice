#include <iostream>
#include <string>

using namespace std;

// Helper function to expand around the center
int expandAroundCenter(const string &s, int left, int right)
{
    while (left >= 0 && right < s.length() && s[left] == s[right])
    {
        left--;
        right++;
    }
    return right - left - 1; // Length of the palindrome
}

string longestPalindrome(string s)
{
    if (s.empty())
        return "";

    int start = 0, end = 0;
    for (int i = 0; i < s.length(); i++)
    {
        // Check for odd-length palindromes centered at i
        int len1 = expandAroundCenter(s, i, i);
        // Check for even-length palindromes centered at i and i+1
        int len2 = expandAroundCenter(s, i, i + 1);

        // Take the maximum length of palindrome found
        int len = max(len1, len2);

        // Update the start and end indices if a longer palindrome is found
        if (len > end - start)
        {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    // Extract the longest palindrome substring using the start and end indices
    return s.substr(start, end - start + 1);
}

int main()
{
    string s = "babad";
    string result = longestPalindrome(s);
    cout << "Longest palindromic substring: " << result << endl;
    return 0;
}
