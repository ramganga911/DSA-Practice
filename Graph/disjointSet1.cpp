#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
    public:
    vector<int> parent, rank, size;
    DisjointSet(int n){
        parent.resize(n+1);
        rank.resize(n+1,0);
        size.resize(n+1);
        for(int i=0; i<n; i++){
            parent[i]=i;
            size[i]=1;
        }
    }
    int findUPar(int i){
        if(parent[i]==i){
            return i;
        }
        return parent[i] = findUPar(parent[i]);
    }
    void findUnionByRank(int x, int y){
        int x_parent = findUPar(x);
        int y_parent = findUPar(y);
        if(x_parent == y_parent){
            return ;
        }
        if(rank[x_parent]>rank[y_parent]){
            parent[y_parent]= x_parent;
        }
        else if(rank[x_parent]<rank[y_parent]){
            parent[x_parent]= y_parent;
        }else{
            parent[x_parent] = y_parent;
            rank[y_parent]++;
        }
    }
    void findUinonBySize(int x,int y){
        int x_parent = findUPar(x);
        int y_parent = findUPar(y);
        if(x_parent == y_parent){
            return;
        }
        if(size[x_parent] > size[y_parent]){
            parent[y_parent]= x_parent;
            size[x_parent]+=size[y_parent];
        }
        else if(size[x_parent]<size[y_parent]){
            parent[x_parent] = y_parent;
            size[y_parent]+= size[x_parent];
        }else{
            parent[x_parent] = y_parent;
            size[y_parent]+=size[x_parent];
        }
    }
};
int main(){
    DisjointSet ds(8);
    ds.findUinonBySize(1, 2);
    ds.findUinonBySize(2, 3);
    ds.findUinonBySize(3, 4);
    ds.findUinonBySize(5, 6);
    ds.findUinonBySize(5, 7);
    if (ds.findUPar(1) == ds.findUPar(7)){
        cout<< "same"<<endl;
    }else{
        cout<< "Not Smae"<<endl;
    }
    ds.findUinonBySize(1, 7);
    if (ds.findUPar(1) == ds.findUPar(7))
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "Not Smae" << endl;
    }

    return 0;
}