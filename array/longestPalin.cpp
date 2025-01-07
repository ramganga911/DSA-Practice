class Solution
{
public:
    int expandAround(string &s, int left, int right)
    {
        while (left >= 0 && right < s.size() && (s[left] == s[right]))
        {
            left--;
            right++;
        }
        return right - left - 1; // Return the length of the palindrome
    }

    string longestPalindrome(string s)
    {
        if (s.empty())
            return "";
        int n = s.size();
        int maxlen = 1, start = 0;

        for (int i = 0; i < n; i++)
        {
            // len1 for odd length palindromes
            int len1 = expandAround(s, i, i);
            // len2 for even length palindromes
            int len2 = expandAround(s, i, i + 1);

            int len = max(len1, len2);
            if (len > maxlen)
            {
                maxlen = len;
                start = i - (len - 1) / 2;
            }
        }

        return s.substr(start, maxlen);
    }
};
