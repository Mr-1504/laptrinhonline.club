#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long n,m=1;
    cin>>n;
    for(int i=1;;i++){
        m*=i;
        if(m==n){
            cout<<i;
            break;
        }
    }
}