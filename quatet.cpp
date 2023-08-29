#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    int b[m-n+1];
    for(int i=0;i<m-n+1;i++){
        b[i]=a[i+n-1]-a[i];
    }
    sort(b,b+m-n+1);
    cout<<b[0];
    return 0;
}