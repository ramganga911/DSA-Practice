#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void deleteNode(Node *node)
{
    Node *prev = NULL;
    while (node != NULL && node->next != NULL)
    {
        node->data = node->next->data;
        prev = node;
        node = node->next;
    }
    prev->next = NULL;
    delete (node);
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    deleteNode(head->next->next);
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}