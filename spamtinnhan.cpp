#include <bits/stdc++.h>
using namespace std;
long long k, x;
long long tinh(long long m)
{
   return m*(m+1)/2;
}
bool viet(long long m)
{
    if (m <= k)
    {
        return tinh(m) >= x;
    }
    else
    {
        return tinh(k) + tinh(k - 1) - tinh(2 * k - 1 - m) >= x;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k >> x;
        if (!viet(2 * k - 1))
            cout << 2 * k - 1 << endl;
        else
        {
            long long l = 1, r = 2*k - 1;
            while (l < r)
            {
                long long m = (l + r) / 2;
                if (viet(m))
                    r = m;
                else
                    l = m + 1;
            }
            cout << l << endl;
        }
    }
    return 0;
}
