#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};
void levelOrder(Node* root, vector<int>& ans){ // time complexity: O(n) and space complexity: O(n)
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        ans.push_back(node->data);
        if(node->left!=nullptr){
            q.push(node->left);
        }
        if(node->right!=NULL){
            q.push(node->right);
        }
    }

}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    vector<int> ans;
    levelOrder(root ,ans);
    for(auto x: ans){
        cout << x << " ";
    }
    return 0;
}