#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int start=max(a,c);
    int end=min(b,d);
    if(end>start) cout<<end-start;
    else cout<<0;
}