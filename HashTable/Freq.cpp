#include<bits/stdc++.h>
using namespace std;
int countGoodStrings(vector<string> &words, string chars)
{
    unordered_map<char,int> countChar;
    int totalLength =0;
    for(char ch: chars){
        countChar[ch]++;
    }
    for(string word: words){
        unordered_map<char, int> freqChar;
        bool isGood = true;
        for(char ch: word){
            freqChar[ch]++;
            if (freqChar[ch] > countChar[ch]){
                isGood = false;
                break;
            }
        }
        if(isGood){
            totalLength+= word.length();
        }
    }
    return totalLength;
}
int main()
{
    vector<string> words = {"cat", "bt", "hat", "tree"};
    string chars = "atach";

    int result = countGoodStrings(words, chars);
    cout << "The sum of lengths of all good strings is: " << result << endl;

    return 0;
}