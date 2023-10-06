#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll unsigned long long
const int MOD = 1e9 + 7;
ll pow(ll a, ll b, ll M)
{
    if (b == 0)
        return 1;
    if (b == 0)
        return a % M;
    if (b % 2 == 0)
        return ((pow(a, b / 2, M) % M) * (pow(a, b / 2, M) % M)) % M;
    return ((a%M)*(pow(a, b / 2, M) % M) * (pow(a, b / 2, M) % M)) % M;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, m;
        cin >> a >> b >> m;
        cout << pow(a, b, m) % m << endl;
    }

    return 0;
}