#include <bits/stdc++.h>
using namespace std;

// Custom comparator for sorting
struct myCompare
{
    bool operator()(pair<int, int> &a, pair<int, int> &b)
    {
        if (a.first == b.first)
        {
            return a.second < b.second; // If frequencies are equal, sort by the element value (ascending)
        }
        return a.first > b.first; // Otherwise, sort by frequency (descending)
    }
};

// Function to sort the array by frequency and then by value
vector<int> sortArray(vector<int> &arr)
{
    unordered_map<int, int> mp;

    // Count the frequency of each element
    for (int &num : arr)
    {
        mp[num]++;
    }

    // Store pairs of (frequency, element) for sorting
    vector<pair<int, int>> vec;
    for (auto &it : mp)
    {
        vec.push_back({it.second, it.first});
    }

    // Sort using the custom comparator
    sort(vec.begin(), vec.end(), myCompare());

    // Create the result array based on sorted frequencies
    vector<int> ans;
    for (auto &it : vec)
    {
        int freq = it.first;
        int ele = it.second;
        for (int i = 0; i < freq; i++)
        {
            ans.push_back(ele);
        }
    }
    return ans;
}

int main()
{
    int T;
    cin >> T; // Read number of test cases
    while (T--)
    {
        int N;
        cin >> N; // Read size of array
        vector<int> arr(N);

        // Read elements of the array
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        // Sort the array according to frequency and value
        vector<int> result = sortArray(arr);

        // Print the sorted array
        for (int num : result)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
