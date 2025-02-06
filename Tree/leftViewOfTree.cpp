#include<bits/stdc++.h>
using namespace std;
// Left view of a binary tree
// TreeNode structure
struct TreeNode{ 
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};
void solve(TreeNode* root, vector<int>&ans, int level){ // time complexity: O(n) and space complexity: O(n)
    if(root == NULL) return ;
    if(ans.size() == level){
        ans.push_back(root->val);
    }
    solve(root->left, ans, level+1);
    solve(root->right, ans, level+1);
}
vector<int> leftView(TreeNode* root){
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);
    vector<int> ans = leftView(root);
    for(auto x: ans){
        cout << x << " ";
    }
    return 0;
}