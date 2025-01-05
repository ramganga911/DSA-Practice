#include <bits/stdc++.h>
using namespace std;
// int getSecondlarget(vector<int> &arr)
// {
//     int n = arr.size();
//     sort(arr.begin(),arr.end());
//     for(int i=n-2; i>=0; i--){
//         if(arr[i]!=arr[n-1]){
//             return arr[i];
//         }
//     }
//     return -1;
// }
int getSecondlarget(vector<int> &arr)
{
    int n = arr.size();
    int largest = -1;
    int secondlargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }
    }

    return secondlargest;
}
int main()
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << getSecondlarget(arr);
    return 0;
}