#include<bits/stdc++.h>
using namespace std;
// bipartite :- The graph is bipartite as it can be colored with two colors such that no two adjacent nodes share the same color.
class Solution
{
public:
    bool checkBip(int node, vector<vector<int>> &adj, vector<int> &color)
    {
        for (auto neighbor : adj[node]) // vertex is color or not
        {
            if (color[neighbor] == -1) // not color then color
            {
                color[neighbor] = (color[node] + 1) % 2;
                if (!checkBip(neighbor, adj, color))
                {
                    return false;
                }
            }
            else if (color[node] == color[neighbor]) //color then check adjacent nodes is same or different
            {
                return false;
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>> &adj)
    {
        vector<int> color(adj.size(), -1);
        for (int i = 0; i < adj.size(); i++)
        {
            if (color[i] == -1)
            {
                color[i] = 0;
                if (!checkBip(i, adj, color))
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main(){
    Solution sol;
    vector<vector<int>>graph={
        {1,3},
        {0,2},
        {1,3},
        {0,2}
    };
    if(sol.isBipartite(graph)){
        cout<< "The graph is bipartite.\n";
    }else{
        cout << "The graph is not bipartite\n";
    }
    return 0;
}