#include<iostream>
using namespace std;

int getMax(int num[], int n){

    int max = 0  ;

    for(int i = 0; i <=n; i++){
        if(num[i] > max){
            max = num[i];
        } 
    }
    return max;
}

int main(){
    int size ;
    cin >> size;

    int num[100];

    for(int i = 0; i<= size; i++){
        cin >> num[i];

    }
    cout << "maximum value is " << getMax(num,size) << endl;
    
    return 0;
}