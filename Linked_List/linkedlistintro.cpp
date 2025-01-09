#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
class List
{
public:
    Node *head;
    Node *tail;
    List()
    {
        head = NULL;
        tail = NULL;
    }
};
Node *insertAtEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
Node *insertAtBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    temp->next = head;
    head = temp;
    return head;
}

Node *deleteHead(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head->next;
    delete head;
    return temp;
}

Node *deleteEnd(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}

Node *deleteKthNode(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (k == 1)
    {
        return deleteHead(head);
    }
    Node *curr = head;
    for (int i = 0; i < k - 2 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL || curr->next == NULL)
    {
        return head;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

void insert(Node *head, int val, int pos)
{
    Node *temp = new Node(val);
    if (pos < 0)
    {
        cout << "Invalid position" << endl;
        return;
    }
    if (pos == 0)
    {
        temp->next = head;
        head = temp;
        return;
    }
    Node *curr = head;
    for (int i = 0; i < pos - 1 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << "Invalid position" << endl;
    }
    temp->next = curr->next;
    curr->next = temp;
}

Node *reverseList(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *front = NULL;
    while (curr != NULL)
    {
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }
    return prev;
}

Node *reverseListRecursive(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *rest_head = reverseListRecursive(head->next);
    Node *rest_tail = head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
}

bool search(Node *head, int x)
{
    if (head == NULL)
    {
        return false;
    }
    if (head->next->data == x)
    {
        return true;
    }
    return search(head->next, x);
}

void printList(Node *head)
{
    Node *curr = head;
    while (curr != nullptr)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    insertAtEnd(head, 3);
    printList(head);
    head = insertAtBegin(head, 0);
    // printList(head);
    // head = deleteHead(head);
    // printList(head);
    // head = deleteEnd(head);
    // printList(head);
    // head = deleteKthNode(head, 3);
    printList(head);
    head = reverseList(head);
    printList(head);
    head = reverseList(head);
    printList(head);
    insert(head, 4, 2);
    printList(head);
    search(head, 4) ? cout << "Found" : cout << "Not Found";
    return 0;
}