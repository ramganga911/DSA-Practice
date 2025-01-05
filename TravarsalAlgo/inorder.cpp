#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val): data(val), left(nullptr), right(nullptr){}
};
// INorder 
void inorderTraversal(Node* root){
    if(root == NULL ) return;
    inorderTraversal(root->left);
    cout << root->data <<" ";
    inorderTraversal(root->right);
}
// PreOrder
void preOrder(Node* root){
    if(root == nullptr){
        return;
    }
    cout << root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void PostOrder(Node* root){
    if(root == nullptr) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data <<" ";
}
void levelOrderTraversal(Node *root)
{
    if (root == nullptr)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();
        cout << current->data << " ";

        // Enqueue the left child
        if (current->left != nullptr)
            q.push(current->left);

        // Enqueue the right child
        if (current->right != nullptr)
            q.push(current->right);
    }
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout <<endl;
    cout <<"Preorder Traversal: ";
    preOrder(root);
    cout<<endl;
    cout<<"Postorder Traversal: ";
    PostOrder(root);
    cout<<endl;
    cout << "LevelOrderTraversal: ";
    levelOrderTraversal(root);
    cout<<endl;

    return 0;
}