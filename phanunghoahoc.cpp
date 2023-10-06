#include<bits/stdc++.h>
using namespace std;
int k=0;
vector<vector<int>> a;
vector<int> d;
void dfs(int u){
    if(!d[u]){
        k++;
        d[u]=1;
        for(int v:a[u]) if(!d[v]) dfs(v);
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m;
    cin>>n>>m;
    a.assign(n+1, vector<int>());
    d.assign(n+1, 0);
    vector<int> c;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(!d[i]){
            dfs(i);
        }
        c.push_back(k);
        
        k=0;
    }
    
    long long res=1;
    for(int i=0;i<c.size();i++){
        if(c[i])
        res*=pow(2,c[i]-1);
    }
    cout<<res;
    return 0;
}