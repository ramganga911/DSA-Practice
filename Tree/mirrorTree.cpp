#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void mirrorTree(TreeNode *root)
{
    // code here
    if (root == NULL)
        return;
    TreeNode *temp = root->right;
    root->right = root->left;
    root->left = temp;
    // left
    mirrorTree(root->left);
    // right
    mirrorTree(root->right);
}
void inorder(TreeNode *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    TreeNode *root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    root1->left->left = new TreeNode(4);
    root1->left->right = new TreeNode(5);
    inorder(root1);
    cout << endl;
    mirrorTree(root1);
    inorder(root1);

    return 0;
}