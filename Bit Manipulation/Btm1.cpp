#include<bits/stdc++.h>
using namespace std;
void reverse(string str){
    int l=0, r= str.size()-1;
    while(l<r){
        int temp = str[l];
        str[l]= str[r];
        str[r]=temp;
    }
}
string convert2binary (int x){
    string res = "";
    while(x!=1){
        if(x%2==1) res+= '1';
        else res+= '0';
        x=x/2;
    }
    reverse(res);
    return res;
}
int convert2decimal(string x){
    int len = x.length();
    int num =0;
    int p2=1;

    for(int i = len-1; i>=0; i--){
        if(x[i] ==1){
            num = num+p2;
        }
        p2 = p2*2;
    }
    return num;
}
int main()
{
    // int x ;
    // cout<< "Enter no : ";
    // cin>>x;
    // cout << convert2binary(x);

    string str ="11";
    cout << convert2decimal(str);

    return 0;
}