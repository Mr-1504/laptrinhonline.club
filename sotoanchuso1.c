#include<stdio.h>
#include<math.h>
//long long so(int n){
//    long long i,k=1;
//    for(i=1;i<n;i++){
//        k=k+pow(10,i);
//    }
//    return k;
//}
//int kiem(int n){
//    int i,k=-1;
//    for(i=1;i<30;i++){
//        if(so(i)%n==0) {
//            k=i;
//            break;
//        }
//    }
//    return k;
//}
int main(){
	printf("%lld %d",so(27),kiem(45));
    int b,k=1,i,d=-1,j;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++){
    	for(j=1;j<n;j++){
        k=k+pow(10,i);
    }if(k%n==0) {
            d=i;
            break;
        }
        printf("%d\n",kiem(a[i]));
    }
}
