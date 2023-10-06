#include <bits/stdc++.h>
using namespace std;
long long search(long long a[], long long trai, long long phai, long long n, long long h)
{
    while (trai <= phai)
    {
        int m = (trai + phai) / 2;
        if (trai == phai)
            return trai;
        long long temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > m)
                temp += a[i] - m;
        }
        if (temp < h)
            phai = m;
        else
            trai = m + 1;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n, h;
    cin >> n >> h;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << search(a, 0, a[n - 1], n, h) - 1;
    return 0;
}