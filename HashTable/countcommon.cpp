#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countCommonUniqueStrings(vector<string> &words1, vector<string> &words2)
{
    unordered_map<string, int> freq1, freq2;

    // Count the frequency of each string in words1
    for (const string &word : words1)
    {
        freq1[word]++;
    }

    // Count the frequency of each string in words2
    for (const string &word : words2)
    {
        freq2[word]++;
    }

    int count = 0;

    // Iterate over freq1 to find strings that appear exactly once in both arrays
    for (const auto &pair : freq1)
    {
        const string &word = pair.first;
        if (pair.second == 1 && freq2[word] == 1)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    vector<string> words1 = {"apple", "banana", "orange", "apple"};
    vector<string> words2 = {"banana", "orange", "grape", "orange"};

    int result = countCommonUniqueStrings(words1, words2);
    cout << "Number of strings that appear exactly once in each array: " << result << endl;

    return 0;
}
