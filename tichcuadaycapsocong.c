#include<stdio.h>
long long tich(int n,int k){
    long long tich=1;
    for(int i=1;i<=n;i++){
        if(i%k==n%k) tich*=i;
    }return tich;
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%lld",tich(n,k));
}