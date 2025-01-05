#include<iostream>
#define SIZE 5
int A[SIZE];
using namespace std;

int front = -1;
int rear = -1;


bool isempty(){
    if (front== -1 && rear == -1)
    return true;
    else{
        return false;
    }
}
void enqueue(int value){
    if(rear == SIZE-1){
        cout << "Queue is full"<<endl;
    }
    else{
        if(front == -1){
            front = 0;
            rear++;
            A[rear]= value;
        }
    }
}
void dequeue(){
    if(isempty())
    cout << "Queue is empty "<<endl;
    if(front == rear){
        front = rear = -1;
    }
    else
    front++;
}
void showfront(){
    if(isempty())
    cout << "Queue is empty"<<endl;
    else
    cout <<"element at front is :"<<A[front];
}
void displayQueue(){
    if(isempty())
    cout << "queqe is empty"<<endl;
    else{
        for(int i = front; i<= rear; i++){
            cout << A[i]<<" ";
        }
    }
}




int main(){
    enqueue(2);
    enqueue(3);
    displayQueue();
    dequeue();
    showfront();

    return 0;
}
