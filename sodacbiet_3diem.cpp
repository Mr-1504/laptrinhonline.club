#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,res=0,cnt=1;
    cin>>n;
    for(ll i=n/2;i>=2;i--){
        if(n%i==0) {
            cnt=0;
            int temp=1;
            for(ll j=2;j<=i/2;j++){
                if(i%(j*j)==0){
                    temp=0;
                    break;
                }
            }
            if(temp) {
                res=i;
                break;
            }
        }
    }
    if(cnt) cout<<n;
    else cout<<res;
}