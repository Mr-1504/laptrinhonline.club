#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD=1000000007;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll num,sum=0;
    while (cin>>num)
    {
        sum+=num;
        sum%=MOD;
    }
    cout<<(sum+MOD)%MOD;
    return 0;
}
