#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int x = 0, y = 0, cnt = 0;
    while (x < n && y < m)
    {
        if (b[y] > a[x])
        {
            ++cnt;
            ++x;
        }
        else
        {
            cout << cnt << " ";
            ++y;
        }
    }
    for (int i = y; i < m; i++)
    {
        cout << cnt << " ";
    }
}