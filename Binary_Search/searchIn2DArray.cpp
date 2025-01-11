#include<bits/stdc++.h>
using namespace std;
bool searchIn2D(vector<vector<int>>&mat, int target){
    int row = mat.size();
    int col = mat[0].size();
    int low = 0;
    int high = row*col-1;
    while(low<= high){
        int mid = low+ (high-low)/2;
        if(mat[mid/col][mid%col]==target){
            return 1;
        }else if(mat[mid/col][mid%col]<target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return 0;
}
int main(){
    vector<vector<int>> mat = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12},
                               {13, 14, 15, 16}};

    cout << searchIn2D(mat,6);
    return 0;
}