#include<bits/stdc++.h>
using namespace std;
vector<int> calculateSpan(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n); // To store the span of each element
    stack<int> st;      // To store indices of elements

    // Traverse the array from left to right
    for (int i = 0; i < n; i++)
    {
        // Remove elements from the stack that are smaller than or equal to the current element
        while (!st.empty() && arr[st.top()] <= arr[i])
        {
            st.pop();
        }

        // Calculate the span for the current element
        if (st.empty())
        {
            ans[i] = i + 1;
        }
        else
        {
            ans[i] = i - st.top();
        }

        // Push the current index onto the stack
        st.push(i);
    }

    return ans;
}

int main(){
    vector<int> arr={100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = calculateSpan(arr);
    for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}