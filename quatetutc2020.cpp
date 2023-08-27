#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
string s;
void tinh(){
    int n = s.length();
    int dp[n+1]={0};
    dp[0]=1;
    for(int i=1;i<=n;i++){
        if (s[i-1]!='0'){
            dp[i] = dp[i-1];
        }
        if(i>1&&(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]<='6'))){
            dp[i]=(dp[i]+dp[i-2])%MOD;
        }
    }
    cout<<dp[n];
    return;
}
int main(){
    cin >> s;
    tinh();
}
