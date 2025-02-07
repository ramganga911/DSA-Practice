#include <bits/stdc++.h>
using namespace std;

//Function to check if tree is balanced or not
//Time Complexity: O(N) and Space Complexity: O(H)
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
int height(TreeNode* root){ // Function to calculate height of tree
    if(root == NULL){
        return 0;
    }
    return max(height(root->left), height(root->right))+1;
}
bool isBalanced(TreeNode* root){ // Function to check if tree is balanced or not
    if(root == NULL){
        return true;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right)){
        return true;
    }
    return false;
}
int main()
{
    TreeNode *root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    root1->left->left = new TreeNode(4);
    root1->left->right = new TreeNode(5);
    root1->left->left->left = new TreeNode(6);
    bool ans = isBalanced(root1);
    if(ans){
        cout << "Tree is balanced";
    }else{
        cout << "Tree is not balanced";
    }
    return 0;
}