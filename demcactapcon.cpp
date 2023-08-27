#include<bits/stdc++.h>
using namespace std;
const int MOD=1000000007;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll b[m+1]={0};
    b[0]=1;
    for(ll i=0;i<n;i++){
        for(ll j=m;j>=a[i];j--){
            b[j]+=b[j-a[i]];
        }
    }
    if(m==0) cout<<0;
    else
        cout<<b[m]%MOD;
}