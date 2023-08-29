#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        if(n%10==0) n/=10;
        else n-=1;
    }
    cout<<n;
    return 0;
}