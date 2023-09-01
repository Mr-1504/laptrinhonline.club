#include<bits/stdc++.h>
using namespace std;
int n, m, maxx=INT_MIN, res=0, k=0;
vector<vector<int>>a;
vector<bool>b;
void input(){
    cin>>n>>m;
    a.assign(n+1, vector<int>());
    b.assign(n+1, false);
    for (int i=0; i<m; i++) {
        int x, y;
        cin>>x>>y;
        a[y].push_back(x);
        a[x].push_back(y);
    }
}
void dfs(int u) {
    if (!b[u]) { 
        res++;
        b[u]=true;
        for (int v:a[u]) if (!b[v]) dfs(v);
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    input();
    for (int i=1; i<=n; i++) {
        if (!b[i]) {
            k++;
            dfs(i);
        }
        maxx=res>maxx?res:maxx;
        res=0;
    }
    cout<<k<<endl<<maxx;
    return 0;
}
