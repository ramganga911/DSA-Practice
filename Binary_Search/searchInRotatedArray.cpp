#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &arr, int key)
    {

        int st = 0, end = arr.size() - 1;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[st] <= arr[mid])
            {
                if (arr[st] <= key && key <= arr[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
            else
            {
                if (arr[mid] <= key && key <= arr[end])
                {
                    st = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
int main(){
    vector<int> arr ={4,5,6,7,0,1,2};
    Solution obj;
    cout<<obj.search(arr, 0);
    return 0;
}