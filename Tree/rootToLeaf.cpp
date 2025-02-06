#include<bits/stdc++.h>
using namespace std;
//Definition Of Binary Tree
struct TreeNode { 
    int val; 
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        val = x; 
        left = right = NULL;
    }
};
// Function to find all paths from root to leaf
void findPaths(TreeNode* root, vector<vector<int>>& ans, vector<int> & path){ // time complexity: O(n) and space complexity: O(n)
    if(root == NULL) return;
    path.push_back(root->val);
    if(root->left == NULL && root->right == NULL){
        ans.push_back(path);
    }else{
        findPaths(root->left, ans, path);
        findPaths(root->right, ans, path);
    }
    path.pop_back();
}
vector<vector<int>> Paths(TreeNode* root){ // time complexity: O(n) and space complexity: O(n)
    vector<vector<int>> ans;
    if(root == NULL) return ans;
    vector<int> path;
    findPaths(root, ans, path);
    return ans;
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    vector<vector<int>> FinalPath = Paths(root);
    for(auto x: FinalPath){
        for(auto y: x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}
