#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    bool x = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[i][j] != a[j][i])
            {
              //  cout << a[i][j] << " " << a[j][i] << " " << i << " " << j;
                x = false;
                break;
            }
        }
    }
    int a0 = (a[0][1] - a[1][2] + a[0][2]);
    if (x)
    {
        a0 /= 2;
        int j = 0;
        cout << a0 << " ";
        for (int i = 1; i < n; i++)
        {
            a0 = a[j++][i] - a0;
            cout << a0 << " ";
        }
    }
    else
    {
        cout << -1;
    }
}