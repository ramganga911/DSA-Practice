#include<iostream>
using namespace std;
#define size 20

template <class T>
class stackArray{
    T *data;
    int top;
    public:
        stackArray(){
            top = -1;
            data = new T [size];
            
        }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull(){
        if (top == size -1)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
    void push(T x){
        if(isFull() == true){
            cout << "Underflow";
            return ;
        }
        data[++top]= x;

    }
    T pop(){
        if(isEmpty()== true){
            cout <<"Underflow ";
            exit(1);
        }
        return data[top--];
    }
    int length(){
        return ++top;
    }

};


int main(){
     
    return 0;
}