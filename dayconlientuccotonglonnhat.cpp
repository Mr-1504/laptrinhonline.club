#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    cin>>a[0]>>a[1];
    a[1]=a[1]>a[1]+a[0]?a[1]:a[0]+a[1];
    for(int i=2;i<n;i++){
        cin>>a[i];
        a[i]=a[i]>a[i]+a[i-1]?a[i]:a[i]+a[i-1];
    }
    sort(a,a+n);
    cout<<a[n-1];
}