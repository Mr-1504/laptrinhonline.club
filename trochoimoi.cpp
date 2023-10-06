#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, dem = 0, sum1 = 0, sum2 = 0;
    cin >> n;
    int a[n], x;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 1)
            dem++;
        a[i] = (x == 0) ? 1 : -1;
    }

    for (i = 0; i < n; i++)
    {
        sum1 += a[i];
        if (sum2 < sum1)
            sum2 = sum1;
        if (sum1 < 0)
            sum1 = 0;
    }
    if (dem == n)
        cout << dem - 1;
    else
        cout << dem + sum2;
}