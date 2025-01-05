#include<iostream>
using namespace std;

class Node{
    public:
    Node* head;
    int data;
    Node* next;
    
    Node(int data1, Node* next1){
        data = data1;
        next= next1;
    }
};
Node* traversal(Node*head){
    Node*temp = head;
    while (temp->next!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return head;
    
}
Node* lengthLL(Node* head){
    Node* temp= head;
    int cnt=0;
    while(temp!= NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

Node* removeTail(Node* head){
    Node* temp = head;
    if(head == NULL || head-next== NULL) return head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next= nullptr;
    
}
Node* convertarrtoLL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}


int main(){
    vector<int> arr = {2,3,4,5,7}
    return 0;
}
