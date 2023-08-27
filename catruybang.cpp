#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, a, b, c;
    int max=0;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    for(int i=0;i<=n/a;i++){
        for(int j=0;j<=(n-i*a)/b;j++){
            int cnt=i+j+(n-i*a-j*b)/c;
            if(i*a+j*b+(cnt-i-j)*c==n&&cnt>max) max=cnt;
        }
    }
    printf("%d",max);
}