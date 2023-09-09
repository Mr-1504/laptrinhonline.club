#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m, n;
    cin >> m >> n;
    int a[m][n], b[m][n];
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            b[i][j] = 1 - a[i][j];
            if (i > 0 && j > 0 && a[i][j] == 1)
                a[i][j] = min(a[i - 1][j - 1], min(a[i - 1][j], a[i][j - 1])) + 1;
            res = max(res, a[i][j]);
            if (i > 0 && j > 0 && b[i][j] == 1)
                b[i][j] = min(b[i - 1][j - 1], min(b[i - 1][j], b[i][j - 1])) + 1;
            res = max(res, b[i][j]);
        }
    }
    cout << res;
    return 0;
}
