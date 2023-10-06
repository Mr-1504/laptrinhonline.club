#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
long long mu(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long temp = mu(a, b / 2);
    if (b & 1)
    {
        return ((a % MOD) * (temp % MOD) * (temp % MOD)) % MOD;
    }
    return (temp % MOD * temp % MOD) % MOD;
}
long long C(int n, int k)
{
    long long t = 1;
    for (int i = 0; i <= k; i++, n--)
    {
        t = (t * n) % MOD * mu(i, MOD - 2);
        t %= MOD;
    }
    return t;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int n = s.size();
        long long res = 1;
        map<char, int> a;
        for (int i=0;i<n;i++)
            a[s[i]]++;
        for (auto it : a)
        {
            res*=C(n, it.second);
            res%=MOD;
            n-=it.second;
        }
        cout<<res<<endl;
    }
    return 0;
}