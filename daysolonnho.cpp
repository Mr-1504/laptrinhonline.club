#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define minh main
minh(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    priority_queue<ll> a;
    priority_queue<ll, vector<ll>, greater<ll>> b;
    ll i=0;
    while(i<n){
        ll x;cin>>x;
        a.push(x);
        b.push(x);
        if(a.size()<2){
            i++;
        }else{
            ll mx=a.top()+b.top()/2;
            ll mn=b.top() - a.top()/2;
            a.push(mx);a.push(mn);
            b.push(mx);b.push(mn);
            cout<<(a.top()+b.top())/2<<" ";
            i++;
        }
    }
    return 0;
}