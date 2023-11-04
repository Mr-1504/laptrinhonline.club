#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    ll a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 1; i < n; i++)
        for (int j = 1; j < n; j++)
            a[i][j] += a[i - 1][j - 1];
    for (int i = 0; i < n; i++)
        cout << a[i][n - 1] << endl;
    for (int i = n - 2; i >= 0; i--)
        cout << a[n - 1][i] << endl;
    return 0;
}