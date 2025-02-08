#include <bits/stdc++.h>
using namespace std;
// Right view of a binary tree
// TreeNode structure
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// vector<int> rightView(TreeNode *root)
// {
//     if (!root)
//         return {};
//     queue<TreeNode *> q;
//     q.push(root);
//     vector<int> ans;
//     TreeNode *rightMostNode = NULL;
//     while (!q.empty())
//     {
//         int n = q.size();

//         while (n--)
//         {
//             TreeNode *temp = q.front();
//             q.pop();
//             rightMostNode = temp;
//             if (temp->left != NULL)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right != NULL)
//             {
//                 q.push(temp->right);
//             }
//         }
//         ans.push_back(rightMostNode->val);
//     }
//     return ans;
// }
void solve(TreeNode* root, vector<int>&ans, int level){ // time complexity: O(n) and space complexity: O(n)
    if(root == NULL) return ;
    if(ans.size() == level){
        ans.push_back(root->val);
    }
    solve(root->right, ans, level+1);
    solve(root->right, ans, level+1);
}
vector<int> rightView(TreeNode* root){
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);
    vector<int> ans = rightView(root);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}