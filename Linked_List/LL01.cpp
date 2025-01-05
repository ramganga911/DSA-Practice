#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this ->data = data;
        this -> next = NULL;
    }
};
void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;

}

void insertAttail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail ->next;
}

void insertAtpos(Node* &head, int pos, int d){
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos -1){
        temp = temp->next;
        cnt++;
    }
    Node*nodeToInsert = new Node(14);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void Print(Node* &head){
    Node*temp = head;
    while(temp!= NULL){
        cout << temp->data << " " ;
        temp = temp ->next; 
    }
}

int main(){
    Node*Node1 = new Node(10);
    // cout << Node1-> next << endl;
    // cout << Node1->data <<endl;

    Node* head = Node1;
    Node* tail = Node1;
    // Print(head);
    // insertAtHead(head,12);
    // insertAtHead(head,13);
    insertAttail(tail,12);
    insertAttail(tail,13);
    Print(head);
    insertAtpos(head,2,18);
    Print(head);


    return 0;
}