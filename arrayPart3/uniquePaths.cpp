#include <bits/stdc++.h>
using namespace std;
// Unique Paths
int findPaths(int i, int j, int m, int n)
{
    if (i < 0 || i >= m || j < 0 || j >= n)
        return 0;
    if (i == m - 1 && j == n - 1)
        return 1;
    int left = findPaths(i + 1, j, m, n);
    int right = findPaths(i, j + 1, m, n);
    return left + right;
}
int main()
{
    int m =3, n=7;

    int ans = findPaths(0, 0, m, n);
    cout << "Total number of unique paths: " << ans;
    return 0;
}