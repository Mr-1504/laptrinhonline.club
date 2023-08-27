#include<stdio.h>
int main(){
    int a,dem=0;
    scanf("%d",&a);
    dem+=a/500000;
    a=a%500000;
    dem+=a/200000;
    a=a%200000;
    dem+=a/100000;
    a=a%100000;
    dem+=a/50000;
    a=a%50000;
    dem+=a/20000;
    a=a%20000;
    dem+=a/10000;
    a=a%10000;
    dem+=a/5000;
    a=a%5000;
    dem+=a/2000;
    a=a%2000;
    dem+=a/1000;
    a=a%1000;
    if(a==0){
        printf("%d",dem);
    }else{
        printf("-1");
    }
}