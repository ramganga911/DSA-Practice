#include<bits/stdc++.h>
using namespace std;
// Write a function to find the kth largest element in an array
int findKthLargest(vector<int>& arr, int k){
    // Time complexity: O(nlogn)
    // Space complexity: O(n)
    //min heap
    int n = arr.size();
    priority_queue<int, vector<int>, greater<int>>pq;
    for(int i =0; i<k; i++){
        pq.push(arr[i]);
    }
    for(int i=k; i<n; i++){
        if(arr[i]> pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}
int main(){
    vector<int> arr = {3,2,1,5,6,4};
    int k = 2;
    int ans = findKthLargest(arr,k);
    cout << "Kth largest element: " << ans;
    return 0;
}