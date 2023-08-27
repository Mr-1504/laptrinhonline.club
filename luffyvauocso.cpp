#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N = 100001;
vector<int> c(MAX_N, 0);
void tinh() {
    for (int i = 1; i < MAX_N; i += 2) {
        for (int j = i; j < MAX_N; j += i) {
            c[j] += i;
        }
    }
}
int main() {
    tinh();
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        ll res = 0;
        for (int i = a; i <= b; i++) {
            res += c[i];
        }
        cout << res << endl;
    }
}
