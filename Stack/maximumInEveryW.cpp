#include<bits/stdc++.h>
using namespace std;
#include <deque>
#include <vector>
using namespace std;

vector<int> maxOfSubarrays(vector<int> &arr, int k)
{
    vector<int> ans;
    deque<int> dq; // Stores indices of useful elements in current window

    for (int i = 0; i < arr.size(); i++)
    {
        // Remove elements that are out of the current window
        if (!dq.empty() && dq.front() == i - k)
        {
            dq.pop_front(); // Remove from front
        }

        // Remove elements from the deque that are smaller than the current element
        while (!dq.empty() && arr[dq.back()] <= arr[i])
        {
            dq.pop_back(); // Remove from back
        }

        // Add the current element's index to the deque
        dq.push_back(i); // Add to back

        // If the window size is at least k, add the maximum element (front of the deque) to the result
        if (i >= k - 1)
        {
            ans.push_back(arr[dq.front()]);
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int k = 3;
    vector<int> ans = maxOfSubarrays(arr, k);
    for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}