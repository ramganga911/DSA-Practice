#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode *createBinaryTree(vector<vector<int>> &descs)
{
    unordered_map<int, TreeNode *> nodes;
    unordered<int> children;

    for (auto &desc : descs)
    {
        int parent = desc[0], child = desc[1], isleft = desc[2];

        if (nodes.find(parent) == nodes.end())
        {
            nodes[parent] = new TreeNode(parent);
        }
        if (nodes.find(child) == nodes.end())
        {
            nodes[child] = new TreeNode(child);
        }

        if (isLeft == 1)
        {
            nodes[parent]->left = nodes[child];
        }
        else
        {
            nodes[parent]->right = nodes[child];
        }
        children.insert(child);
    }
    TreeNode *root = nullptr;
    for (auto &desc : descs)
    {
        if (children.find(desc[0]) == children.end())
        {
            root = nodes[desc[0]];
            break;
        }
    }
    return root;
}

void printTree(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    vector<vector<int>> descriptions = {
        {1, 2, 1}, {1, 3, 0}, {2, 4, 1}};

    TreeNode *root = createBinaryTree(descriptions);

    // Print the tree in preorder
    printTree(root);
    return 0;

    return 0;
}