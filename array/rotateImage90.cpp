#include <bits/stdc++.h>
using namespace std;
void rotateMat(vector<vector<int>> &mat)
{
    int row = mat.size();
    int col = mat[0].size();
    // transpose the matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {                               // j=i+1 to avoid swapping the diagonal elements
            swap(mat[i][j], mat[j][i]); // swap the elements
        }
    }
    for (int i = 0; i < row; i++)
    {
        reverse(mat[i].begin(), mat[i].end());
    }
}
int main()
{
    vector<vector<int>> mat = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12},
                               {13, 14, 15, 16}};
    int n = mat.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    rotateMat(mat);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}