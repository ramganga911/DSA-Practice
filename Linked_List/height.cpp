#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int height(Node *root)
{
    if (root == NULL)
        return 0;
    int left = height(root->left);
    int right = height(root->right);
    return max(left, right) + 1;
}
int countNode(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + countNode(root->left) + countNode(root->right);
}
void leftViewLeft(Node *root, int level, map<int, int> &mp)
{
    if (root == NULL)
        return;
    if (mp.find(level) == mp.end())
    {
        mp[level] = root->data;
    }
    leftViewLeft(root->left, level + 1, mp);
    leftViewLeft(root->right, level + 1, mp);
}
void leftView(Node *root)
{
    if (root == NULL)
        return;
    map<int, int> mp;
    leftViewLeft(root, 1, mp);
    for (auto x : mp)
    {
        cout << x.second << " " << endl;
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);
    root->right->right->right->right = new Node(9);
    cout << "Height of the tree is: " << height(root) << endl;
    cout << "Number of nodes in the tree is: " << countNode(root) << endl;
    leftView(root);
    return 0;
}