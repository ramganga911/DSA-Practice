
#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    
}
void printchar(char ch[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << ch[i] <<" ";
    }
    
}
int maxele(int arr[],int n){
    int maxelement = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>maxelement)
        {
            maxelement = arr[i];
        
        }
    }
    return maxelement;
    
}
int minele(int arr[],int n){
    int minelement = INT8_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]< minelement)
        {
            minelement = arr[i];
        
        }   
    }
    return minelement;
    
}

int sum(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
    
}
int main(){
    int arr[5]= {1,2,3,4,5};
    print(arr,5);

    char ch[5] = {'a','b','c','d','f'};
    printchar(ch,5);

    cout<<"Maximum Value is "<<maxele(arr,5)<<endl;
    
    cout<<"Maximum Value is "<<minele(arr,5)<<endl;

    cout<<"sum is "<<sum(arr,5)<<endl;

    return 0;

}