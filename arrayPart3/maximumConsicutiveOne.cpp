#include <bits/stdc++.h>
using namespace std;
int findMaximumConsecutiveOne(int arr[], int n)
{
    int count = 0;
    int maxCount =0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
            maxCount = max(maxCount, count);
        }else{
            count =0;
        }
    }
    return maxCount;
}
int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = findMaximumConsecutiveOne(arr, n);
    cout << "Maximum consecutive ones: " << ans;
    return 0;
}