#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if((a+b)%2==0){
        printf("%d %d",(a+b)/2,(a-b)/2);
    }else{
        printf("-1");
    }
}