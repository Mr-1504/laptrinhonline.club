#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n, s1=0, s2=0;
    cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]) swap(a[i], b[i]);
        s1+=a[i];
        s2+=b[i];
    }
    cout<<abs(s1-s2);
    return 0;
}