#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,s;
    cin>>n>>s;
    long long res=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            int x=s-i-j;
            if(x>=0&&x<=n) res++;
            else continue;
        }
    }
    cout<<res;
}