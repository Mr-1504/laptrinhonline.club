#include<stdio.h>
#include<stdlib.h>
int cmpfun(const void *a,const void*b){
    return(*(int*)a-*(int*)b);
}
long long h2o(int a[],int n,int maxx){
    long long v=0;
    for (int i = 0; i <n ; i++){
        if(a[i]<maxx){
            v+=maxx-a[i];
        }
    }return v;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmpfun);
    printf("%lld",h2o(a,n,a[n-2]));
}