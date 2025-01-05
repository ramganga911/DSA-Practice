#include<bits/stdc++.h>
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
Node* reverse(Node*head){
    if(head==NULL || head->next == NULL) return head;
    Node* curr = head;
    Node* prev = NULL;
    Node* ford = head;
    while(curr->next!= NULL){
        ford = curr->next;
        curr->next = prev;
        prev = curr;
        curr = ford;
    }
    curr->next = prev;
    return curr;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    Node* temp = reverse(head);
    while(temp){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    return 0;
}