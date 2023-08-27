#include <stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main() {
    int l, k;
    scanf("%d %d", &l, &k);
    int n;
    scanf("%d", &n);
    int a[n],dan, dem=0;
    for (int i=0; i<n; i++){
         scanf("%d", &a[i]);
         }
    qsort(a,n,sizeof(int),cmpfunc);
    for (int i=0; i<n; i++)
        if (dan<a[i]) {
            dem++;
            dan=a[i]+k-1;
        }
    printf("%d", dem);
}