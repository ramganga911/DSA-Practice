#include <bits/stdc++.h>
using namespace std;
int stockBuySell(vector<int> &prices)
{
    int n = prices.size();
    int BestBuy = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        if (prices[i] > BestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - BestBuy);
        }
        else
        {
            BestBuy = min(BestBuy, prices[i]);
        }
    }
    return maxProfit;
}
int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout << stockBuySell(arr);
    return 0;
}