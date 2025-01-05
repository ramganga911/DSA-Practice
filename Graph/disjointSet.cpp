#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
    public:
    vector<int> parent,rank,size;
    DisjointSet(int n)
    {
        parent.resize(n+1);
        rank.resize(n+1,0);
        size.resize(n+1);
        for(int i=0;i<n+1;i++){
            parent[i]=i;
            size[i]=1;
        }
    }
    int findUPar(int n)
    {
        if(parent[n]==n)
        {
            return n;
        }
        return parent[n]=findUPar(parent[n]);
    }
    void unionByRank(int u,int v)
    {
        int par_u=findUPar(u);
        int par_v=findUPar(v);
        if(rank[par_u]>rank[par_v])
        {
            parent[par_v]=par_u;
        }
        else if(rank[par_u]<rank[par_v])
        {
            parent[par_u]=par_v;
        }
        else{
            parent[par_u]=par_v;
            rank[par_v]++;
        }
    }
    void unionBySize(int u,int v)
    {
        int par_u=findUPar(u);
        int par_v=findUPar(v);
        if(size[par_u]>size[par_v])
        {
            parent[par_v]=par_u;
            size[par_u]+=size[par_v];
        }
        else 
        {
            parent[par_u]=par_v;
            size[par_v]+=size[par_u];
        }
    }
};

int main()
{
   
    DisjointSet ds(8);
    ds.unionBySize(1,2);
    ds.unionBySize(2, 3);
    ds.unionBySize(3, 4);
    ds.unionBySize(5, 6);
    ds.unionBySize(5, 7);
   
    if(ds.findUPar(1)==ds.findUPar(7))
    {
        cout<<"SAME"<<endl;
    }
    else{
        cout<<"NOT SAME"<<endl;
    }
    ds.unionBySize(1,7);
    if (ds.findUPar(1) == ds.findUPar(7))
    {
        cout << "SAME" << endl;
    }
    else
    {
        cout << "NOT SAME" << endl;
    }
    return 0;
}