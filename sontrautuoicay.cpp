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
        int n;
        unordered_map<ll, int> dp;
        cin >> n;
        ll a, b;
        ll m1 = LLONG_MAX, m2 = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            dp[a - b]++;
            dp[a + b]--;
            m1 = min(m1, a - b);
            m2 = max(m2, a + b);
        }
        ll res = 0, temp = 0;
        for (int i = m1; i <= m2; i++)
        {
            temp += dp[i];
            if (temp)
                res++;
        }
        cout << res << endl;
    }

    return 0;
}