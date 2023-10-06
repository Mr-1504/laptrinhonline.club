#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, M;
    cin >> n >> M;
    int dp[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int temp = a * b / 100;
        for (int j = M; j >= a; j--)
        {
            if (j >= a)
            {
                dp[j] = max(dp[j], dp[j - a] + temp);
            }
        }
    }
    cout << dp[M];
    return 0;
}