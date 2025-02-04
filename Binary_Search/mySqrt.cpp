#include<bits/stdc++.h>
using namespace std;
int mySqrt(int x)
{
    if (x == 0 || x == 1)
    {
        return x;
    }
    int left = 1, right = x, result = 0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (mid <= x / mid)
        {
            result = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return result;
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int ans = mySqrt(n);
    cout << "Square root of " << n << " is: " << ans;
    return 0;
}