#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    int temp=a+b;
    string cnt=to_string(temp);
    string x=to_string(a);
    string y=to_string(b);
    for(int i=0;i<x.length();i++){
        if(x[i]=='0') x.erase(i,1);
    }
    for(int i=0;i<y.length();i++){
        if(y[i]=='0') y.erase(i,1);
    }
    for(int i=0;i<cnt.length();i++){
        if(cnt[i]=='0') cnt.erase(i,1);
    }
    a=stoi(x);
    b=stoi(y);
    temp=stoi(cnt);
    if(a+b==temp) cout<<"YES";
    else cout<<"NO";
}