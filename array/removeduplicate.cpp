#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>&arr){
    int n = arr.size();
    int i=0,j=1;
    while(j<n){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
        j++;
    }
    return i+1;
}
int main()
{
    vector<int>arr = {0,0,1,1,1,2,2,3,3,4};
    int ans = removeDuplicates(arr);
    cout << ans << endl;
    return 0;
}