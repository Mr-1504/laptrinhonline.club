#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll m, n, q;
    cin >> m >> n >> q;

    vector<ll> a(m), b(n);
    vector<pair<ll, ll>> c, d;

    cin >> a[0];
    ll minn = a[0], maxx = a[0];
    c.push_back({maxx, minn});

    for (int i = 1; i < m; i++)
    {
        cin >> a[i];
        maxx = max(a[i], maxx);
        minn = min(minn, a[i]);
        c.push_back({maxx, minn});
    }

    cin >> b[0];
    minn = b[0];
    maxx = b[0];
    d.push_back({maxx, minn});

    for (int i = 1; i < n; i++)
    {
        cin >> b[i];
        maxx = max(b[i], maxx);
        minn = min(minn, b[i]);
        d.push_back({maxx, minn});
    }

    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        ll x1 = c[x].first * d[y].first;
        ll x2 = c[x].first * d[y].second;
        ll x3 = c[x].second * d[y].second;
        ll x4 = c[x].second * d[y].first;
        ll maxx = max(max(x1, x2), max(x3, x4));
        ll minn = min(min(x1, x2), min(x3, x4));
        cout << maxx << " " << minn << endl;
    }
    return 0;
}
