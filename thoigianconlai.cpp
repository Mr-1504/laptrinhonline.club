#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int x,y;
    cin>>x>>y;
    if(x+y<=23) cout<<x+y;
    else cout<<(x+y)-24;
}