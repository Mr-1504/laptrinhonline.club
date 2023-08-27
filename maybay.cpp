#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int a[n][2],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>b[i];
    }
    vector<vector<int>>c(n,vector<int>());
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=i){
                if(a[i][0]<=a[j][1]){
                    b[i]+=b[j];
                    c[i].push_back(j);
                    c[j].push_back(i);
                }
            }
        }
    }
} 