#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
long long tinh(int a, int b, int n)
{
    long long dp[n + 1] = {0};
    dp[0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (i >= a)
        {
            dp[i] = (dp[i] + dp[i - a]) % MOD;
        }
        if (i >= b)
        {
            dp[i] = (dp[i] + dp[i - b]) % MOD;
        }
    }
    return dp[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    if (n == 0)
        cout << 0;
    else
        cout << tinh(a, b, n);
    return 0;
}