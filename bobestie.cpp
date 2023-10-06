#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
const int MOD = 1e9 + 7;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x,y,z;
    cin>>x>>y>>z;
    if(x>y) swap(x,y);
    if(y>z) swap(y,z);
    if(x>y) swap(x,y);
    int res=(y-1-x)+(z-y-1);
    cout<<res;
    return 0;
}
