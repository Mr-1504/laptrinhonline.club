#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    int res=0, x=__gcd(a,b);
    a/=x;b/=x;
    while (a%2==0||a%3==0||a%5==0||b%2==0||b%3==0||b%5==0)
    {
            if(a%2==0) {a/=2;res++;}
            if(a%3==0) {a/=3;res++;}
            if(a%5==0){ a/=5;res++;}
            if(b%2==0) {b/=2;res++;}
            if(b%3==0) {b/=3;res++;}
            if(b%5==0){ b/=5;res++;}
    }
    if(a==1&&b==1)
    cout<<res;
    else cout<<-1;
    return 0;
}