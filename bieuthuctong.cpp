#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string a, x="";
    cin>>a;
    int n=a.length(), res=0;
    for(int i=0;i<n;i++){
        x+=a[i];
        if(a[i+1]=='+'||i==n-1) {
            res+=stoi(x);
            x="";
        }
    }
    cout<<res;
}