#include<bits/stdc++.h>
using namespace std;
int maximumProduct(vector<int> &arr){ //Time complexity: O(n)
    int n = arr.size();
    long long ans = 0;
    long long leftProd =1;
    long long rightProd = 1;
    for(int i=0; i<n; i++){
        leftProd = (leftProd==0)?1:leftProd; // if leftProd is 0 then make it 1
        rightProd = (rightProd==0)?1:rightProd; // if rightProd is 0 then make it 1
        leftProd *= arr[i]; // multiply leftProd with arr[i]
        rightProd *= arr[n-i-1]; // multiply rightProd with arr[n-i-1]
        ans = max(ans, max(leftProd, rightProd)); // find maximum of ans, leftProd and rightProd
    }
    return ans;
}
int main(){
    vector<int> v = {2, 3, -2, 4};
    cout << maximumProduct(v);
    return 0;
}