#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans ^ i;
    }
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}
int main(){
    vector<int> nums = {3,0,1};
    cout << missingNumber(nums) << endl;
    return 0;
}