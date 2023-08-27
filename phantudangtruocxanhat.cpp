#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    ll a[n],min,max;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    min= a[0];
    max=a[0];
    for(ll i=1;i<n;i++){
        int x=abs(a[i]- min)>abs(a[i]- max)?abs(a[i]- min):abs(a[i]- max);
        max=max>a[i]?max:a[i];
        min=min<a[i]?min:a[i];
        cout<<x<<" ";
    }
}