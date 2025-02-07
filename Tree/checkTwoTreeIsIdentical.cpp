#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        this->data = data;
        left = right = NULL;
    }
};
bool isIdentical(TreeNode* root1, TreeNode* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL)){
        return false;
    }
    if(root1->data != root2->data){
        return false;
    }
    return (isIdentical(root1->left, root2->left)&& isIdentical(root1->right, root2->right));
}
int main(){
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    root1->left->left = new TreeNode(4);
    root1->left->right = new TreeNode(5);
    TreeNode* root2 = new TreeNode(1);
    root2->left  = new TreeNode(2);
    root2->right = new TreeNode(3);
    root2->left->left = new TreeNode(4);
    root2->left->right = new TreeNode(3);  
    bool ans = isIdentical(root1, root2);
    if(ans){
        cout << "Tree are identical";
    }else{
        cout << "Tree are not identical";
    }
    return 0;
}