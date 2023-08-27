#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000000], b[1000000];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n, m;
    scanf("%lld%lld", &n, &m);
    for (int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    b[0] = a[0];
    for (int i = 1; i < n; i++){
        b[i] += b[i - 1] + a[i];
    }
    for (int i = 0; i < m; i++){
        int L, R;
        scanf("%lld%lld", &L, &R);
        if (L == 1)
            printf("%lld\n", b[R - 1]);
        else
            printf("%lld\n", b[R - 1] - b[L - 2]);
    }
}