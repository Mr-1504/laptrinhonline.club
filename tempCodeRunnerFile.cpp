#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    long long a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    long long res=0, max=a[n-1];
    for(int i=n-2;i>=0;i--) {
        if(a[i]<max) {
            res+=max-a[i];
        }else{
            max=a[i];
        }
    }
    cout<<res;
}
