#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int x,y;
    cin>>x>>y;
    int mx=max(x,y);
    int mn=min(x,y);
    int res=0;
    for(int i=mn;i<=mx;i++){
        if(i%13!=0) res+=i;
    }cout<<res;
}