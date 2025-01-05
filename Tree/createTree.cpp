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
Node *levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right)
        {
            q.push(curr->right);
        }
    }
    return root;
}
void preTraversal(Node *root, vector<int> &ans, int &cnt)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        cnt++;
        return;
    }

    ans.push_back(root->data);
    preTraversal(root->left, ans, cnt);
    preTraversal(root->right, ans, cnt);
}
int nonleaf(Node*root){ 
    if(!root) return 0;
    if(!root->left && !root->right) return 0;
    return (1+nonleaf(root->left)+nonleaf(root->right));
}
int height(Node* root){
    if(!root) return 0;
    int left = height(root->left);
    int right = height(root->right);
    return 1+max(left,right);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root->left->left = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    levelOrder(root);
    cout<<endl;
    vector<int> ans;
    int cnt = 0;
    preTraversal(root, ans, cnt);
    cout <<"Total Leaf Node: " <<cnt<<endl;
    cout <<"Non leaf Node: "<<nonleaf(root)<<endl;
    cout <<"Height of tree: "<<height(root)<<endl;
    return 0;
}