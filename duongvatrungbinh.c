#include<stdio.h>
int main(){
    float a[6], tong=0, dem=0;
    for ( int i = 0; i < 6; i++){
        scanf("%f",&a[i]);
        if(a[i]>0) {
            tong+=a[i];dem++;}
    }
    if(dem==0){
        printf("0 Gia tri duong\n0.0");
        }else{
            printf("%.0f Gia tri duong\n%.1f",dem,tong/dem);
        }
    
}