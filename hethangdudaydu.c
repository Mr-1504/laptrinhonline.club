#include<stdio.h>
int kiem(int a,int b[],int c,int m){int dem=0;
    for(int i=0;i<c;i++){ if(a!=b[i]&&(a-b[i])%(m)!=0){dem++;   }}if(dem!=0) return 0; else return 1;}

int test(int a[],int n,int m){ int dem=0;for (int  i = 0; i < n; i++){   if(kiem(a[i],a,n,m)!=0) dem++;  }if(dem==n) return 1; else return 0; }

int main(){
    int m;
    scanf("%d",&m);int a[m-1],i=2;
    a[0]=1;a[1]=2;
    do{
        if(test(a,i,m)==1){
            i++;
            a[i-1]=a[i-2]+1;
        }else{
            a[i-1]=a[i-1]+1;
        }
    }while(i<m);
    for(int j=0;j<m-1;j++){
        printf("%d ",a[i]);
    }
}