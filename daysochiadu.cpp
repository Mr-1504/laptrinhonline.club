#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, m, q;
    cin >> n >> m >> q;
    vector<vector<ll>> a(m, vector<ll>());
    unordered_map<ll, ll> b;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        ll y = (x % m + m) % m; 
        b[y]++;
        a[y].push_back(i + 1);
    }
    for (int i = 0; i < q; i++) {
        ll x, y;
        cin >> x >> y;
        if (x > n || a[y].size() < x) {
            cout << -1 << "\n";
        } else {
            cout << a[y][x - 1] << "\n";
        }
    }
    return 0;
}
