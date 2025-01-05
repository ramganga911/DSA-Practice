#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int val) : val(val), next(nullptr) {}
    ListNode(int val, ListNode *next) : val(val), next(next) {}
};

// Find the nth node from the start
ListNode *findnthNode(ListNode *temp, int k)
{
    int cnt = 1;
    while (temp != NULL)
    {
        if (cnt == k)
            return temp;
        cnt++;
        temp = temp->next;
    }
    return temp;
}

// Rotate linked list by k positions
ListNode *rotatelinkedlist(ListNode *head, int k)
{
    if (head == NULL || k == 0)
        return head;

    // Find the length of the linked list
    ListNode *tail = head;
    int len = 1;
    while (tail->next != NULL)
    {
        tail = tail->next;
        len++;
    }

    // No need to rotate if k is a multiple of length
    if (k % len == 0)
        return head;

    k = k % len;       // Handle cases where k > len
    tail->next = head; // Make the list circular

    // Find the new last node
    ListNode *newLastNode = findnthNode(head, len - k);
    head = newLastNode->next; // New head is after the new last node
    newLastNode->next = NULL; // Break the cycle

    return head;
}

// Insert a node into the linked list
void insertNode(ListNode *&head, int val)
{
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    ListNode *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Print the linked list
void printlinklist(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val;
        if (temp->next != NULL)
            cout << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    ListNode *head = NULL;
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 5);

    cout << "Before rotation:" << endl;
    printlinklist(head);

    int k = 2;
    ListNode *newHead = rotatelinkedlist(head, k);

    cout << "After " << k << " rotation(s):" << endl;
    printlinklist(newHead);

    return 0;
}
