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
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
Node *BinaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
        return nullptr;
    Node *temp = new Node(x);
    // left side create
    cout << "Enter the left child of " << x << " :";
    temp->left = BinaryTree();
    cout << "Enter right child of " << x << " :";
    temp->right = BinaryTree();
    return temp;
}
void preTraversal(Node *root, vector<int> &ans, int &cnt)
{
    if (root->left == NULL && root->right==NULL)
    {
        cnt++;
        return;
    }
    
    ans.push_back(root->data);
    preTraversal(root->left, ans,cnt);
    preTraversal(root->right, ans,cnt);
}
int totalNode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return (1 + totalNode(root->left) + totalNode(root->right));
}
int main()
{
    cout << "Enter the root Node: ";
    Node *root;

    root = BinaryTree();
    vector<int> ans;
    int cnt = 0;
    preTraversal(root, ans, cnt);
    cout << "Print tree: " << endl;
    for (int num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << cnt;

    return 0;
}