#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;
int dp[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a1, a2, a3, b1, b2, b3, res = 0;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    for (int i = a1; i < b1; i++)
        dp[i] = 1;
    for (int i = a2; i < b2; i++)
        dp[i] = 1;
    for (int i = a3; i < b3; i++)
        dp[i] = 1;
    for (int i = 0; i < 101; i++)
    {
        if (!dp[i])
            res++;
    }
    cout << res-1;
    return 0;
}