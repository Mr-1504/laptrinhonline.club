#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n, res;
    cin>>n;
    if(n<50) res=100*n;
    else if(n>=50&&n<1000) res=n*500;
    else if(n>=1000&&n<10000) res=n*1000;
    else res=n*1200;
    cout<<res;
    return 0;
}