#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next = NULL;
    }
};
Node* createLinkedList(int arr[], int idx, int size){
    if(idx == size){
        return NULL;
    }
    Node* temp = new Node(arr[idx]);
    temp->next = createLinkedList(arr,idx+1,size);
    return temp;
}
Node* deletehead(Node*head){
    if(head!= NULL){
        Node*temp = head;
        head = head->next;
        delete temp;
    }
    return head;
}
Node* deleteLastNode(Node*head){
    if(head!= NULL){
        if(head->next!= NULL){
            Node *temp = head;
            delete temp;
            head = NULL; 
        }
    }else{
        Node*curr = head;
        Node*prev = NULL;
        while(curr->next!= NULL){
        prev = curr;
        curr = curr->next;
        }
        delete curr;
        prev->next = NULL;
    }
    return head;
}
Node* deleteNode(Node*head, int x){
    if(head!= NULL){
        if(head->next == NULL){
            Node*temp = head;
            head = head->next;
            delete temp;
        }
        x--;
        Node *curr = head;
        Node *prev = NULL;
        while(x--){
            
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
        return head;
    }
}
int main(){
    Node* head = NULL;
    int arr[] = {1,2,3,4,5,6};
    
    head = createLinkedList(arr,0,6);

   // Node *temp = deletehead(head);
    // Node*temp =deleteLastNode(head);
    Node *temp = deleteNode(head, 3);
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}