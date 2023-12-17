#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    queue<int> b;
    int res = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        b.push(a[i]);
        if (b.front() - a[i] >= k)
            b.pop();
        else
            res += a[i];
    }
    cout << b.size() << " " << res;
    return 0;
}