#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int m;
    cin>>m;
    int a[m][3];
    cin>>a[0][0]>>a[0][1]>>a[0][2];
    for(int i=1;i<m;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
            if(j==0){
                a[i][j]+=max(a[i-1][1],a[i-1][2]);
            }else if(j==1)
                a[i][j]+=max(a[i-1][0],a[i-1][2]);
            else a[i][j]+=max(a[i-1][1],a[i-1][0]);
        }
    }
    int x=max(max(a[m-1][0],a[m-1][2]),max(a[m-1][0],a[m-1][1]));
    cout<<x;
}