#include <iostream>
using namespace std;
long long du(long long m, long long n, long long k)
{
    long long res = 1;
    m %= k;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            res = (res * m) % k;
        }
        m = (m * m) % k;
        n /= 2;
    }
    // if (res > 0 && res < k)
    //     res = 1;
    return res;
}
int main()
{
    long long t, m, n, k;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> m >> n >> k;
        cout << du(m, n, k) << endl;
    }
    return 0;
}
