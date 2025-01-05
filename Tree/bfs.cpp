#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>> &adj, int start, vector<bool> &visited){
    queue<int>q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        cout << curr <<" ";
        for(auto it:adj[curr]){
            if(!visited[it]){
                visited[it]=true;
                q.push(it);
            }
        }
    }
}


void addEdge(vector<vector<int>> &adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int V = 5;
    vector<vector<int>> adj(V);
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,4);

    vector<bool>visited(V,false);
    cout<< "BFS starting from 0 : \n";
    bfs(adj, 0, visited);
    return 0;
}