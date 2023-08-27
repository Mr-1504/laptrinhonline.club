#include<stdio.h>
int min=1000000000,k=10001;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(min>x){
            min=x;
            k=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d",min,k);
}