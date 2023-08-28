#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    int res;
    if(n<=k) res=n*x;
    else res=x*k+(n-k)*y;
    cout<<res;
    return 0;
}