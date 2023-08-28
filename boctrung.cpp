#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,s,t;
    cin>>n>>s>>t;
    int temp=s+t-n;
    int res=s-temp>t-temp?s-temp:t-temp;
    cout<<res+1;
}