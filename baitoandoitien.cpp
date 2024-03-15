#include <bits/stdc++.h>
using namespace std;

#define MAX 10001

int n, q;
vector<int> cost;
vector<int> dp(MAX + 1, INT_MAX);
void solve()
{
    dp[0] = 0;
    for (int i = 1; i <= MAX; i++)
        for (int j = 0; j <= n; j++)
        {
            if (cost[j] <= i && dp[i - cost[j]] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - cost[j]] + 1);
            }
        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> q;
    cost = vector<int>(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> cost[i];
    sort(cost.begin(), cost.end());
    solve();
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        if (dp[temp] == INT_MAX)
            cout << -1 << endl;
        else
            cout << dp[temp] << endl;
    }
}