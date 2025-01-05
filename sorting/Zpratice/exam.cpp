#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarrayDivByK(vector<int> &exp, int k)
{
    unordered_map<int, int> remMap;
    remMap[0] = -1;
    int maxLen = 0;
    int prefixSum = 0;
    int n = exp.size();
    for (int i = 0; i < n; i++)
    {
        prefixSum += exp[i];
        int remainder = prefixSum % k;
        if (remainder < 0)
            remainder += k;

        if (remMap.find(remainder) != remMap.end())
        {
            int length = i - remMap[remainder];
            maxLen = max(maxLen, length);
        }
        else
        {
            remMap[remainder] = i;
        }
    }

    return maxLen;
}

int main()
{
    vector<int> exp1 = {20, 70, 60, 10, 40, 50};
    int k1 = 30;
    cout << "Output 1: " << longestSubarrayDivByK(exp1, k1) << endl;

    vector<int> exp2 = {40, 50, 0, -20, -30, 10};
    int k2 = 50;
    cout << "Output 2: " << longestSubarrayDivByK(exp2, k2) << endl;

    return 0;
}
