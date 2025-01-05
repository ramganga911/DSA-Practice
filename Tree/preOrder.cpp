#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val): data(val),left(nullptr),right(nullptr){}
};
void preOrder(Node*root){
    if(root == NULL){
        return;
    }
    cout<< root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    preOrder(root);
    return 0;
}