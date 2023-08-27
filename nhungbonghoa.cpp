#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,res=0;
    cin>>n;
    int b[n]={0};
    vector< pair<int, int>> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(make_pair(x,i));
    }
    sort(a.begin(),a.end());
    for( auto it:a){
        int x=it.second;
        if(b[x]!=-1){
            if(x==0){
                b[x]=b[x+1]=-1;
                res++;
            }else if(x==n-1){
                b[x]=b[x-1]=-1;
                res++;
            }else{
                b[x]=b[x-1]=b[x+1]=-1;
                res++;
            }
        }
    }
    cout<<res;
}
