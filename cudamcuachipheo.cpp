#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int i=0,j=0;
    while (x>0)
    {
        j+=i;
        i++;
        if(x<i+j){
            i--;
            break;
        }
        x-=i+j;
    }
    printf("%d",i);
}