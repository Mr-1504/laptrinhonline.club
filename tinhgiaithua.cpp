#include<stdio.h>
int main(){
    int n;
    long long res=1;
    scanf("%d",&n);
    if(n>1){
        for(int i=1;i<=n;i++){
            res*=i;
        }
    }
    printf("%lld",res);
}