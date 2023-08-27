#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,res=0;
    cin>>n;
    map<ll, ll> a;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        a[x]++;
    }
    for( auto it:a){
        if(it.second>1){
            ll x=it.second;
            res+=x*(x-1)/2;
        }
    }
    cout<<res;
}
