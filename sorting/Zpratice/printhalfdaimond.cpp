#include<bits/stdc++.h>
using namespace std;
void printdimond(int r){
    r = r/2;
    int count = r;

    // loop to upper half
    for(int i=0; i<r; i++){
        for(int j=r; j>i; j--){
            if(j!=r){
                cout <<"*" << count;
            }else{
                cout << count;
            }
        }
        count--;
        cout <<endl;
    }
    // loop to print lower half pattern
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j != 0)
            {
                cout << "*" << count;
            }
            else
            {
                cout << count;
            }
        }
        count++;
        cout << endl;
    }
}
int main(){
    int n= 6;
    printdimond(n);
    return 0;
}