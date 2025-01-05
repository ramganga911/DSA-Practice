#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertATHead(Node* &head, int val){
    Node* n = new Node(val);
    n-> next = head;
    head = n;

}
void deleteATHead(Node* &head){
    Node*todelete = head;
    head = head -> next;
    delete todelete;
}
void deletion(Node* &head, int val){
    if (head == NULL){
        return;
    }
    if (head -> next == NULL){
        deleteATHead(head);
    }
    
    Node *temp = head;
    while (temp ->next ->data != val){
        temp = temp ->next;

    }
    Node*todelete = temp ->next; 
    temp -> next = temp -> next->next;
    delete todelete;
    
}
void insertATTail(Node* &head, int val){
    Node* n = new Node(val);
    if (head == NULL){
        head = n;
        return;
    }
    
    Node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp -> next = n;
}
Node* reverse(Node* &head){
    Node*preptr = NULL;
    Node*currptr = head;
    Node*nextptr;
    while (currptr!= NULL){
        nextptr = currptr-> next;
        currptr ->next = preptr;
        preptr = currptr;
        currptr = nextptr;
    }
    return preptr;  

}
Node* reversek(Node* &head,int k){
    Node*preptr = NULL;
    Node*currptr = head;
    Node*nextptr;
    int count = 0;
    while (currptr!= NULL && count <k)
    {
        nextptr = currptr->next;
        currptr->next = preptr;
        preptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next= reversek(nextptr,k);
    }
    return preptr;
    
}
// Node* reverseRecursive(Node* &head){
//     if(head == NULL || head -> next == NULL){
//         return head;
//     }
//     Node* newhead = reverseRecursive(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return newhead;
// }
bool search(Node* head,int key){
    Node*temp= head;
    while (temp != NULL){
        if (temp->data == key){
            return true;
        }
        temp = temp -> next;
    }
    return false;
    
}
void display(Node* head){
    Node* temp = head;
    while (temp!= NULL){
        cout << temp-> data <<"->";
        temp = temp->next;
    }
    cout << "NULL" <<endl;
    
}
int main(){
    Node* head = NULL;
    insertATTail(head,1);
    insertATTail(head,2);
    insertATTail(head,3);
    insertATTail(head,4);
    insertATTail(head,5);
    insertATTail(head,6);
    display(head);
    // search(head,5);
    // deletion(head,3);
    // display(head);
    // deleteATHead(head);
    // display(head);
    // Node* newhead = reverse(head);
    // display(newhead);
    // Node* newHead = reverseRecursive(head);
    // display(newHead);
    int k = 2;
    Node* newhead = reversek(head,k);
    display(newhead);



    return 0;
}