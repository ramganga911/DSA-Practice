#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int removeDuplicate(vector<int> &v){
        int n = v.size();
        int i=0, j=1;
        while(j<n){
            if(v[i]!=v[j]){
                i++;
                v[i]= v[j];
            }
            j++;
        }
        return i+1;
    }

};
int main(){
    vector<int> v = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    Solution s;
    cout << s.removeDuplicate(v);
    return 0;
}