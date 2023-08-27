#include<stdio.h>
int main(){
    // int n=1;int a[n],i=0;
    // do{
    //     scanf("%d",&a[i]);
    //     i++;
    // }while (a[i-1]!=0);
    int a;
    do{
        scanf("%d",&a);if(a==0) break;
    //for(int j=0;j<i;j++){
        for(int k=1;k<=a;k++){
            printf("%d ",k);
        }printf("\n");
 //   }
    }while(a!=0);
}