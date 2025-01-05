#include<iostream>

using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node*prev;

    Node(int d){
       this->data = d;
       this->next = NULL;
       this->prev =NULL;
    }
    ~Node(){
        int val = this -> data;
        if (next!= NULL)
        {
            delete next;
            next = NULL;
        }
        cout << " Memory free for node with data "<< val << endl;
    }

};

void Print(Node*head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp -> data <<" ";
        temp = temp->next;
    }
    cout <<endl;
}
int getlen(Node*head){
    int len = 0;
    Node*temp = head;
    while(temp!= NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node* &head,int d){
    Node*temp = new Node(d);
    temp ->next = head;
    head -> prev = temp;
    head = temp; 
}
void insertAttail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
void insertAtpos(Node* &tail, Node* &head, int pos,int d){

    if(pos == 1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos-1){
        temp = temp -> next;
        cnt++;

    }
    if (temp -> next == NULL){
        insertAttail(tail,d);
        return;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert-> next = temp ->next;
    temp ->next-> prev = nodetoinsert;
    temp -> next = nodetoinsert;
    nodetoinsert->prev = temp;
}
void deleteNode(int pos, Node* &head){
    if(pos == 1){
        Node* temp = head;
        temp ->next -> prev = NULL;
        head = temp ->next;
        temp ->next =NULL;
        delete temp;

    }
    else
    {
        Node* curr = head;
        Node* prev =NULL;
        int cnt =1;
        while(cnt < pos){
            prev = curr;
            curr = curr-> next;
            cnt++;
        }
        curr -> prev = NULL;
        prev-> next = curr->next;
        curr ->next = NULL;
        delete curr;
    }
    

}


int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    Print(head);
    insertAtHead(head,12); 
    Print(head);
    insertAtHead(head,13); 
    cout << getlen(head) << endl;
    Print(head);
    insertAtHead(head,14); 
    cout << getlen(head) << endl;
    Print(head);
    insertAttail(tail,15);
    Print(head);
    insertAtpos(tail,head,3,17);
    Print(head);
    insertAtpos(tail,head,1,29);
    Print(head);
    insertAtpos(tail,head,8,80);
    Print(head);
    deleteNode(2,head);
    Print(head);  

    return 0;
}