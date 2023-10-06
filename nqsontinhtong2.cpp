#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n, x;
    cin >> n >> x;
    unordered_set<int> b;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        if (b.count(x - a[i]) && x - a[i] != a[i]) {
            cout << min(a[i], x - a[i]) << " " << max(a[i], x - a[i]) << endl;
        }
        b.insert(a[i]);
    }
    return 0;
}
