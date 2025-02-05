#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> num;
    for (int i = 0; i < nums1.size(); i++)
    {
        int max = -1;
        for (int j = 0; j < nums2.size(); j++)
        {
            int index = j;
            if (nums1[i] == nums2[j])
            {
                while (index != nums2.size())
                {
                    if (nums2[index] > nums1[i])
                    {
                        max = nums2[index];
                        break;
                    }
                    index++;
                }
            }
        }
        num.push_back(max);
    }
    return num;
}
int main()
{
    vector<int> arr1 = {4, 1, 2};
    vector<int> arr2 = {1, 3, 4, 2};
    vector<int> ans = nextGreaterElement(arr1, arr2);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}