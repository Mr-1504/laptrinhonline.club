#include<stdio.h>
int main(){
    int l,b,temp,dem=0;
    scanf("%d%d",&l,&b);
    if(l<b){temp=l; l=b; b=temp;}
    if(l>=4&&b>=4){
        do{
            l-=4;b-=4;
            dem+=2;
        }while(l>=4&&b>=4);
        if(l<b){ temp=l; l=b; b=temp;}
        if(l>=4&&b>=4){
           do{
            l-=4;b-=4;
            dem+=2;
            }while(l>=4&&b>=4);
        }else if(l>=3&&b>=1){ dem++; l-=3;b-=1;   }
    }else if(l>=3&&b>=1){ dem++;l-=3;b-=1;}
    if(l<b){temp=l; l=b; b=temp;}
    if(l==3&&b>=1){ dem++;}
    printf("%d",dem);
}