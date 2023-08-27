#include<bits/stdc++.h>
using namespace std;
int n,a[21]={0},cnt=0;
int tinh(int k){
    a[1]=1;a[2]=2;a[3]=4;
    if(k==1||k==2||k==3) return a[k];
    for(int i=4;i<=n;i++){
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    return a[n];
}
int main(){
    scanf("%d",&n);
    cout<<tinh(n);
}