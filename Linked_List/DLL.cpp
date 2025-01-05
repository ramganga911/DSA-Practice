#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertATHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    if (head != NULL){
        head->prev = n;
    }
    head = n;
}
void insertATTail(node* &head,int val){
    if (head == NULL){
        insertATHead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;    
}
void deletionATHead(node* &head){
    node* todelete= head;
    head = head->next;
    head->prev = NULL;

    delete todelete;

}
void deletion(node* &head, int pos){
    node* temp = head;
    int count = 1;
    if (pos == 1)
    {
        deletionATHead(head);
        return;
    }
    
    while (temp!= NULL && count != pos){
        temp = temp -> next;
        count++;
    }

    temp->prev->next = temp->next;
    if (temp ->next != NULL){
      temp->next->prev = temp->prev;  
    }
    
    delete temp;
    
}
void display(node*head){
    node*temp = head;
    while (temp != NULL){
        cout << temp-> data <<"<->";
        temp = temp->next;  
    }
    cout<< "NULL" <<endl;  
}
int main(){
    node*head= NULL;
    insertATTail(head,1);
    insertATTail(head,2);
    insertATTail(head,3);
    insertATTail(head,4);
    insertATTail(head,5);
    insertATTail(head,6);
    insertATTail(head,7);
    insertATTail(head,8);
    display(head);
    deletion(head,4);
    display(head);
    deletionATHead(head);
    display(head);


    return 0;
}