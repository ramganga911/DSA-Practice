#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr)
{
    //method 1
    // int n = arr.size();
    // // Floyd's Tortoise and Hare (Cycle Detection) // Time complexity O(n) and space complexity O(1)
    // int slow = arr[0];
    // int fast = arr[0];
    // do
    // {
    //     slow = arr[slow];
    //     fast = arr[arr[fast]];
    // } while (slow != fast);
    // slow = arr[0];
    // while (slow != fast)
    // {
    //     slow = arr[slow];
    //     fast = arr[fast];
    // }
    // return slow;
    //method 2
    // sort(arr.begin(), arr.end()); // Time complexity O(nlogn) and space complexity O(1)
    // for(int i=0; i<arr.size(); i++){
    //     if(arr[i]==arr[i-1]) return arr[i];
    // }
    // return -1;
    //method 3
    unordered_set<int>s; // Time complexity O(n) and space complexity O(n)
    for(int num: arr){
        if(s.find(num)!=s.end()){
            return num;
        }
        s.insert(num);
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3};
    int ans = findDuplicate(arr);
    cout <<  ans;
    return 0;
}