#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long x, y;
    cin >> x >> y;
    long long res = 0;
    for (int i = 2; i <= y; i++)
    {
        long long temp = x / (i + 1);
        if (temp >= i)
        {
            res += i - 1;
        }
        else
        {
            res += temp;
        }
    }
    cout << res;
    return 0;
}