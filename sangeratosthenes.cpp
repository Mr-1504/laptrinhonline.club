#include <bits/stdc++.h>
using namespace std;
#define en "\n"
const int n = 1e6 + 1;
vector<bool> b(n + 1, true);
void sang()
{
    b[0] = b[1] = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (b[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                b[j] = false;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    vector<pair<int, int>> a;
    sang();
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        int res = 0;
        for (int j = x; j <= y; j++)
        {
            if (b[j])
                res++;
        }
        cout << res << en;
    }
    return 0;
}