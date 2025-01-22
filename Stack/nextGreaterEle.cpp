#include<bits/stdc++.h>
using namespace std;
// Function to find the next greater element for each element of the array.
vector<int> nextLargerElement(vector<int> &arr)
{
    // code here
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        // Pop elements from stack that are less than or equal to the current element
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        // If stack is not empty, the top is the next greater element
        if (!st.empty())
        {
            ans[i] = st.top();
        }
        // Push the current element into the stack
        st.push(arr[i]);
    }
    return ans;
}
int main(){
    vector<int> arr = {1,3,2,4};
    vector<int> ans = nextGreaterEle(arr);
    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;
}