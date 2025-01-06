#include<bits/stdc++.h>
using namespace std;

    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        // Hash map to store sorted string as key and list of anagrams as value
        unordered_map<string, vector<string>> anagramMap;

        // Iterate through each string in the input
        for (string &str : strs)
        {
            // Sort the string to create a key
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());

            // Store the original string in the map under the sorted key
            anagramMap[sortedStr].push_back(str);
        }

        // Prepare the result from the hash map
        vector<vector<string>> result;
        for (auto &entry : anagramMap)
        {
            result.push_back(entry.second);
        }

        return result;
    }


int main(){
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(strs);
    for(int i=0; i<result.size(); i++){
        for(string st:result[i]){
            cout<< st<<" ";
        }
    }
    return 0;
}