#include <bits/stdc++.h>
using namespace std;
bool linearSearch(vector<int> &arr, int x)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int x = 4;
    if (linearSearch(arr, x))
    {
        cout << "Present h\n";
    }
    else
    {
        cout << "Present nhi h\n";
    }
    return 0;
}