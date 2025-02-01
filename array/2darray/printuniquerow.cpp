#include <bits/stdc++.h>
using namespace std;
// Write a function to print all unique rows of the given matrix.
vector<vector<int>> findUniqueRows(vector<vector<int>> &arr, int row, int col)
{
    set<vector<int>> s;
    vector<vector<int>> ans;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j < col; j++)
        {
            temp.push_back(arr[i][j]);
        }
        if (s.find(temp) == s.end())
        {
            s.insert(temp);
            ans.push_back(temp);
        }
    }
    return ans;
}
int main()
{
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;
    vector<vector<int>> arr(row, vector<int>(col));
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<vector<int>> ans = findUniqueRows(arr, row, col);
    cout << "Unique rows are: " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}