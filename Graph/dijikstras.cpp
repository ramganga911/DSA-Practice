#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> Dijikstrs(int V, vector<vector<int>> adj[], int S)
    {   // Using Priority Queue //SC = O(V+E) // TC = O(ElogE)
        // vector<int> result(V, INT_MAX);
        // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        // result[S] = 0;
        // pq.push({0, S});
        // while (!pq.empty())
        // {
        //     int node = pq.top().second;
        //     int d = pq.top().first;
        //     pq.pop();
        //     for (auto &vec : adj[node])
        //     {
        //         int adjNode = vec[0];
        //         int wt = vec[1];
        //         if (wt + d < result[adjNode])
        //         {
        //             result[adjNode] = wt + d;
        //             pq.push({wt + d, adjNode});
        //         }
        //     }
        // }
        // return result;
        // Using SET DATA STRUCTURE
        vector<int> result(V,INT_MAX);
        result[S]=0;
        set<pair<int,int>>st;
        st.insert({0,S});

        while(!st.empty()){
            auto &it = *st.begin();
            int node = it.second;
            int d = it.first;
            st.erase(it);
            for(auto &vec: adj[node]){
                int adjNode = vec[0];
                int wt = vec[1];
                if(wt+d<result[adjNode]){
                    if (result[adjNode] != INT_MAX)
                    {
                        st.erase({result[adjNode], adjNode});
                    }
                    result[adjNode] = wt+d;
                    st.insert({wt+d, adjNode});
                }
            }
        }
        return result;
    }
};
int main(){
    int V = 3, E =3, S=2;
    vector<vector<int>>adj[V];
    vector<vector<int>>edges;
    vector<int> v1{1,1},v2{2,6},v3{2,3},v4{0,1},v5{1,3},v6{0,6};
    int i=0;
    adj[0].push_back(v1);
    adj[0].push_back(v2);
    adj[1].push_back(v3);
    adj[1].push_back(v4);
    adj[2].push_back(v5);
    adj[2].push_back(v6);

    Solution obj;
    vector<int> res = obj.Dijikstrs(V, adj, S);
    for(int i=0; i<V; i++){
        cout<< res[i]<<" ";
    }cout<<endl;
    return 0;
}