#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;
vector<bool> prime(MAX + 1, true);

void sieve() {
    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= MAX; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= MAX; i += p) {
                prime[i] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    sieve();

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        for (int j = a; j <= b; j++) {
            if (prime[j]) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
