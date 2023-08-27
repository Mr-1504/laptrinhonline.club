#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int  a[n];int s=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
         }
    double max=a[0]/n;
    for(int i=0;i<n-1;i++){
        s+=(a[i]+a[i+1]);}int k=n;
    for(int i=0;i<n;i++){
        if(a[i]/k>max){
            max=a[i]/k;
        }
        k--;
    }max=ROUND(max,2);
    if(n==1){
        printf("%.2f\n%d",(float)a[0],a[0]);
    }else{
    printf("%.2lf\n%d",max,s);}
}