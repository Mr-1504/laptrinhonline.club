#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
const int MOD = 1e9 + 7;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    int temp=0;
    for(int i=0;i<a.length();i++){
        if(a[i]==b[i]) temp++;
    }
    int n=a.length();
    float res=(1.0*temp*10)/n;
    cout<<setprecision(1)<<fixed<<res;
    return 0;
}