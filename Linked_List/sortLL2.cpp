#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
Node *findMiddle(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node* mergeList(Node *left, Node *right)
{
    Node *dummy = new Node(-1);
    Node *temp = dummy;
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            right = right->next;
        }
        temp = temp->next;
    }
    if (left != NULL)
    {
        temp->next = left;
    }
    if (right != NULL)
    {
        temp->next = right;
    }
    return dummy->next;
}
Node *sortList(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *middle = findMiddle(head);
    Node *right = middle->next;
    middle->next = NULL;
    Node *left = head;
    left = sortList(left);
    right = sortList(right);
    return mergeList(left, right);
}
int main()
{
    Node *head = new Node(0);
    head->next = new Node(2);
    head->next->next = new Node(4);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(3);
    head->next->next->next->next->next = new Node(5);
    sortList(head);
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data << "->NULL";
    return 0;
}