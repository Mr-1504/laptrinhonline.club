#include<bits/stdc++.h>
using namespace std;
#define minh main
#define ll unsigned long long
ll num(ll a, ll b){
    if(b==0) return 1;
    if(b==1) return a;
    ll temp = num(a,b/2);
    return temp%1000*temp%1000*num(a,b%2)%1000;
}
minh(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll a,b;
    cin>>a>>b;
    int x=num(a,b);
    printf("%03d",x);
}