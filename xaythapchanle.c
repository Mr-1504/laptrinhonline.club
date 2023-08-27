#include<stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int test(int a,int b){
    if((a+b)%2==0){
        return 0;
    }else return 1;
}
int main(){
    int n;;long long hight;
    scanf("%d",&n);
    int a[n],max=-1,mas=-2;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a, n, sizeof(int), cmpfunc);
    hight=a[n-1];
    for (int i = n-2; i >=0; i--){
        if(test(a[i],a[i+1])==1) hight+=a[i];
    }printf("%lld",hight);
}