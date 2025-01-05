#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello World";
    int n = str.size();
    // reverse(str.begin(), str.end());
    // for(int i=0; i<n/2; i++){
    //     swap(str[i], str[n-i-1]);
    // }
    // int l=0,r=n-1;
    // while(l<r){
    //     swap(str[l],str[r]);
    //     l++;
    //     r--;
    // }
    cout << "Reversed string: " << str << endl;
    return 0;
}