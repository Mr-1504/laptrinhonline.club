#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

pair<long long, long long> fibonacci(int n) {
    if (n == 1) {
        return make_pair(1, 0);
    }
    
    pair<long long, long long> fib_n_minus_1 = fibonacci(n - 1);
    
    long long a = fib_n_minus_1.first;
    long long b = fib_n_minus_1.second;
    
    return make_pair((a + b) % MOD, a % MOD);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<pair<int, int>> a;
    int max_x = 0;
    
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        a.push_back(make_pair(x, y));
        max_x = max(x, max_x);
    }
    
    for (auto it : a) {
        int x = it.first;
        int y = it.second;
        
        pair<long long, long long> fib = fibonacci(x);
        cout << fib.second << endl;
    }
    
    return 0;
}
