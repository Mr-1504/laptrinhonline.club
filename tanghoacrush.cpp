#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, res = 0;
    cin >> n >> m;
    vector<int> a, b;
    a.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        a[i] += a[i - 1];
    }
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        b.push_back(a[y] - a[x - 1]);
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < m; i++)
        if (b[i] >= 0)
            res += b[i];
    cout << res;
    return 0;
}