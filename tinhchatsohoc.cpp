#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1000000007;
ll md(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % MOD;
    ll temp = md(a, b / 2);
    return temp * temp % MOD * md(a, b % 2)%MOD;
}
ll cd(ll a, ll b)
{
    return a * md(b, MOD - 2) % MOD;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll x, n;
    cin >> x >> n;
    x=(x+MOD*MOD)%MOD;
    ll res = 1;
    for (ll i = 1; i <= n; i++)
    {
        res = res * ((x ) % MOD + i) % MOD;
        res = cd(res, i);
    }
    cout << res%MOD;
    return 0;
}
