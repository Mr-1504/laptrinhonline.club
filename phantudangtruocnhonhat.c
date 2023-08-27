#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b,c,d;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }int min=a[0],chiso=1,dem=0;
    for(int i=0;i<n;i++){
    if(a[i]<min) {min=a[i];chiso=i+1;dem=0;}
    if(a[i]==min) dem++;
           printf("%d %d %d\n",min,dem,chiso);
    }
}