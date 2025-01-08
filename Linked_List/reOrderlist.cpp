#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    public:
    int val;
    ListNode* next;
    // ListNode(int x){
    //     val = x;
    //     next = NULL;
    // }
    ListNode(int x):val(x),next(NULL){}
};
void reOrderList(ListNode* head){
    if(head==NULL || head->next==NULL){
        return;
    }
    // find the middle of the list
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    // reverse the second half of the list
    ListNode* prev = NULL;
    ListNode* curr = slow;
    ListNode* next = NULL;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    // Merge the two halves
    ListNode* first = head;
    ListNode* second = prev;
    while(second->next){
        ListNode* temp1 = first->next;
        ListNode* temp2 = second->next;
        first->next = second;
        second->next = temp1;
        first = temp1;
        second = temp2;
        
    }
}
void printList(ListNode*head){
    ListNode*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    cout <<"Original List: "<<endl;
    printList(head);
    cout<<endl;
    reOrderList(head);
    cout << "Reordered List: "<<endl;
    printList(head);
    return 0;
}