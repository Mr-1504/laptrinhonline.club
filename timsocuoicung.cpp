#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string n;
    int m;
    cin>>n>>m;
    int  a=n[n.length()-1]-'0';
    for(int i=2;i<=m/2;i++){
        int x=n[n.length()-1]-'0';
        n=to_string(a*x);
    }
    if(m%2==0){
        int x=n[n.length()-1]-'0';
         n=to_string(x*x);
    }else{
        int x=n[n.length()-1]-'0';
         n=to_string(x*x*a);
    }
    cout<<n[n.length()-1];
}