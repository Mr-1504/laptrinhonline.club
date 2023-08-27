#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    long long  a[n], b[n] = {0};
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    long long res = 0;
    sort(a, a + n);
    for (int i = 1; i < n; i++)
    {
        b[i] = abs(a[i] - a[i - 1]);
        res += b[i] * i + b[i - 1];
        b[i] = b[i] * i + b[i - 1];
    }
    cout << res;
}