#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val(0),next(NULL){}
    ListNode(int val): val(val), next(nullptr){}
    ListNode(int val,ListNode*next): val(val),next(next){}
};
ListNode* sortll(ListNode* head){
    vector<int> arr;
    ListNode* temp = head;
    while(temp!= NULL){
        arr.push_back(temp->val);
        temp = temp->next;
    }
    sort(arr.begin(),arr.end());
    int i=0;
    temp = head;
    while(temp!= NULL){
        temp->val = arr[i];
        i++;
        temp = temp->next;
    }
    return head;
}
void insertNode(ListNode* &head, int val){

    ListNode* newNode = new ListNode(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    ListNode* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = newNode;

}
void printll(ListNode* head){
    ListNode* temp = head;
    while(temp!= NULL){
        cout << temp->val;
        if(temp->next!= NULL){
            cout <<"->";
        }
        temp = temp->next;
    }
    cout <<endl;
}
int main(){
    ListNode* head = NULL;
    insertNode(head,1);
    insertNode(head,3);
    insertNode(head,5);
    insertNode(head,2);
    insertNode(head,4);
    cout << "Before sorting" << endl;
    printll(head);
    ListNode* newHead = sortll(head);
    cout << "After sorting" << endl;
    printll(newHead);
    return 0;
}