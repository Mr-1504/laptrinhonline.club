#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res1=0,res2=0,res3=0,res4=0;
    sort(a,a+n);
    int temp1=(a[0]+a[n-1])/2;
    for(int i=0;i<n;i++){
        res1+=(a[i]-temp1)*(a[i]-temp1);
        res2+=(a[i]-temp1-1)*(a[i]-temp1-1);
        res3+=(a[i]-a[0])*(a[i]-a[0]);
        res4+=(a[i]-a[n-1])*(a[i]-a[n-1]);
    }
    int res=min(min(res1,res2),min(res3,res4));
    cout<<res;
}
