#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll b=pow(10,9)+7;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        cout<<(a%b)*(a%b)%b<<endl;
    }
}