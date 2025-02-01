#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>& mat, int i, int j, int row, int col){ // depth first search Time complexity: O(row*col)
    if(i<0 || i>= row || j<0 || j>= col || mat[i][j] ==0) return ;
    mat[i][j] =0;
    dfs(mat, i+1, j, row,col);
    dfs(mat, i-1, j, row,col);
    dfs(mat, i, j+1, row,col);
    dfs(mat, i, j-1, row,col);

}
int findTotalIsland(vector<vector<int>>&mat, int row, int col){ // time complexity: O(row*col)
    if(row == 0 || col ==0) return 0;
    int count =0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(mat[i][j] ==1){
                count++;
                dfs(mat,i,j,row,col);
            }
        }
    }
    return count;
}
int main(){
    vector<vector<int>> mat= {
        {1,1,0,0,0},
        {0,1,0,0,1},
        {1,0,0,1,1},
        {0,0,0,0,0},
        {1,0,1,0,1}
    };
    int row = mat.size();
    int col = mat[0].size();
    int count = findTotalIsland(mat, row, col); // Over all time complexity: O(row*col)
    cout << "Total number of islands: " << count;
    return 0;
}