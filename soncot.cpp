#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,k;
    cin>>n>>k;
    int res=k*pow(k-1,n-1);
    cout<<res;
    return 0;
}