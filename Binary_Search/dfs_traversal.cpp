#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Preorder traversal (Root, Left, Right)
void preorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    
    cout << root->val << " "; 
    preorderTraversal(root->left); 
    preorderTraversal(root->right); 
}

// Inorder traversal (Left, Root, Right)
void inorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    
    inorderTraversal(root->left); 
    cout << root->val << " "; 
    inorderTraversal(root->right); 
}

// Postorder traversal (Left, Right, Root)
void postorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    
    postorderTraversal(root->left);
    postorderTraversal(root->right); 
    cout << root->val << " "; 
}

int main() {
    // Constructing the tree:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    cout << "Preorder Traversal: ";
    preorderTraversal(root); // Output: 1 2 4 5 3
    cout << endl;
    
    cout << "Inorder Traversal: ";
    inorderTraversal(root); // Output: 4 2 5 1 3
    cout << endl;
    
    cout << "Postorder Traversal: ";
    postorderTraversal(root); // Output: 4 5 2 3 1
    cout << endl;
    
    return 0;
}
