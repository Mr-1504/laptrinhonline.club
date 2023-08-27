#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a, const void*b){
    return *(int*)a < *(int*)b;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[3];
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    qsort(a,3,sizeof(int),cmp);
    printf("%d %d %d\n",a[0],a[1],a[2]);
    for(int i=3;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x>a[0]){
            a[2]=a[1];
            a[1]=a[0];
            a[0]=x;
        }else if(x>a[1]){
            a[2]=a[1];
            a[1]=x;
        }else if(x>a[2]){
            a[2]=x;
        }
        printf("%d %d %d\n",a[0],a[1],a[2]);
    }
}