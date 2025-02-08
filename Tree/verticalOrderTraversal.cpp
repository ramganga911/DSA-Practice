#include <bits/stdc++.h>
using namespace std;
// Vertical Order Traversal of Binary Tree
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void preorder(TreeNode *root, map<int, vector<pair<int, int>>> &mp, int level, int verticalNo)
{
    if (root == NULL)
    {
        return;
    }
    mp[verticalNo].push_back({level, root->val});
    preorder(root->left, mp, level + 1, verticalNo - 1);
    preorder(root->right, mp, level + 1, verticalNo + 1);
}
vector<vector<int>> verticalTraversal(TreeNode *root)
{
    vector<vector<int>> ans;
    map<int, vector<pair<int, int>>> mp;
    preorder(root, mp, 0, 0);
    for (auto x : mp)
    {   
        sort(x.second.begin(), x.second.end());
        vector<int> temp;
        for (auto pair : x.second)
        {
            temp.push_back(pair.second);
        }
        ans.push_back(temp);
    }
    return ans;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    vector<vector<int>> ans = verticalTraversal(root);
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
    }

    return 0;
}