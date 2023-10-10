#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<ll> fi(83);
    fi[0]=0;
    fi[1]=1;
    for(int i=2;i<=82;i++){
        fi[i]=fi[i-1]+fi[i-2];
    }
    int n;
    cin>>n;
    ll a[n][n];
    int top=0, bot=n-1, l=0, r=n-1, j=0;
    while (top<=bot&&l<=r&&j<=n*n-1)
    {
        for(int i=l;i<=r;i++){
            a[top][i]=fi[j++];
        }
        top++;
        for(int i=top;i<=bot;i++){
            a[i][r]=fi[j++];
        }
        r--;
        if(top<=bot&&l<=r&&j<=n*n-1){
            for(int i=r;i>=l;i--){
                a[bot][i]=fi[j++];
            }
        }
        bot--;
        for(int i=bot; i>=top;i--){
            a[i][l]=fi[j++];
        }
        l++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}