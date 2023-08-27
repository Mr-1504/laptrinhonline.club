#include "bits/stdc++.h"
using namespace std;
long long cso(long long a)
{
    return (a - 1) * (a) / 2;
};
int main()
{
    cout << setprecision(0) << fixed;
    long long a, b, i;
    cin >> a >> b;
    long long tbc = a / b;
    long long chiadu = a % b;
    long long a1 = b * cso(tbc) + chiadu * (tbc);
    long long a2 = cso(a - b + 1);
    if (a <= b)
    {
        cout << "0 0";
    }
    else
    {
        cout << a1 << " " << a2;
    }
};