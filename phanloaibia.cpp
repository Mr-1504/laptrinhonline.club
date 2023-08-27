#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int t; cin>>t; 
    double a[201],b[201]; 
    int dp[201];
    while(t--){
        int n; cin>>n;
        for(int i=0; i<n; i++) cin>>a[i]>>b[i];
        dp[0]=1;
        for(int i=1; i<n; i++){
            dp[i]=1;
            for(int j=0; j<i; j++){
                if(a[j]<a[i] && b[j]>b[i]) dp[i]=max(dp[i],dp[j]+1);
            }
        }
        int ans=0;
        for(int i=0; i<n; i++) ans=max(ans, dp[i]);
        printf("%d\n",ans); 
    }
}