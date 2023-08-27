#include<stdio.h>
#include<math.h>
int main(){
    float pi=3.141592653589793238462643383279;
    int a;scanf("%d",&a);
    float tron=pi*a*a;
    float v=sqrt(tron);
    int c=(int)v;
    if(v-c<0.5){
        printf("%d",c);
    }else{
        printf("%d",c+1);
    }
}