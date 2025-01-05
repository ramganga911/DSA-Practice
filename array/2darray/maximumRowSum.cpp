#include <bits/stdc++.h>
using namespace std;
int maximumRowSum(int mat[][3], int rows, int cols)
{
    int maxi = INT_MIN;
    for (int i = 0; i < cols; i++)
    {
        int sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum += mat[i][j];
        }
        maxi = max(maxi, sum);
    }
    return maxi;
}
int DigonalSum(int mat[][3], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                sum += mat[i][j];
            }
            else if (j == cols - i - 1)
            {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}
int diagonalSum(int mat[][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
        if (i != n - i - 1)
        {
            sum += mat[i][n - i - 1];
        }
    }
    return sum;
}
bool searchMat(int mat[][3], int n, int x)//O(log(m*n)) 
{
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (mat[i][j] == x)
    //         {
    //             return true;
    //         }
    //     }
    // }
    // return false;
    int rows = n;
    int cols = 3;
    int l =0, r = rows*cols-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        int row = mid/cols;
        int col = mid%cols;
        if(mat[row][col]==x){
            return true;
        }
        else if (mat[row][col] < x)
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    return false;
}
int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 4;
    int cols = 3;
    cout << maximumRowSum(mat, rows, cols) << endl;
    cout << diagonalSum(mat, 3)<<endl;
    cout << searchMat(mat, 3,3)<<endl;
    return 0;
}