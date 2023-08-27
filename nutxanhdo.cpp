#include <iostream>
using namespace std;

int dp(int n, int m) {
    int res = 0;

    while (n < m) {
        if (m % 2 == 0) {
            m /= 2;
        } else {
            m++;
        }
        res++;
    }

    return res + (n - m);
}

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    int res = dp(n, m);
    cout << res << endl;

    return 0;
}
