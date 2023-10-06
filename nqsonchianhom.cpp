#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll x, n;
        cin >> x >> n;
        double a = n;
        double b = n * n - 2 * n + 4 * n * x;
        double c = -n * n * n + n * n - 2 * x * n*n;
        double delta = b * b - 4 * a * c;
        double temp = ((-b + sqrt(delta)) / (2 * a));
        ll res = (ll)temp;
        if (temp > res)
            res++;
        cout << res << endl;
    }
    return 0;
}