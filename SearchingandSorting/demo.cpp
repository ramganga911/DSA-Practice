#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> finalPrices(vector<int> &prices)
    {
        int n = prices.size();
        vector<int>right(n,-1);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && prices[st.top()]>=prices[i]){
                right[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(right[i]!=-1){
                ans.push_back(prices[i]-prices[right[i]]);

            }else{
                ans.push_back(prices[i]);
            }

        }
        return ans;
    }
};

int main(){
    
    return 0;
}