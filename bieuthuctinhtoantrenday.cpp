#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    long long s1=0,s2=0,s3=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        s1+=a[i]*a[i];
        s2+=a[i]*a[n-1-i];
        if(i<n-1){
            s3+=a[i]*a[i+1];
        }
    }
    cout<<s1<<endl<<s2<<endl<<s3;
}
