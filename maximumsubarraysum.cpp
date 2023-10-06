#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll  n;
    cin >> n;
    ll a[n], temp=0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]==a[0]&&a[0]<0) temp++;
    }
    ll s1 = 0, s2 = a[0];    if(temp==n) {
        cout<<a[0];
        return 0;
    }
    for (ll i = 0; i < n; i++)
    {
        s1 += a[i];
        s1 = max(s1, a[i]);
        s2 = max(s1, s2);
    }
    cout<<s2;
    return 0;
}