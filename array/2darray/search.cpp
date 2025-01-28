#include<bits/stdc++.h>
using namespace std;
// Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int row = mat.size();
        int col = mat[0].size();
        int i = 0;
        int j = col-1;
        while(i<row && j>=0){
            if(x>mat[i][j]){
                i++;
            }else if(x<mat[i][j]){
                j--;
            }else{
                return true;
            }
        }
        return false;
    }
int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    int x = 5;
    cout << searchMatrix(mat,x);
    
    return 0;
}