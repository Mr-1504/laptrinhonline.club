#include<stdio.h>
int main(){
    float i=0,s=0,a;
    do{
        scanf("%f",&a);if(a>=0){
        i++;
        s+=a;}
    }while(a>=0);
    printf("%.2f",s/i);
}