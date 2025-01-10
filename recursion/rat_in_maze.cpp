#include<bits/stdc++.h>
using namespace std;
void allPath(int row, int col, int n, vector<vector<int>> &mat, string ans, vector<string>&result) {
    if(row<0 || row>=n || col<0 || col>=n || mat[row][col]==0){
        return;
    }
    if(row==n-1 && col == n-1){
        result.push_back(ans);
        return;
    }
    mat[row][col] =0; //marking visited
    allPath(row+1,col, n, mat, ans+"D", result);
    allPath(row-1, col, n, mat, ans+"U", result);
    allPath(row, col+1, n, mat, ans+"R", result);
    allPath(row, col-1, n, mat, ans+"L", result);
    mat[row][col] = 1; //backtrack
    return;
}

int main()
{
    vector<vector<int>>mat = {{1, 0, 0, 0},
                               {1, 1, 0, 1},
                               {1, 1, 0, 0},
                               {0, 1, 1, 1}};
    int n = 4;
    string ans ="";
    vector<string>result;
    allPath(0, 0, n, mat, ans, result);
    sort(result.begin(), result.end());
    for(auto x: result){
        cout <<x <<" ";
    }
    return 0;
}