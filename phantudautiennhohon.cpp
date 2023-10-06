#include <bits/stdc++.h>
using namespace std;
int n, q;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int maxx = INT_MIN, minn = INT_MAX;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
        minn = min(minn, a[i]);
    }
    map<int, int> b;
    int c[q], d[q];
    int cnt = 0;
    for (int i = 0; i < q; i++)
    {
        cin >> c[i];
        d[i] = c[i];
    }
    sort(c, c + q);
    for (int i = q; i >= 0; i--)
    {
        for (int j = cnt; j < n; j++)
        {
            if (a[j] <= c[i])
            {
                b[c[i]] = j;
                cnt = j;
                break;
            }
            else
                b[c[i]] = -1;
        }
    }
    for (int i = 0; i < q; i++)
    {
        cout << b[d[i]] + 1 << endl;
    }
}