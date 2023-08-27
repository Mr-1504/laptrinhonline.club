#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m,k;
        cin>>n>>m>>k;
        int x=n/m, res=n/m;
        int temp=0;
        while(x+temp>=k){
            x+=temp;
            temp=x%k;
             x/=k;
            res+=x;
        }
        cout<<res<<endl;
    }
    
}