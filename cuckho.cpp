#include<bits/stdc++.h>
using namespace std;
const long long MOD= 1000000007;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        long long s=(n*(n+1)/2)%MOD;
        long long res=(s*s)%MOD;
        cout<<res<<" ";
    }
    return 0;
}