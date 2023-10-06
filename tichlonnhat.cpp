#include <bits/stdc++.h>
using namespace std;
long long sqr(long long x)
{
    return x * x ;
}
long long mu(long long a, long long b)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
        return sqr(mu(a, b / 2));
    else
        return (a * (sqr(mu(a, b / 2))));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        if (n <= 3)
        {
            cout << n << endl;
            continue;
        }
        if (n % 3 == 0)
        {
            cout << mu(3, n / 3)  << endl;
        }
        else if (n % 3 == 1)
        {
            cout << 4 * mu(3, (n - 4) / 3) << endl;
        }
        else
        {
            cout << 2 * mu(3, (n - 2) / 3)  << endl;
        }
    }
    return 0;
}
