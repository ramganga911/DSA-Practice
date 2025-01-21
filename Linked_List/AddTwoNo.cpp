#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
Node *AddTwoNo(Node *l1, Node *l2)
{
    Node *dummy = new Node(0);
    Node *tail = dummy;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry)
    {
        int sum = carry;
        if (l1 != NULL)
        {
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2 != NULL)
        {
            sum += l2->data;
            l2 = l2->next;
        }
        carry = sum / 10;
        Node *newNode = new Node(sum % 10);
        tail->next = newNode;
        tail = tail->next;
    }
    return dummy->next;
}
int main()
{
    Node *l1 = new Node(2);
    l1->next = new Node(4);
    l1->next->next = new Node(3);
    Node *l2 = new Node(5);
    l2->next = new Node(6);
    l2->next->next = new Node(4);
    Node *res = AddTwoNo(l1, l2);
    Node *temp = res;
    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data << endl;
    return 0;
}
