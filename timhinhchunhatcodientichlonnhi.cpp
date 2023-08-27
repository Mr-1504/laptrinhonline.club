#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,s,k=1;
    ll test=1;
    cin>>n;
    vector<pair<ll,int>> a;
    ll b[n][2];
    cin>>b[0][0]>>b[0][1];
    s=b[0][0]*b[0][1];
    map<ll,ll> c;
    a.push_back(make_pair(s,0));
    for(int i=1;i<n;i++){
        cin>>b[i][0]>>b[i][1];
        ll x=b[i][0]*b[i][1];
        if(x==s) test++;
        if(c[x]==0){
            a.push_back(make_pair(b[i][0]*b[i][1],i));
            c[x]=1;
            k++;
        }
    }
    if(test<n){
        sort(a.begin(),a.end());
        int i=a[k-2].second;
        cout<<b[i][0]<<" "<<b[i][1];
    }else cout<<"NO";
}