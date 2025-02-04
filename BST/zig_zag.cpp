#include<bits/stdc++.h>
using namespace std;
// Write a function for zigzag traversal in a binary tree
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
vector<int> findZigZagTraversal(Node* root){ // time complexity O(n) and space complexity O(n)
    vector<int> ans; 
    if(root == NULL){
        return ans;
    }
    stack<Node*> s1;
    stack<Node*> s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        //iterate until the s1 is not empty
        while(!s1.empty()){
            Node* temp = s1.top();
            s1.pop();
            ans.push_back(temp->data);
            if(temp->left){
                s2.push(temp->left);
            }
            if(temp->right){
                s2.push(temp->right);
            }
        }
        //iterate until the s2 is not empty
        while(!s2.empty()){
            Node* temp = s2.top();
            s2.pop();
            ans.push_back(temp->data);
            if(temp->right){
                s1.push(temp->right);
            }
            if(temp->left){
                s1.push(temp->left);
            }
        }
    }
    return ans;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(7);
    root->left->right = new Node(6);
    root->right->left = new Node(5);
    root->right->right = new Node(4);
    vector<int> ans = findZigZagTraversal(root);
    for(auto x: ans){
        cout << x << " ";
    }
    return 0;
}