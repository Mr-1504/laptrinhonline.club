#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    if(n<0) {
        cout<<"ERROR";
        return 0;
    }
    double temp =n/10+n*50;
    double res = temp/100;
    if(res-(int)res==0) cout<<(int)res;
    else
        cout<<setprecision(1)<<fixed<<res;
    return 0;
}