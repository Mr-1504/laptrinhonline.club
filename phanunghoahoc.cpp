#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,m,res=0;
    cin>>n>>m;
    vector<pair<int, int>> a;
    map<int, int >b,c;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        a.push_back(make_pair(x,y));
        b[x]++;
        b[y]++;
    }
    for(int i=0;i<m;i++){
        int x=a[i].first, y=a[i].second;
        if(c[x]==1 && c[y]== 1){
            if(b[x]!=0 &&b[y]!=0) {
                res*=pow(2,min(b[x],b[y]));
            }
        }
        if(res!=0){
            if(c[x] ==1 && c[y] ==0){
                c[y]=1;
                res*=2;
            }
            if(c[x]==0 && c[y] ==1){
                c[x]=1;
                res*=2;
            }
            
        }else{
            res=2;
            c[x] =c[y]=1;
            b[x]--;
            b[y]--;
        }
    }
    cout<<res;
}