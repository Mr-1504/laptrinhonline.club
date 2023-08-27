#include<bits/stdc++.h>
using namespace std;
int n,a[10];
void xuat(){
    for(int i=1;i<=n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}
void backtracking(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            xuat();
        }else{
            backtracking(i+1);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    scanf("%d",&n);
    backtracking(1);
}