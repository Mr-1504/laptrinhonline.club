#include<stdio.h>
#include<math.h>
int main(){
    long long n,m,k,dem,j;
    scanf("%lld%lld",&n,&m);
    long long f[m-1],i,min;
    for(i=0;i<m;i++){
        scanf("%lld",&f[i]);
        }
        min=9223372036854775807;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            dem=0;
            for(k=0;k<m;k++){
                 if(i!=j&&f[i]>f[j]&&f[k]>=f[j]&&f[k]<=f[i]){
                 dem++;
                 }
                 if(i!=j&&f[i]<f[j]&&f[k]>=f[i]&&f[k]<=f[j]){
                 dem++;
                 }
            } 
                if(dem==n&&min>abs(f[i]-f[j])){
                   min=abs(f[i]-f[j]);
                }
        }
    }
    // if (min!=51454456154585454) {
        printf("%lld",min);
    // }
}