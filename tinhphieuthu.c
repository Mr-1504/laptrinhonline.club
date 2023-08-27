#include<stdio.h>
typedef struct 
{
    int ma,sl;
    float gia;
}sp;

int main(){
    sp a[2];
    for(int i=0;i<2;i++){
        scanf("%d%d%f",&a[i].ma,&a[i].sl,&a[i].gia);
    }float b;
    b=a[0].gia*a[0].sl+a[1].gia*a[1].sl;
    printf("VALOR A PAGAR: R$ %.2f",b);
}