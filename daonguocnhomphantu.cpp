#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n]={0},b;
    if(n%k==0) b=n/k;
    else b=n/k+1;
    for(int i=1;i<=b;i++){
        for(int j=0;j<k;j++){
            if(k*i-1-j<n)
            scanf("%d",&a[k*i-1-j]);
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}