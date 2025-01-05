#include<iostream>
using namespace std;

void update1(int &n){
    n++;
}
void update2(int n){
    n++;
} 

int main(){
    int n = 5;

    cout <<"Before function call value of n " << n << endl;
    update1(n);
    cout <<"After function call value of n " << n << endl;

    
    return 0;
}