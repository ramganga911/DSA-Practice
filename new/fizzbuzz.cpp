#include<iostream>
using namespace std;

int main(){
    int num;
    cout<< "Enter no " <<endl;
    cin>>num;
    for (int i=0; i<+num; i++) {
        if (i%3==0 && i % 5== 0) {
            cout << "FizzBuzz"<<"\n";
        }
        else if(i%3 ==0){
            cout << "Fizz"<<"\n";
        }
        else if(i%5 == 0){
            cout<< "Buzz"<<"\n";
        }
        else{
            cout <<i <<"\n";
        }
        
    }
}    