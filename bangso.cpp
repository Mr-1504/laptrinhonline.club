#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0&&j!=0){
                a[i][j]+=a[i][j-1];
            }
            if(j==0&&i!=0){
                a[i][j]+=a[i-1][j];
            }if(i!=0&&j!=0){
            int x=a[i][j]+a[i-1][j];
            int y=a[i][j]+a[i][j-1];
            a[i][j]=x>y?x:y;
            }
        }
    }
    cout<<a[n-1][m-1];
}