#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        val = x;
        left = right = nullptr;
    }
};
vector<vector<int>> zigzagTraversal(TreeNode* root){
    vector<vector<int>> result;
    if(root == NULL) return result;
    queue<TreeNode*> q;
    q.push(root);
    bool flag = true;
    while(!q.empty()){
        int n  = q.size();
        vector<int> level(n);
        for(int i=0; i<n; i++){
            TreeNode* node = q.front();
            q.pop();
            int index = flag ? i:n-i-1;
            level[index] = node->val;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        flag =!flag;
        result.push_back(level);
    }
    return result;
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);
    vector<vector<int>> ans = zigzagTraversal(root);
    for(auto x: ans){
        for(auto y: x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}