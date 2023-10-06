#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int i = n;
    double res = 0, m = DBL_MIN;
    while (i--)
    {
        double l, r;
        cin >> l >> r;
        m = max(m, l * r);
        res += l * r;
    }
    cout<<setprecision(3)<<fixed<<res/n<<endl<<m;
    return 0;
}