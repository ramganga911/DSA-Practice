#include <bits/stdc++.h>
using namespace std;
// Write a function to sort a linked list of 0s, 1s and 2s
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
void sortList(Node *head)
{

    if (head == NULL)
    {
        return;
    }
    else
    {
        Node *temp = head;
        int count1 = 0, count2 = 0, count3 = 0;
        Node *tempo = head;
        while (temp != NULL)
        {
            if (temp->data == 0)
            {
                count1++;
            }
            else if (temp->data == 1)
            {
                count2++;
            }
            else
            {
                count3++;
            }
            temp = temp->next;
        }
        while (count1 != 0)
        {
            tempo->data = 0;
            tempo = tempo->next;
            count1--;
        }
        while (count2 != 0)
        {
            tempo->data = 1;
            tempo = tempo->next;
            count2--;
        }
        while (count3 != 0)
        {
            tempo->data = 2;
            tempo = tempo->next;
            count3--;
        }
    }
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(0);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(0);
    head->next->next->next->next->next = new Node(2);

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