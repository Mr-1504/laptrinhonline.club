#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;
ll mu(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll temp = mu(a, b / 2);
    if (b & 1)
        return (a % MOD * temp % MOD * temp % MOD) % MOD;
    return (temp % MOD * temp % MOD) % MOD;
}
ll tohop(int n, int k)
{
    ll temp = 1;
    for (int i = 1; i <= k; i++, n--)
    {
        temp = (temp * n) % MOD * mu(i, MOD - 2);
        temp %= MOD;
    }
    return temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string a;
        cin >> a;
        ll n = a.length();
        ll res = 1;
        map<char, int> b;
        for (int j = 0; j < n; j++)
            b[a[j]]++;
        for (auto it : b)
        {
            res *= tohop(n, it.second);
            res %= MOD;
            n -= it.second;
        }
        cout << res << endl;
    }
    return 0;
}