#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<ll, ll>> a;
        int n;
        cin >> n;
        ll m = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            a.push_back({x - y, x + y});
            m = max(m, x + y);
        }
        sort(a.begin(), a.end());
        ll res = a[0].second - a[0].first;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first >= a[i - 1].second)
                res += a[i].second - a[i].first;
            else if (a[i].first < a[i - 1].first)
                res += a[i - 1].first - a[i].first + a[i].second - a[i - 1].second;
            else
                res += a[i].second - a[i - 1].second;
        }
        if (m > a[n - 1].second)
            res += m - a[n - 1].second;
        cout << res << endl;
    }
    return 0;
}
