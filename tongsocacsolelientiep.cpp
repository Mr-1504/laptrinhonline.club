#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int x,y,le=0;
    cin>>x>>y;
    int mx=max(x,y);
    int mn=min(x,y);
    int i=mn+1;
    while(i<mx){
        if (i%2!=0 )
        le+=i;
        i++;
    }cout<<le;
}