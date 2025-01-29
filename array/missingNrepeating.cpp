#include<bits/stdc++.h>
using namespace std;
void missingNrepeating(vector<int>& arr){ //time complexity O(n) and space complexity O(n)
    int n =arr.size();
    int num[n+1]={0};
    for(int i=0; i<n; i++){
        num[arr[i]]++;
    }
    int mis =-1, rep=-1;
    for(int i=1; i<=n;i++){
        if(num[i]==0){
            mis=i;
        }else if(num[i]==2){
            rep=i;
        }
        if(mis!=-1 && rep!=-1){
            break;
        }
    }
    cout << "Missing number: " << mis << " Repeating number: " << rep;

}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3};
    missingNrepeating(arr);
    return 0;
}