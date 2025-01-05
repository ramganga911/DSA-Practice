#include<bits/stdc++.h>
using namespace std;
vector<int> bellmanFord(int V, vector<vector<int>> &edges, int s){
    vector<int> dist(V,1e8);
    dist[s]=0;
    for(int i=0; i<V; i++){ //TC = O(V*E) ,SC=O(V)
        for(auto edge:edges){
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            if(dist[u]!=1e8 && dist[u]+w<dist[v]){
                if(i==V-1){
                    return{-1};
                }
                dist[v]= dist[u]+w;
            }
        }
    }
    return dist;
} 
int main()
{
    int V =5;
    vector<vector<int>>edges = {{1,2,3},{4,3,-1},{2,4,1},{1,2,1},{0,1,5}};
    int src = 0;
    vector<int> ans = bellmanFord(V,edges,src);
    for(int dist : ans){
        cout << dist<<" ";
    }

    return 0;
}