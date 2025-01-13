#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

bool rec(ListNode *head)
{
    if (head == NULL)
        return true;

    ListNode *curr = head;
    bool ans = rec(head->next);
    if (curr->val != head->val)
    {
        return false;
    }
    curr = curr->next;
    return ans;
}
bool isPalindrome(ListNode *head)
{
    ListNode *curr = head;
    return rec(head);
}
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);
    cout << isPalindrome(head);
    return 0;
}