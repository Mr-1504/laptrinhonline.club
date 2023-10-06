#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m;
    cin>>n>>m;
    map<int, int>a, b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        b[x]++;
    }
    int res=0;
    for(auto it:a){
        int x=it.first;
        if(a[x]!=0&&b[x]!=0){
            int y=min(a[x], b[x]);
            res+=y;
            a[x]-=y;
            b[x]-=y;
        }
    }
    cout<<res;
    return 0;
}