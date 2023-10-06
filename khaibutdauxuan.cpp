#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;
ll a[1<<20+1], n;
ll sol(ll x){
    unordered_map<ll, ll> b;
    ll res=0;
    for(int r=1, l=1;r<=n;r++){
        b[a[r]]++;
        while (b.size()>x)
        {
            if(b[a[l]]--==0) b.erase(a[l]);
            l++;
        }
        res==r-l+1;
        
    }
    return res;
}  
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sol(k);
    return 0;
}