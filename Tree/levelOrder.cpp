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
vector<vector<int>> levelOrder(Node* root){ // time complexity: O(n) and space complexity: O(n)
    vector<vector<int>> result;
    if (root == NULL) return result;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        while(size--){
            Node* node = q.front();
            q.pop();
            level.push_back(node->data);
            if(node->left) {
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        result.push_back(level);
    }
    return result;
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->left->left->left = new Node(7);
    root->left->left->right = new Node(8);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);
    vector<vector<int>> ans = levelOrder(root);

    for(auto x: ans){
        for(auto y: x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}