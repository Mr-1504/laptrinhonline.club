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
    vector<int> a;
    while (cin >> n)
    {
        a.push_back(n);

    }
    int m = abs(a[1]-a[0]), res = 0;
    for (int i = 2; i < a.size(); i++)
    {
        m = min(m, __gcd(abs(a[i] - a[0]), m));
    }
    if(m==0){
        cout<<0;
        return 0;
    }
    for (int i = 1; i < a.size(); i++)
    {
        res += (abs(a[i] - a[i - 1])) / m-1;
    }
    cout << res;

    return 0;
}
//9 6 4 2 1