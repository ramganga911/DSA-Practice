#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};
void insertATHead(node* &head, int val){
    node* n= new node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    
    node* temp = head;
    while (temp ->next != head){
        temp= temp->next;
    }
    temp-> next = n;
    n->next = head;
    head = n;

}
void insertATTail(node* &head, int val){
    if (head == NULL)
    {
        insertATHead(head,val);
        return;
    }
    
    node* n= new node(val);
    node* temp = head;
    while (temp ->next != head){
        temp= temp->next;
    }
    temp-> next = n;
    n->next = head;
    
}
void deleteATHead(node* &head){
    node* temp = head;
    while (temp ->next != head)
    {
        temp = temp->next;
    }
    node*todelete= head;
    temp ->next = temp ->next->next;
    head = head->next;
    delete todelete;
    
}
void deletion(node* &head,int pos){
    if (pos == 1)
    {
        deleteATHead(head);
        return;
    }
    
    node* temp= head;
    int count = 1;
    while (count != pos-1){
        temp = temp-> next;
        count++;
    }
    node* todelete = temp ->next;
    temp ->next= temp ->next->next;
    delete todelete;
    
}
void display(node* head){
    node* temp = head;
    
    do{
        cout << temp-> data << "->";
        temp = temp->next;
    }while (temp != head);
    cout << "NULL" << endl;
}
int main(){
    node* head =NULL;
    insertATHead(head,1);
    insertATTail(head,2);
    insertATTail(head,3);
    insertATTail(head,4);
    insertATTail(head,5);
    display(head);
    deletion(head,1);
    display(head);

    return 0;
}