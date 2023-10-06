#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int countSequences(int m, int n, vector<vector<int>>& T) {
    vector<vector<long long>> dp(m + 1, vector<long long>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        dp[i][1] = 1;
    }

    for (int j = 2; j <= n; ++j) {
        for (int i = 1; i <= m; ++i) {
            for (int i_prime = i; i_prime <= m; ++i_prime) {
                if (T[i - 1][j - 1] == T[i_prime - 1][j - 1]) {
                    dp[i][j] = (dp[i][j] + dp[i_prime][j - 1]) % MOD;
                }
            }
        }
    }

    long long result = 0;
    for (int i = 1; i <= m; ++i) {
        result = (result + dp[i][n]) % MOD;
    }

    return static_cast<int>(result);
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> T(m, vector<int>(n));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> T[i][j];
        }
    }

    int result = countSequences(m, n, T);
    cout << result << endl;

    return 0;
}
